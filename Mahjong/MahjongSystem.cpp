#include "MahjongSystem.h"
bool MahjongSystem::ExtractResource(LPCTSTR strDstFile, LPCTSTR strResType, LPCTSTR strResName)
{
	// 创建文件
	HANDLE hFile = ::CreateFile(strDstFile, GENERIC_WRITE, NULL, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_TEMPORARY, NULL);
	if (hFile == INVALID_HANDLE_VALUE)
		return false;

	// 查找资源文件中、加载资源到内存、得到资源大小
	HRSRC    hRes = ::FindResource(NULL, strResName, strResType);
	HGLOBAL  hMem = ::LoadResource(NULL, hRes);
	DWORD    dwSize = ::SizeofResource(NULL, hRes);

	// 写入文件
	DWORD dwWrite = 0; // 返回写入字节
	::WriteFile(hFile, hMem, dwSize, &dwWrite, NULL);
	::CloseHandle(hFile);

	return true;
}
void MahjongSystem::DoExtract()
{
	for (int i = 3; i <= 112; i++)
	{
		GetTempPath(_MAX_PATH, tmpwav[i]);
	}
	_tcscat_s(tmpwav[3], L"Sound_Effects3.wav"); ExtractResource(tmpwav[3], L"WAVE", MAKEINTRESOURCE(IDR_WAVE3));
	_tcscat_s(tmpwav[4], L"Sound_Effects4.wav"); ExtractResource(tmpwav[4], L"WAVE", MAKEINTRESOURCE(IDR_WAVE4));
	_tcscat_s(tmpwav[5], L"Sound_Effects5.wav"); ExtractResource(tmpwav[5], L"WAVE", MAKEINTRESOURCE(IDR_WAVE5));
	_tcscat_s(tmpwav[6], L"Sound_Effects6.wav"); ExtractResource(tmpwav[6], L"WAVE", MAKEINTRESOURCE(IDR_WAVE6));
	_tcscat_s(tmpwav[7], L"Sound_Effects7.wav"); ExtractResource(tmpwav[7], L"WAVE", MAKEINTRESOURCE(IDR_WAVE7));
	_tcscat_s(tmpwav[8], L"Sound_Effects8.wav"); ExtractResource(tmpwav[8], L"WAVE", MAKEINTRESOURCE(IDR_WAVE8));
	_tcscat_s(tmpwav[10], L"Sound_Effects10.wav"); ExtractResource(tmpwav[10], L"WAVE", MAKEINTRESOURCE(IDR_WAVE10));
	_tcscat_s(tmpwav[11], L"Sound_Effects11.wav"); ExtractResource(tmpwav[11], L"WAVE", MAKEINTRESOURCE(IDR_WAVE11));
	_tcscat_s(tmpwav[12], L"Sound_Effects12.wav"); ExtractResource(tmpwav[12], L"WAVE", MAKEINTRESOURCE(IDR_WAVE12));
	_tcscat_s(tmpwav[13], L"Sound_Effects13.wav"); ExtractResource(tmpwav[13], L"WAVE", MAKEINTRESOURCE(IDR_WAVE13));
	_tcscat_s(tmpwav[14], L"Sound_Effects14.wav"); ExtractResource(tmpwav[14], L"WAVE", MAKEINTRESOURCE(IDR_WAVE14));
	_tcscat_s(tmpwav[15], L"Sound_Effects15.wav"); ExtractResource(tmpwav[15], L"WAVE", MAKEINTRESOURCE(IDR_WAVE15));
	_tcscat_s(tmpwav[16], L"Sound_Effects16.wav"); ExtractResource(tmpwav[16], L"WAVE", MAKEINTRESOURCE(IDR_WAVE16));
	_tcscat_s(tmpwav[17], L"Sound_Effects17.wav"); ExtractResource(tmpwav[17], L"WAVE", MAKEINTRESOURCE(IDR_WAVE17));
	_tcscat_s(tmpwav[18], L"Sound_Effects18.wav"); ExtractResource(tmpwav[18], L"WAVE", MAKEINTRESOURCE(IDR_WAVE18));
	_tcscat_s(tmpwav[19], L"Sound_Effects19.wav"); ExtractResource(tmpwav[19], L"WAVE", MAKEINTRESOURCE(IDR_WAVE19));
	_tcscat_s(tmpwav[20], L"Sound_Effects20.wav"); ExtractResource(tmpwav[20], L"WAVE", MAKEINTRESOURCE(IDR_WAVE20));
	_tcscat_s(tmpwav[21], L"Sound_Effects21.wav"); ExtractResource(tmpwav[21], L"WAVE", MAKEINTRESOURCE(IDR_WAVE21));
	_tcscat_s(tmpwav[22], L"Sound_Effects22.wav"); ExtractResource(tmpwav[22], L"WAVE", MAKEINTRESOURCE(IDR_WAVE22));
	_tcscat_s(tmpwav[23], L"Sound_Effects23.wav"); ExtractResource(tmpwav[23], L"WAVE", MAKEINTRESOURCE(IDR_WAVE23));
	_tcscat_s(tmpwav[24], L"Sound_Effects24.wav"); ExtractResource(tmpwav[24], L"WAVE", MAKEINTRESOURCE(IDR_WAVE24));
	_tcscat_s(tmpwav[25], L"Sound_Effects25.wav"); ExtractResource(tmpwav[25], L"WAVE", MAKEINTRESOURCE(IDR_WAVE25));
	_tcscat_s(tmpwav[26], L"Sound_Effects26.wav"); ExtractResource(tmpwav[26], L"WAVE", MAKEINTRESOURCE(IDR_WAVE26));
	_tcscat_s(tmpwav[27], L"Sound_Effects27.wav"); ExtractResource(tmpwav[27], L"WAVE", MAKEINTRESOURCE(IDR_WAVE27));
	_tcscat_s(tmpwav[28], L"Sound_Effects28.wav"); ExtractResource(tmpwav[28], L"WAVE", MAKEINTRESOURCE(IDR_WAVE28));
	_tcscat_s(tmpwav[29], L"Sound_Effects29.wav"); ExtractResource(tmpwav[29], L"WAVE", MAKEINTRESOURCE(IDR_WAVE29));
	_tcscat_s(tmpwav[30], L"Sound_Effects30.wav"); ExtractResource(tmpwav[30], L"WAVE", MAKEINTRESOURCE(IDR_WAVE30));
	_tcscat_s(tmpwav[31], L"Sound_Effects31.wav"); ExtractResource(tmpwav[31], L"WAVE", MAKEINTRESOURCE(IDR_WAVE31));
	_tcscat_s(tmpwav[32], L"Sound_Effects32.wav"); ExtractResource(tmpwav[32], L"WAVE", MAKEINTRESOURCE(IDR_WAVE32));
	_tcscat_s(tmpwav[33], L"Sound_Effects33.wav"); ExtractResource(tmpwav[33], L"WAVE", MAKEINTRESOURCE(IDR_WAVE33));
	_tcscat_s(tmpwav[34], L"Sound_Effects34.wav"); ExtractResource(tmpwav[34], L"WAVE", MAKEINTRESOURCE(IDR_WAVE34));
	_tcscat_s(tmpwav[35], L"Sound_Effects35.wav"); ExtractResource(tmpwav[35], L"WAVE", MAKEINTRESOURCE(IDR_WAVE35));
	_tcscat_s(tmpwav[36], L"Sound_Effects36.wav"); ExtractResource(tmpwav[36], L"WAVE", MAKEINTRESOURCE(IDR_WAVE36));
	_tcscat_s(tmpwav[37], L"Sound_Effects37.wav"); ExtractResource(tmpwav[37], L"WAVE", MAKEINTRESOURCE(IDR_WAVE37));
	_tcscat_s(tmpwav[38], L"Sound_Effects38.wav"); ExtractResource(tmpwav[38], L"WAVE", MAKEINTRESOURCE(IDR_WAVE38));
	_tcscat_s(tmpwav[39], L"Sound_Effects39.wav"); ExtractResource(tmpwav[39], L"WAVE", MAKEINTRESOURCE(IDR_WAVE39));
	_tcscat_s(tmpwav[40], L"Sound_Effects40.wav"); ExtractResource(tmpwav[40], L"WAVE", MAKEINTRESOURCE(IDR_WAVE40));
	_tcscat_s(tmpwav[41], L"Sound_Effects41.wav"); ExtractResource(tmpwav[41], L"WAVE", MAKEINTRESOURCE(IDR_WAVE41));
	_tcscat_s(tmpwav[42], L"Sound_Effects42.wav"); ExtractResource(tmpwav[42], L"WAVE", MAKEINTRESOURCE(IDR_WAVE42));
	_tcscat_s(tmpwav[43], L"Sound_Effects43.wav"); ExtractResource(tmpwav[43], L"WAVE", MAKEINTRESOURCE(IDR_WAVE43));
	_tcscat_s(tmpwav[44], L"Sound_Effects44.wav"); ExtractResource(tmpwav[44], L"WAVE", MAKEINTRESOURCE(IDR_WAVE44));
	_tcscat_s(tmpwav[45], L"Sound_Effects45.wav"); ExtractResource(tmpwav[45], L"WAVE", MAKEINTRESOURCE(IDR_WAVE45));
	_tcscat_s(tmpwav[46], L"Sound_Effects46.wav"); ExtractResource(tmpwav[46], L"WAVE", MAKEINTRESOURCE(IDR_WAVE46));
	_tcscat_s(tmpwav[47], L"Sound_Effects47.wav"); ExtractResource(tmpwav[47], L"WAVE", MAKEINTRESOURCE(IDR_WAVE47));
	_tcscat_s(tmpwav[48], L"Sound_Effects48.wav"); ExtractResource(tmpwav[48], L"WAVE", MAKEINTRESOURCE(IDR_WAVE48));
	_tcscat_s(tmpwav[49], L"Sound_Effects49.wav"); ExtractResource(tmpwav[49], L"WAVE", MAKEINTRESOURCE(IDR_WAVE49));
	_tcscat_s(tmpwav[50], L"Sound_Effects50.wav"); ExtractResource(tmpwav[50], L"WAVE", MAKEINTRESOURCE(IDR_WAVE50));
	_tcscat_s(tmpwav[51], L"Sound_Effects51.wav"); ExtractResource(tmpwav[51], L"WAVE", MAKEINTRESOURCE(IDR_WAVE51));
	_tcscat_s(tmpwav[52], L"Sound_Effects52.wav"); ExtractResource(tmpwav[52], L"WAVE", MAKEINTRESOURCE(IDR_WAVE52));
	_tcscat_s(tmpwav[53], L"Sound_Effects53.wav"); ExtractResource(tmpwav[53], L"WAVE", MAKEINTRESOURCE(IDR_WAVE53));
	_tcscat_s(tmpwav[54], L"Sound_Effects54.wav"); ExtractResource(tmpwav[54], L"WAVE", MAKEINTRESOURCE(IDR_WAVE54));
	_tcscat_s(tmpwav[55], L"Sound_Effects55.wav"); ExtractResource(tmpwav[55], L"WAVE", MAKEINTRESOURCE(IDR_WAVE55));
	_tcscat_s(tmpwav[56], L"Sound_Effects56.wav"); ExtractResource(tmpwav[56], L"WAVE", MAKEINTRESOURCE(IDR_WAVE56));
	_tcscat_s(tmpwav[57], L"Sound_Effects57.wav"); ExtractResource(tmpwav[57], L"WAVE", MAKEINTRESOURCE(IDR_WAVE57));
	_tcscat_s(tmpwav[58], L"Sound_Effects58.wav"); ExtractResource(tmpwav[58], L"WAVE", MAKEINTRESOURCE(IDR_WAVE58));
	_tcscat_s(tmpwav[59], L"Sound_Effects59.wav"); ExtractResource(tmpwav[59], L"WAVE", MAKEINTRESOURCE(IDR_WAVE59));
	_tcscat_s(tmpwav[60], L"Sound_Effects60.wav"); ExtractResource(tmpwav[60], L"WAVE", MAKEINTRESOURCE(IDR_WAVE60));
	_tcscat_s(tmpwav[61], L"Sound_Effects61.wav"); ExtractResource(tmpwav[61], L"WAVE", MAKEINTRESOURCE(IDR_WAVE61));
	_tcscat_s(tmpwav[62], L"Sound_Effects62.wav"); ExtractResource(tmpwav[62], L"WAVE", MAKEINTRESOURCE(IDR_WAVE62));
	_tcscat_s(tmpwav[63], L"Sound_Effects63.wav"); ExtractResource(tmpwav[63], L"WAVE", MAKEINTRESOURCE(IDR_WAVE63));
	_tcscat_s(tmpwav[64], L"Sound_Effects64.wav"); ExtractResource(tmpwav[64], L"WAVE", MAKEINTRESOURCE(IDR_WAVE64));
	_tcscat_s(tmpwav[65], L"Sound_Effects65.wav"); ExtractResource(tmpwav[65], L"WAVE", MAKEINTRESOURCE(IDR_WAVE65));
	_tcscat_s(tmpwav[66], L"Sound_Effects66.wav"); ExtractResource(tmpwav[66], L"WAVE", MAKEINTRESOURCE(IDR_WAVE66));
	_tcscat_s(tmpwav[67], L"Sound_Effects67.wav"); ExtractResource(tmpwav[67], L"WAVE", MAKEINTRESOURCE(IDR_WAVE67));
	_tcscat_s(tmpwav[68], L"Sound_Effects68.wav"); ExtractResource(tmpwav[68], L"WAVE", MAKEINTRESOURCE(IDR_WAVE68));
	_tcscat_s(tmpwav[69], L"Sound_Effects69.wav"); ExtractResource(tmpwav[69], L"WAVE", MAKEINTRESOURCE(IDR_WAVE69));
	_tcscat_s(tmpwav[70], L"Sound_Effects70.wav"); ExtractResource(tmpwav[70], L"WAVE", MAKEINTRESOURCE(IDR_WAVE70));
	_tcscat_s(tmpwav[71], L"Sound_Effects71.wav"); ExtractResource(tmpwav[71], L"WAVE", MAKEINTRESOURCE(IDR_WAVE71));
	_tcscat_s(tmpwav[72], L"Sound_Effects72.wav"); ExtractResource(tmpwav[72], L"WAVE", MAKEINTRESOURCE(IDR_WAVE72));
	_tcscat_s(tmpwav[73], L"Sound_Effects73.wav"); ExtractResource(tmpwav[73], L"WAVE", MAKEINTRESOURCE(IDR_WAVE73));
	_tcscat_s(tmpwav[74], L"Sound_Effects74.wav"); ExtractResource(tmpwav[74], L"WAVE", MAKEINTRESOURCE(IDR_WAVE74));
	_tcscat_s(tmpwav[75], L"Sound_Effects75.wav"); ExtractResource(tmpwav[75], L"WAVE", MAKEINTRESOURCE(IDR_WAVE75));
	_tcscat_s(tmpwav[76], L"Sound_Effects76.wav"); ExtractResource(tmpwav[76], L"WAVE", MAKEINTRESOURCE(IDR_WAVE76));
	_tcscat_s(tmpwav[77], L"Sound_Effects77.wav"); ExtractResource(tmpwav[77], L"WAVE", MAKEINTRESOURCE(IDR_WAVE77));
	_tcscat_s(tmpwav[78], L"Sound_Effects78.wav"); ExtractResource(tmpwav[78], L"WAVE", MAKEINTRESOURCE(IDR_WAVE78));
	_tcscat_s(tmpwav[79], L"Sound_Effects79.wav"); ExtractResource(tmpwav[79], L"WAVE", MAKEINTRESOURCE(IDR_WAVE79));
	_tcscat_s(tmpwav[80], L"Sound_Effects80.wav"); ExtractResource(tmpwav[80], L"WAVE", MAKEINTRESOURCE(IDR_WAVE80));
	_tcscat_s(tmpwav[81], L"Sound_Effects81.wav"); ExtractResource(tmpwav[81], L"WAVE", MAKEINTRESOURCE(IDR_WAVE81));
	_tcscat_s(tmpwav[82], L"Sound_Effects82.wav"); ExtractResource(tmpwav[82], L"WAVE", MAKEINTRESOURCE(IDR_WAVE82));
	_tcscat_s(tmpwav[83], L"Sound_Effects83.wav"); ExtractResource(tmpwav[83], L"WAVE", MAKEINTRESOURCE(IDR_WAVE83));
	_tcscat_s(tmpwav[84], L"Sound_Effects84.wav"); ExtractResource(tmpwav[84], L"WAVE", MAKEINTRESOURCE(IDR_WAVE84));
	_tcscat_s(tmpwav[85], L"Sound_Effects85.wav"); ExtractResource(tmpwav[85], L"WAVE", MAKEINTRESOURCE(IDR_WAVE85));
	_tcscat_s(tmpwav[86], L"Sound_Effects86.wav"); ExtractResource(tmpwav[86], L"WAVE", MAKEINTRESOURCE(IDR_WAVE86));
	_tcscat_s(tmpwav[87], L"Sound_Effects87.wav"); ExtractResource(tmpwav[87], L"WAVE", MAKEINTRESOURCE(IDR_WAVE87));
	_tcscat_s(tmpwav[88], L"Sound_Effects88.wav"); ExtractResource(tmpwav[88], L"WAVE", MAKEINTRESOURCE(IDR_WAVE88));
	_tcscat_s(tmpwav[89], L"Sound_Effects89.wav"); ExtractResource(tmpwav[89], L"WAVE", MAKEINTRESOURCE(IDR_WAVE89));
	_tcscat_s(tmpwav[90], L"Sound_Effects90.wav"); ExtractResource(tmpwav[90], L"WAVE", MAKEINTRESOURCE(IDR_WAVE90));
	_tcscat_s(tmpwav[91], L"Sound_Effects91.wav"); ExtractResource(tmpwav[91], L"WAVE", MAKEINTRESOURCE(IDR_WAVE91));
	_tcscat_s(tmpwav[92], L"Sound_Effects92.wav"); ExtractResource(tmpwav[92], L"WAVE", MAKEINTRESOURCE(IDR_WAVE92));
	_tcscat_s(tmpwav[93], L"Sound_Effects93.wav"); ExtractResource(tmpwav[93], L"WAVE", MAKEINTRESOURCE(IDR_WAVE93));
	_tcscat_s(tmpwav[94], L"Sound_Effects94.wav"); ExtractResource(tmpwav[94], L"WAVE", MAKEINTRESOURCE(IDR_WAVE94));
	_tcscat_s(tmpwav[95], L"Sound_Effects95.wav"); ExtractResource(tmpwav[95], L"WAVE", MAKEINTRESOURCE(IDR_WAVE95));
	_tcscat_s(tmpwav[96], L"Sound_Effects96.wav"); ExtractResource(tmpwav[96], L"WAVE", MAKEINTRESOURCE(IDR_WAVE96));
	_tcscat_s(tmpwav[97], L"Sound_Effects97.wav"); ExtractResource(tmpwav[97], L"WAVE", MAKEINTRESOURCE(IDR_WAVE97));
	_tcscat_s(tmpwav[98], L"Sound_Effects98.wav"); ExtractResource(tmpwav[98], L"WAVE", MAKEINTRESOURCE(IDR_WAVE98));
	_tcscat_s(tmpwav[99], L"Sound_Effects99.wav"); ExtractResource(tmpwav[99], L"WAVE", MAKEINTRESOURCE(IDR_WAVE99));
	_tcscat_s(tmpwav[100], L"Sound_Effects100.wav"); ExtractResource(tmpwav[100], L"WAVE", MAKEINTRESOURCE(IDR_WAVE100));
	_tcscat_s(tmpwav[101], L"Sound_Effects101.wav"); ExtractResource(tmpwav[101], L"WAVE", MAKEINTRESOURCE(IDR_WAVE101));
	_tcscat_s(tmpwav[102], L"Sound_Effects102.wav"); ExtractResource(tmpwav[102], L"WAVE", MAKEINTRESOURCE(IDR_WAVE102));
	_tcscat_s(tmpwav[103], L"Sound_Effects103.wav"); ExtractResource(tmpwav[103], L"WAVE", MAKEINTRESOURCE(IDR_WAVE103));
	_tcscat_s(tmpwav[104], L"Sound_Effects104.wav"); ExtractResource(tmpwav[104], L"WAVE", MAKEINTRESOURCE(IDR_WAVE104));
	_tcscat_s(tmpwav[105], L"Sound_Effects105.wav"); ExtractResource(tmpwav[105], L"WAVE", MAKEINTRESOURCE(IDR_WAVE105));
	_tcscat_s(tmpwav[106], L"Sound_Effects106.wav"); ExtractResource(tmpwav[106], L"WAVE", MAKEINTRESOURCE(IDR_WAVE106));
	_tcscat_s(tmpwav[107], L"Sound_Effects107.wav"); ExtractResource(tmpwav[107], L"WAVE", MAKEINTRESOURCE(IDR_WAVE107));
	_tcscat_s(tmpwav[108], L"Sound_Effects108.wav"); ExtractResource(tmpwav[108], L"WAVE", MAKEINTRESOURCE(IDR_WAVE108));
	_tcscat_s(tmpwav[109], L"Sound_Effects109.wav"); ExtractResource(tmpwav[109], L"WAVE", MAKEINTRESOURCE(IDR_WAVE109));
	_tcscat_s(tmpwav[110], L"Sound_Effects110.wav"); ExtractResource(tmpwav[110], L"WAVE", MAKEINTRESOURCE(IDR_WAVE110));
	_tcscat_s(tmpwav[111], L"Sound_Effects111.wav"); ExtractResource(tmpwav[111], L"WAVE", MAKEINTRESOURCE(IDR_WAVE111));
	_tcscat_s(tmpwav[112], L"Sound_Effects112.wav"); ExtractResource(tmpwav[112], L"WAVE", MAKEINTRESOURCE(IDR_WAVE112));
}
void MahjongSystem::SoundEffects(int choice)
{
	TCHAR mcicmd[300];
	switch (choice)//关闭音乐                                                                                      //打开音乐                            //播放音乐
	{
	case 3:mciSendString(L"close mymusic3", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic3", tmpwav[3]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic3 wait", NULL, 0, NULL); break;
	case 4:mciSendString(L"close mymusic4", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic4", tmpwav[4]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic4 wait", NULL, 0, NULL); break;
	case 5:mciSendString(L"close mymusic5", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic5", tmpwav[5]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic5", NULL, 0, NULL); break;
	case 6:mciSendString(L"close mymusic6", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic6", tmpwav[6]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic6", NULL, 0, NULL); break;
	case 7:mciSendString(L"close mymusic7", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic7", tmpwav[7]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic7 wait", NULL, 0, NULL); break;
	case 8:mciSendString(L"close mymusic8", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic8", tmpwav[8]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic8 wait", NULL, 0, NULL); break;
	case 10:mciSendString(L"close mymusic10", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic10", tmpwav[10]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic10 wait", NULL, 0, NULL); break;
	case 11:mciSendString(L"close mymusic11", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic11", tmpwav[11]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic11 wait", NULL, 0, NULL); break;
	case 12:mciSendString(L"close mymusic12", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic12", tmpwav[12]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic12 wait", NULL, 0, NULL); break;
	case 13:mciSendString(L"close mymusic13", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic13", tmpwav[13]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic13 wait", NULL, 0, NULL); break;
	case 14:mciSendString(L"close mymusic14", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic14", tmpwav[14]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic14 wait", NULL, 0, NULL); break;
	case 15:mciSendString(L"close mymusic15", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic15", tmpwav[15]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic15", NULL, 0, NULL); break;
	case 16:mciSendString(L"close mymusic16", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic16", tmpwav[16]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic16", NULL, 0, NULL); break;
	case 17:mciSendString(L"close mymusic17", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic17", tmpwav[17]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic17 wait", NULL, 0, NULL); break;
	case 18:mciSendString(L"close mymusic18", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic18", tmpwav[18]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic18", NULL, 0, NULL); break;
	case 19:mciSendString(L"close mymusic19", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic19", tmpwav[19]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic19 wait", NULL, 0, NULL); break;
	case 20:mciSendString(L"close mymusic20", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic20", tmpwav[20]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic20", NULL, 0, NULL); break;
	case 21:mciSendString(L"close mymusic21", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic21", tmpwav[21]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic21", NULL, 0, NULL); break;
	case 22:mciSendString(L"close mymusic22", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic22", tmpwav[22]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic22", NULL, 0, NULL); break;
	case 23:mciSendString(L"close mymusic23", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic23", tmpwav[23]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic23", NULL, 0, NULL); break;
	case 24:mciSendString(L"close mymusic24", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic24", tmpwav[24]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic24 wait", NULL, 0, NULL); break;
	case 25:mciSendString(L"close mymusic25", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic25", tmpwav[25]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic25 wait", NULL, 0, NULL); break;
	case 26:mciSendString(L"close mymusic26", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic26", tmpwav[26]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic26", NULL, 0, NULL); break;
	case 27:mciSendString(L"close mymusic27", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic27", tmpwav[27]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic27", NULL, 0, NULL); break;
	case 28:mciSendString(L"close mymusic28", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic28", tmpwav[28]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic28", NULL, 0, NULL); break;
	case 29:mciSendString(L"close mymusic29", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic29", tmpwav[29]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic29 wait", NULL, 0, NULL); break;
	case 30:mciSendString(L"close mymusic30", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic30", tmpwav[30]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic30", NULL, 0, NULL); break;
	case 31:mciSendString(L"close mymusic31", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic31", tmpwav[31]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic31", NULL, 0, NULL); break;
	case 32:mciSendString(L"close mymusic32", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic32", tmpwav[32]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic32 wait", NULL, 0, NULL); break;
	case 33:mciSendString(L"close mymusic33", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic33", tmpwav[33]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic33 wait", NULL, 0, NULL); break;
	case 34:mciSendString(L"close mymusic34", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic34", tmpwav[34]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic34 wait", NULL, 0, NULL); break;
	case 35:mciSendString(L"close mymusic35", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic35", tmpwav[35]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic35 wait", NULL, 0, NULL); break;
	case 36:mciSendString(L"close mymusic36", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic36", tmpwav[36]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic36 wait", NULL, 0, NULL); break;
	case 37:mciSendString(L"close mymusic37", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic37", tmpwav[37]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic37 wait", NULL, 0, NULL); break;
	case 38:mciSendString(L"close mymusic38", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic38", tmpwav[38]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic38 wait", NULL, 0, NULL); break;
	case 39:mciSendString(L"close mymusic39", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic39", tmpwav[39]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic39 wait", NULL, 0, NULL); break;
	case 40:mciSendString(L"close mymusic40", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic40", tmpwav[40]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic40 wait", NULL, 0, NULL); break;
	case 41:mciSendString(L"close mymusic41", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic41", tmpwav[41]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic41 wait", NULL, 0, NULL); break;
	case 42:mciSendString(L"close mymusic42", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic42", tmpwav[42]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic42 wait", NULL, 0, NULL); break;
	case 43:mciSendString(L"close mymusic43", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic43", tmpwav[43]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic43 wait", NULL, 0, NULL); break;
	case 44:mciSendString(L"close mymusic44", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic44", tmpwav[44]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic44 wait", NULL, 0, NULL); break;
	case 45:mciSendString(L"close mymusic45", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic45", tmpwav[45]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic45 wait", NULL, 0, NULL); break;
	case 46:mciSendString(L"close mymusic46", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic46", tmpwav[46]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic46 wait", NULL, 0, NULL); break;
	case 47:mciSendString(L"close mymusic47", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic47", tmpwav[47]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic47 wait", NULL, 0, NULL); break;
	case 48:mciSendString(L"close mymusic48", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic48", tmpwav[48]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic48 wait", NULL, 0, NULL); break;
	case 49:mciSendString(L"close mymusic49", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic49", tmpwav[49]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic49 wait", NULL, 0, NULL); break;
	case 50:mciSendString(L"close mymusic50", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic50", tmpwav[50]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic50 wait", NULL, 0, NULL); break;
	case 51:mciSendString(L"close mymusic51", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic51", tmpwav[51]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic51 wait", NULL, 0, NULL); break;
	case 52:mciSendString(L"close mymusic52", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic52", tmpwav[52]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic52 wait", NULL, 0, NULL); break;
	case 53:mciSendString(L"close mymusic53", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic53", tmpwav[53]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic53 wait", NULL, 0, NULL); break;
	case 54:mciSendString(L"close mymusic54", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic54", tmpwav[54]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic54 wait", NULL, 0, NULL); break;
	case 55:mciSendString(L"close mymusic55", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic55", tmpwav[55]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic55 wait", NULL, 0, NULL); break;
	case 56:mciSendString(L"close mymusic56", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic56", tmpwav[56]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic56 wait", NULL, 0, NULL); break;
	case 57:mciSendString(L"close mymusic57", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic57", tmpwav[57]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic57 wait", NULL, 0, NULL); break;
	case 58:mciSendString(L"close mymusic58", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic58", tmpwav[58]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic58 wait", NULL, 0, NULL); break;
	case 59:mciSendString(L"close mymusic59", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic59", tmpwav[59]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic59 wait", NULL, 0, NULL); break;
	case 60:mciSendString(L"close mymusic60", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic60", tmpwav[60]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic60 wait", NULL, 0, NULL); break;
	case 61:mciSendString(L"close mymusic61", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic61", tmpwav[61]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic61 wait", NULL, 0, NULL); break;
	case 62:mciSendString(L"close mymusic62", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic62", tmpwav[62]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic62 wait", NULL, 0, NULL); break;
	case 63:mciSendString(L"close mymusic63", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic63", tmpwav[63]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic63 wait", NULL, 0, NULL); break;
	case 64:mciSendString(L"close mymusic64", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic64", tmpwav[64]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic64 wait", NULL, 0, NULL); break;
	case 65:mciSendString(L"close mymusic65", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic65", tmpwav[65]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic65 wait", NULL, 0, NULL); break;
	case 66:mciSendString(L"close mymusic66", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic66", tmpwav[66]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic66 wait", NULL, 0, NULL); break;
	case 67:mciSendString(L"close mymusic67", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic67", tmpwav[67]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic67 wait", NULL, 0, NULL); break;
	case 68:mciSendString(L"close mymusic68", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic68", tmpwav[68]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic68 wait", NULL, 0, NULL); break;
	case 69:mciSendString(L"close mymusic69", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic69", tmpwav[69]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic69 wait", NULL, 0, NULL); break;
	case 70:mciSendString(L"close mymusic70", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic70", tmpwav[70]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic70 wait", NULL, 0, NULL); break;
	case 71:mciSendString(L"close mymusic71", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic71", tmpwav[71]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic71 wait", NULL, 0, NULL); break;
	case 72:mciSendString(L"close mymusic72", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic72", tmpwav[72]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic72 wait", NULL, 0, NULL); break;
	case 73:mciSendString(L"close mymusic73", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic73", tmpwav[73]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic73 wait", NULL, 0, NULL); break;
	case 74:mciSendString(L"close mymusic74", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic74", tmpwav[74]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic74 wait", NULL, 0, NULL); break;
	case 75:mciSendString(L"close mymusic75", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic75", tmpwav[75]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic75 wait", NULL, 0, NULL); break;
	case 76:mciSendString(L"close mymusic76", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic76", tmpwav[76]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic76 wait", NULL, 0, NULL); break;
	case 77:mciSendString(L"close mymusic77", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic77", tmpwav[77]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic77 wait", NULL, 0, NULL); break;
	case 78:mciSendString(L"close mymusic78", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic78", tmpwav[78]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic78 wait", NULL, 0, NULL); break;
	case 79:mciSendString(L"close mymusic79", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic79", tmpwav[79]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic79 wait", NULL, 0, NULL); break;
	case 80:mciSendString(L"close mymusic80", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic80", tmpwav[80]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic80 wait", NULL, 0, NULL); break;
	case 81:mciSendString(L"close mymusic81", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic81", tmpwav[81]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic81 wait", NULL, 0, NULL); break;
	case 82:mciSendString(L"close mymusic82", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic82", tmpwav[82]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic82 wait", NULL, 0, NULL); break;
	case 83:mciSendString(L"close mymusic83", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic83", tmpwav[83]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic83 wait", NULL, 0, NULL); break;
	case 84:mciSendString(L"close mymusic84", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic84", tmpwav[84]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic84 wait", NULL, 0, NULL); break;
	case 85:mciSendString(L"close mymusic85", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic85", tmpwav[85]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic85 wait", NULL, 0, NULL); break;
	case 86:mciSendString(L"close mymusic86", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic86", tmpwav[86]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic86 wait", NULL, 0, NULL); break;
	case 87:mciSendString(L"close mymusic87", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic87", tmpwav[87]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic87 wait", NULL, 0, NULL); break;
	case 88:mciSendString(L"close mymusic88", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic88", tmpwav[88]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic88 wait", NULL, 0, NULL); break;
	case 89:mciSendString(L"close mymusic89", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic89", tmpwav[89]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic89 wait", NULL, 0, NULL); break;
	case 90:mciSendString(L"close mymusic90", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic90", tmpwav[90]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic90 wait", NULL, 0, NULL); break;
	case 91:mciSendString(L"close mymusic91", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic91", tmpwav[91]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic91 wait", NULL, 0, NULL); break;
	case 92:mciSendString(L"close mymusic92", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic92", tmpwav[92]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic92 wait", NULL, 0, NULL); break;
	case 93:mciSendString(L"close mymusic93", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic93", tmpwav[93]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic93 wait", NULL, 0, NULL); break;
	case 94:mciSendString(L"close mymusic94", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic94", tmpwav[94]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic94 wait", NULL, 0, NULL); break;
	case 95:mciSendString(L"close mymusic95", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic95", tmpwav[95]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic95 wait", NULL, 0, NULL); break;
	case 96:mciSendString(L"close mymusic96", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic96", tmpwav[96]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic96 wait", NULL, 0, NULL); break;
	case 97:mciSendString(L"close mymusic97", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic97", tmpwav[97]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic97 wait", NULL, 0, NULL); break;
	case 98:mciSendString(L"close mymusic98", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic98", tmpwav[98]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic98 wait", NULL, 0, NULL); break;
	case 99:mciSendString(L"close mymusic99", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic99", tmpwav[99]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic99 wait", NULL, 0, NULL); break;
	case 100:mciSendString(L"close mymusic100", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic100", tmpwav[100]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic100 wait", NULL, 0, NULL); break;
	case 101:mciSendString(L"close mymusic101", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic101", tmpwav[101]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic101 wait", NULL, 0, NULL); break;
	case 102:mciSendString(L"close mymusic102", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic102", tmpwav[102]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic102 wait", NULL, 0, NULL); break;
	case 103:mciSendString(L"close mymusic103", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic103", tmpwav[103]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic103 wait", NULL, 0, NULL); break;
	case 104:mciSendString(L"close mymusic104", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic104", tmpwav[104]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic104 wait", NULL, 0, NULL); break;
	case 105:mciSendString(L"close mymusic105", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic105", tmpwav[105]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic105 wait", NULL, 0, NULL); break;
	case 106:mciSendString(L"close mymusic106", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic106", tmpwav[106]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic106 wait", NULL, 0, NULL); break;
	case 107:mciSendString(L"close mymusic107", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic107", tmpwav[107]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic107 wait", NULL, 0, NULL); break;
	case 108:mciSendString(L"close mymusic108", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic108", tmpwav[108]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic108 wait", NULL, 0, NULL); break;
	case 109:mciSendString(L"close mymusic109", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic109", tmpwav[109]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic109 wait", NULL, 0, NULL); break;
	case 110:mciSendString(L"close mymusic110", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic110", tmpwav[110]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic110 wait", NULL, 0, NULL); break;
	case 111:mciSendString(L"close mymusic111", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic111", tmpwav[111]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic111 wait", NULL, 0, NULL); break;
	case 112:mciSendString(L"close mymusic112", 0, 0, 0); _stprintf_s(mcicmd, L"open \"%s\" alias mymusic112", tmpwav[112]); mciSendString(mcicmd, NULL, 0, NULL); mciSendString(L"play mymusic112 wait", NULL, 0, NULL); break;
	default:break;
	}
}
void MahjongSystem::DeleteSoundEffects()
{
	for (int i = 3; i <= 112; i++)
	{
		DeleteFile(tmpwav[i]);
	}
}

