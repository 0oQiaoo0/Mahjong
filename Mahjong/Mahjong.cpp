// Mahjong.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include"MahjongSystem.h"

#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)  //用来检测按键的点击事件

POINT p;
HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
HWND h = GetForegroundWindow();
CONSOLE_FONT_INFO consoleCurrentFont;

void HideTheCursor() //隐藏光标
{
	CONSOLE_CURSOR_INFO cciCursor;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	if (GetConsoleCursorInfo(hStdOut, &cciCursor)) {
		cciCursor.bVisible = FALSE;
		SetConsoleCursorInfo(hStdOut, &cciCursor);
	}
}

int main()
{
	system("mode con cols=120 lines=40");

	HideTheCursor();
	//----------移除快速编辑模式(对于win10用户)----------
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD mode;
	GetConsoleMode(hStdin, &mode);
	mode &= ~ENABLE_QUICK_EDIT_MODE;
	SetConsoleMode(hStdin, mode);



    MahjongSystem mahjongsystem;
	mahjongsystem.DeleteSoundEffects();
	mahjongsystem.DoExtract();
	mahjongsystem.StartInterface();
	bool startInterface = 1;
	bool gameInterface = 0;

	int lastChoice = -1;
	//----------循环检测-----------
	while (1) //循环检测
	{
		POINT p;
		GetCursorPos(&p);
		ScreenToClient(h, &p);               //获取鼠标在窗口上的位置
		GetCurrentConsoleFont(hOutput, FALSE, &consoleCurrentFont); //获取字体信息
		//int x = p.x /= (consoleCurrentFont.dwFontSize.X * 1.25);
		int x = p.x /= (consoleCurrentFont.dwFontSize.X);
		//int y = p.y /= (consoleCurrentFont.dwFontSize.Y * 1.25);
		int y = p.y /= (consoleCurrentFont.dwFontSize.Y);
	//				int x = p.x /= (consoleCurrentFont.dwFontSize.X );
	//				int y = p.y /= (consoleCurrentFont.dwFontSize.Y );
		x++; y++;
		//			printf("key down (%d,%d)\n", x, y);

		if (KEY_DOWN(VK_LBUTTON)) //鼠标左键按下
		{
			if (startInterface)
			{
				if (x >= 1 && x <= 4 && y == 1)
				{
					mahjongsystem.SoundEffects(7);
					mahjongsystem.Initial_Initialization();
					mahjongsystem.StartGame();
	//				PlaySound(TEXT("C:\\Users\Qiao\source\repos\Mahjong\1.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
					
					startInterface = 0;
					gameInterface = 1;
				}
				else if (x >= 1 && x <= 4 && y == 3)
				{
					mahjongsystem.DeleteSoundEffects();
					mahjongsystem.SoundEffects(7);
					return 0;
				}
			}
			else if(gameInterface)
			{
				if (mahjongsystem.turn == 0 && mahjongsystem.state == 1)//玩家将摸后判断
				{
					if (mahjongsystem.riichiandchiiChoice)
					{
						if (y == 28 && x >= 59 && x <= 62)
						{
							mahjongsystem.printedChoice = 0;
							mahjongsystem.ClearInteraction();
							mahjongsystem.riichiandchiiChoice = 0;
						}
						for (int i = 0; i < mahjongsystem.CanRiichi(); i++)
						{
							if (y == 28 && x >= 3 + 4 * i && x <= 4 + 4 * i)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.riichiandchiiChoice = 0;
								mahjongsystem.AfterMoJudgment(3 + (i + 1) * 5);
							}
						}

					}
					else
					{
						if (mahjongsystem.CanTsumo())
						{
							if (y == 27 && x >= 21 && x <= 22)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.AfterMoJudgment(4);
							}
							else if (y == 27 && x >= 31 && x <= 34)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.AfterMoJudgment(0);
							}
						}
						if (mahjongsystem.CanRiichi())
						{
							if (y == 27 && x >= 15 && x <= 18)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.riichiandchiiChoice = 1;
							}
							else if (y == 27 && x >= 31 && x <= 34)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.AfterMoJudgment(0);
							}
						}
						if (mahjongsystem.CanAnkan())
						{
							if (y == 27 && x >= 11 && x <= 12)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.AfterMoJudgment(2);
							}
							else if (y == 27 && x >= 31 && x <= 34)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.AfterMoJudgment(0);
							}
						}
						if (mahjongsystem.CanKakan())
						{
							if (y == 27 && x >= 11 && x <= 12)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.AfterMoJudgment(1);
							}
							else if (y == 27 && x >= 31 && x <= 34)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.AfterMoJudgment(0);
							}
						}
						if (mahjongsystem.CanKyuushuKyuuhai())
						{
							if (y == 27 && x >= 25 && x <= 28)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.AfterMoJudgment(-1);
							}
							else if (y == 27 && x >= 31 && x <= 34)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.AfterMoJudgment(0);
							}
						}
					}

				}
				else if (mahjongsystem.turn == 0 && mahjongsystem.state == 2 && !mahjongsystem.riichi[0])//玩家将打
				{
					for (int i = 1; i <= mahjongsystem.shouPai[0].size(); i++)
					{
						if (i < mahjongsystem.shouPai[0].size())
						{
							if (y == 25 && x >= (1 + i * 2) && x <= (2 + i * 2))
							{
								mahjongsystem.Da(0, i);
								Sleep(400);
							}
						}
						else
						{
							if (y == 25 && x >= (3 + i * 2) && x <= (4 + i * 2) && mahjongsystem.afterMo || y == 25 && x >= (1 + i * 2) && x <= (2 + i * 2) && !mahjongsystem.afterMo)
							{
								mahjongsystem.Da(0, i); 
								Sleep(400);
							}
						}
					}
				}
				else if (mahjongsystem.state == 3)//将打后判断
				{
					if (mahjongsystem.riichiandchiiChoice)//若在选择界面
					{
						if (y == 29 && x >= 27 && x <= 30)
						{
							mahjongsystem.printedChoice = 0;
							mahjongsystem.ClearInteraction();
							mahjongsystem.riichiandchiiChoice = 0;
						}
						for (int i = 0; i < mahjongsystem.CanChii(); i++)
						{
							if (y == 29 && x >= 3 + 8 * i && x <= 8 + 8 * i)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.riichiandchiiChoice = 0;
								mahjongsystem.AfterDaJudgment(6 + i * 5);
							}
						}
					}
					else//若不在
					{
						if (mahjongsystem.turn == 3 && mahjongsystem.CanChii() == 1)
						{
							if (y == 27 && x >= 3 && x <= 4)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.AfterDaJudgment(6);
							}
							else if (y == 27 && x >= 31 && x <= 34)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.AfterDaJudgment(0);
							}
						}
						else if (mahjongsystem.turn == 3 && mahjongsystem.CanChii() > 1)
						{
							if (y == 27 && x >= 3 && x <= 4)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.riichiandchiiChoice = 1;
							}
							else if (y == 27 && x >= 31 && x <= 34)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.AfterDaJudgment(0);
							}
						}
						if (mahjongsystem.CanPon(0))
						{
							if (y == 27 && x >= 7 && x <= 8)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.AfterDaJudgment(2);
							}
							else if (y == 27 && x >= 31 && x <= 34)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.AfterDaJudgment(0);
							}
						}
						if (mahjongsystem.CanMinkan(0))
						{
							if (y == 27 && x >= 11 && x <= 12)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.AfterDaJudgment(3);
							}
							else if (y == 27 && x >= 31 && x <= 34)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.AfterDaJudgment(0);
							}
						}
						if (mahjongsystem.CanRon(0))
						{
							if (y == 27 && x >= 21 && x <= 22)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.AfterDaJudgment(4);
							}
							else if (y == 27 && x >= 31 && x <= 34)
							{
								mahjongsystem.printedChoice = 0;
								mahjongsystem.ClearInteraction();
								mahjongsystem.AfterDaJudgment(0);
							}
						}
					}
					
				}
				else if (mahjongsystem.state == 4)//局与局之间
				{
				    if (y == 26 + mahjongsystem.hangNum && x >= 8 && x <= 11)
				    {
						mahjongsystem.printedChoice = 0;
						lastChoice = -1;
					    mahjongsystem.ContinueGame(mahjongsystem.winner);
				    }
                }
				else if (mahjongsystem.state == 5)//结束
				{
				if (y == 31 && x >= 3 && x <= 12)
				{
					mahjongsystem.printedChoice = 0;
					mahjongsystem.SoundEffects(7);
					mahjongsystem.StartInterface();
					gameInterface = 0;
					startInterface = 1;
				}
				else if (y == 31 && x >= 15 && x <= 22)
				{
					mahjongsystem.printedChoice = 0;
					mahjongsystem.SoundEffects(7);
					lastChoice = -1;
					mahjongsystem.Initial_Initialization();
					mahjongsystem.StartGame();
				}
				else if (y == 31 && x >= 25 && x <= 28)
				{
					mahjongsystem.printedChoice = 0;
					mahjongsystem.DeleteSoundEffects();
					mahjongsystem.SoundEffects(7);
					return 0;
				}
                }
				
			}
		
	    }
		///////按左键end 
		// 
		////////无条件begin
		srand((unsigned)time(nullptr));
		if (gameInterface)
		{
			if (mahjongsystem.state == 0)//将摸
			{
				mahjongsystem.Mo(mahjongsystem.turn);
				Sleep(400);
			}
			else if (mahjongsystem.state == 1)//将摸后判断
			{
				if (mahjongsystem.turn > 0)//AI自摸立直暗杠加杠流局
				{
					if (mahjongsystem.CanTsumo())
						mahjongsystem.AfterMoJudgment(4);
					else if (mahjongsystem.CanRiichi())
						mahjongsystem.AfterMoJudgment(3 + 5 * mahjongsystem.CanRiichi());
					else if (mahjongsystem.CanKyuushuKyuuhai())
						mahjongsystem.AfterMoJudgment(-1);
					else if (mahjongsystem.CanAnkan())
						mahjongsystem.AfterMoJudgment(2);
					else if (mahjongsystem.CanKakan())
						mahjongsystem.AfterMoJudgment(1);
					else mahjongsystem.AfterMoJudgment(0);
				}
				else//玩家将摸后判断
				{
					if (mahjongsystem.riichiandchiiChoice)
					{
						if (!mahjongsystem.printedChoice)
						{
							mahjongsystem.printedChoice = 1;
							int imax = mahjongsystem.CanRiichi();
							mahjongsystem.ClearInteraction();
							for (int i = 0; i < imax; i++)
							{
								mahjongsystem.Gotoxy(3 + 4 * i, 28);
								mahjongsystem.shouPai[0][mahjongsystem.availableRiichi[i]].print();
							}
							mahjongsystem.Gotoxy(59, 28);
							cout << "返回";
						}
					}
					else
					{
						if (!mahjongsystem.printedChoice)
						{
							if (mahjongsystem.CanTsumo())
							{
								mahjongsystem.printedChoice = 1;
								mahjongsystem.Gotoxy(21, 27);
								cout << "和";
								mahjongsystem.Gotoxy(31, 27);
								cout << "跳过";
							}
							if (mahjongsystem.CanRiichi())
							{
								mahjongsystem.printedChoice = 1;
								mahjongsystem.Gotoxy(15, 27);
								cout << "立直";
								mahjongsystem.Gotoxy(31, 27);
								cout << "跳过";
							}
							if (mahjongsystem.CanAnkan())
							{
								mahjongsystem.printedChoice = 1;
								mahjongsystem.Gotoxy(11, 27);
								cout << "杠";
								mahjongsystem.Gotoxy(31, 27);
								cout << "跳过";
							}
							if (mahjongsystem.CanKakan())
							{
								mahjongsystem.printedChoice = 1;
								mahjongsystem.Gotoxy(11, 27);
								cout << "杠";
								mahjongsystem.Gotoxy(31, 27);
								cout << "跳过";
							}
							if (mahjongsystem.CanKyuushuKyuuhai())
							{
								mahjongsystem.printedChoice = 1;
								mahjongsystem.Gotoxy(25, 27);
								cout << "流局";
								mahjongsystem.Gotoxy(31, 27);
								cout << "跳过";
							}
							if (mahjongsystem.printedChoice)
							{
								mahjongsystem.SoundEffects(8);
							}
						}
						if (!mahjongsystem.CanTsumo()&&!mahjongsystem.CanRiichi()&&!mahjongsystem.CanAnkan() && !mahjongsystem.CanKakan() ) mahjongsystem.AfterMoJudgment(0);
					}
				}

			}
			else if (mahjongsystem.state == 2)//将打
			{
				if (!mahjongsystem.riichi[mahjongsystem.turn])
				{
					if (mahjongsystem.turn > 0)
					{
						mahjongsystem.Da(mahjongsystem.turn, rand()%mahjongsystem.shouPai[mahjongsystem.turn].size() + 1);//////////////////随机数
						Sleep(400);
					}
					else
					{
						int temp = mahjongsystem.shouPai[0].size();
						bool choiced = 0;
						for (int i = 0; i < temp - 1; i++)
						{
							if (y == 25 && x >= 3 + i * 2 && x <= 4 + i * 2)
							{
								if (lastChoice != i)
								{
									lastChoice = i;
									mahjongsystem.SoundEffects(5);
								}
								choiced = 1;
								break;
							}
						}
						if (y == 25 && x >= 5 + (temp - 1) * 2 && x <= 6 + (temp - 1) * 2 )
						{
							if (lastChoice != temp - 1)
							{
								lastChoice = temp - 1;
								mahjongsystem.SoundEffects(5);
							}
							choiced = 1;
						}
						if (!choiced)
						{
							lastChoice = -1;
						}
					}
				}
				else
				{
					mahjongsystem.Da(mahjongsystem.turn, mahjongsystem.shouPai[mahjongsystem.turn].size());//摸切
				}
			}
			else if(mahjongsystem.state==3)//将打后判断
			{
				if (mahjongsystem.yamaPtr > 122)
				{
					mahjongsystem.Ryuukyoku();
					return 0;
				}
				if (mahjongsystem.riichiandchiiChoice)
				{
					if (!mahjongsystem.printedChoice)
					{
						mahjongsystem.printedChoice = 1;
						mahjongsystem.ClearInteraction();
						for (int i = 0; i < mahjongsystem.CanChii(); i++)
						{
							mahjongsystem.Gotoxy(3 + 8 * i, 29);
							mahjongsystem.lastPai.print();
							mahjongsystem.shouPai[0][mahjongsystem.availableChii[i][0]].print();
							mahjongsystem.shouPai[0][mahjongsystem.availableChii[i][1]].print();
						}
						mahjongsystem.Gotoxy(27, 29);
						cout << "返回";
					}
				}
				else
				{
					if (!mahjongsystem.printedChoice)
					{
						if (mahjongsystem.CanRon(0))
						{
							mahjongsystem.printedChoice = 1;
							mahjongsystem.Gotoxy(21, 27);
							cout << "和";
							mahjongsystem.Gotoxy(31, 27);
							cout << "跳过";
						}
						if (mahjongsystem.CanMinkan(0))
						{
							mahjongsystem.printedChoice = 1;
							mahjongsystem.Gotoxy(11, 27);
							cout << "杠";
							mahjongsystem.Gotoxy(31, 27);
							cout << "跳过";
						}
						if (mahjongsystem.CanPon(0))
						{
							mahjongsystem.printedChoice = 1;
							mahjongsystem.Gotoxy(7, 27);
							cout << "碰";
							mahjongsystem.Gotoxy(31, 27);
							cout << "跳过";
						}
						if (mahjongsystem.turn == 3 && mahjongsystem.CanChii())
						{
							mahjongsystem.printedChoice = 1;
							mahjongsystem.Gotoxy(3, 27);
							cout << "吃";
							mahjongsystem.Gotoxy(31, 27);
							cout << "跳过";
						}
						if (mahjongsystem.printedChoice)
						{
							mahjongsystem.SoundEffects(8);
						}
					}
					if (!mahjongsystem.CanMinkan(0) && !mahjongsystem.CanPon(0) && !(mahjongsystem.turn == 3 && mahjongsystem.CanChii()) && !mahjongsystem.CanRon(0))
					{
						mahjongsystem.AfterDaJudgment(0);
					}
				}
			}
			else if (mahjongsystem.state == 4)//局与局之间
			{
			if (!mahjongsystem.printedChoice)
			{
				mahjongsystem.printedChoice = 1;
				mahjongsystem.Gotoxy(8, 26 + mahjongsystem.hangNum);
				cout << "继续";
			}
            }
			else if (mahjongsystem.state == 5)//结束界面
			{
			if (!mahjongsystem.printedChoice)
			{
				mahjongsystem.printedChoice = 1;
				mahjongsystem.Gotoxy(3, 31);
				cout << "返回主菜单";
				mahjongsystem.Gotoxy(15, 31);
				cout << "重新开始";
				mahjongsystem.Gotoxy(25, 31);
				cout << "退出";
			}
			}
		}

		Sleep(10); //等待10毫秒，减少CPU占用
    }
	return 0;
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
