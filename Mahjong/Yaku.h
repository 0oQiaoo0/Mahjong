#pragma once
class Yaku
{
public:     //0为不存在，int类型方便后续计算番数(1代表1番，若是役满役种1代表1倍役满)
	int riichi = 0;//立直，一番(门前清限定)
	int riichijun;//立直时的巡数，判断是否一发
	int fuurotype;//立直时另三家的副露个数，判断是否有明牌
	int ippatsu = 0;//一发，一番
	int wriichi = 0;//两立直，二番（门前清限定）
	int chiitoitsu = 0;//七对子，二番（门前清限定）
	int ittsu = 0;//一气通贯，二番（副露减一番）
	int sanshokudoujun = 0;//三色同顺，二番（副露减一番）
	int chanta = 0;//混全带幺九，二番（副露减一番）
	int junchan = 0;//纯全带幺九，三番（副露减一番）
	int pinfu = 0;//平和，一番（门前清限定）
	int tanyao = 0;//断幺九，一番
	int iipeikou = 0;//一杯口，一番（门前清限定）
	int menzenchintsumohou = 0;//门前清自摸和，一番（门前清限定）
	int sankantsu = 0;//三杠子，二番
	int shousangen = 0;//小三元，二番+至少两种役牌二番=四番+
	int honroutou = 0;//混老头，二番+对对和/七对子二番=四番+
	int toitoi = 0;//对对和，二番
	int sanankou = 0;//三暗刻，二番
	int sanshokudoukou = 0;//三色同刻，二番
	int ryanpeikou = 0;//二杯口，三番（不计一杯口，门前清限定）
	int honitsu = 0;//混一色，三番（副露减一番）
	int chinitsu = 0;//清一色，六番（副露减一番）
	int kokushimusou = 0;//国士无双，役满（门前清限定）
	int koukushimusoujusanmen = 0;//国士无双十三面，双倍役满
	int chuurenpoutou = 0;//九莲宝灯，役满（门前清限定）
	int chuurenpoutou9 = 0;//纯正九莲宝灯，双倍役满
	int suuankou = 0;//四暗刻，役满（门前清限定）
	int suuankoutanki = 0;//四暗刻单骑，双倍役满
	int daisangen = 0;//大三元，役满
	int ryuuiisou = 0;//绿一色，役满（无发也可）
	int tsuuiisou = 0;//字一色，役满
	int shousuushii = 0;//小四喜，役满
	int daisuushii = 0;//大四喜，双倍役满
	int chinroutou = 0;//清老头，役满
	int suukantsu = 0;//四杠子，役满
	int chun = 0;//役牌中，一番
	int haku = 0;//役牌白，一番
	int hatsu = 0;//役牌发，一番
	int bakaze = 0;//役牌场风牌，一番
	int jikaze = 0;//役牌门风牌，一番
	int tenhou = 0;//天和，役满
	int chiihou = 0;//地和，役满

	int dora = 0;//宝牌
	int redDora = 0;//红宝牌
	int uraDora = 0;//里宝牌

	int chanKan = 0;//抢杠
	int rinshanKaihou = 0;//岭上开花
	int haiteiRaoyue = 0;//海底捞月
	int houteiRaoyui = 0;//河底捞鱼


	void miclean();//除特殊役种外置0，用于役种判断
	void clean();//用于局间初始化
};