void MahjongSystem::Gotoxy(int x, int y)//光标移动
{
	COORD pos{};
	pos.X = x - 1;
	pos.Y = y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void MahjongSystem::GotoKawa(int playernum)
{
	if (playernum == 0) Gotoxy(19 + ((kawaPtr[0] - 1) % 7) * 2, 17 + (kawaPtr[0] - 1) / 7);
	else if (playernum == 1) Gotoxy(33 + (kawaPtr[1] - 1) / 7 * 2, 16 - (kawaPtr[1] - 1) % 7);
	else if (playernum == 2) Gotoxy(31 - ((kawaPtr[2] - 1) % 7) * 2, 9 - (kawaPtr[2] - 1) / 7);
	else Gotoxy(17 - (kawaPtr[3] - 1) / 7 * 2, 10 + (kawaPtr[3] - 1) % 7);
}
void MahjongSystem::GotoShouPai(int playernum, int painum)
{
	if (playernum == 0)
	{
		if (painum < int(shouPai[0].size()) || painum == int(shouPai[0].size()) && !afterMo) Gotoxy(painum * 2 + 1, 25);
		else Gotoxy(painum * 2 + 3, 25);
	}
	else if (playernum == 1)
	{
		if (painum < int(shouPai[1].size()) || painum == int(shouPai[1].size()) && !afterMo) Gotoxy(49, 25 - painum);
		else Gotoxy(49, 24 - painum);
	}
	else if (playernum == 2)
	{
		if (painum < int(shouPai[2].size()) || painum == int(shouPai[2].size()) && !afterMo) Gotoxy(49 - painum * 2, 1);
		else Gotoxy(47 - painum * 2, 1);
	}
	else
	{
		if (painum < int(shouPai[3].size()) || painum == int(shouPai[3].size()) && !afterMo) Gotoxy(1, 1 + painum);
		else Gotoxy(1, 2 + painum);
	}
}

void MahjongSystem::Clear()
{
	Gotoxy(1, 1);
	for (int i = 1; i <= 50; i++)
		cout << "                                                                                        " << endl;
}
void MahjongSystem::ClearInteraction()
{
	Gotoxy(1, 26);
	cout << "                                                                      " << endl
		<< "                                                                      " << endl
		<< "                                                                      " << endl
		<< "                                                                      " << endl
		<< "                                                                      " << endl
		<< "                                                                      " << endl
		<< "                                                                      " << endl
		<< "                                                                      " << endl
		<< "                                                                      " << endl
		<< "                                                                      " << endl
		<< "                                                                      " << endl
		<< "                                                                      " << endl
		<< "                                                                      " << endl;
}

void MahjongSystem::OutputBakaze()
{
	if (bakaze == 0) cout << "东";
	else cout << "南";
}
void MahjongSystem::OutputKyoku()
{
	switch (kyoku)
	{
	case 0:cout << "一"; break;
	case 1:cout << "二"; break;
	case 2:cout << "三"; break;
	case 3:cout << "四"; break;
	default:cout << "错"; break;
	}
}
void MahjongSystem::OutputPlayer(int playernum)
{
	switch (playernum)
	{
	case 0:cout << "自家"; break;
	case 1:cout << "下家"; break;
	case 2:cout << "对家"; break;
	case 3:cout << "上家"; break;
	default:cout << "错误"; break;
	}
	return;
}
void MahjongSystem::OutputJikaza(int kyo)
{
	Gotoxy(25, 16);
	switch (kyo)
	{
	case 0:cout << "东"; break;
	case 1:cout << "北"; break;
	case 2:cout << "西"; break;
	case 3:cout << "南"; break;
	default:cout << "错"; break;
	}
	Gotoxy(31, 13);
	switch (kyo)
	{
	case 0:cout << "南"; break;
	case 1:cout << "东"; break;
	case 2:cout << "北"; break;
	case 3:cout << "西"; break;
	default:cout << "错"; break;
	}
	Gotoxy(25, 10);
	switch (kyo)
	{
	case 0:cout << "西"; break;
	case 1:cout << "南"; break;
	case 2:cout << "东"; break;
	case 3:cout << "北"; break;
	default:cout << "错"; break;
	}
	Gotoxy(19, 13);
	switch (kyo)
	{
	case 0:cout << "北"; break;
	case 1:cout << "西"; break;
	case 2:cout << "南"; break;
	case 3:cout << "东"; break;
	default:cout << "错"; break;
	}
}

int MahjongSystem::NextTurn(int tur)
{
	if (tur < 3) return tur + 1;
	else return 0;
}
Pai MahjongSystem::NextPai(Pai pai)
{
	Pai res;
	switch (pai.id)
	{
	case 0:res = 1; break;
	case 1:res = 2; break;
	case 2:res = 3; break;
	case 3:res = 4; break;
	case 4:res = 5; break;
	case 5:res = 6; break;
	case 6:res = 7; break;
	case 7:res = 8; break;
	case 8:res = 0; break;
	case 16:res = 17; break;
	case 17:res = 18; break;
	case 18:res = 19; break;
	case 19:res = 20; break;
	case 20:res = 21; break;
	case 21:res = 22; break;
	case 22:res = 23; break;
	case 23:res = 24; break;
	case 24:res = 16; break;
	case 32:res = 33; break;
	case 33:res = 34; break;
	case 34:res = 35; break;
	case 35:res = 36; break;
	case 36:res = 37; break;
	case 37:res = 38; break;
	case 38:res = 39; break;
	case 39:res = 40; break;
	case 40:res = 32; break;
	case 48:res = 56; break;
	case 56:res = 64; break;
	case 64:res = 72; break;
	case 72:res = 48; break;
	case 80:res = 88; break;
	case 88:res = 96; break;
	case 96:res = 80; break;
	}
	return res;
}

void MahjongSystem::Refresh(int playernum)
{
	bool test = 0;
	if (playernum == 0)
	{
		sort(shouPai[0].begin(), shouPai[0].end());
		Gotoxy(3, 25);
		for (int i = 0; i < int(shouPai[0].size()); i++)
		{
			shouPai[0][i].print();
		}
		cout << "      ";
	}
	else if (playernum == 1)
	{
		sort(shouPai[1].begin(), shouPai[1].end());
		for (int i = 0; i < int(shouPai[1].size()); i++)
		{
			Gotoxy(49, 24 - i);
			if (test == 0)cout << "口";
			else shouPai[1][i].print();
		}
		for (int i = shouPai[1].size(); i < int(shouPai[1].size() + 3); i++)
		{
			Gotoxy(49, 24 - i);
			cout << "  ";
		}
	}
	else if (playernum == 2)
	{
		sort(shouPai[2].begin(), shouPai[2].end());
		for (int i = 0; i < int(shouPai[2].size()); i++)
		{
			Gotoxy(47 - 2 * i, 1);
			if (test == 0) cout << "口";
			else shouPai[2][i].print();
		}
		for (int i = int(shouPai[2].size()); i < int(shouPai[2].size()) + 3; i++)
		{
			Gotoxy(47 - 2 * i, 1);
			cout << "  ";
		}
	}
	else
	{
		sort(shouPai[3].begin(), shouPai[3].end());
		for (int i = 0; i < int(shouPai[3].size()); i++)
		{
			Gotoxy(1, 2 + i);
			if (test == 0) cout << "口";
			else shouPai[3][i].print();
		}
		for (int i = int(shouPai[3].size()); i < int(shouPai[3].size()) + 3; i++)
		{
			Gotoxy(1, 2 + i);
			cout << "  ";
		}
	}
}
void MahjongSystem::Refresh_ten()
{
	Gotoxy(78, 5);
	cout << ten[0];
	Gotoxy(78, 6);
	cout << ten[1];
	Gotoxy(78, 7);
	cout << ten[2];
	Gotoxy(78, 8);
	cout << ten[3];
}
void MahjongSystem::Refresh_tenbou()
{
	Gotoxy(80, 20);
	cout << tenbou;
}

void MahjongSystem::StartInterface()
{
	PlaySound(MAKEINTRESOURCE(IDR_WAVE1), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC | SND_LOOP);
	Clear();
	Gotoxy(1, 1);
	cout << "开始" << endl << endl << "退出" << endl;
}
void MahjongSystem::StartGame()
{
	Initialization();
	Clear();
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			shouPai[i].push_back(yama[yamaPtr++]);
		}
	}
	for (int i = 0; i < 4; i++)
	{
		TenpaiJudge(i);
		if (i > 0) sort(shouPai[i].begin(), shouPai[i].end());
	}
	Gotoxy(1, 1);
	cout << "                                                  " << endl
		<< "                                                  " << endl
		<< "                                                  " << endl
		<< "                                                  " << endl
		<< "                                                                    您的点数 " << ten[0] << endl
		<< "                                                                    下家点数 " << ten[1] << endl
		<< "                                                                    对家点数 " << ten[2] << endl
		<< "                                                                    上家点数 " << ten[3] << endl
		<< "                                                  " << endl
		<< "                        西                        " << endl
		<< "                                                  " << endl
		<< "                                                  " << endl
		<< "                  北  "; OutputBakaze(); OutputKyoku(); cout << "局  南                  " << endl
		<< "                                                  " << endl
		<< "                                                  " << endl
		<< "                        东                        " << endl
		<< "                                                  " << endl
		<< "                                                                  宝牌指示牌  口口口口口" << endl
		<< "                                                                里宝牌指示牌  口口口口口" << endl
		<< "                                                                      立直棒 x " << tenbou << " " << endl
		<< "                                                                      本场数 x " << hunba << " " << endl
		<< "                                                  " << endl
		<< "                                                  " << endl
		<< "                                                  " << endl
		<< "                                                  " << endl;

	OutputJikaza(kyoku);

	/**************************************/
	Gotoxy(3, 25);
	for (int i = 0; i < 4; i++)
	{
		shouPai[0][i].print();
	}

	Gotoxy(49, 24); cout << "口";
	Gotoxy(49, 23); cout << "口";
	Gotoxy(49, 22); cout << "口";
	Gotoxy(49, 21); cout << "口";

	Gotoxy(41, 1); cout << "口口口口";

	Gotoxy(1, 2); cout << "口";
	Gotoxy(1, 3); cout << "口";
	Gotoxy(1, 4); cout << "口";
	Gotoxy(1, 5); cout << "口";

	SoundEffects(3);
	/************************************/
	Gotoxy(11, 25);
	for (int i = 4; i < 8; i++)
	{
		shouPai[0][i].print();
	}

	Gotoxy(49, 20); cout << "口";
	Gotoxy(49, 19); cout << "口";
	Gotoxy(49, 18); cout << "口";
	Gotoxy(49, 17); cout << "口";

	Gotoxy(33, 1); cout << "口口口口";

	Gotoxy(1, 6); cout << "口";
	Gotoxy(1, 7); cout << "口";
	Gotoxy(1, 8); cout << "口";
	Gotoxy(1, 9); cout << "口";

	SoundEffects(3);
	/***********************************/
	Gotoxy(19, 25);
	for (int i = 8; i < 12; i++)
	{
		shouPai[0][i].print();
	}

	Gotoxy(49, 16); cout << "口";
	Gotoxy(49, 15); cout << "口";
	Gotoxy(49, 14); cout << "口";
	Gotoxy(49, 13); cout << "口";

	Gotoxy(25, 1); cout << "口口口口";

	Gotoxy(1, 10); cout << "口";
	Gotoxy(1, 11); cout << "口";
	Gotoxy(1, 12); cout << "口";
	Gotoxy(1, 13); cout << "口";

	SoundEffects(3);
	/************************************/
	Gotoxy(27, 25); shouPai[0][12].print();

	Gotoxy(49, 12); cout << "口";

	Gotoxy(23, 1); cout << "口";

	Gotoxy(1, 14); cout << "口";

	SoundEffects(3);
	/************************************/
	Refresh(0);

	Sleep(250);
	/************************************/

	Mo(kyoku);
	SoundEffects(4);

	Gotoxy(79, 18); yama[122].print();//翻宝牌
	Gotoxy(23, 14); cout << "余69张";
}

