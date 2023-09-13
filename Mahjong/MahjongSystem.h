#pragma once
#include"Pai.h"
#include"Yaku.h"
#include"resource.h"
#include<iostream>
#include<vector>
#include<Windows.h>
#include<algorithm>
#include<array>
#include<tchar.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")
using namespace std;
class MahjongSystem
{
public:
	TCHAR tmpwav[113][_MAX_PATH];//音效
	int state;//0为将摸，1为将摸后判断，2为将打，3为将打后判断,4为局与局之间,5为本场结束
	int bakaze;//场风 0东风 1南风
	int jikaza[4];//自风 0123 自家下家对家上家 0123
	int kyoku;//局数 从0开始
	int jun;//巡数
	int turn;//轮到你了
	int ten[4];//0123 自家下家对家上家 点数
	bool riichi[4];//0123 自家下家对家上家 是否立直
	Pai yama[136];//牌山
	int yamaPtr;//牌山指针
	int kanNum;//杠数
	Pai lastPai;//最后一张
	Pai kawa[4][136];//0123 自家下家对家上家 牌河(1开始)
	int kawaPtr[4];//0123 自家下家对家上家 牌河指针
	vector<Pai> shouPai[4];//0123 自家下家对家上家 0-12手牌  13为摸到的牌
	bool menzenchin[4];//0123 自家下家对家上家 是否门前清
	Pai menzen[4][4][4];//0123 自家下家对家上家 0123 门前个数 0123 门前牌
	int menzenType[4][4];//0123 自家下家对家上家 0123 门前个数 12345 吃碰明杠暗杠加杠
	int menzenPtr[4];//0123 自家下家对家上家 门前指针
	int menzenNum[4];//门前个数
	int tenbou;//立直棒
	int hunba;//本场数
	bool afterMo;//是否刚摸完
	bool afterKan;//是否刚杠完
	int availableChii[3][3];//012 可能吃法 01 手牌下标 2 吃牌位置
	int availableRiichi[14];//0-13 可能立直牌
	bool riichiandchiiChoice;//是否立直选择或吃选择
	bool printedChoice;//是否打印过选择
	int hangNum;//结算行数
	bool ifSuukantsu;//是否构成四杠子（不需四杠流局）
	bool ifNaku;//本局是否鸣过牌
	bool ifRyuukyoku;//是否流局
	int winner;//赢家


	vector<Pai> chong[4];//铳牌,0123自家下家对家上家
	Yaku yi[4]; //记录役种情况
	int koutsu[5] = {0,-1,-1,-1,-1};   //[0]存放手牌中刻子数量,[1]~[4]存放构成刻子的牌的序号,-1代表无
	int shuntsu[5] = {0,-1,-1,-1,-1};  //[0]存放手牌中顺子数量,[1]~[4]存放构成顺子的第一张牌的序号，-1代表无
	int quetou;     //存放构成雀头的牌的序号,-1表示无雀头
	bool ifTen[4]={ false,false,false,false };		//是否听牌

	/**********************************************************************************************************************/

	bool ExtractResource(LPCTSTR, LPCTSTR, LPCTSTR);//资源展开
	void DoExtract();//进行资源展开
	void SoundEffects(int);//音效
	void DeleteSoundEffects();//删除临时资源

	void Gotoxy(int, int);//前往坐标
	void GotoKawa(int);//前往牌河坐标
	void GotoShouPai(int, int);//前往手牌坐标

	void Clear();//清屏
	void ClearInteraction();//清空交互区

	void OutputBakaze();//场风输出
	void OutputKyoku();//局数输出
	void OutputPlayer(int);//玩家输出
	void OutputJikaza(int);//自风输出

	int NextTurn(int);//下一个人
	Pai NextPai(Pai);//宝牌指示牌下一张牌

	void Refresh(int);//手牌刷新
	void Refresh_ten();//点数刷新
	void Refresh_tenbou();//立直棒数刷新

	void StartInterface();//开始界面
	void StartGame();//开始游戏

	void Initial_Initialization();//最初的初始化
	void Initialization();//每局的初始化

	void Da(int, int);//打牌
	void Mo(int);//摸牌
	void Mo_Rinshan(int);//摸岭上牌

	void AfterMoJudgment(int);//摸后判断
	void AfterDaJudgment(int);//打后判断
	void ContinueGame(int);//游戏继续
	void GameOver();//游戏结束

	void Chii(int);//吃
	void Pon(int, int);//碰
	void Minkan(int, int);//明杠
	void Ankan(int);//暗杠
	void Kakan(int);//加杠
	void Riichi(int);//立直
	void Tsumo();//自摸
	void Ron(int);//荣和

	void Ryuukyoku();//荒牌流局
	void RyuukyokuSettlement();//荒牌流局结算
	void SuufonRenda();//四风连打
	void Suukaikan();//四杠散了
	bool CanKyuushuKyuuhai();//九种九牌可行判断
	void KyuushuKyuuhai();//九种九牌
	void SuuchaRiichi();//四家立直
	

	void Show(int);//亮牌
	void ShowUradorahyoujihai();//亮里宝牌指示牌
	
	void YakuList();//列出役种
	void DoraJudge();//判断宝牌
	int TenSettlement(int);//点数结算
	

/***************************************************************************************/


	int link(int, int);//

	int CanChii();//
	int CanPon(int);//
	int CanMinkan(int);//
	int CanKakan();//
	int CanAnkan();//
	int CanRiichi();//
	bool CanTsumo();//
	bool CanRon(int);//

	bool IsCommonHu(int);//
	void Divide(int);//
	void clear();//
	void LastJudge(int, Pai);//

	void TenpaiJudge(int);//
	int Kanshiyou(int);//

	void hou(int);//天和地和
	
	bool ischii(int);//AI要不要吃
	bool ispon(int);//AI要不要碰
	int Dajudge();//AI打牌，返回打的牌在手牌中的下标
	int dapai(vector<int>);//通用打法
	int lizhi[4];
	int duidui[4];
	int qidui[4];
	int yipai[4];
	int duanyao[4];
	int yise[4];
};