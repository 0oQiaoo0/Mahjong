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
	TCHAR tmpwav[113][_MAX_PATH];//��Ч
	int state;//0Ϊ������1Ϊ�������жϣ�2Ϊ����3Ϊ������ж�,4Ϊ�����֮��,5Ϊ��������
	int bakaze;//���� 0���� 1�Ϸ�
	int jikaza[4];//�Է� 0123 �Լ��¼ҶԼ��ϼ� 0123
	int kyoku;//���� ��0��ʼ
	int jun;//Ѳ��
	int turn;//�ֵ�����
	int ten[4];//0123 �Լ��¼ҶԼ��ϼ� ����
	bool riichi[4];//0123 �Լ��¼ҶԼ��ϼ� �Ƿ���ֱ
	Pai yama[136];//��ɽ
	int yamaPtr;//��ɽָ��
	int kanNum;//����
	Pai lastPai;//���һ��
	Pai kawa[4][136];//0123 �Լ��¼ҶԼ��ϼ� �ƺ�(1��ʼ)
	int kawaPtr[4];//0123 �Լ��¼ҶԼ��ϼ� �ƺ�ָ��
	vector<Pai> shouPai[4];//0123 �Լ��¼ҶԼ��ϼ� 0-12����  13Ϊ��������
	bool menzenchin[4];//0123 �Լ��¼ҶԼ��ϼ� �Ƿ���ǰ��
	Pai menzen[4][4][4];//0123 �Լ��¼ҶԼ��ϼ� 0123 ��ǰ���� 0123 ��ǰ��
	int menzenType[4][4];//0123 �Լ��¼ҶԼ��ϼ� 0123 ��ǰ���� 12345 �������ܰ��ܼӸ�
	int menzenPtr[4];//0123 �Լ��¼ҶԼ��ϼ� ��ǰָ��
	int menzenNum[4];//��ǰ����
	int tenbou;//��ֱ��
	int hunba;//������
	bool afterMo;//�Ƿ������
	bool afterKan;//�Ƿ�ո���
	int availableChii[3][3];//012 ���ܳԷ� 01 �����±� 2 ����λ��
	int availableRiichi[14];//0-13 ������ֱ��
	bool riichiandchiiChoice;//�Ƿ���ֱѡ����ѡ��
	bool printedChoice;//�Ƿ��ӡ��ѡ��
	int hangNum;//��������
	bool ifSuukantsu;//�Ƿ񹹳��ĸ��ӣ������ĸ����֣�
	bool ifNaku;//�����Ƿ�������
	bool ifRyuukyoku;//�Ƿ�����
	int winner;//Ӯ��


	vector<Pai> chong[4];//���,0123�Լ��¼ҶԼ��ϼ�
	Yaku yi[4]; //��¼�������
	int koutsu[5] = {0,-1,-1,-1,-1};   //[0]��������п�������,[1]~[4]��Ź��ɿ��ӵ��Ƶ����,-1������
	int shuntsu[5] = {0,-1,-1,-1,-1};  //[0]���������˳������,[1]~[4]��Ź���˳�ӵĵ�һ���Ƶ���ţ�-1������
	int quetou;     //��Ź���ȸͷ���Ƶ����,-1��ʾ��ȸͷ
	bool ifTen[4]={ false,false,false,false };		//�Ƿ�����

	/**********************************************************************************************************************/

	bool ExtractResource(LPCTSTR, LPCTSTR, LPCTSTR);//��Դչ��
	void DoExtract();//������Դչ��
	void SoundEffects(int);//��Ч
	void DeleteSoundEffects();//ɾ����ʱ��Դ

	void Gotoxy(int, int);//ǰ������
	void GotoKawa(int);//ǰ���ƺ�����
	void GotoShouPai(int, int);//ǰ����������

	void Clear();//����
	void ClearInteraction();//��ս�����

	void OutputBakaze();//�������
	void OutputKyoku();//�������
	void OutputPlayer(int);//������
	void OutputJikaza(int);//�Է����

	int NextTurn(int);//��һ����
	Pai NextPai(Pai);//����ָʾ����һ����

	void Refresh(int);//����ˢ��
	void Refresh_ten();//����ˢ��
	void Refresh_tenbou();//��ֱ����ˢ��

	void StartInterface();//��ʼ����
	void StartGame();//��ʼ��Ϸ

	void Initial_Initialization();//����ĳ�ʼ��
	void Initialization();//ÿ�ֵĳ�ʼ��

	void Da(int, int);//����
	void Mo(int);//����
	void Mo_Rinshan(int);//��������

	void AfterMoJudgment(int);//�����ж�
	void AfterDaJudgment(int);//����ж�
	void ContinueGame(int);//��Ϸ����
	void GameOver();//��Ϸ����

	void Chii(int);//��
	void Pon(int, int);//��
	void Minkan(int, int);//����
	void Ankan(int);//����
	void Kakan(int);//�Ӹ�
	void Riichi(int);//��ֱ
	void Tsumo();//����
	void Ron(int);//�ٺ�

	void Ryuukyoku();//��������
	void RyuukyokuSettlement();//�������ֽ���
	void SuufonRenda();//�ķ�����
	void Suukaikan();//�ĸ�ɢ��
	bool CanKyuushuKyuuhai();//���־��ƿ����ж�
	void KyuushuKyuuhai();//���־���
	void SuuchaRiichi();//�ļ���ֱ
	

	void Show(int);//����
	void ShowUradorahyoujihai();//���ﱦ��ָʾ��
	
	void YakuList();//�г�����
	void DoraJudge();//�жϱ���
	int TenSettlement(int);//��������
	

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

	void hou(int);//��͵غ�
	
	bool ischii(int);//AIҪ��Ҫ��
	bool ispon(int);//AIҪ��Ҫ��
	int Dajudge();//AI���ƣ����ش�����������е��±�
	int dapai(vector<int>);//ͨ�ô�
	int lizhi[4];
	int duidui[4];
	int qidui[4];
	int yipai[4];
	int duanyao[4];
	int yise[4];
};