void MahjongSystem::Initial_Initialization()
{
	bakaze = 0;
	kyoku = 0;
	tenbou = 0;
	hunba = 0;
	for (int i = 0; i < 4; i++)
	{
		ten[i] = 25000;
	}
}
void MahjongSystem::Initialization()
{
	PlaySound(MAKEINTRESOURCE(IDR_WAVE2), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC | SND_LOOP);
	ifRyuukyoku = 0;
	ifNaku = 0;
	ifSuukantsu = 0;
	hangNum = 0;
	afterKan = 0;
	riichiandchiiChoice = 0;
	printedChoice = 0;
	kanNum = 0;
	afterMo = 0;
	state = 0;
	turn = kyoku;
	jun = 1;
	yamaPtr = 0;
	lastPai = 0;
	jikaza[kyoku] = 0;
	jikaza[NextTurn(kyoku)] = 1;
	jikaza[NextTurn(NextTurn(kyoku))] = 2;
	jikaza[NextTurn(NextTurn(NextTurn(kyoku)))] = 3;
	for (int i = 1; i <= koutsu[0]; i++)
		koutsu[i] = -1;
	koutsu[0] = 0;
	for (int i = 1; i <= shuntsu[0]; i++)
		shuntsu[i] = -1;
	shuntsu[0] = 0;
	for (int i = 0; i < 4; i++)
	{
		chong[i].clear();
		shouPai[i].clear();
		yi[i].clean();
		ifTen[i] = false;
		menzenchin[i] = 1;
		menzenNum[i] = 0;
		riichi[i] = 0;
		kawaPtr[i] = 1;
		menzenPtr[i] = 49;
		for (int j = 0; j < 4; j++)
		{
			menzenType[i][j] = 0;
		}
		for (int j = 0; j < 136; j++)
		{
			kawa[i][j] = -1;
		}
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				menzen[i][j][k] = -1;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			availableChii[i][j] = 0;
		}
	}
	for (int i = 0; i < 14; i++)
	{
		availableRiichi[i] = 0;
	}
	srand((unsigned)time(nullptr));//随机数种子
	array<Pai, 136> card	//牌常量
	{
		 0, 0, 0, 0,	 1, 1, 1, 1,	 2, 2, 2, 2,	 3, 3, 3, 3,	 4, 4, 4,Pai(4,1),	 5, 5, 5, 5,	 6, 6, 6, 6,	 7, 7, 7, 7,	 8, 8, 8, 8,
		16,16,16,16,	17,17,17,17,	18,18,18,18,	19,19,19,19,	20,20,20,Pai(20,1),	21,21,21,21,	22,22,22,22,	23,23,23,23,	24,24,24,24,
		32,32,32,32,	33,33,33,33,	34,34,34,34,	35,35,35,35,	36,36,36,Pai(36,1),	37,37,37,37,	38,38,38,38,	39,39,39,39,	40,40,40,40,
		48,48,48,48,	56,56,56,56,	64,64,64,64,	72,72,72,72,	80,80,80,80,	    88,88,88,88,	96,96,96,96
	};//使得幺九牌、三元牌、四风牌均为8的倍数，方便后续计数
	random_shuffle(card.begin(), card.end());//生成牌山

/*	array<Pai, 136> card
	{
		64,64,64,56,              56,56,48,48,            48,72,72,72,         96,//自家
		0,1,2,16,              17,18,19,20,            21,32,33,34,         72,//下家
		0,1,2,96,              64,64,19,20,            21,32,33,34,         56,//对家
		56,56,56,16,              17,18,19,20,            21,32,33,34,         96,//上家

		72,1,64,56,       48,16,16,16,     5,1,3,2,
		6,4,2,3,        7,7,7,0,            8,8,16,1,           17,18,19,Pai(20,1),
		20,20,21,21,    21,21,22,22,        22,22,23,23,        23,23,2,2,
		1,32,24,33,    34,35,37,38,        39,24,48,40,

		3,48,48,48,	3,0,56,64,	4,64,64,64,	4,72,0,1,	2,3,4,80,	    5,88,96,88,	96,64,56,48
	};//四暗刻单骑*/

/*	array<Pai, 136> card
	{
		0,0,0,1,              2,3,4,5,            6,6,8,8,         8,//自家
		0,1,2,16,              17,18,19,20,            21,32,33,34,         7,//下家
		0,1,2,96,              64,64,19,20,            21,32,33,34,         56,//对家
		56,56,56,16,              17,18,19,20,            21,32,33,34,         96,//上家

		7,1,64,56,       48,16,16,16,     5,1,3,2,
		6,4,2,3,        7,7,7,0,            8,8,16,1,           17,18,19,Pai(20,1),
		20,20,21,21,    21,21,22,22,        22,22,23,23,        23,23,2,2,
		1,32,24,33,    34,35,37,38,        39,24,48,40,

		3,48,48,48,	3,0,56,64,	4,64,64,64,	4,72,72,80,	5,80,80,80,	    5,88,96,88,	16,16,16,48
	};*/


/*	array<Pai, 136> card
	{
		0,0,0,24,              24,24,40,40,            56,72,72,88,         88,//自家
		16,16,16,17,          17,17,18,18,        18,19,19,19,     20,//下家
	    32,32,32,33,	      33,33,34,34,        34,35,35,35,     Pai(36,1),//对家
		36,36,36,37,          37,37,38,38,        38,39,39,39,     40,//上家

		0,6,6,7,        Pai(4,1),56,1,5,     5,1,3,2,
		6,4,2,3,        7,7,7,0,            8,8,16,1,           17,18,19,Pai(20,1),
		20,20,21,21,    21,21,22,22,        22,22,23,23,        23,23,2,2,
		1,32,24,33,    34,35,37,38,        39,24,48,40,        

		3,48,48,48,	3,0,56,64,	4,64,64,64,	4,72,72,80,	5,80,80,80,	    5,88,96,88,	6,96,96,96
	};*/

	for (int i = 0; i < 136; i++)
		yama[i] = card[i];
}

void MahjongSystem::Da(int playernum, int painum)
{
	GotoShouPai(playernum, painum);

	cout << "  ";//删除
	GotoKawa(playernum);//到牌河
	shouPai[playernum][painum - 1].print();//打出
	SoundEffects(6);
	kawa[playernum][kawaPtr[playernum]] = shouPai[playernum][painum - 1];

	kawaPtr[playernum]++;

	Sleep(250);

	GotoShouPai(playernum, shouPai[playernum].size());
	cout << "  ";//移走
	lastPai = shouPai[playernum][painum - 1];
	shouPai[playernum].erase(shouPai[playernum].begin() + painum - 1);//删除
	Refresh(playernum);//排序并刷新

	state = 3;
	afterMo = 0;
	afterKan = 0;
	Sleep(250);
}
void MahjongSystem::Mo(int playernum)
{
	GotoShouPai(playernum, shouPai[playernum].size() + 1);
	if (playernum == 0) yama[yamaPtr].print();
	else cout << "口";

	shouPai[playernum].push_back(yama[yamaPtr]);
	lastPai = yama[yamaPtr];

	yamaPtr++;
	if (yamaPtr % 4 == 0) jun++;

	Gotoxy(25, 14);
	int rest = 123 - yamaPtr;
	if (rest < 10) cout << "0" << rest;
	else cout << rest;

	state = 1;
	afterMo = 1;

}
void MahjongSystem::Mo_Rinshan(int playernum)
{
	Gotoxy(79 + 2 * kanNum, 18); yama[122 + kanNum].print();
	SoundEffects(21);
	GotoShouPai(playernum, shouPai[playernum].size() + 1);
	if (playernum == 0) yama[136 - kanNum].print();
	else cout << "口";

	shouPai[playernum].push_back(yama[136 - kanNum]);
	lastPai = yama[136 - kanNum];

	state = 1;
	afterMo = 1;
	afterKan = 1;

	Sleep(400);
}

void MahjongSystem::AfterMoJudgment(int jud)//0跳过 1加杠 2暗杠 3立直 4自摸 8,13,18,23,28,33,38,43,48,53,58,63,68,73立直第jud/5-1种
{
	if (jud == 4)
	{
		Tsumo();
	}
	else if (jud % 5 == 3)
	{
		Riichi(availableRiichi[jud / 5-1]);
	}
	else if (jud == 2)
	{
		Ankan(CanAnkan());
	}
	else if (jud == 1)
	{
		Kakan(CanKakan());
	}
	else if (jud == -1)
	{
		KyuushuKyuuhai();
	}
	else state = 2;
}
void MahjongSystem::AfterDaJudgment(int jud)
{
	if (kanNum == 4 && !ifSuukantsu)//四杠流局判断
	{
		for (int i = 0; i < 4; i++)
		{
			int num = 0;
			for (int j = 0; j < 4; j++)
			{
				if (menzenType[i][j] > 2) num++;
			}
			if (num != 0 && num != 4)
			{
				Suukaikan();
			}
		}
		ifSuukantsu = 1;
	}
	if (riichi[0] && riichi[1] && riichi[2] && riichi[3])//四家立直判断
	{
		SuuchaRiichi();
	}
	if (jun == 1 && turn == 3 && !ifSuukantsu && kawa[0][1] >= 48 && kawa[0][1] <= 72 && kawa[1][1] == kawa[0][1] && kawa[2][1] == kawa[0][1] && kawa[3][1] == kawa[0][1])//四风连打判断
	{
		SuufonRenda();
	}
	if (chong[turn].size() != 0)chong[turn].clear();//每次判断新一轮铳牌时清空上一轮铳牌
	ifTen[turn] = false;   //还原听牌状态
	TenpaiJudge(turn);
	int judgement[4] = { 0,0,0,0 };//0跳过 1吃 2碰 3明杠 4荣和  6 吃第一种 11 吃第二种 16 吃第三种
	judgement[0] = jud;

	if (CanChii() && turn != 3) judgement[NextTurn(turn)] = 6;//AI吃

	for (int i = 1; i < 4; i++)//AI碰杠和
	{
		if (CanMinkan(i)) judgement[i] = 3;
		if (CanPon(i)) judgement[i] = 2;
		if (CanRon(i)) judgement[i] = 4;
	}



	bool ifron = 0;
	int temp = turn;
	for (int j = 0; j < 3; j++)//综合判断和
	{
		temp = NextTurn(temp);
		if (judgement[temp] == 4)
		{
			Ron(temp);
			ifron = 1;
		}
	}

	if (ifron) return;

	for (int i = 3; i > 0; i--)//综合判断吃碰杠
	{
		for (int j = 0; j < 4; j++)
		{
			if (judgement[j] % 5 == i)
			{
				switch (i)
				{
				case 1:Chii(judgement[j] / 5 - 1); return;
				case 2:Pon(j, CanPon(j)); return;
				case 3:Minkan(j, CanMinkan(j)); return;
//				case 4:Ron(j); return;
				default:;
				}
			}
		}
	}
	
	turn = NextTurn(turn);
	state = 0;
	return;
}
void MahjongSystem::ContinueGame(int playernum)
{
	if (ifRyuukyoku)
	{
		hunba++;
		ifRyuukyoku = 0;
		for (int i = 0; i < 4; i++)
		{
			if (ten[i] < 0)//击飞
			{
				GameOver();
				return;
			}
		}
		int maxten1 = max(ten[0], ten[1]);
		int maxten2 = max(ten[2], ten[3]);
		int maxten = max(maxten1, maxten2);
		if (bakaze == 1)
		{
			if (maxten >= 30000)
			{
				GameOver();
				return;
			}
		}
		else if (bakaze == 0 && kyoku == 3)
		{
			if (ifTen[3])
			{
				if (maxten >= 30000 && maxten == ten[3])
				{
					GameOver();
					return;
				}
				else
				{
					StartGame();
					return;
				}
			}
			else
			{
				if (maxten >= 30000)
				{
					GameOver();
					return;
				}
				else
				{
					bakaze = 1;
					kyoku = 0;
					StartGame();
					return;
				}
			}
		}
		else
		{
			if (ifTen[kyoku])
			{
				StartGame();
			}
			else
			{
				kyoku++;
				StartGame();
			}
		}

	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			if (ten[i] < 0)//击飞
			{
				GameOver();
				return;
			}
		}
		int maxten1 = max(ten[0], ten[1]);
		int maxten2 = max(ten[2], ten[3]);
		int maxten = max(maxten1, maxten2);
		if (bakaze == 1)
		{
			if (maxten >= 30000)
			{
				GameOver();
				return;
			}
		}
		else if (bakaze == 0 && kyoku == 3)
		{
			if (playernum == 3)
			{
				if (maxten >= 30000 && maxten == ten[3])
				{
					GameOver();
					return;
				}
				else
				{
					hunba++;
					StartGame();
					return;
				}
			}
			else
			{
				if (maxten >= 30000)
				{
					GameOver();
					return;
				}
				else
				{
					bakaze = 1;
					kyoku = 0;
					StartGame();
					return;
				}
			}
		}
		else
		{
			if (playernum == kyoku)
			{
				hunba++;
				StartGame();
			}
			else
			{
				kyoku++;
				hunba = 0;
				StartGame();
			}
		}
	}
	
}
void MahjongSystem::GameOver()
{
	ClearInteraction();
	Gotoxy(1, 26);
	cout << "        终局" << endl;
	Sleep(1000);
	int temp[4]{};
	for (int i = 0; i < 4; i++)
	{
		temp[i] = ten[i];
	}
	sort(temp, temp + 4);
	bool jud[4] = { 0,0,0,0 };
	for (int i = 3; i >= 0; i--)
	{
		for (int j = 0; j < 4; j++)
		{
			if (temp[i] == ten[j] && !jud[j])
			{
				if (j == 0) YELLOW;
				if (i == 3) RED;
				cout << " " << 4 - i << "位  ";
				OutputPlayer(j);
				cout << "   " << ten[j] << "点";
				RESET;
				cout << endl;
				jud[j] = 1;
				if (i == 3) SoundEffects(30);
				else SoundEffects(31);
				Sleep(900);
				break; 
			}
		}
	}
	state = 5;
	Sleep(1000);
}

void MahjongSystem::Chii(int num)
{
	ifNaku = 1;
	int nextTurn = NextTurn(turn);
	menzenchin[nextTurn] = 0;//
	menzenType[nextTurn][menzenNum[nextTurn]] = 1;
	menzen[nextTurn][menzenNum[nextTurn]][0] = lastPai;
	menzen[nextTurn][menzenNum[nextTurn]][1] = shouPai[nextTurn][availableChii[num][0]];
	menzen[nextTurn][menzenNum[nextTurn]][2] = shouPai[nextTurn][availableChii[num][1]];
	menzenNum[nextTurn]++;
	kawaPtr[turn]--;
	GotoKawa(turn);
	cout << "  ";
	SoundEffects(10);
	SoundEffects(12);
	menzenPtr[nextTurn] -= 8;
	if (nextTurn == 0)
	{
		Gotoxy(menzenPtr[0] + 2, 25);
		lastPai.print();
		shouPai[0][availableChii[num][0]].print();
		shouPai[0][availableChii[num][1]].print();
	}
	else if (nextTurn == 1)
	{
		Gotoxy(49, 24 - menzenPtr[1] / 2);
		lastPai.print();
		Gotoxy(49, 23 - menzenPtr[1] / 2);
		shouPai[1][availableChii[num][0]].print();
		Gotoxy(49, 22 - menzenPtr[1] / 2);
		shouPai[1][availableChii[num][1]].print();
	}
	else if (nextTurn == 2)
	{
		Gotoxy(44 - menzenPtr[2], 1);
		shouPai[2][availableChii[num][1]].print();
		shouPai[2][availableChii[num][0]].print();
		lastPai.print();
	}
	else
	{
		Gotoxy(1, menzenPtr[3] / 2 + 2);
		lastPai.print();
		Gotoxy(1, menzenPtr[3] / 2 + 3);
		shouPai[3][availableChii[num][0]].print();
		Gotoxy(1, menzenPtr[3] / 2 + 4);
		shouPai[3][availableChii[num][1]].print();
	}
	shouPai[nextTurn].erase(shouPai[nextTurn].begin() + availableChii[num][0]);
	shouPai[nextTurn].erase(shouPai[nextTurn].begin() + availableChii[num][1] - 1);
	Refresh(nextTurn);
	SoundEffects(11);
	turn = nextTurn;
	state = 2;
}
void MahjongSystem::Pon(int playernum, int painum)
{
	ifNaku = 1;
	menzenchin[playernum] = 0;//
	menzenType[playernum][menzenNum[playernum]] = 2;
	menzen[playernum][menzenNum[playernum]][0] = lastPai;
	menzen[playernum][menzenNum[playernum]][1] = shouPai[playernum][painum - 1];
	menzen[playernum][menzenNum[playernum]][2] = shouPai[playernum][painum];
	menzenNum[playernum]++;
	kawaPtr[turn]--;
	GotoKawa(turn);
	cout << "  ";
	SoundEffects(10);
	SoundEffects(13);
	menzenPtr[playernum] -= 8;
	if (playernum == 0)
	{
		Gotoxy(menzenPtr[0] + 2, 25);
		lastPai.print();
		shouPai[0][painum - 1].print();
		shouPai[0][painum].print();
	}
	else if (playernum == 1)
	{
		Gotoxy(49, 24 - menzenPtr[1] / 2);
		lastPai.print();
		Gotoxy(49, 23 - menzenPtr[1] / 2);
		shouPai[1][painum - 1].print();
		Gotoxy(49, 22 - menzenPtr[1] / 2);
		shouPai[1][painum].print();
	}
	else if (playernum == 2)
	{
		Gotoxy(44 - menzenPtr[2], 1);
		shouPai[2][painum].print();
		shouPai[2][painum - 1].print();
		lastPai.print();
	}
	else
	{
		Gotoxy(1, menzenPtr[3] / 2 + 2);
		lastPai.print();
		Gotoxy(1, menzenPtr[3] / 2 + 3);
		shouPai[3][painum - 1].print();
		Gotoxy(1, menzenPtr[3] / 2 + 4);
		shouPai[3][painum].print();
	}
	shouPai[playernum].erase(shouPai[playernum].begin() + painum - 1, shouPai[playernum].begin() + painum + 1);
	Refresh(playernum);
	SoundEffects(11);
	turn = playernum;
	state = 2;
}
void MahjongSystem::Minkan(int playernum, int painum)
{
	ifNaku = 1;
	kanNum++;
	menzenchin[playernum] = 0;//不再门前清
	menzenType[playernum][menzenNum[playernum]] = 3;
	menzen[playernum][menzenNum[playernum]][0] = lastPai;
	menzen[playernum][menzenNum[playernum]][1] = shouPai[playernum][painum - 1];
	menzen[playernum][menzenNum[playernum]][2] = shouPai[playernum][painum];
	menzen[playernum][menzenNum[playernum]][3] = shouPai[playernum][painum + 1];
	menzenNum[playernum]++;
	kawaPtr[turn]--;
	GotoKawa(turn);
	cout << "  ";
	SoundEffects(10);
	SoundEffects(14);
	menzenPtr[playernum] -= 10;
	if (playernum == 0)
	{
		Gotoxy(menzenPtr[0] + 2, 25);
		lastPai.print();
		shouPai[0][painum - 1].print();
		shouPai[0][painum].print();
		shouPai[0][painum + 1].print();
	}
	else if (playernum == 1)
	{
		Gotoxy(49, 24 - menzenPtr[1] / 2);
		lastPai.print();
		Gotoxy(49, 23 - menzenPtr[1] / 2);
		shouPai[1][painum - 1].print();
		Gotoxy(49, 22 - menzenPtr[1] / 2);
		shouPai[1][painum].print();
		Gotoxy(49, 21 - menzenPtr[1] / 2);
		shouPai[1][painum + 1].print();
	}
	else if (playernum == 2)
	{
		Gotoxy(42 - menzenPtr[2], 1);
		shouPai[2][painum + 1].print();
		shouPai[2][painum].print();
		shouPai[2][painum - 1].print();
		lastPai.print();
	}
	else
	{
		Gotoxy(1, menzenPtr[3] / 2 + 2);
		lastPai.print();
		Gotoxy(1, menzenPtr[3] / 2 + 3);
		shouPai[3][painum - 1].print();
		Gotoxy(1, menzenPtr[3] / 2 + 4);
		shouPai[3][painum].print();
		Gotoxy(1, menzenPtr[3] / 2 + 5);
		shouPai[3][painum + 1].print();
	}
	shouPai[playernum].erase(shouPai[playernum].begin() + painum - 1, shouPai[playernum].begin() + painum + 2);
	Refresh(playernum);
	SoundEffects(11);
	turn = playernum;


	Mo_Rinshan(playernum);
}
void MahjongSystem::Ankan(int painum)
{
	ifNaku = 1;
	sort(shouPai[turn].begin(), shouPai[turn].end());
	kanNum++;
	menzenType[turn][menzenNum[turn]] = 4;
	menzen[turn][menzenNum[turn]][0] = shouPai[turn][painum - 1];
	menzen[turn][menzenNum[turn]][1] = shouPai[turn][painum];
	menzen[turn][menzenNum[turn]][2] = shouPai[turn][painum + 1];
	menzen[turn][menzenNum[turn]][3] = shouPai[turn][painum + 2];
	menzenNum[turn]++;
	GotoShouPai(turn, shouPai[turn].size());
	cout << "  ";
	SoundEffects(10);
	SoundEffects(14);
	menzenPtr[turn] -= 10;
	if (turn == 0)
	{
		Gotoxy(menzenPtr[0] + 2, 25);
		cout << "口";
		shouPai[0][painum - 1].print();
		shouPai[0][painum].print();
		cout << "口";
	}
	else if (turn == 1)
	{
		Gotoxy(49, 24 - menzenPtr[1] / 2);
		cout << "口";
		Gotoxy(49, 23 - menzenPtr[1] / 2);
		shouPai[1][painum - 1].print();
		Gotoxy(49, 22 - menzenPtr[1] / 2);
		shouPai[1][painum].print();
		Gotoxy(49, 21 - menzenPtr[1] / 2);
		cout << "口";
	}
	else if (turn == 2)
	{
		Gotoxy(42 - menzenPtr[2], 1);
		cout << "口";
		shouPai[2][painum].print();
		shouPai[2][painum - 1].print();
		cout << "口";
	}
	else
	{
		Gotoxy(1, menzenPtr[3] / 2 + 2);
		cout << "口";
		Gotoxy(1, menzenPtr[3] / 2 + 3);
		shouPai[3][painum - 1].print();
		Gotoxy(1, menzenPtr[3] / 2 + 4);
		shouPai[3][painum].print();
		Gotoxy(1, menzenPtr[3] / 2 + 5);
		cout << "口";
	}
	shouPai[turn].erase(shouPai[turn].begin() + painum - 1, shouPai[turn].begin() + painum + 3);
	Refresh(turn);
	SoundEffects(11);


	Mo_Rinshan(turn);
}
void MahjongSystem::Kakan(int num)
{
	ifNaku = 1;
	int menzennum = num % 10;
	int painum = num / 10;

	kanNum++;
	menzenchin[turn] = 0;//不再门前清
	menzenType[turn][menzennum] = 5;

	menzen[turn][menzenNum[menzennum]][3] = shouPai[turn][painum - 1];

	SoundEffects(10);
	SoundEffects(14);

	int move = 0;
	for (int i = menzenNum[turn]; i > menzennum; i--)
	{
		if (menzenType[turn][i] == 3 || menzenType[turn][i] == 4)
		{
			move += 5;
		}
		else move += 4;
	}

	if (turn == 0)
	{
		Gotoxy(menzenPtr[0] + move * 2 - 4, 24);
		shouPai[0][painum - 1].print();
	}
	else if (turn == 1)
	{
		Gotoxy(47, 27 - menzenPtr[1] / 2 - move);
		shouPai[1][painum - 1].print();
	}
	else if (turn == 2)
	{
		Gotoxy(54 - menzenPtr[2] - move * 2, 2);
		shouPai[2][painum - 1].print();
	}
	else
	{
		Gotoxy(3, menzenPtr[3] / 2 - 1 + move);
		shouPai[3][painum - 1].print();
	}

	shouPai[turn].erase(shouPai[turn].begin() + painum - 1);

	Refresh(turn);
	SoundEffects(11);


	Mo_Rinshan(turn);
}
void MahjongSystem::Riichi(int painum)
{
	if (jun == 1 && !ifNaku)yi[turn].wriichi = 2;   //立直后参数改变
	else yi[turn].riichi = 1;
	yi[turn].riichijun = jun;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < menzenNum[i]; j++)
		{
			yi[turn].fuurotype += menzenType[i][j];
		}
	}

	if (jun == 1 && !ifNaku)
	{
		SoundEffects(16);
		Da(turn, painum + 1);
		Sleep(1200);
	}

	else
	{
		SoundEffects(15);
		Da(turn, painum + 1);
		Sleep(200);
	}



	riichi[turn] = 1;
	ten[turn] -= 1000;
	Refresh_ten();
	tenbou++;

	if (turn == 0) Gotoxy(25, 15);
	else if (turn == 1) Gotoxy(29, 13);
	else if (turn == 2) Gotoxy(25, 11);
	else Gotoxy(21, 13);

	cout << "·";
	if (turn == 0)//玩家专属立直BGM
	{
		PlaySound(MAKEINTRESOURCE(IDR_WAVE9), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC | SND_LOOP);
	}
	Refresh_tenbou();
}
void MahjongSystem::Tsumo()
{
	PlaySound(0, 0, 0);
	SoundEffects(20); Sleep(1000);
	SoundEffects(18); Sleep(1500);
	winner = turn;
	Show(turn);
	if (riichi[turn])
	{
		ShowUradorahyoujihai();
	}
	SoundEffects(19);

	hangNum++;
	Gotoxy(1, 25 + hangNum);
	cout << "     ";
	OutputPlayer(turn);
	cout << "自摸" << endl;
	Sleep(1000);

	YakuList();//执行结算

	int ban = Kanshiyou(turn);
	if (ban > 0) ban += yi[winner].dora + yi[winner].uraDora + yi[winner].redDora;//宝牌
	int bas = TenSettlement(ban);
	ten[turn] += bas + hunba * 300 + tenbou * 1000;

	hangNum++;
	if (turn == 0) YELLOW;
	OutputPlayer(turn);
	cout << "        +" << bas + hunba * 300 + tenbou * 1000 << endl;
	if (turn == 0) RESET;
	if (turn == kyoku)
	{
		for (int i = 0; i < 4; i++)
		{
			if (i != turn)
			{
				ten[i] -= bas / 3 + hunba * 100;

				hangNum++;
				if (i == 0) YELLOW;
				OutputPlayer(i);
				cout << "        -" << bas / 3 + hunba * 100 << endl;
				if (i == 0) RESET;
			}
		}

	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			if (i != turn)
			{
				if (i == kyoku)
				{
					ten[i] -= bas / 2 + hunba * 100;
					hangNum++;
					if (i == 0) YELLOW;
					OutputPlayer(i);
					cout << "        -" << bas / 2 + hunba * 100 << endl;
					if (i == 0) RESET;

				}
				else
				{
					ten[i] -= bas / 4 + hunba * 100;
					hangNum++;
					if (i == 0) YELLOW;
					OutputPlayer(i);
					cout << "        -" << bas / 4 + hunba * 100 << endl;
					if (i == 0) RESET;
				}
			}
		}

	}
	SoundEffects(29);
	tenbou = 0;
	state = 4;
}
void MahjongSystem::Ron(int playernum)
{
	PlaySound(0, 0, 0);
	SoundEffects(20); Sleep(1000);
	SoundEffects(17);
	winner = playernum;
	Show(playernum);
	if (riichi[playernum])
	{
		ShowUradorahyoujihai();
	}
	SoundEffects(19);

	hangNum++;
	Gotoxy(1, 25 + hangNum);
	cout << "   ";
	OutputPlayer(playernum);
	cout << "荣和";
	OutputPlayer(turn);
	cout << endl;
	Sleep(1000);

	YakuList();//执行结算

	int ban = Kanshiyou(playernum);
	if (ban > 0) ban += yi[winner].dora + yi[winner].uraDora + yi[winner].redDora;//宝牌
	int bas = TenSettlement(ban);
	ten[playernum] += bas + hunba * 300 + tenbou * 1000;
	ten[turn] -= bas + hunba * 300;


	hangNum++;
	if (playernum == 0) YELLOW;
	OutputPlayer(playernum);
	cout << "        +" << bas + hunba * 300 + tenbou * 1000 << endl;
	if (playernum == 0) RESET;

	hangNum++;
	if (turn == 0) YELLOW;
	OutputPlayer(turn);
	cout << "        -" << bas + hunba * 300 << endl;
	if (turn == 0) RESET;
	SoundEffects(29);
	state = 4;
	tenbou = 0;
}

void MahjongSystem::Ryuukyoku()
{
	PlaySound(0, 0, 0);
	SoundEffects(22);
	hangNum++;
	Gotoxy(1, 25 + hangNum);
	cout << "     荒牌流局" << endl;
	state = 4;
	ifRyuukyoku = 1;
	RyuukyokuSettlement();
}
void MahjongSystem::RyuukyokuSettlement()
{
	int tennum = ifTen[0] + ifTen[1] + ifTen[2] + ifTen[3];
	Gotoxy(1, 26 + hangNum);
	for (int i = 0; i < 4; i++)
	{
		hangNum++;
		OutputPlayer(i);
		if (ifTen[i])
		{
			cout << "  听牌  ";
			if (i == 0) SoundEffects(108);
			if (tennum == 1)
			{
				ten[i] += 3000;
				cout << " +3000点";
			}
			else if (tennum == 2)
			{
				ten[i] += 1500;
				cout << " +1500点";
			}
			else if (tennum == 3)
			{
				ten[i] += 1000;
				cout << " +1000点";
			}
			cout << endl;
		}
		else
		{
			cout << "  未听  ";
			if (i == 0)SoundEffects(109);
			if (tennum == 1)
			{
				ten[i] -= 1000;
				cout << " -1000点";
			}
			else if (tennum == 2)
			{
				ten[i] -= 1500;
				cout << " -1500点";
			}
			else if (tennum == 3)
			{
				ten[i] -= 3000;
				cout << " -3000点";
			}
			cout << endl;
		}
	}
	SoundEffects(29);
}
void MahjongSystem::SuufonRenda()
{
	PlaySound(0, 0, 0);
	hangNum++;
	Gotoxy(1, 25 + hangNum);
	cout << "     四风连打" << endl;
	SoundEffects(110);
	state = 4;
	ifRyuukyoku = 1;
}
void MahjongSystem::Suukaikan()
{
	PlaySound(0, 0, 0);
	hangNum++;
	Gotoxy(1, 25 + hangNum);
	cout << "     四杠散了" << endl;
	SoundEffects(111);
	state = 4;
	ifRyuukyoku = 1;
}
bool MahjongSystem::CanKyuushuKyuuhai()
{
	if (jun == 1 && !ifNaku)
	{
		MahjongSystem temp;
		temp.shouPai[turn].assign(shouPai[turn].begin(), shouPai[turn].end());
		sort(temp.shouPai[turn].begin(), temp.shouPai[turn].end());
		int kind = 0;
		for (int i = 0; i < int(shouPai[turn].size()); i++)
		{
			if (i > 0 && shouPai[turn][i] == shouPai[turn][i - 1]) continue;

			if (i % 8 == 0) kind++;
		}
		if (kind >= 9) return 1;
	}
	return 0;
}
void MahjongSystem::KyuushuKyuuhai()
{
	PlaySound(0, 0, 0);
	SoundEffects(22);
	Show(turn);
	hangNum++;
	Gotoxy(1, 25 + hangNum);
	cout << "   ";
	OutputPlayer(turn);
	cout << "九种九牌" << endl;
	SoundEffects(112);
	state = 4;
	ifRyuukyoku = 1;
}
void MahjongSystem::SuuchaRiichi()
{
	PlaySound(0, 0, 0);
	hangNum++;
	Gotoxy(1, 25 + hangNum);
	cout << "     四家立直" << endl;
	state = 4;
	ifRyuukyoku = 1;
}

void MahjongSystem::Show(int playernum)
{
	for (int i = 0; i < int(shouPai[playernum].size()); i++)
	{
		GotoShouPai(playernum, i + 1);
		shouPai[playernum][i].print();
	}
}
void MahjongSystem::ShowUradorahyoujihai()
{
	Gotoxy(79, 19);
	for (int i = 0; i <= kanNum; i++)
	{
		yama[127 + i].print();
	}
}

void MahjongSystem::YakuList()
{
	int ban = Kanshiyou(winner);
	if (ban < 0)
	{
		if (yi[winner].tenhou)
		{
			hangNum++;
			cout << "天和" << endl;
			SoundEffects(23);
			SoundEffects(81);
			Sleep(250);
		}
		if (yi[winner].chiihou)
		{
			hangNum++;
			cout << "地和" << endl;
			SoundEffects(23);
			SoundEffects(82);
			Sleep(250);
		}
		if (yi[winner].daisangen)
		{
			hangNum++;
			cout << "大三元" << endl;
			SoundEffects(23);
			SoundEffects(83);
			Sleep(250);
		}
		if (yi[winner].suuankou)
		{
			hangNum++;
			cout << "四暗刻" << endl;
			SoundEffects(23);
			SoundEffects(84);
			Sleep(250);
		}
		if (yi[winner].suuankoutanki)
		{
			hangNum++;
			cout << "四暗刻单骑" << endl;
			SoundEffects(23);
			SoundEffects(85);
			Sleep(250);
		}
		if (yi[winner].tsuuiisou)
		{
			hangNum++;
			cout << "字一色" << endl;
			SoundEffects(23);
			SoundEffects(86);
			Sleep(250);
		}
		if (yi[winner].ryuuiisou)
		{
			hangNum++;
			cout << "绿一色" << endl;
			SoundEffects(23);
			SoundEffects(87);
			Sleep(250);
		}
		if (yi[winner].chinroutou)
		{
			hangNum++;
			cout << "清老头" << endl;
			SoundEffects(23);
			SoundEffects(88);
			Sleep(250);
		}
		if (yi[winner].kokushimusou)
		{
			hangNum++;
			cout << "国士无双" << endl;
			SoundEffects(23);
			SoundEffects(89);
			Sleep(250);
		}
		if (yi[winner].koukushimusoujusanmen)
		{
			hangNum++;
			cout << "国士无双十三面" << endl;
			SoundEffects(23);
			SoundEffects(90);
			Sleep(250);
		}
		if (yi[winner].daisuushii)
		{
			hangNum++;
			cout << "大四喜" << endl;
			SoundEffects(23);
			SoundEffects(91);
			Sleep(250);
		}
		if (yi[winner].shousuushii)
		{
			hangNum++;
			cout << "小四喜" << endl;
			SoundEffects(23);
			SoundEffects(92);
			Sleep(250);
		}
		if (yi[winner].suukantsu)
		{
			hangNum++;
			cout << "四杠子" << endl;
			SoundEffects(23);
			SoundEffects(93);
			Sleep(250);
		}
		if (yi[winner].chuurenpoutou)
		{
			hangNum++;
			cout << "九莲宝灯" << endl;
			SoundEffects(23);
			SoundEffects(94);
			Sleep(250);
		}
		if (yi[winner].chuurenpoutou9)
		{
			hangNum++;
			cout << "纯正九莲宝灯" << endl;
			SoundEffects(23);
			SoundEffects(95);
			Sleep(250);
		}

		hangNum++;
		cout << "              役满" << endl;
		SoundEffects(24);
		Sleep(250);

		hangNum++;
		YELLOW; cout << "      " << TenSettlement(ban) << "点" << endl; RESET;//点数结算
		SoundEffects(25);
		Sleep(250);

		hangNum++;
		if (ban == -1) { RED; cout << "       役满" << endl; RESET; SoundEffects(28); SoundEffects(102); }
		else if (ban == -2) { RED; cout << "     两倍役满" << endl; RESET; SoundEffects(28); SoundEffects(103); }
		else if (ban == -3) { RED; cout << "     三倍役满" << endl; RESET; SoundEffects(28); SoundEffects(104); }
		else if (ban == -4) { RED; cout << "     四倍役满" << endl; RESET; SoundEffects(28); SoundEffects(105); }
		else if (ban == -5) { RED; cout << "     五倍役满" << endl; RESET; SoundEffects(28); SoundEffects(106); }
		else if (ban == -6) { RED; cout << "     六倍役满" << endl; RESET; SoundEffects(28); SoundEffects(107); }
		else { RED; cout << "     役满错错错" << endl; RESET; }
		Sleep(750);
	}
	else if (ban > 0)
	{
		DoraJudge();//判断宝牌
		ban += yi[winner].dora + yi[winner].uraDora + yi[winner].redDora;
		if (yi[winner].chanKan)
		{
			hangNum++;
			cout << "抢杠           1番" << endl;
			SoundEffects(23);
			SoundEffects(32);
		}
		if (yi[winner].rinshanKaihou)
		{
			hangNum++;
			cout << "岭上开花       1番" << endl;
			SoundEffects(23);
			SoundEffects(33);
		}
		if (yi[winner].haiteiRaoyue)
		{
			hangNum++;
			cout << "海底摸月       1番" << endl;
			SoundEffects(23);
			SoundEffects(34);
		}
		if (yi[winner].houteiRaoyui)
		{
			hangNum++;
			cout << "河底捞鱼       1番" << endl;
			SoundEffects(23);
			SoundEffects(35);
		}
		if (yi[winner].chun)
		{
			hangNum++;
			cout << "役牌  中       1番" << endl;
			SoundEffects(23);
			SoundEffects(40);
		}
		if (yi[winner].haku)
		{
			hangNum++;
			cout << "役牌  白       1番" << endl;
			SoundEffects(23);
			SoundEffects(41);
		}
		if (yi[winner].hatsu)
		{
			hangNum++;
			cout << "役牌  发       1番" << endl;
			SoundEffects(23);
			SoundEffects(42);
		}
		if (yi[winner].jikaze)
		{
			hangNum++;
			cout << "役牌  门风牌   1番" << endl;
			SoundEffects(23);
			if (jikaza[winner] == 0) SoundEffects(36);
			else if (jikaza[winner] == 1) SoundEffects(37);
			else if (jikaza[winner] == 2) SoundEffects(38);
			else SoundEffects(39);
		}
		if (yi[winner].bakaze)
		{
			hangNum++;
			cout << "役牌  场风牌   1番" << endl;
			SoundEffects(23);
			if (winner == bakaze)
			{
				switch (bakaze)
				{
				case 0:SoundEffects(43); break;
				case 1:SoundEffects(44); break;
				default:break;
				}
			}
			else
			{
				switch (bakaze)
				{
				case 0:SoundEffects(36); break;
				case 1:SoundEffects(37); break;
				default:break;
				}
			}
		}
		if (yi[winner].tanyao)
		{
			hangNum++;
			cout << "断幺九         1番" << endl;
			SoundEffects(23);
			SoundEffects(47);
		}
		if (yi[winner].iipeikou)
		{
			hangNum++;
			cout << "一杯口         1番" << endl;
			SoundEffects(23);
			SoundEffects(48);
		}
		if (yi[winner].pinfu)
		{
			hangNum++;
			cout << "平和           1番" << endl;
			SoundEffects(23);
			SoundEffects(49);
		}
		if (yi[winner].chanta)
		{
			hangNum++;
			cout << "混全带幺九     " << yi[winner].chanta << "番" << endl;
			SoundEffects(23);
			SoundEffects(50);
		}
		if (yi[winner].ittsu)
		{
			hangNum++;
			cout << "一气通贯       " << yi[winner].ittsu << "番" << endl;
			SoundEffects(23);
			SoundEffects(51);
		}
		if (yi[winner].sanshokudoujun)
		{
			hangNum++;
			cout << "三色同顺       " << yi[winner].sanshokudoujun << "番" << endl;
			SoundEffects(23);
			SoundEffects(52);
		}
		if (yi[winner].sanshokudoukou)
		{
			hangNum++;
			cout << "三色同刻       2番" << endl;
			SoundEffects(23);
			SoundEffects(53);
		}
		if (yi[winner].sankantsu)
		{
			hangNum++;
			cout << "三杠子         2番" << endl;
			SoundEffects(23);
			SoundEffects(54);
		}
		if (yi[winner].toitoi)
		{
			hangNum++;
			cout << "对对和         2番" << endl;
			SoundEffects(23);
			SoundEffects(55);
		}
		if (yi[winner].sanankou)
		{
			hangNum++;
			cout << "三暗刻         2番" << endl;
			SoundEffects(23);
			SoundEffects(56);
		}
		if (yi[winner].shousangen)
		{
			hangNum++;
			cout << "小三元         2番" << endl;
			SoundEffects(23);
			SoundEffects(57);
		}
		if (yi[winner].honroutou)
		{
			hangNum++;
			cout << "混老头         2番" << endl;
			SoundEffects(23);
			SoundEffects(58);
		}
		if (yi[winner].chiitoitsu)
		{
			hangNum++;
			cout << "七对子         2番" << endl;
			SoundEffects(23);
			SoundEffects(59);
		}
		if (yi[winner].junchan)
		{
			hangNum++;
			cout << "纯全带幺九     " << yi[winner].junchan << "番" << endl;
			SoundEffects(23);
			SoundEffects(60);
		}
		if (yi[winner].honitsu)
		{
			hangNum++;
			cout << "混一色         " << yi[winner].honitsu << "番" << endl;
			SoundEffects(23);
			SoundEffects(61);
		}
		if (yi[winner].ryanpeikou)
		{
			hangNum++;
			cout << "二杯口         3番" << endl;
			SoundEffects(23);
			SoundEffects(62);
		}
		if (yi[winner].chinitsu)
		{
			hangNum++;
			cout << "清一色         " << yi[winner].chinitsu << "番" << endl;
			SoundEffects(23);
			SoundEffects(63);
		}
		if (yi[winner].riichi)
		{
			hangNum++;
			cout << "立直           1番" << endl;
			SoundEffects(23);
			SoundEffects(64);
		}
		if (yi[winner].wriichi)
		{
			hangNum++;
			cout << "两立直         2番" << endl;
			SoundEffects(23);
			SoundEffects(65);
		}
		if (yi[winner].menzenchintsumohou)
		{
			hangNum++;
			cout << "门前清自摸和   1番" << endl;
			SoundEffects(23);
			SoundEffects(66);
		}
		if (yi[winner].ippatsu)
		{
			hangNum++;
			cout << "一发           1番" << endl;
			SoundEffects(23);
			SoundEffects(67);
		}
		if (yi[winner].dora)
		{
			hangNum++;
			cout << "宝牌           " << yi[winner].dora << "番" << endl;
			SoundEffects(23);
			if (yi[winner].dora == 1) SoundEffects(68);
			else if (yi[winner].dora == 2) SoundEffects(69);
			else if (yi[winner].dora == 3) SoundEffects(70);
			else if (yi[winner].dora == 4) SoundEffects(71);
			else if (yi[winner].dora == 5) SoundEffects(72);
			else if (yi[winner].dora == 6) SoundEffects(73);
			else if (yi[winner].dora == 7) SoundEffects(74);
			else if (yi[winner].dora == 8) SoundEffects(75);
			else if (yi[winner].dora == 9) SoundEffects(76);
			else if (yi[winner].dora == 10) SoundEffects(77);
			else if (yi[winner].dora == 11) SoundEffects(78);
			else if (yi[winner].dora == 12) SoundEffects(79);
			else if (yi[winner].dora >= 13) SoundEffects(80);
		}
		if (yi[winner].redDora)
		{
			hangNum++;
			cout << "红宝牌         " << yi[winner].redDora << "番" << endl;
			SoundEffects(23);
			if (yi[winner].redDora == 1) SoundEffects(68);
			else if (yi[winner].redDora == 2) SoundEffects(69);
			else if (yi[winner].redDora == 3) SoundEffects(70);
			else if (yi[winner].redDora == 4) SoundEffects(71);
			else if (yi[winner].redDora == 5) SoundEffects(72);
			else if (yi[winner].redDora == 6) SoundEffects(73);
			else if (yi[winner].redDora == 7) SoundEffects(74);
			else if (yi[winner].redDora == 8) SoundEffects(75);
			else if (yi[winner].redDora == 9) SoundEffects(76);
			else if (yi[winner].redDora == 10) SoundEffects(77);
			else if (yi[winner].redDora == 11) SoundEffects(78);
			else if (yi[winner].redDora == 12) SoundEffects(79);
			else if (yi[winner].redDora >= 13) SoundEffects(80);
		}
		if (riichi[winner])
		{
			hangNum++;
			cout << "里宝牌         " << yi[winner].uraDora << "番" << endl;
			SoundEffects(23);
			if (yi[winner].uraDora == 0) Sleep(500);
			else if (yi[winner].uraDora == 1) SoundEffects(68);
			else if (yi[winner].uraDora == 2) SoundEffects(69);
			else if (yi[winner].uraDora == 3) SoundEffects(70);
			else if (yi[winner].uraDora == 4) SoundEffects(71);
			else if (yi[winner].uraDora == 5) SoundEffects(72);
			else if (yi[winner].uraDora == 6) SoundEffects(73);
			else if (yi[winner].uraDora == 7) SoundEffects(74);
			else if (yi[winner].uraDora == 8) SoundEffects(75);
			else if (yi[winner].uraDora == 9) SoundEffects(76);
			else if (yi[winner].uraDora == 10) SoundEffects(77);
			else if (yi[winner].uraDora == 11) SoundEffects(78);
			else if (yi[winner].uraDora == 12) SoundEffects(79);
			else if (yi[winner].uraDora >= 13) SoundEffects(80);
		}
		hangNum++;
		cout << "               " << ban << "番" << endl;//番数符数
		SoundEffects(24);

		hangNum++;
		YELLOW; cout << "      " << TenSettlement(ban) << "点" << endl; RESET;//点数结算
		SoundEffects(25);
		Sleep(250);

		hangNum++;
		if (ban == 5) { RED; cout << "       满贯" << endl; RESET; SoundEffects(26); SoundEffects(98); Sleep(250); }
		else if (ban >= 6 && ban <= 7) { RED; cout << "       跳满" << endl; RESET; SoundEffects(26); SoundEffects(99); Sleep(250); }
		else if (ban >= 8 && ban <= 10) { RED; cout << "       倍满" << endl; RESET; SoundEffects(27); SoundEffects(100); Sleep(500); }
		else if (ban >= 11 && ban <= 12) { RED; cout << "      三倍满" << endl; RESET; SoundEffects(27); SoundEffects(101); Sleep(500); }
		else if (ban >= 13) { RED; cout << "     累计役满" << endl; RESET; SoundEffects(28); SoundEffects(97); Sleep(750); }
	}
	else
	{
		hangNum++;
		RED; cout << "无役" << endl; RESET;
	}
}
void MahjongSystem::DoraJudge()
{
	for (int i = 122; i <= 122 + kanNum; i++)//宝牌红宝牌判断
	{
		Pai nextpai = NextPai(yama[i]);
		for (int j = 0; j < shouPai[winner].size(); j++)
		{
			if (shouPai[winner][j] == nextpai)
			{
				yi[winner].dora++;
			}
			if (shouPai[winner][j].redDora)
			{
				yi[winner].redDora++;
			}
		}

		for (int j = 0; j < menzenNum[winner]; j++)
		{
			if (menzenType[winner][j] < 3)
			{
				for (int k = 0; k < 3; k++)
				{
					if (menzen[winner][j][k] == nextpai)
					{
						yi[winner].dora++;
					}
					if (menzen[winner][j][k].redDora)
					{
						yi[winner].redDora++;
					}
				}
			}
			else
			{
				for (int k = 0; k < 4; k++)
				{
					if (menzen[winner][j][k] == nextpai)
					{
						yi[winner].dora++;
					}
					if (menzen[winner][j][k].redDora)
					{
						yi[winner].redDora++;
					}
				}
			}
		}
	}

	if (riichi[winner])
	{
		for (int i = 127; i <= 127 + kanNum; i++)//里宝牌判断
		{
			Pai nextpai = NextPai(yama[i]);
			for (int j = 0; j < shouPai[winner].size(); j++)
			{
				if (shouPai[winner][j] == nextpai)
				{
					yi[winner].uraDora++;
				}
			}

			for (int j = 0; j < menzenNum[winner]; j++)
			{
				if (menzenType[winner][j] < 3)
				{
					for (int k = 0; k < 3; k++)
					{
						if (menzen[winner][j][k] == nextpai)
						{
							yi[winner].uraDora++;
						}
					}
				}
				else
				{
					for (int k = 0; k < 4; k++)
					{
						if (menzen[winner][j][k] == nextpai)
						{
							yi[winner].uraDora++;
						}
					}
				}
			}
		}
	}

	return;
}
int MahjongSystem::TenSettlement(int ban)
{
	int bas = 0;
	if (ban < 0)
	{
		if (ban == -1) bas = 8000;
		else if (ban == -2) bas = 16000;
		else if (ban == -3) bas = 24000;
		else if (ban == -4) bas = 32000;
		else if (ban == -5) bas = 40000;
		else if (ban == -6) bas = 48000;
		else bas = 0;
	}
	else
	{
		if (ban == 1) bas = 250;/////temp
		else if (ban == 2) bas = 500;
		else if (ban == 3) bas = 1000;
		else if (ban == 4) bas = 2000;
		else if (ban == 5) bas = 2000;
		else if (ban == 6 || ban == 7) bas = 3000;
		else if (ban >= 8 && ban <= 10) bas = 4000;
		else if (ban == 11 || ban == 12) bas = 6000;
		else if (ban >= 13)bas = 8000;
		else bas = 0;
	}
	if (winner == kyoku) return bas * 6;
	else return bas * 4;
}

//洪天韵
/**************************************************************************/
//钱臻

int MahjongSystem::link(int playernum, int painum)
{
	if (painum + 1 < int(shouPai[playernum].size()))
		return shouPai[playernum][painum + 1].id - shouPai[playernum][painum].id;
	else return 10000;   //随便返回一个尽可能大的数
}

int MahjongSystem::CanChii()		//吃判断
{
	int nextTurn = NextTurn(turn);//判断吃的玩家(当前玩家的下家)
	if (riichi[nextTurn]) return 0;
	if (ischii(nextTurn))
	{
		Pai p_lastKawa[4];          //lastKawa附近的四张可能与其构成顺子的牌
		for (int j = 0; j < 4; j++)
		{
			if (j < 2)
				p_lastKawa[j].id = lastPai.id - 2 + j;
			else
				p_lastKawa[j].id = lastPai.id - 1 + j;
		}
		int index[4] = { -1,-1,-1,-1 };      //存放可能构成顺子的牌的下标
		int i = 0;                 //存放存在的吃法的种数
		for (int j = 0; j < 4; j++)
		{
			vector<Pai>::iterator p_tab = find(this->shouPai[nextTurn].begin(), this->shouPai[nextTurn].end(), p_lastKawa[j]);//在手牌中查找可能构成顺子的牌
			if (p_tab != shouPai[nextTurn].end()) index[j] = p_tab - shouPai[nextTurn].begin();
		}
		for (int j = 0; j < 3; j++)
		{
			if ((index[j] != -1) && (index[j + 1] != -1))
			{
				availableChii[i][0] = index[j]; //手牌中第一张牌的下标
				availableChii[i][1] = index[j + 1]; //手牌中第二张牌的下标
				availableChii[i][2] = 3 - j;        //吃的牌在顺子的第几张（0表示该吃法不存在）
				i++;
			}
		}

		return i;
	}
	else return 0;
}//lastKawa、availableChii[i][0]、availableChii[i][1]
int MahjongSystem::CanPon(int playernum)		//碰判断
{
	if (riichi[playernum]) return 0;
	if (playernum == turn) return 0;
	if (ispon(playernum))
	{
		int painum = 0;           //记录手牌要碰的牌的位置
		for (int i = 0; i < int(shouPai[playernum].size()); i++)
			if ((link(playernum, i) == 0) && (lastPai == shouPai[playernum][i]))
			{
				painum = i + 1;
				break;
			}
		return painum;                          //碰的牌为lastkKawa、shouPai[playernum][painum]、shouPai[playernum][painum+1]
	}
	else return 0;
}
int MahjongSystem::CanMinkan(int playernum)   //明杠判断
{
	if (kanNum == 4) return 0;
	if (riichi[playernum]) return 0;
	if (playernum == turn) return 0;
	if (ispon(playernum))
	{
		int a[14]{};
		for (int j = 0; j < int(shouPai[playernum].size()); j++)
			a[j] = link(playernum, j);
		for (int j = 0; j < int(shouPai[playernum].size()) - 1; j++)
			if ((a[j] == 0) && (a[j + 1] == 0))
			{
				if (lastPai == shouPai[playernum][j])
				{
					return j + 1;
					break;
				}                         //大明杠  手牌shouPai[][j-1]~shouPai[][j+1]加上lastKawa
	//			j += 2;
			}
		return 0;    //0表示无大明杠
	}
	else return 0;
}
int MahjongSystem::CanAnkan()     //暗杠判断,一次判断一个暗杠
{
	if (kanNum == 4) return 0;
	int a[14]{};
	int tab = -1;  //-1表示没有暗杠

	MahjongSystem temp_shouPai;
	temp_shouPai.shouPai[turn].assign(shouPai[turn].begin(), shouPai[turn].end()); //临时存储手牌，用于排序查找
	sort(temp_shouPai.shouPai[turn].begin(), temp_shouPai.shouPai[turn].end()); //排序
	for (int j = 0; j < int(temp_shouPai.shouPai[turn].size()) ; j++)
		a[j] = temp_shouPai.link(turn, j);
	for (int j = 3; j <int(temp_shouPai.shouPai[turn].size()); j++)
		if ((a[j-3] == 0) && (a[j -2] == 0) && (a[j -1] == 0))
		{
			tab = j-3;
			break;
		}
	if ((riichi[turn])&&(tab!=-1))//立直时暗杠不能改变听的牌
	{
		vector<Pai>tempchong = chong[turn];//记录暗杠前听的牌
		temp_shouPai.shouPai[turn].erase(temp_shouPai.shouPai[turn].begin() + tab, temp_shouPai.shouPai[turn].begin() + tab + 4);
		temp_shouPai.TenpaiJudge(turn);
		if (temp_shouPai.chong[turn].size() != tempchong.size())goto end;
		else 
		{
			for (int i = 0; i < int(tempchong.size()); i++)
			{
				if (tempchong[i] == temp_shouPai.chong[turn][i])
					continue; 
				else 
				{
					goto end;
				}
			}
		}
	}
	return tab + 1;        //暗杠的牌为第tab+1张
	end:return 0;
}
int MahjongSystem::CanKakan()		//加杠判断
{
	if (kanNum == 4) return 0;
	Pai kou;
	for (int i = 0; i < menzenNum[turn]; i++)
	{
		if (menzenType[turn][i] == 2)
		{
			kou = menzen[turn][i][0];              //将刻子牌提出

		/*vector<Pai>::iterator p_tab = find(shouPai[turn].begin(), shouPai[turn].end(), kou);  //在原手牌中查找这张牌，返回迭代器
		if (p_tab != shouPai[turn].end())                                                           //如果没找到这张牌就找下一个刻子对应的牌
		{
			int location = p_tab - shouPai[turn].begin();
			return kouNum + (location + 1) * 10;  //个位数为副露编号（从0开始），location+1为第几张手牌（从1开始）
		}*/
			for (int j = 0; j < int(shouPai[turn].size()); j++)
				if (shouPai[turn][j] == kou)
					return (j+1) * 10 + i;//j+1是painum，i是menzennum
		}
	}
	return 0;
}
int MahjongSystem::CanRiichi()//立直判断    		                     
{
	if (riichi[turn]) return 0;
	if (ten[turn] < 1000) return 0;
	else
	{
		MahjongSystem temp;
		temp.shouPai[turn].assign(shouPai[turn].begin(), shouPai[turn].end());
		sort(temp.shouPai[turn].begin(), temp.shouPai[turn].end());
		int n = 0;
		int index = 0;
		for (int j = 0; j < int(temp.shouPai[turn].size()); j++)//找到摸到的牌在排序后的手牌中的位置
		{
			if (temp.shouPai[turn][j] == yama[yamaPtr - 1])break;
			else index++;
		}
		Pai pai;
		for (int i = 0; i < int(shouPai[turn].size()); i++)
		{
			pai = temp.shouPai[turn][i];
			temp.shouPai[turn].erase(temp.shouPai[turn].begin() + i);
			temp.menzenNum[turn] = menzenNum[turn];
			if (temp.chong[turn].size() != 0)temp.chong[turn].clear();//每次判断新一轮铳牌时清空上一轮铳牌
			temp.ifTen[turn] = false;   //还原听牌状态
			temp.TenpaiJudge(turn);
			if ((menzenchin[turn]) && (temp.ifTen[turn]))      //能否立直的条件
			{
				if (index == i)
				{
					availableRiichi[n] = shouPai[turn].size() - 1;
					n++;
				}
				else if (index > i)
				{
					availableRiichi[n] = i;
					n++;
				}
				else
				{
					availableRiichi[n] = i - 1;
					n++;
				}
				temp.ifTen[turn] = false;
			}
		 temp.shouPai[turn].insert(temp.shouPai[turn].begin() + i, pai);
		}

		
		if (n != 0) { ifTen[turn] = true;  	//for (int i = 0; i < chong[turn].size(); i++) chong[turn][i].print();
		}
		return n;
	}
}
bool MahjongSystem::CanTsumo()			//自摸判断
{
	if (ifTen[turn])
	{
		for (int j = 0; j < int(chong[turn].size()); j++)
			if (lastPai== chong[turn][j])
			{
				LastJudge(turn, lastPai);
				hou(turn);
				if ((yi[turn].chiitoitsu) || (yi[turn].kokushimusou) || (yi[turn].koukushimusoujusanmen))
					return true;
				if (Kanshiyou(turn)!=0)
					return true;
			}
	}
	return false;
}
bool MahjongSystem::CanRon(int playernum)   //荣和判断
{
	
	if (turn == playernum) return false;
	if (ifTen[playernum])
	{
		int Num = chong[playernum].size();
		for (int j = 0; j < Num; j++)
			if (lastPai == chong[playernum][j])
			{
				LastJudge(playernum, lastPai);
				hou(playernum);
				if ((yi[playernum].chiitoitsu) || (yi[playernum].kokushimusou) || (yi[playernum].koukushimusoujusanmen))return true;
				if (Kanshiyou(playernum))
					return true;
			}
	}
	return false;
}

void MahjongSystem::clear()
{
	quetou = -1;
	if (shuntsu[0] != 0)
	{
		for (int i = 1; i <= shuntsu[0]; i++) shuntsu[i] = -1;
		shuntsu[0] = 0;
	}
	if (koutsu[0] != 0)
	{
		for (int i = 1; i <= koutsu[0]; i++) koutsu[i] = -1;
		koutsu[0] = 0;
	}
};
bool MahjongSystem::IsCommonHu(int playernum)
{
	//前提：牌已经排好序，不含已碰牌和已杠牌，所以牌数应该是3n+2
	//过程：先找出一对雀头，然后再寻找刻子牌和顺子牌，直到剩余牌为0才表示可和牌，否则不能和牌

	//记录将牌位置
	size_t que_location = -1;
	vector<Pai> pai;
	while (true)
	{
		auto i = que_location + 1;
		if (i >= shouPai[playernum].size())
		{
			return false;
		}

		pai = shouPai[playernum];
		if (que_location != -1)
		{
			if (pai[i] == pai[que_location])
			{
				++i;
			}
		}

		//寻找雀头位置，记录将牌第二个，并擦除该两牌
		que_location = -1;
		for (; i < pai.size() - 1; ++i)
		{
			if (pai[i] == pai[i + 1])
			{
				que_location = i + 1;
				pai.erase(pai.begin() + i, pai.begin() + i + 2);
				break;
			}
		}
		if (que_location == -1)
		{
			//没有雀头，不能和牌
			return false;
		}

		//剩下的牌数是3的倍数
		//从左起第1张牌开始，它必须能组成刻子牌或者顺子牌才能和，否则不能和
		while (pai.size() >= 3)
		{
			if (pai[0] == pai[1] && pai[0] == pai[2])
			{
				//找到刻子牌并移除
				pai.erase(pai.begin(), pai.begin() + 3);
			}
			else
			{
				auto it1 = find(pai.begin() + 1, pai.end(), pai[0] + 1);
				if (it1 != pai.end())
				{
					auto it2 = find(it1 + 1, pai.end(), pai[0] + 2);
					if (it2 != pai.end())
					{
						//找到顺子牌并移除
						pai.erase(it2);
						pai.erase(it1);
						pai.erase(pai.begin());
					}
					else
					{
						break;
					}
				}
				else
				{
					break;
				}
			}
		}

		if (pai.empty())
		{
			break;
		}
	}

	return true;
}
void MahjongSystem::Divide(int playernum)   //分离手牌中的顺子、刻子、雀头
{
	clear();
	//运用与ISCOMMONHU相同的思想分离
	size_t que_location = -1;
	vector<Pai> pai;
	while (true)
	{
	auto i = que_location + 1;

		pai = shouPai[playernum];
		if (que_location != -1)
		{
			if (pai[i] == pai[que_location])
			{
				++i;
			}
		}

		//寻找雀头位置，记录组成雀头的第二张牌，并擦除该两牌
		for (; i < pai.size() - 1; ++i)
		{
			clear();
			if (pai[i] == pai[i + 1])
			{
				quetou = pai[i].id;//记录雀头的id
				que_location = i + 1;
				pai.erase(pai.begin() + i, pai.begin() + i + 2);
				break;
			}
		}

		//剩下的牌数是3的倍数
		//从左起第1张牌开始，它必须能组成刻子牌或者顺子牌才能和，否则不能和
		while (pai.size() >= 3)
		{
			if (pai[0] == pai[1] && pai[0] == pai[2])
			{
				//找到刻子牌并移除
				koutsu[0]++;//记录刻子数量加一////
				koutsu[koutsu[0]] = pai[0].id;//记录刻子的id
				pai.erase(pai.begin(), pai.begin() + 3);
			}
			else
			{
				auto it1 = find(pai.begin() + 1, pai.end(), pai[0] + 1);
				if (it1 != pai.end())
				{
					auto it2 = find(it1 + 1, pai.end(), pai[0] + 2);
					if (it2 != pai.end())
					{
						//找到顺子牌并移除
						shuntsu[0]++;//记录顺子的数量加一 
						shuntsu[shuntsu[0]] = pai[0].id;//记录顺子起始的牌的id
						pai.erase(it2);
						pai.erase(it1);
						pai.erase(pai.begin());
					}
					else
					{
						clear();
						break;
					}
				}
				else
				{
					clear();
					break;
				}
			}
		}

		if (pai.empty())
		{
			break;
		}
	}

	return;
}
void MahjongSystem::LastJudge(int playernum,Pai last)  //判断和的役种以及打点[考虑役种] 
{
	yi[playernum].miclean();
	MahjongSystem temp_table;
	if (playernum == turn)                   //如果和的牌为摸的牌，则直接对手牌排序
	{
		temp_table.shouPai[playernum].assign(shouPai[playernum].begin(), shouPai[playernum].end());
		sort(temp_table.shouPai[playernum].begin(), temp_table.shouPai[playernum].end());
	}
	else                         //如果和的牌为别家打的牌，则将打的牌放入手牌中进行排序
	{
		temp_table.shouPai[playernum].assign(shouPai[playernum].begin(), shouPai[playernum].end());
		temp_table.shouPai[playernum].push_back(last);
		sort(temp_table.shouPai[playernum].begin(), temp_table.shouPai[playernum].end());
	}
	

	int a[14]{};    //存放手牌间关系
	int fuuroKoutsu=0;
	for (int j = 0; j < 4; j++) if ((menzenType[playernum][j] == 2) || (menzenType[playernum][j] == 3)) fuuroKoutsu++;
	int fuuroKantsu=0;
	for (int j = 0; j < 4; j++) if ((menzenType[playernum][j] >= 3)) fuuroKantsu++;
	int fuuroJun=0;
	for (int j = 0; j < 4; j++) if ((menzenType[playernum][j] == 1)) fuuroJun++;
	
	temp_table.Divide(playernum);
	
	//提取顺子
	vector<int> shun;//存储手牌+副露的顺子的第一张牌;
	for (int i = 0; i < menzenNum[playernum]; i++)
		if (menzenType[playernum][i] == 1)
		{
			int begin = menzen[playernum][i][0].id;
			for (int j = 1; j < 3; j++)
			{
				if (begin > menzen[playernum][i][j].id)
					begin = menzen[playernum][i][j].id;
			}
			shun.push_back(begin);
		}
	if (temp_table.shuntsu[0] != 0)for (int i = 1; i <= temp_table.shuntsu[0]; i++) shun.emplace_back(temp_table.shuntsu[i]);////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	sort(shun.begin(), shun.end());    //取出所有的顺子的第一张牌的id并排序
	
	//提取刻子
	vector<int> kou;//存储手牌+副露的刻子的牌;
	for (int i = 0; i < menzenNum[playernum]; i++)
		if ((menzenType[playernum][i] >= 2))
		{
			kou.push_back(menzen[playernum][i][0].id);
		}
	if (temp_table.koutsu[0] != 0)for (int i = 1; i <= temp_table.koutsu[0]; i++) kou.emplace_back(temp_table.koutsu[i]);
	sort(kou.begin(), kou.end());    //取出所有的刻子的牌的id并排序		

	//提取雀头
	quetou = temp_table.quetou;

	//七对子、国士无双、国士无双十三面已经在tenpai_judge中判断过

	//门前清自摸和
	if(playernum==turn)if (menzenchin[turn]) yi[turn].menzenchintsumohou = 1;

	//判断一杯口、二杯口
	if (menzenNum[playernum] == 0)
	{
		int pei = 0;
		if (shun.size() < 2) goto peiend;
		for (int i = 0; i < shun.size()-1; i++)
		{
			int j = shun[i];
			for (int k = i + 1; k < shun.size();k++)if(j==shun[k])pei++;
		}
		if (pei == 2)yi[playernum].ryanpeikou = 3;
		else if (pei != 0)yi[playernum].iipeikou = 1;
	}
peiend:
	int skou=0;//手牌（不算铳牌）中刻子的数量，即暗刻/暗杠的数量
	for (int i = 0; i < menzenNum[playernum]; i++)if (menzenType[playernum][i] == 4)skou++;
	//判断三暗刻、四暗刻、四暗刻单骑
	if (playernum == turn) 
	{
		if (skou+temp_table.koutsu[0] == 4) 
		{
			if (quetou == lastPai.id)yi[playernum].suuankoutanki = 2;
			else yi[playernum].suuankou = 1;
		}
		else if (skou+temp_table.koutsu[0] == 3)yi[playernum].sanankou = 2;
	}
	else if(shouPai[playernum].size()>=3)
	{
		for (int i = 0; i < shouPai[playernum].size() - 2; i++)
			if ((shouPai[playernum][i] == shouPai[playernum][i + 1]) && (shouPai[playernum][i + 1] == shouPai[playernum][i + 2]))
			{
				skou++;
				i = i + 2;
			}
		if (skou == 3)yi[playernum].sanankou = 2;
		else if (skou == 4)
			if (quetou == lastPai.id)yi[playernum].suuankoutanki = 2;
			else yi[playernum].suuankou = 1;
	}
	//判断三杠子、四杠子
	if (fuuroKantsu == 3)yi[playernum].sankantsu = 2;
	else if (fuuroKantsu == 4)yi[playernum].suukantsu = 1;

	

	//判断立直、W立直、一发
	int FuuroType=0;
	for (int i=0; i < 4; i++)
	{
		for (int j = 0; j < menzenNum[i]; j++)
		{
			FuuroType += menzenType[i][j];
		}
	}
	if ((yi[playernum].riichi) || (yi[playernum].wriichi))
		if ((yi[playernum].riichijun == jun) && (FuuroType == yi[playernum].fuurotype)) yi[playernum].ippatsu = 1;

	//判断平和
	if ((menzenchin[playernum])  && (kou.size() == 0)&&(lastPai.id!=quetou))
		if ((quetou != 48 + bakaze * 8) && (quetou != 48 + jikaza[playernum] * 8) && (quetou < 80))
		{
			vector<Pai>::iterator index1 = find(chong[playernum].begin(), chong[playernum].end(), lastPai-3);
			vector<Pai>::iterator index2 = find(chong[playernum].begin(), chong[playernum].end(), lastPai+3);
			if ((index1 != chong[playernum].end()) || (index2 != chong[playernum].end()))
				if ((index1 != chong[playernum].end()) && (index2 != chong[playernum].end())) goto pinend;
				else yi[playernum].pinfu = 1;
		}
	pinend:
	//判断一气通贯、三色同顺
	if (fuuroJun + temp_table.shuntsu[0] >= 3)
	{
		for (int i = 0; i < fuuroJun + temp_table.shuntsu[0] - 2; i++)
			if ((shun[i + 2] - shun[i + 1] == 3) && (shun[i + 1] - shun[i] == 3))//一气通贯
			{
				if (menzenchin[playernum]) yi[playernum].ittsu = 2;
				else yi[playernum].ittsu = 1;
			}
			else if ((shun[i + 2] - shun[i + 1] == 16) && (shun[i + 1] - shun[i] == 16))//三色同顺
			{
				if (menzenchin[playernum]) yi[playernum].sanshokudoujun = 2;
				else yi[playernum].sanshokudoujun = 1;
			}
	}

	//判断混全带幺九、纯全带幺九
	bool chun = true;
	for (int i = 0; i < int(shun.size()); i++)   //判断顺子
	{
		if ((shun[i]%8 != 0) && (shun[i]%8 != 6))  goto daiend; 
		if ( shun[i] >= 48)chun = false;
	}
	for (int i = 0; i < int(kou.size()); i++)//判断刻子
	{
		if (kou[i] % 8 != 0)  goto daiend; 
		if ( kou[i] >= 48)chun = false;
	}
	if (quetou % 8 != 0) goto daiend; 
	if (quetou >= 48)chun = false;
	if (chun)
		if (menzenchin[playernum])
			yi[playernum].junchan = 3;
		else yi[playernum].junchan = 2;
	else if(menzenchin[playernum])
		yi[playernum].chanta = 2;
	else yi[playernum].chanta = 1;
daiend:

	//判断对对和、混老头、清老头
	if (skou + fuuroKoutsu == 4)
	{
		yi[playernum].toitoi = 2;
		bool is_laotou = true;
		bool is_chin = true;
		for (int i = 0; i < skou + fuuroKoutsu; i++)
			if (kou[i] % 8 != 0)
			{
				is_laotou = false;
				break;
			}
			else if (kou[i] >= 48)
			{
				is_chin = false;
			}
		if ((is_chin) && (is_laotou)) yi[playernum].chinroutou = 1;
		else if (is_laotou) {
			yi[playernum].honroutou = 2;
			yi[playernum].chanta = 0;
		}
	}

	//判断断幺九
	for (int i = 0; i < int(shun.size()); i++)
		if ((shun[i] % 8 == 0)||(shun[i]%8==6))
			goto duanyaoend;
	for (int i = 0; i < int(kou.size()); i++)
		if (kou[i] % 8 == 0)
			goto duanyaoend;
	if (quetou % 8 == 0) goto duanyaoend;
	yi[playernum].tanyao = 1;
duanyaoend:


	//判断小三元、大三元、小四喜、大四喜、役牌
	int san=0;//记录三元牌的刻子数量
	int feng=0;//记录四风牌的刻子数量
	
	for (int i = 0; i < int(kou.size()); i++)
		if (kou[i] >= 48) 
			if (kou[i] < 80)
			{
				feng++;
				if (kou[i] == bakaze * 8 + 48)yi[playernum].bakaze++;
				if (kou[i] == jikaza[playernum] * 8 + 48)yi[playernum].jikaze++;
			}
			else
			{
				san++;
				if(kou[i]==88)
				yi[playernum].haku++;
				if(kou[i]==96)
				yi[playernum].hatsu++;
				if (kou[i] == 80)
				yi[playernum].chun++;
			}
	if ((san == 2) && (quetou >= 80)) yi[playernum].shousangen = 2;
	if (san == 3) yi[playernum].daisangen = 1;
	if (feng == 4)yi[playernum].daisuushii = 2;
	if ((feng == 3) && (quetou < 80) && (quetou >= 48))yi[playernum].shousuushii = 1;



	//判断三色同刻
	vector<int> kouS;
	for (int i = 0; i < kou.size(); i++) if (kou[i] < 48)kouS.push_back(kou[i]);
	if (kouS.size() == 3)
			if ((kouS[2] - kouS[1] == 16) && (kouS[1] - kouS[0] == 16))
				yi[playernum].sanshokudoukou = 2;
	if(kouS.size()==4)
		if(((kouS[3]-kouS[1]==16)&&(kouS[1]-kouS[0]==16))||((kouS[3]-kouS[2]==16)&&(kouS[2]-kouS[0]==16)))
			yi[playernum].sanshokudoukou = 2;
	//判断混一色、清一色
	vector<int> omit(kou);    //将代表顺子、刻子、雀头的牌都存入同一数组
	omit.insert(omit.end(), shun.begin(), shun.end());
	omit.push_back(temp_table.quetou);
	int color[4]{}; //0123万、筒、条、字
	for (int i = 0; i < int(omit.size()); i++)
	{
		if (omit[i] <= 8) color[0]++;
		else if (omit[i] <= 24) color[1]++;
		else if (omit[i] <= 40) color[2]++;
		else color[3]++;
	}
	if ((omit.size() == color[0]) || (omit.size() == color[1]) || (omit.size() == color[2]))
	{
		if (menzenchin[playernum])yi[playernum].chinitsu = 6;
		else yi[playernum].chinitsu = 5;
	}
	else if (((color[0] == 0) && (color[1] == 0)) || ((color[0] == 0) && (color[2] == 0)) || ((color[2] == 0) && (color[1] == 0)))
	{
		if (menzenchin[playernum])yi[playernum].honitsu = 3;
		else yi[playernum].honitsu = 2;
	}
	//判断绿一色
	bool isgreen=true;
	vector<Pai> tile = temp_table.shouPai[playernum];
	for (int i = 0; i < menzenNum[playernum]; i++)
	{
		int j = 0;
		while ((menzen[playernum][i][j].id != -1)&&(j<=3))
		{
			tile.push_back(menzen[playernum][i][j]);
				j++;
		}
	}
	for (int i = 0; i < int(tile.size()); i++)
		if ((tile[i].id != 33) && (tile[i].id != 34) && (tile[i].id != 35))
			if ((tile[i].id != 37) && (tile[i].id != 39) && (tile[i].id != 96))
			{
				isgreen = false; break;
			}

			if(isgreen)yi[playernum].ryuuiisou = 1;

	//判断字一色
	bool is = true;//记录是否只含有字牌
	for (int i = 0; i < int(tile.size()); i++)
		if (tile[i].id < 48) is = false;
	if (is)yi[playernum].tsuuiisou = 1;

	
	//判断九莲宝灯、纯正九莲宝灯
	bool isbao = false;
	Pai duo;
	for (int j = 0; j < 3; )
	{
		vector<Pai>Tile = temp_table.shouPai[playernum];
		for (int i = 0; i < 3; i++)
		{
			auto index = find(Tile.begin(), Tile.end(), j * 16 + 0);
			if (index != Tile.end()) Tile.erase(index);
			else
			{
				if (j == 2)goto baoend;
				else goto midend;
			}
		}
		for (int i = 0; i < 3; i++)
		{
			auto index = find(Tile.begin(), Tile.end(), j * 16 + 8);
			if (index != Tile.end()) Tile.erase(index);
			else
			{
				if (j == 2)goto baoend;
				else goto midend;
			}
		}
		for (int i = 1; i < 8; i++)
		{
			auto index = find(Tile.begin(), Tile.end(), j * 16 + i);
			if (index != Tile.end()) Tile.erase(index);
			else
			{
				if (j == 2)goto baoend;
				else goto midend;
			}
		}
	midend:
		j++;
		if (Tile.size() == 1)
		{
			isbao = true;
			duo = Tile[0];
			goto baoend;
		}
	}
baoend:
	if (isbao) 
	{
		if (lastPai== duo)yi[playernum].chuurenpoutou9 = 2;
		else yi[playernum].chuurenpoutou = 1;
	}

	if (afterKan)//岭上开花
	{
		yi[playernum].rinshanKaihou = 1;
	}

	if (yamaPtr > 122)
	{
		if (playernum == turn) yi[playernum].haiteiRaoyue = 1;//海底捞月
		else yi[playernum].houteiRaoyui = 1;//河底捞鱼
	}

}
void MahjongSystem::hou(int playernum)
{
	if (jun == 1)
		if (!ifNaku)
			if (jikaza[playernum] == bakaze)
			{
				yi[playernum].tenhou = 1;
				if (yi[playernum].kokushimusou)
				{
					yi[playernum].koukushimusoujusanmen = 2;
					yi[playernum].kokushimusou = 0;
				}
				if (yi[playernum].suuankou)
				{
					yi[playernum].suuankou = 0;
					yi[playernum].suuankoutanki = 2;
				}
				if (yi[playernum].chuurenpoutou)
				{
					yi[playernum].chuurenpoutou = 0;
					yi[playernum].chuurenpoutou9 = 2;
				}
			}
			else
			{
				yi[playernum].chiihou = 1;
			}
}
void MahjongSystem::TenpaiJudge(int playernum)
{
	MahjongSystem temp;
	temp.shouPai[playernum].assign(shouPai[playernum].begin(), shouPai[playernum].end());
	for (int i = 0; i < 34; i++)
	{
		int j;
		if (i <= 8) { j = i; }
		else if (i <= 17) { j = (i - 9) + 16; }
		else if (i <= 26) { j = (i - 18) + 32; }
		else { j = (i - 27) * 8 + 48; }
		Pai pai(j);
		temp.shouPai[playernum].emplace_back(pai);
		sort(temp.shouPai[playernum].begin(), temp.shouPai[playernum].end());
		if (temp.IsCommonHu(playernum))
		{
			ifTen[playernum] = true;
			chong[playernum].push_back(pai);                     //插入的这张牌如果能使和牌，则记为铳牌
		}
		vector<Pai>::iterator index = find(temp.shouPai[playernum].begin(), temp.shouPai[playernum].end(), pai);
		temp.shouPai[playernum].erase(index);//复原手牌
	}
	if (menzenchin[playernum])		//如果没有副露（特殊牌型判断）
	{		//国士牌型判断
		bool que{ false };		//是否缺了某张幺九牌
		bool duo{ false };		//是否多了某张幺九牌
		int que_tile{ 0 };		//缺的幺九牌
		for (int i{ 0 }; i < 13; ++i)		//判断十三张幺九牌的拥有情况
			if (shouPai[playernum][i].id == (i + que - duo) * 8);		//如果刚好位置映射
			else if (shouPai[playernum][i].id == (i + que - duo - 1) * 8)		//如果和上张映射幺九牌一样
			{
				if (duo == true)		//如果已经有一个多的牌
					goto kokushi_end;
				else duo = true;		//记录有多牌
			}
			else if (shouPai[playernum][i].id == (i + que - duo + 1) * 8)		//如果和下张映射幺九牌一样
			{
				if (que == true)		//如果已经有一个缺牌
					goto kokushi_end;		//不是国士
				else que = true;		//记录有缺牌
				que_tile = i * 8;		//记录缺的牌
			}
			else goto kokushi_end;		//有不是幺九即无听
		if (duo == true)		//若有多张
		{
			if (que == true)
			{
				chong[playernum].push_back(que_tile);
				yi[playernum].kokushimusou = 1;                                          //记听一面
			}
			else
			{
				chong[playernum].push_back(96);
				yi[playernum].kokushimusou = 1;//记听一面（中）（中在最后不会被que记录）
			}
		}
		else for (int i{ 0 }; i < 13; ++i)		//若不缺张
		{
			chong[playernum].push_back(8 * i);
			yi[playernum].koukushimusoujusanmen = 2;//记听十三面
		}
		ifTen[playernum] = true;
		return;
	kokushi_end:

		if (ifTen[playernum] == false)//七对牌型判断(有可能复合二杯口【覆盖七对子】，而二杯口属于普通型，故先判断是否为普通型，如果不是再判断七对子)
		{
			bool is_hon = true;    //判断是否复合混老头
			bool dan{ false };		//多出来的单张
			int dan_tile{ 0 };		//单张牌位置
			for (int i{ 0 }; i < 12; ++i)		//判断关系
				if (((i + dan_tile+int(bool(dan))+1) % 2) & (int(bool(link(playernum, i)))))	//单张的下标必定为偶数，link取bool再转化为int后必定为1,单张出现前对子第二张的下标为奇数，单张出现后对子第二张下标为偶数
				{

					if (dan == true)		//如果已经有单牌了
						 return;		//不是七对子
					else
					{
						dan = true;		//记录单张  
						dan_tile = i;		//记录序号
					}
				}
			if (dan == false)		//如果没查到单张
				dan_tile = 12;		//那单张就是最后一个
			chong[playernum].push_back(shouPai[playernum][dan_tile]); 	//记听一面
			yi[playernum].chiitoitsu = 2;
			bool istan = true;//是否复合断幺九
			for (int i = 0; i < 13; i += 2)
				if (shouPai[playernum][i].id % 8 != 0) continue;
				else istan = false;
			if (istan) yi[playernum].tanyao = 1;
			for (int i{ 0 }; i < 13; i++)
			{
				if (shouPai[playernum][i].id % 8 != 0)  //如果有非幺九牌
				{
					is_hon = false;
					break;
				}
			}
			if (is_hon) yi[playernum].honroutou = 2;   //如果都是幺九牌，则复合混老头
			ifTen[playernum] = true;
		}
	}
	}
int MahjongSystem::Kanshiyou(int playernum)  //结算点数
{
	int daten = 0;
	daten = yi[playernum].chinroutou + yi[playernum].daisuushii + yi[playernum].daisangen 
		+ yi[playernum].kokushimusou +yi[playernum].koukushimusoujusanmen + yi[playernum].ryuuiisou 
		+ yi[playernum].shousuushii + yi[playernum].suuankou + yi[playernum].suuankoutanki
		+ yi[playernum].suukantsu + yi[playernum].tsuuiisou + yi[playernum].tenhou 
		+ yi[playernum].chiihou+ yi[playernum].chuurenpoutou + yi[playernum].chuurenpoutou9;
	if (daten)
		return daten * -1; //-daten倍役满
	else
	{
		daten = yi[playernum].chanta + yi[playernum].chiitoitsu + yi[playernum].chinitsu
			+ yi[playernum].honitsu + yi[playernum].honroutou + yi[playernum].iipeikou
			+ yi[playernum].ippatsu + yi[playernum].ittsu + yi[playernum].junchan
			+ yi[playernum].menzenchintsumohou + yi[playernum].pinfu + yi[playernum].riichi
			+ yi[playernum].ryanpeikou + yi[playernum].sanankou + yi[playernum].sankantsu
			+ yi[playernum].sanshokudoujun + yi[playernum].sanshokudoukou + yi[playernum].shousangen
			+ yi[playernum].tanyao + yi[playernum].toitoi + yi[playernum].wriichi
			+ yi[playernum].chun + yi[playernum].haku + yi[playernum].hatsu
			+ yi[playernum].bakaze + yi[playernum].jikaze + yi[playernum].chanKan
			+ yi[playernum].rinshanKaihou + yi[playernum].haiteiRaoyue + yi[playernum].houteiRaoyui;
		return daten;//daten番
	}
}
bool MahjongSystem::ischii(int playernum)
{
	if (playernum == 0) return true;
	if (lizhi[playernum ])return false;
	if (duidui[playernum])return false;
	if (qidui[playernum ])return false;
	if (yipai[playernum ])return true;
	if (duanyao[playernum])if (lastPai.id % 8 == 0)return false;
	else return true;
	if (yise[playernum - 1] != -1)
	{
		if ((yise[playernum - 1] * 16 <= lastPai.id) && (lastPai.id <= yise[playernum - 1] * 16 + 8))
			return true;
		else return false;
	}
}
int dan(int tile[], int num) //统计单牌数量,传入手牌的link数组以及手牌的张数num
{
	int a = 0;
	for (int i = 0; i < num; i++)
		if (i == 0)if (tile[i] > 1) a++;
		else if (i = num - 1)if (tile[i - 1] > 1)i++;
		else if ((tile[i] > 1) && (tile[i - 1] > 1))i++;
}
bool MahjongSystem::ispon(int playernum)
{
	if (playernum == 0) return true;
	if (lizhi[playernum])return false;
	if (duidui[playernum])return true;
	if (qidui[playernum])return false;
	if (yipai[playernum])return true;
	if (duanyao[playernum])if (lastPai.id > 40)return false;
	else return true;
	if (yise[playernum] != -1)
	{
		if ((yise[playernum] * 16 <= lastPai.id) && (lastPai.id <= yise[playernum] * 16 + 8))
			return true;
		else return false;
	}
}
int MahjongSystem::Dajudge()
{
	MahjongSystem temp;
	temp.shouPai[turn].assign(shouPai[turn].begin(), shouPai[turn].end());
	sort(temp.shouPai[turn].begin(), temp.shouPai[turn].end());
	int a[14];
	for (int i = 0; i < temp.shouPai[turn].size(); i++) a[i] = temp.link(turn, i);
	vector<int> first_judge;
	for (int i = 0; i < temp.shouPai[turn].size(); i++)
		if (i == 0)if (a[i] > 1) first_judge.push_back(i);
		else if (i = temp.shouPai[turn].size() - 1)if (a[i - 1] > 1)first_judge.push_back(i);
		else if ((a[i] > 1) && (a[i - 1] > 1))first_judge.push_back(i);
	random_shuffle(first_judge.begin(), first_judge.end());
	int yaojiu=0;  //记录幺九牌数量
	for (int i = 0; i < temp.shouPai[turn].size(); i++)
	{
		if (temp.shouPai[turn][i].id % 8 == 0)yaojiu++;
	}
	if (yaojiu <= 5)duanyao[turn] = true;

	int Dui=0;//记录对子数量
	int Kou=0;//记录刻子数量
	int Two=0;//记录连续两张的数量
	int color[4];//记录色牌，0123万筒索字

	for (int i = 0; i < temp.shouPai[turn].size(); i++)
	{
		if (a[i] == 0)
		{
			if (i != temp.shouPai[turn].size() - 1)
				if (a[i + 1] == 0)
				{
					if ((temp.shouPai[turn][i].id == bakaze * 8 + 48) || (menzen[turn][i][0].id == jikaza[turn] * 8 + 48) || (menzen[turn][i][0].id >= 80))
					{
						Kou++; i++; yipai[turn] = true;
					}
					else { Kou++; i++; }
				}
				else if ((temp.shouPai[turn][i].id == bakaze * 8 + 48) || (menzen[turn][i][0].id == jikaza[turn] * 8 + 48) || (menzen[turn][i][0].id >= 80))
				{
					Dui++;
					yipai[turn] = true;
				}
				else Dui++;
		}
		else
		{
			if (i != temp.shouPai[turn].size() - 1)
				if (a[i] == 1) { Two++; i++; }          //由于刻子比顺子的牌效高，在223情况下优先考虑对子22数量
		}
		if (a[i] <= 8)color[0]++;
		else if (a[i] <= 24)color[1]++;
		else if (a[i] <= 40)color[2]++;
		else color[3]++;
	}
	for (int i = 0; i < menzenNum[turn]; i++)     //判断副露中色牌情况
	{
		if (menzenType[turn][i] == 2)Kou++;
		if (menzen[turn][i][0].id <= 8)color[0] += 3;
		else if (menzen[turn][i][0].id <= 24)color[1] += 3;
		else if (menzen[turn][i][0].id <= 40)color[2] += 3;
		else if ((menzen[turn][i][0].id == jikaza[turn] * 8 + 48) || (menzen[turn][i][0].id == bakaze * 8 + 48) || (menzen[turn][i][0].id >= 80))
		{
			yipai[turn] = true;
			color[3] += 3;
		}
		else color[3] += 3;
	}
	//若有复合按下列顺序考虑（收效高的役种优先判断）
	if (yise[turn] != -1)
	{
		int max = 0;
		if (color[0] < color[1])
		{
			max = 1; if (color[1] < color[2])max = 2;
		}
		else if (color[0] < color[2])max = 2;
		for (int i = 0; i < shouPai[turn].size(); i++)
		{
			if ((shouPai[turn][i].id >= 48) || ((shouPai[turn][i].id <= max * 16 + 8) && (shouPai[turn][i].id >= max * 16)))
				return i;
		}
		int prob[14] = { 0 };
		for (int j = yama[yamaPtr].id; j <= 122; j++)
			for (int p = 0; p <= shouPai[turn].size(); p++)
			{

				if (yama[j] == shouPai[turn][p])                 //判断能成刻子的剩余牌数
					prob[p]++;
				//判断能成顺子的剩余牌数（上一与下一）
				if (temp.shouPai[turn][p] < 48)               //数牌前后序号相差1
				{
					if (yama[j] == temp.shouPai[turn][p] + 1)
						prob[p]++;
					if (yama[j] == temp.shouPai[turn][p] - 1)
						prob[p]++;
				}
			}
	}
	else if (duidui[turn])
	{

		int prob[14] = { 0 };


		for (int j = yama[yamaPtr].id; j <= 122; j++)
			for (int p = 0; p <= first_judge.size(); p++)
			{

				if (yama[j] == temp.shouPai[turn][first_judge[p]])                 //判断能成刻子的剩余牌数
					prob[p]++;
			}
		int min = prob[0];
		int m_number = 0;
		for (int p = 1; p <= first_judge.size(); p++)      //找出概率最小的牌
			if ((min > prob[p]))
			{
				min = prob[p];
				m_number = p;
			}
		return first_judge[m_number];
	}
	else if (yipai[turn]) //目标役种：役牌
	{

		return dapai(first_judge);
	}
	else if (lizhi[turn])                                 //目标役种：立直
	{
		return dapai(first_judge);
	}
	else if (duanyao[turn]) //目标役种：断幺九
	{
		for (int i = 0; i < shouPai[turn].size(); i++)  //如果有幺九牌先打幺九
			if (shouPai[turn][i].id % 8 == 0)return i;

		int prob[14] = { 0 };
		for (int j = yama[yamaPtr].id; j <= 122; j++)
			for (int p = 0; p <= shouPai[turn].size(); p++)
			{

				if (yama[j] == shouPai[turn][p])                 //判断能成刻子的剩余牌数
					prob[p]++;
				//判断能成顺子的剩余牌数（上一与下一）
				if (temp.shouPai[turn][p] < 48)               //数牌前后序号相差1
				{
					if (yama[j] == temp.shouPai[turn][p] + 1)
						prob[p]++;
					if (yama[j] == temp.shouPai[turn][p] - 1)
						prob[p]++;
				}

			}
		int min = prob[0];
		int m_number = 0;
		for (int p = 1; p <= shouPai[turn].size(); p++)      //找出概率最小的牌
			if ((min >= prob[p]))
			{
				min = prob[p];
				m_number = p;
			}

		return m_number;

	}
	else                       //以下用于判断是否启用某种打法
	{
		for (int i = 0; i <= 13; i++)        //初步判断：如果是数牌，该牌与前后一张牌是否构成顺子，与前后一张牌是否相等
											 //          如果是字牌，仅需判断该牌与前后一张牌是否相等
		{
			if (i == 0)
			{
				if (temp.shouPai[turn][i].id < 48)
				{
					if ((a[i] != 0) && (a[i] != 1))first_judge.push_back(i);
				}
				else if ((a[i] != 0)) first_judge.push_back(i);
			}
			else if (i == 13)
			{
				if (temp.shouPai[turn][i].id < 48)
				{
					if ((a[i - 1] != 0) && (a[i - 1] != 1))first_judge.push_back(i);
				}
				else if ((a[i - 1] != 0)) first_judge.push_back(i);
			}
			else
			{
				if (temp.shouPai[turn][i].id < 48)
				{
					if ((a[i] != 0) && (a[i - 1] != 0) && (a[i] != 1) && (a[i - 1] != 1))first_judge.push_back(i);
				}
				else if ((a[i] != 0) && (a[i - 1] != 0)) first_judge.push_back(i);
			}
		}

		random_shuffle(first_judge.begin(), first_judge.end());

		if (Two >= 5)qidui[turn] = true;
		else if (Two >= 3)duidui[turn] = true;

		if (color[0] + color[1] <= 6)  yise[turn] = 2;
		else if (color[1] + color[2] <= 6) yise[turn] = 0;
		else if (color[0] + color[2] <= 6) yise[turn] = 1;

		if (jun <= 5)              //如果没有可做的明显的役种前期（5巡内）先出幺九与非场风自风牌
		{
			for (int i = 0; i < first_judge.size(); i++)
				if (temp.shouPai[turn][first_judge[i]].id >= 48)
				{
					if ((temp.shouPai[turn][first_judge[i]].id != 48 + bakaze * 8) && (temp.shouPai[turn][first_judge[i]].id != 48 + jikaza[turn] * 8))
						return first_judge[i];
				}
				else if (temp.shouPai[turn][first_judge[i]].id % 8 == 0)return first_judge[i];
		}
		else if (menzenchin)       //立直打法
		{
			lizhi[turn] = true;
		}

	}
}
int MahjongSystem::dapai(vector<int>first_judge)
{ //从初步判断出的牌中挑选能成雀头或面子概率最小的牌
	random_shuffle(first_judge.begin(), first_judge.end());
	int prob[14] = { 0 };
	for (int j = yama[yamaPtr].id; j <= 122; j++)
		for (int p = 0; p <= first_judge.size(); p++)
		{

			if (yama[j] == shouPai[turn][first_judge[p]])                 //判断能成刻子的剩余牌数
				prob[p]++;
			//判断能成顺子的剩余牌数（上一与下一）
			if (shouPai[turn][first_judge[p]] < 48)               //数牌前后序号相差1
			{
				if (yama[j] == shouPai[turn][first_judge[p]] + 1)
					prob[p]++;
				if (yama[j] == shouPai[turn][first_judge[p]] - 1)
					prob[p]++;
			}

		}
	int min = prob[0];
	int m_number = 0;
	for (int p = 1; p <= first_judge.size(); p++)      //找出概率最小的牌
		if ((min > prob[p]))
		{
			min = prob[p];
			m_number = p;
		}
	return first_judge[m_number];
}