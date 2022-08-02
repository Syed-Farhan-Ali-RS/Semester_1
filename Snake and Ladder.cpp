#include<iostream>
#include<cstdlib>
#include<time.h>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
	string ch;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
	cout << "========================================================================================================================================================================" << endl;
	cout << "\t******* " << " ***      ** " << "       ****       " << " ***    **** " << " ******** " << "      " << " |*|         " << "       ***       " << " *********       " << " *********       " << " ******** " << " ***********   " << endl;
	cout << "\t|     * " << " ** *     ** " << "      **  **      " << " ***  ****   " << " **       " << "      " << " |*|         " << "      ** **      " << " **       ***    " << " **       ***    " << " **       " << " **       ***  " << endl;
	cout << "\t|       " << " **  *    ** " << "     **    **     " << " *** ****    " << " **       " << "      " << " |*|         " << "     **   **     " << " **        ****  " << " **        ****  " << " **       " << " **       ***  " << endl;
	cout << "\t******* " << " **   *   ** " << "    **********    " << " ********    " << " ******** " << "  &   " << " |*|         " << "    *********    " << " **         **** " << " **         **** " << " ******** " << " *********     " << endl;
	cout << "\t      | " << " **    *  ** " << "   **        **   " << " ***  ****   " << " **       " << "      " << " |*|         " << "   **       **   " << " **        ****  " << " **        ****  " << " **       " << " **     ****   " << endl;
	cout << "\t*     | " << " **     * ** " << "  **          **  " << " ***   ****  " << " **       " << "      " << " |*|         " << "  **         **  " << " **       ***    " << " **       ***    " << " **       " << " **      ****  " << endl;
	cout << "\t******* " << " **      *** " << " **            ** " << " ***    **** " << " ******** " << "      " << "  ********** " << " **           ** " << " **********      " << " **********      " << " ******** " << " **       **** " << endl;
	cout << endl;
	cout << " \t\t\t\t\t\t " << "      *********     " << "       ****       " << "   " << "|***           ***| " << "   " << "|*************| " << endl;
	cout << " \t\t\t\t\t\t " << "    **              " << "      **  **      " << "   " << "|****         ****| " << "   " << "|**|            " << endl;
	cout << " \t\t\t\t\t\t " << "  **                " << "     **    **     " << "   " << "|** **       ** **| " << "   " << "|**|            " << endl;
	cout << " \t\t\t\t\t\t " << " **     **********  " << "    **********    " << "   " << "|**  **     **  **| " << "   " << "|********|      " << endl;
	cout << " \t\t\t\t\t\t " << "  **            **  " << "   **        **   " << "   " << "|**   **   **   **| " << "   " << "|**|            " << endl;
	cout << " \t\t\t\t\t\t " << "   **          **   " << "  **          **  " << "   " << "|**    ** **    **| " << "   " << "|**|            " << endl;
	cout << " \t\t\t\t\t\t " << "     **********     " << " **            ** " << "   " << "|**     ***     **| " << "   " << "|*************| " << endl;
	cout << "\n========================================================================================================================================================================";
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	do
	{
		int Choice, Dice, x, Column;
		string  Name, Person, Player_1, Player_2,Dice_Roll;
		int Box[11][11];          // Maximum Parameter is taken Here 
		Box[0][0] = 100;         // First Index of Row and Column in Box Assign a value of 100  
		int Value_Setup;		// Taken For Adjusting the Columns 
		int sum_2 = 0, Snake_Head[10], Snake_Tail[10], Ladder_Start[10], Ladder_Stop[10];
		int stop1 = 0, stop2 = 0, Rand1 = 0, Rand2 = 1;
		int sum_1 = 0;
		int pl1 = 1, pl2 = 1;
		int roll = 0;
		Snake_Head[0] = 0, Snake_Tail[0] = 1;
		cout << endl << endl;
		cout << "\n\t\t\t\t\t\t\t\t  Write Start to Play the Game : ";
		cin >> Name;
		if (Name == "START" || Name == "start")
		{
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\t 1. ::  Player vs Player     :: " << endl;
			cout << "\t\t\t\t\t\t\t\t 2. ::  Player vs Computer   :: " << endl;
			cout << "\t\t\t\t\t\t\t\t 3. ::  Computer vs Computer :: " << endl;
			cout << "\n\t\t\t\t\t\t\t\t Choose one Option : ";
			cin >> Choice;
			if (Choice == 1 || Choice == 2 || Choice == 3)
			{
				if (Choice == 3)
				{
					srand(time(0));
					for (int Row = 1; Row < 7; Row++)
					{
						Rand1 = rand() % 99 + 1;
						Rand2 = rand() % 99 + 1;
						if (Rand1 == Rand2)
						{
							Rand1 = rand() % 99 + 1;
							Rand2 = rand() % 99 + 1;
						}
						if (Rand1 > Rand2)
						{
							Snake_Head[Row] = Rand1;
							Snake_Tail[Row] = Rand2;
						}
						else if (Rand1 < Rand2)
						{
							Row--;
						}
						for (int Row = 0; Row < 7; Row++)
						{
							Rand1 = rand() % 99 + 1;
							Rand2 = rand() % 99 + 1;
							if (Rand1 == Rand2)
							{
								Rand1 = rand() % 99 + 1;
								Rand2 = rand() % 99 + 1;
							}
							if (Rand1 < Rand2)
							{
								Ladder_Start[Row] = Rand1;
								Ladder_Stop[Row] = Rand2;
							}
							else if (Rand1 > Rand2)
							{
								Row--;
							}
						}
					}
					cout << endl << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << endl << endl << endl;
					cout << "\t\t\t\t\t\t     SSSSSS  " << "  NNN    NN  " << "      AAA     " << "  KK     KK  " << "  EEEEEEE " << "  SSSSSS  " << endl;
					cout << "\t\t\t\t\t\t     SS      " << "  NN N   NN  " << "     A   A    " << "  KK   KK    " << "  EE      " << "  SS      " << endl;
					cout << "\t\t\t\t\t\t     SSSSSS  " << "  NN  N  NN  " << "    AAAAAAA   " << "  KK KK      " << "  EEEEE   " << "  SSSSSS  " << endl;
					cout << "\t\t\t\t\t\t         SS  " << "  NN   N NN  " << "   AA     AA  " << "  KK   KK    " << "  EE      " << "      SS  " << endl;
					cout << "\t\t\t\t\t\t     SSSSSS  " << "  NN    NNN  " << "  AA       AA " << "  KK     KK  " << "  EEEEEEE " << "  SSSSSS  " << endl;
					cout << endl << endl << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << "\n\t\t\t\t\t\t\t   \"\" :: Snake Postion is Given as Below With Respect to Box :: \"\" " << endl << endl;
					for (int Row = 1; Row < 7; Row++)
					{
						cout << "\t\t\t\t\t\t\t\t\t ** Snake " << Row << " Head Position : " << Snake_Head[Row] << " ** " << endl;
						cout << "\t\t\t\t\t\t\t\t\t ** Snake " << Row << " Tail Position : " << Snake_Tail[Row] << " ** " << endl << endl;
					}
					cout << "========================================================================================================================================================================" << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << endl << endl << endl;
					cout << "\t\t\t\t\t\t\t LL       " << "     AAA     " << " DDDDD    " << " DDDDD    " << " EEEEEEE  " << "RRRRRRR   " << " SSSSSS " << endl;
					cout << "\t\t\t\t\t\t\t LL       " << "    A   A    " << " DD   DD  " << " DD   DD  " << " EE       " << "RR    RR  " << " SS     " << endl;
					cout << "\t\t\t\t\t\t\t LL       " << "   AAAAAAA   " << " DD    DD " << " DD    DD " << " EEEEE    " << "RRRRRRR   " << " SSSSSS " << endl;
					cout << "\t\t\t\t\t\t\t LL       " << "  AA     AA  " << " DD   DD  " << " DD   DD  " << " EE       " << "RR    RR  " << "     SS " << endl;
					cout << "\t\t\t\t\t\t\t LLLLLLLL " << " AA       AA " << " DDDDD    " << " DDDDD    " << " EEEEEEE  " << "RR     RR " << " SSSSSS " << endl;
					cout << endl << endl << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << "\n\t\t\t\t\t\t\t   \"\" :: Ladder Postion is Given as Below With Respect to Box :: \"\" " << endl << endl;
					for (int Row = 1; Row < 7; Row++)
					{
						cout << "\t\t\t\t\t\t\t\t\t :: Ladder " << Row << " Starting Position : " << Ladder_Start[Row] << " :: " << endl;
						cout << "\t\t\t\t\t\t\t\t\t :: Ladder " << Row << " Stoping  Position : " << Ladder_Stop[Row] << " :: " << endl << endl;
					}
					cout << "========================================================================================================================================================================" << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << endl;
					cout << "\t\t\t\t\t\t\t  TTTTTTTTTTTT " << "     AAA     " << " BBBBBBBB  " << " LL        " << " EEEEEEEE " << endl;
					cout << "\t\t\t\t\t\t\t       TT      " << "    A   A    " << " BB     BB " << " LL        " << " EE       " << endl;
					cout << "\t\t\t\t\t\t\t       TT      " << "   AAAAAAA   " << " BBBBBBB   " << " LL        " << " EEEEEEE  " << endl;
					cout << "\t\t\t\t\t\t\t       TT      " << "  AA     AA  " << " BB     BB " << " LL        " << " EE       " << endl;
					cout << "\t\t\t\t\t\t\t       TT      " << " AA       AA " << " BBBBBBBB  " << " LLLLLLLLL " << " EEEEEEEE " << endl;
					cout << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << endl << endl;
					cout << "\t\t\t\t\t |===============================================================================================|";
					cout << "\t\t\t\t\t\t\t |                                                                                               |";
					cout << "\t\t  ";
					for (int Row = 0; Row < 10; Row++)
					{
						cout << "\t\t\t\t\t\ |     ";
						for (int Column = 0; Column < 10; Column++)   // Nested Loop For Rows and Columns to Print Values in Table. //
						{
							if (Row % 2 == 0)          // Even Rows Value Which Print Value in a Manner in a Box //                    
							{
								Box[Row][Column + 1] = Box[Row][Column] - 1;
							}
							else if (Row % 2 != 0)   // ODD Rows Value Which Print Value in Manner in a Box
							{
								Box[Row][Column + 1] = Box[Row][Column] + 1;
							}
							for (int Limit = 1; Limit < 7; Limit++)
							{
								if (Snake_Head[Limit] == Box[Row][Column] || Snake_Head[Limit + 1] == Box[Row][Column] || Snake_Head[Limit + 2] == Box[Row][Column] || Snake_Head[Limit + 3] == Box[Row][Column] || Snake_Head[Limit + 4] == Box[Row][Column] || Snake_Head[Limit + 5] == Box[Row][Column])
								{
									cout << "SH" << "       ";
									break;
								}
								if (Snake_Tail[Limit] == Box[Row][Column] || Snake_Tail[Limit + 1] == Box[Row][Column] || Snake_Tail[Limit + 2] == Box[Row][Column] || Snake_Tail[Limit + 3] == Box[Row][Column] || Snake_Tail[Limit + 4] == Box[Row][Column] || Snake_Tail[Limit + 5] == Box[Row][Column])
								{
									cout << "ST" << "       ";
									break;
								}
								if (Ladder_Start[Limit] == Box[Row][Column] || Ladder_Start[Limit + 1] == Box[Row][Column] || Ladder_Start[Limit + 2] == Box[Row][Column] || Ladder_Start[Limit + 3] == Box[Row][Column] || Ladder_Start[Limit + 4] == Box[Row][Column] || Ladder_Start[Limit + 5] == Box[Row][Column])
								{
									cout << "LS" << "       ";
									break;
								}
								if (Ladder_Stop[Limit] == Box[Row][Column] || Ladder_Stop[Limit + 1] == Box[Row][Column] || Ladder_Stop[Limit + 2] == Box[Row][Column] || Ladder_Stop[Limit + 3] == Box[Row][Column] || Ladder_Stop[Limit + 4] == Box[Row][Column] || Ladder_Stop[Limit + 5] == Box[Row][Column])
								{
									cout << "LE" << "       ";
									break;
								}
								else if (Snake_Head[Limit] != Box[Row][Column])
								{
									cout << Box[Row][Column] << "       ";
									break;
								}
								else if (Snake_Tail[Limit] != Box[Row][Column])
								{
									cout << Box[Row][Column] << "       ";
									break;
								}
								else if (Ladder_Start[Limit] != Box[Row][Column])
								{
									cout << Box[Row][Column] << "       ";
									break;
								}
								else if (Ladder_Stop[Limit] != Box[Row][Column])
								{
									cout << Box[Row][Column] << "       ";
									break;
								}
							}
							if (Row >= 9)
							{
								cout << " ";
							}
							Value_Setup = Column;
						}
						if (Row % 2 == 0)
						{
							Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
						}
						if (Row % 2 != 0)
						{
							Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
						}
						cout << "\t\t\t\t\t\t\t |                                                                                               |";
						cout << "\t\t\t\t\t\t\t |===============================================================================================|" << endl;
					}
					cout << endl;
					srand(time(0));
					while (sum_1 < 100 || sum_2 < 100)
					{
						if (sum_1 == 100 || sum_2 == 100)
						{
							break;
						}
						if (roll % 2 == 0)
						{
							if (stop1 == 0)
							{
								cout << endl << endl;
								cout << "========================================================================================================================================================================" << endl;
								cout << "\n\n\tComputer 1 : " << endl;
								int r = rand() % 6 + 1;
								cout << "\n\t\tTurn No " << pl1 << "\t" << r << endl;
								pl1++;
								if (r == 6 && stop1 == 0)
								{
									stop1++;
									cout << "\n\n\tThe game starts for Computer 1 : " << endl;
									cout << "\n\tComputer 1  " << endl;
									int Column = rand() % 6 + 1;
									cout << "\n\tTurn No " << pl1 << "\t" << Column << endl;
									sum_1 = sum_1 + Column;
									cout << "\n\t\tComputer 1 sum till now is : " << sum_1 << endl;
								}
							}
							else if (stop1 != 0)
							{
								cout << "========================================================================================================================================================================" << endl;
								cout << "\n\n\tComputer 1 " << endl;
								int Column = rand() % 6 + 1;
								cout << "\n\tTurn No " << pl1 << "\t" << Column << endl;
								sum_1 = sum_1 + Column;
								if (sum_1 > 100)
								{
									sum_1 = sum_1 - Column;
									pl1++;
								}
								for (int Row = 1; Row < 7; Row++)
								{
									if (sum_1 == Snake_Head[Row])
									{
										cout << "\n\tComputer 1 steps on snake's head of Snake : " << Row << endl;
										sum_1 = Snake_Tail[Row];
									}
								}
								{
									cout << "\n\n\t\tComputer 1 sum till now is : " << sum_1 << endl << endl;
								}
								cout << "========================================================================================================================================================================" << endl;
								pl1++;
								if (Column == 6)
								{
									cout << "========================================================================================================================================================================" << endl;
									cout << "\n\n\tComputer 1  " << endl;
									int Column = rand() % 6 + 1;
									cout << "\n\tTurn No " << pl1 << "\t" << Column << endl;
									sum_1 = sum_1 + Column;
									if (sum_1 > 100)
									{
										sum_1 = sum_1 - Column;
										pl1++;
									}
									sum_1 = sum_1 + Column;
									for (int Row = 1; Row < 7; Row++)
									{
										if (sum_1 == Snake_Head[Row])
										{
											cout << "\n\n\tComputer 1 steps on snake's head of Snake : " << Row << endl;
											sum_1 = Snake_Tail[Row];
										}
										else if (sum_1 == Ladder_Start[Row])
										{
											cout << "\n\n\tComputer 1 steps on Ladder : " << Row << endl;
											sum_1 = Ladder_Stop[Row];
										}
									}
									{
										cout << "\n\n\t\tComputer 1 sum till now is : " << sum_1 << endl << endl;
									}
									cout << "========================================================================================================================================================================" << endl;
								}
								if (sum_1 > 100)
								{
									sum_1 = sum_1 - Column;
									pl1++;
								}
							}
						}
						else if (roll % 2 != 0)
						{
							if (stop2 == 0)
							{
								cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\tComputer 2 " << endl;
								int r = rand() % 6 + 1;
								cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\tTurn No " << pl2 << "\t" << r << endl;
								pl2++;
								cout << endl;
								if (r == 6 && stop2 == 0)
								{
									stop2++;
									cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t The game starts for Computer 2 " << endl;
									cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t Computer 2  " << endl;
									int z = rand() % 6 + 1;
									cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t Turn No " << pl2 << "\t" << z << endl;
									sum_2 = sum_2 + z;
									cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t Computer 2 sum till now is : " << sum_2 << endl;
								}
							}
							else if (stop2 != 0)
							{
								cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t Computer 2  " << endl;
								int z = rand() % 6 + 1;
								cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t Turn No " << pl2 << "\t" << z << endl;
								sum_2 = sum_2 + z;
								if (sum_2 > 100)
								{
									sum_2 = sum_2 - z;
									pl2++;
								}
								for (int Row = 0; Row < 7; Row++)
								{
									if (sum_2 == Snake_Head[Row]) // loop to check whether player stands on snake or ladder
									{
										cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t Computer 2 steps on snake's head of snake : " << Row << endl;
										sum_2 = Snake_Tail[Row];
										cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t Computer 2 sum till now is : " << sum_2;
									}
									else if (sum_2 == Ladder_Start[Row])
									{
										cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t Computer 2 steps on ladder " << Row << endl;
										sum_2 = Ladder_Stop[Row];
										cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t Computer 2 sum till now is : " << sum_2;
									}
								}
								{
									cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t Computer 2 sum till now is : " << sum_2;
								}
								pl2++;
								if (z == 6) // if 6 rolled second time for Computer 2
								{
									cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t Computer 2  " << endl;
									int z = rand() % 6 + 1;
									cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t Turn No " << pl2 << "\t" << z << endl;
									sum_2 = sum_2 + z;
									if (sum_2 > 100)
									{
										sum_2 = sum_2 - z;
										pl2++;
									}
									for (int Row = 0; Row < 7; Row++) // loop to check whether player stands on snake or ladder
									{
										if (sum_2 == Snake_Head[Row])
										{
											cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t Computer 2 steps on snake's head of snake: " << Row << endl;
											sum_2 = Snake_Tail[Row];
											cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t Computer 2 sum till now is : " << sum_2;
										}
										else if (sum_2 == Ladder_Start[Row])
										{
											cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t Computer 2 steps on ladder : " << Row << endl;
											sum_2 = Ladder_Stop[Row];
										}
									}
									{
										cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Computer 2 sum till now is : " << sum_2;
									}
								}
							}
						}
						cout << endl;
						roll++;
					}
				}
				if (Choice == 2)
				{
					srand(time(0));
					for (int Row = 1; Row < 7; Row++)
					{
						Rand1 = rand() % 99 + 1;
						Rand2 = rand() % 99 + 1;
						if (Rand1 == Rand2)
						{
							Rand1 = rand() % 99 + 1;
							Rand2 = rand() % 99 + 1;
						}
						if (Rand1 > Rand2)
						{
							Snake_Head[Row] = Rand1;
							Snake_Tail[Row] = Rand2;
						}
						else if (Rand1 < Rand2)
						{
							Row--;
						}
						for (int Row = 0; Row < 7; Row++)
						{
							Rand1 = rand() % 99 + 1;
							Rand2 = rand() % 99 + 1;
							if (Rand1 == Rand2)
							{
								Rand1 = rand() % 99 + 1;
								Rand2 = rand() % 99 + 1;
							}
							if (Rand1 < Rand2)
							{
								Ladder_Start[Row] = Rand1;
								Ladder_Stop[Row] = Rand2;
							}
							else if (Rand1 > Rand2)
							{
								Row--;
							}
						}
					}
					cout << endl << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << endl << endl << endl;
					cout << "\t\t\t\t\t\t     SSSSSS  " << "  NNN    NN  " << "      AAA     " << "  KK     KK  " << "  EEEEEEE " << "  SSSSSS  " << endl;
					cout << "\t\t\t\t\t\t     SS      " << "  NN N   NN  " << "     A   A    " << "  KK   KK    " << "  EE      " << "  SS      " << endl;
					cout << "\t\t\t\t\t\t     SSSSSS  " << "  NN  N  NN  " << "    AAAAAAA   " << "  KK KK      " << "  EEEEE   " << "  SSSSSS  " << endl;
					cout << "\t\t\t\t\t\t         SS  " << "  NN   N NN  " << "   AA     AA  " << "  KK   KK    " << "  EE      " << "      SS  " << endl;
					cout << "\t\t\t\t\t\t     SSSSSS  " << "  NN    NNN  " << "  AA       AA " << "  KK     KK  " << "  EEEEEEE " << "  SSSSSS  " << endl;
					cout << endl << endl << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << "\n\t\t\t\t\t\t\t   \"\" :: Snake Postion is Given as Below With Respect to Box :: \"\" " << endl << endl;
					for (int Row = 1; Row < 7; Row++)
					{
						cout << "\t\t\t\t\t\t\t\t\t ** Snake " << Row << " Head Position : " << Snake_Head[Row] << " ** " << endl;
						cout << "\t\t\t\t\t\t\t\t\t ** Snake " << Row << " Tail Position : " << Snake_Tail[Row] << " ** " << endl << endl;
					}
					cout << "========================================================================================================================================================================" << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << endl << endl << endl;
					cout << "\t\t\t\t\t\t\t LL       " << "     AAA     " << " DDDDD    " << " DDDDD    " << " EEEEEEE  " << "RRRRRRR   " << " SSSSSS " << endl;
					cout << "\t\t\t\t\t\t\t LL       " << "    A   A    " << " DD   DD  " << " DD   DD  " << " EE       " << "RR    RR  " << " SS     " << endl;
					cout << "\t\t\t\t\t\t\t LL       " << "   AAAAAAA   " << " DD    DD " << " DD    DD " << " EEEEE    " << "RRRRRRR   " << " SSSSSS " << endl;
					cout << "\t\t\t\t\t\t\t LL       " << "  AA     AA  " << " DD   DD  " << " DD   DD  " << " EE       " << "RR    RR  " << "     SS " << endl;
					cout << "\t\t\t\t\t\t\t LLLLLLLL " << " AA       AA " << " DDDDD    " << " DDDDD    " << " EEEEEEE  " << "RR     RR " << " SSSSSS " << endl;
					cout << endl << endl << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << "\n\t\t\t\t\t\t\t   \"\" :: Ladder Postion is Given as Below With Respect to Box :: \"\" " << endl << endl;
					for (int Row = 1; Row < 7; Row++)
					{
						cout << "\t\t\t\t\t\t\t\t\t :: Ladder " << Row << " Starting Position : " << Ladder_Start[Row] << " :: " << endl;
						cout << "\t\t\t\t\t\t\t\t\t :: Ladder " << Row << " Stoping  Position : " << Ladder_Stop[Row] << " :: " << endl << endl;
					}
					cout << "========================================================================================================================" << endl;

					int Dice, x, Column, n = 0;
					cout << "========================================================================================================================================================================" << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << endl;
					cout << "\t\t\t\t\t\t\t  TTTTTTTTTTTT " << "     AAA     " << " BBBBBBBB  " << " LL        " << " EEEEEEEE " << endl;
					cout << "\t\t\t\t\t\t\t       TT      " << "    A   A    " << " BB     BB " << " LL        " << " EE       " << endl;
					cout << "\t\t\t\t\t\t\t       TT      " << "   AAAAAAA   " << " BBBBBBB   " << " LL        " << " EEEEEEE  " << endl;
					cout << "\t\t\t\t\t\t\t       TT      " << "  AA     AA  " << " BB     BB " << " LL        " << " EE       " << endl;
					cout << "\t\t\t\t\t\t\t       TT      " << " AA       AA " << " BBBBBBBB  " << " LLLLLLLLL " << " EEEEEEEE " << endl;
					cout << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << endl << endl;
					cout << "\t\t\t\t\t |===============================================================================================|";
					cout << "\t\t\t\t\t\t\t |                                                                                               |";
					cout << "\t\t  ";
					for (int Row = 0; Row < 10; Row++)
					{
						cout << "\t\t\t\t\t\ |     ";
						for (int Column = 0; Column < 10; Column++)
						{
							if (Row % 2 == 0)
							{
								Box[Row][Column + 1] = Box[Row][Column] - 1;
							}
							else if (Row % 2 != 0)
							{
								Box[Row][Column + 1] = Box[Row][Column] + 1;
							}
							for (int Limit = 1; Limit < 7; Limit++)
							{
								if (Snake_Head[Limit] == Box[Row][Column] || Snake_Head[Limit + 1] == Box[Row][Column] || Snake_Head[Limit + 2] == Box[Row][Column] || Snake_Head[Limit + 3] == Box[Row][Column] || Snake_Head[Limit + 4] == Box[Row][Column] || Snake_Head[Limit + 5] == Box[Row][Column])
								{
									cout << "SH" << "       ";
									break;
								}
								if (Snake_Tail[Limit] == Box[Row][Column] || Snake_Tail[Limit + 1] == Box[Row][Column] || Snake_Tail[Limit + 2] == Box[Row][Column] || Snake_Tail[Limit + 3] == Box[Row][Column] || Snake_Tail[Limit + 4] == Box[Row][Column] || Snake_Tail[Limit + 5] == Box[Row][Column])
								{
									cout << "ST" << "       ";
									break;
								}
								if (Ladder_Start[Limit] == Box[Row][Column] || Ladder_Start[Limit + 1] == Box[Row][Column] || Ladder_Start[Limit + 2] == Box[Row][Column] || Ladder_Start[Limit + 3] == Box[Row][Column] || Ladder_Start[Limit + 4] == Box[Row][Column] || Ladder_Start[Limit + 5] == Box[Row][Column])
								{
									cout << "LS" << "       ";
									break;
								}
								if (Ladder_Stop[Limit] == Box[Row][Column] || Ladder_Stop[Limit + 1] == Box[Row][Column] || Ladder_Stop[Limit + 2] == Box[Row][Column] || Ladder_Stop[Limit + 3] == Box[Row][Column] || Ladder_Stop[Limit + 4] == Box[Row][Column] || Ladder_Stop[Limit + 5] == Box[Row][Column])
								{
									cout << "LE" << "       ";
									break;
								}
								else if (Snake_Head[Limit] != Box[Row][Column])
								{
									cout << Box[Row][Column] << "       ";
									break;
								}
								else if (Snake_Tail[Limit] != Box[Row][Column])
								{
									cout << Box[Row][Column] << "       ";
									break;
								}
								else if (Ladder_Start[Limit] != Box[Row][Column])
								{
									cout << Box[Row][Column] << "       ";
									break;
								}
								else if (Ladder_Stop[Limit] != Box[Row][Column])
								{
									cout << Box[Row][Column] << "       ";
									break;
								}
							}
							if (Row >= 9)
							{
								cout << " ";
							}
							Value_Setup = Column;
						}
						if (Row % 2 == 0)
						{
							Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
						}
						if (Row % 2 != 0)
						{
							Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
						}
						cout << "\t\t\t\t\t\t\t |                                                                                               |";
						cout << "\t\t\t\t\t\t\t |===============================================================================================|" << endl;
					}
					cout << endl;
					srand(time(0));
					int l;
					cout << "Enter Player name : ";
					cin >> Person;
					if (Person == "Afan" || Person == "afan" || Person == "Farhan" || Person == "farhan" || Person == "Ehtisham" || Person == "ehtisham")
					{
						cout << "========================================================================================================================================================================" << endl;
						getchar();
						while (sum_1 < 100 || sum_2 < 100)
						{
							if (sum_1 == 100)
							{
								cout << Person << " won the game !!!";
							}
							else if (sum_2 == 100)
							{
								cout << "Computer won the game !!!";
							}
							if (sum_1 == 100 || sum_2 == 100)
							{
								break;
							}
							if (roll % 2 == 0)
							{
								if (stop1 == 0)
								{
									cout << "Roll the dice " << Person << "   " << endl;
									l = getchar();
									int r = rand() % 6 + 1;
									cout << Person << "  " << "   ";
									cout << "attempt(s) " << pl1 << " \t  " << "Number on dice is : " << r << endl;
									pl1++;
									if (r == 6 && stop1 == 0)
									{
										stop1++;
										cout << "\nThe game starts for " << Person << endl;
										cout << "Roll the dice " << Person << "   " << endl;
										l = getchar();
										cout << Person << "  " << "   ";
										int Column = rand() % 6 + 1;
										cout << "attempt(s) " << pl1 << " \t  " << "Number on dice is : " << Column << endl;
										sum_1 = sum_1 + Column;
										cout << "\n\t" << Person << "'s " << "sum till now is :" << sum_1 << endl;
										cout << endl << endl;
										for (int Row = 0; Row < 10; Row++)
										{
											cout << "\t\t\t\t\t\ |     ";
											for (int Column = 0; Column < 10; Column++)
											{
												if (Row % 2 == 0)
												{
													Box[Row][Column + 1] = Box[Row][Column] - 1;
												}
												else if (Row % 2 != 0)
												{
													Box[Row][Column + 1] = Box[Row][Column] + 1;
												}
												for (int Limit = 1; Limit < 7; Limit++)
												{
													if (sum_1 == Box[Row][Column])
													{
														cout << Person << "     ";
														break;
													}
													if (sum_2 == Box[Row][Column])
													{
														cout << "Com" << "     ";
														break;
													}
													if (Snake_Head[Limit] == Box[Row][Column] || Snake_Head[Limit + 1] == Box[Row][Column] || Snake_Head[Limit + 2] == Box[Row][Column] || Snake_Head[Limit + 3] == Box[Row][Column] || Snake_Head[Limit + 4] == Box[Row][Column] || Snake_Head[Limit + 5] == Box[Row][Column])
													{
														cout << "SH" << "       ";
														break;
													}
													if (Snake_Tail[Limit] == Box[Row][Column] || Snake_Tail[Limit + 1] == Box[Row][Column] || Snake_Tail[Limit + 2] == Box[Row][Column] || Snake_Tail[Limit + 3] == Box[Row][Column] || Snake_Tail[Limit + 4] == Box[Row][Column] || Snake_Tail[Limit + 5] == Box[Row][Column])
													{
														cout << "ST" << "       ";
														break;
													}
													if (Ladder_Start[Limit] == Box[Row][Column] || Ladder_Start[Limit + 1] == Box[Row][Column] || Ladder_Start[Limit + 2] == Box[Row][Column] || Ladder_Start[Limit + 3] == Box[Row][Column] || Ladder_Start[Limit + 4] == Box[Row][Column] || Ladder_Start[Limit + 5] == Box[Row][Column])
													{
														cout << "LS" << "       ";
														break;
													}
													if (Ladder_Stop[Limit] == Box[Row][Column] || Ladder_Stop[Limit + 1] == Box[Row][Column] || Ladder_Stop[Limit + 2] == Box[Row][Column] || Ladder_Stop[Limit + 3] == Box[Row][Column] || Ladder_Stop[Limit + 4] == Box[Row][Column] || Ladder_Stop[Limit + 5] == Box[Row][Column])
													{
														cout << "LE" << "       ";
														break;
													}
													else if (Snake_Head[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
													else if (Snake_Tail[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
													else if (Ladder_Start[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
													else if (Ladder_Stop[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
												}
												if (Row >= 9)
												{
													cout << " ";
												}
												Value_Setup = Column;
											}
											if (Row % 2 == 0)
											{
												Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
											}
											if (Row % 2 != 0)
											{
												Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
											}
											cout << "\t\t\t\t\t\t\t |                                                                                               |";
											cout << "\t\t\t\t\t\t\t |===============================================================================================|" << endl;
										}
										pl1++;
										if (Column == 6)
										{
											cout << "Bonus Turn turn :" << endl;
											l = getchar();
											cout << Person << "  " << "   ";
											int Column = rand() % 6 + 1;
											cout << "attempt(s) " << pl1 << " \t  " << "Number on dice is : " << Column << endl;
											sum_1 = sum_1 + Column;
											cout << endl << endl;
											for (int Row = 0; Row < 10; Row++)
											{
												cout << "\t\t\t\t\t\ |     ";
												for (int Column = 0; Column < 10; Column++)
												{
													if (Row % 2 == 0)
													{
														Box[Row][Column + 1] = Box[Row][Column] - 1;
													}
													else if (Row % 2 != 0)
													{
														Box[Row][Column + 1] = Box[Row][Column] + 1;
													}
													for (int Limit = 1; Limit < 7; Limit++)
													{
														if (sum_1 == Box[Row][Column])
														{
															cout << Person << "     ";
															break;
														}
														if (sum_2 == Box[Row][Column])
														{
															cout << "Com" << "     ";
															break;
														}
														if (Snake_Head[Limit] == Box[Row][Column] || Snake_Head[Limit + 1] == Box[Row][Column] || Snake_Head[Limit + 2] == Box[Row][Column] || Snake_Head[Limit + 3] == Box[Row][Column] || Snake_Head[Limit + 4] == Box[Row][Column] || Snake_Head[Limit + 5] == Box[Row][Column])
														{
															cout << "SH" << "       ";
															break;
														}
														if (Snake_Tail[Limit] == Box[Row][Column] || Snake_Tail[Limit + 1] == Box[Row][Column] || Snake_Tail[Limit + 2] == Box[Row][Column] || Snake_Tail[Limit + 3] == Box[Row][Column] || Snake_Tail[Limit + 4] == Box[Row][Column] || Snake_Tail[Limit + 5] == Box[Row][Column])
														{
															cout << "ST" << "       ";
															break;
														}
														if (Ladder_Start[Limit] == Box[Row][Column] || Ladder_Start[Limit + 1] == Box[Row][Column] || Ladder_Start[Limit + 2] == Box[Row][Column] || Ladder_Start[Limit + 3] == Box[Row][Column] || Ladder_Start[Limit + 4] == Box[Row][Column] || Ladder_Start[Limit + 5] == Box[Row][Column])
														{
															cout << "LS" << "       ";
															break;
														}
														if (Ladder_Stop[Limit] == Box[Row][Column] || Ladder_Stop[Limit + 1] == Box[Row][Column] || Ladder_Stop[Limit + 2] == Box[Row][Column] || Ladder_Stop[Limit + 3] == Box[Row][Column] || Ladder_Stop[Limit + 4] == Box[Row][Column] || Ladder_Stop[Limit + 5] == Box[Row][Column])
														{
															cout << "LE" << "       ";
															break;
														}
														else if (Snake_Head[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Snake_Tail[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Ladder_Start[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Ladder_Stop[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
													}
													if (Row >= 9)
													{
														cout << " ";
													}
													Value_Setup = Column;
												}
												if (Row % 2 == 0)
												{
													Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
												}
												if (Row % 2 != 0)
												{
													Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
												}
												cout << "\t\t\t\t\t\t\t |                                                                                               |";
												cout << "\t\t\t\t\t\t\t |===============================================================================================|" << endl;
											}
											pl1++;
										}
									}
								}
								else if (stop1 != 0)
								{
									cout << "Roll the dice " << Person << "   " << endl;
									l = getchar();
									cout << Person << "  " << "   ";
									int Column = rand() % 6 + 1;
									cout << "attempt(s) " << pl1 << " \t  " << "Number on dice is : " << Column << endl;
									sum_1 = sum_1 + Column;
									if (sum_1 > 100)
									{
										cout << "Sum becomes greater than 100 " << endl;
										cout << "Better Luck net time !" << endl;
										sum_1 = sum_1 - Column;
									}
									for (int Row = 1; Row < 7; Row++)
									{
										if (sum_1 == Snake_Head[Row])
										{
											cout << Person << " steps on snake's head of Snake: " << Row << endl;
											sum_1 = Snake_Tail[Row];
										}
										else if (sum_1 == Ladder_Start[Row])
										{
											cout << Person << " steps on Ladder " << Row << endl;
											sum_1 = Ladder_Stop[Row];
										}
									}
									{
										cout << "\n\t" << Person << "'s " << "sum till now is :" << sum_1 << endl;
										for (int Row = 0; Row < 10; Row++)
										{
											cout << "\t\t\t\t\t\ |     ";
											for (int Column = 0; Column < 10; Column++)
											{
												if (Row % 2 == 0)
												{
													Box[Row][Column + 1] = Box[Row][Column] - 1;
												}
												else if (Row % 2 != 0)
												{
													Box[Row][Column + 1] = Box[Row][Column] + 1;
												}
												for (int Limit = 1; Limit < 7; Limit++)
												{
													if (sum_1 == Box[Row][Column])
													{
														cout << Person << "     ";
														break;
													}
													if (sum_2 == Box[Row][Column])
													{
														cout << "Com" << "     ";
														break;
													}
													if (Snake_Head[Limit] == Box[Row][Column] || Snake_Head[Limit + 1] == Box[Row][Column] || Snake_Head[Limit + 2] == Box[Row][Column] || Snake_Head[Limit + 3] == Box[Row][Column] || Snake_Head[Limit + 4] == Box[Row][Column] || Snake_Head[Limit + 5] == Box[Row][Column])
													{
														cout << "SH" << "       ";
														break;
													}
													if (Snake_Tail[Limit] == Box[Row][Column] || Snake_Tail[Limit + 1] == Box[Row][Column] || Snake_Tail[Limit + 2] == Box[Row][Column] || Snake_Tail[Limit + 3] == Box[Row][Column] || Snake_Tail[Limit + 4] == Box[Row][Column] || Snake_Tail[Limit + 5] == Box[Row][Column])
													{
														cout << "ST" << "       ";
														break;
													}
													if (Ladder_Start[Limit] == Box[Row][Column] || Ladder_Start[Limit + 1] == Box[Row][Column] || Ladder_Start[Limit + 2] == Box[Row][Column] || Ladder_Start[Limit + 3] == Box[Row][Column] || Ladder_Start[Limit + 4] == Box[Row][Column] || Ladder_Start[Limit + 5] == Box[Row][Column])
													{
														cout << "LS" << "       ";
														break;
													}
													if (Ladder_Stop[Limit] == Box[Row][Column] || Ladder_Stop[Limit + 1] == Box[Row][Column] || Ladder_Stop[Limit + 2] == Box[Row][Column] || Ladder_Stop[Limit + 3] == Box[Row][Column] || Ladder_Stop[Limit + 4] == Box[Row][Column] || Ladder_Stop[Limit + 5] == Box[Row][Column])
													{
														cout << "LE" << "       ";
														break;
													}
													else if (Snake_Head[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
													else if (Snake_Tail[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
													else if (Ladder_Start[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
													else if (Ladder_Stop[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
												}
												if (Row >= 9)
												{
													cout << " ";
												}
												Value_Setup = Column;
											}
											if (Row % 2 == 0)
											{
												Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
											}
											if (Row % 2 != 0)
											{
												Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
											}
											cout << "\t\t\t\t\t\t\t |                                                                                               |";
											cout << "\t\t\t\t\t\t\t |===============================================================================================|" << endl;
										}
									}
									pl1++;
									if (Column == 6)
									{
										cout << "Bonus Turn turn :" << endl;
										l = getchar();
										cout << Person << "  " << "   ";
										int Column = rand() % 6 + 1;
										cout << "attempt(s) " << pl1 << " \t  " << "Number on dice is : " << Column << endl;
										sum_1 = sum_1 + Column;
										pl1++;
										if (sum_1 > 100)
										{
											sum_1 = sum_1 - Column;
											pl1++;
										}
										for (int Row = 1; Row < 7; Row++)
										{
											if (sum_1 == Snake_Head[Row])
											{
												cout << Person << " steps on snake's head of Snake: " << Row << endl;
												sum_1 = Snake_Tail[Row];
											}
											else if (sum_1 == Ladder_Start[Row])
											{
												cout << Person << " steps on Ladder " << Row << endl;
												sum_1 = Ladder_Stop[Row];
											}
										}
										{
											cout << "\n\t" << Person << "'s " << "sum till now is :" << sum_1 << endl;
											cout << endl << endl;
											for (int Row = 0; Row < 10; Row++)
											{
												cout << "\t\t\t\t\t\ |     ";
												for (int Column = 0; Column < 10; Column++)
												{
													if (Row % 2 == 0)
													{
														Box[Row][Column + 1] = Box[Row][Column] - 1;
													}
													else if (Row % 2 != 0)
													{
														Box[Row][Column + 1] = Box[Row][Column] + 1;
													}
													for (int Limit = 1; Limit < 7; Limit++)
													{
														if (sum_1 == Box[Row][Column])
														{
															cout << Person << "     ";
															break;
														}
														if (sum_2 == Box[Row][Column])
														{
															cout << "Com" << "     ";
															break;
														}
														if (Snake_Head[Limit] == Box[Row][Column] || Snake_Head[Limit + 1] == Box[Row][Column] || Snake_Head[Limit + 2] == Box[Row][Column] || Snake_Head[Limit + 3] == Box[Row][Column] || Snake_Head[Limit + 4] == Box[Row][Column] || Snake_Head[Limit + 5] == Box[Row][Column])
														{
															cout << "SH" << "       ";
															break;
														}
														if (Snake_Tail[Limit] == Box[Row][Column] || Snake_Tail[Limit + 1] == Box[Row][Column] || Snake_Tail[Limit + 2] == Box[Row][Column] || Snake_Tail[Limit + 3] == Box[Row][Column] || Snake_Tail[Limit + 4] == Box[Row][Column] || Snake_Tail[Limit + 5] == Box[Row][Column])
														{
															cout << "ST" << "       ";
															break;
														}
														if (Ladder_Start[Limit] == Box[Row][Column] || Ladder_Start[Limit + 1] == Box[Row][Column] || Ladder_Start[Limit + 2] == Box[Row][Column] || Ladder_Start[Limit + 3] == Box[Row][Column] || Ladder_Start[Limit + 4] == Box[Row][Column] || Ladder_Start[Limit + 5] == Box[Row][Column])
														{
															cout << "LS" << "       ";
															break;
														}
														if (Ladder_Stop[Limit] == Box[Row][Column] || Ladder_Stop[Limit + 1] == Box[Row][Column] || Ladder_Stop[Limit + 2] == Box[Row][Column] || Ladder_Stop[Limit + 3] == Box[Row][Column] || Ladder_Stop[Limit + 4] == Box[Row][Column] || Ladder_Stop[Limit + 5] == Box[Row][Column])
														{
															cout << "LE" << "       ";
															break;
														}
														else if (Snake_Head[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Snake_Tail[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Ladder_Start[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Ladder_Stop[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
													}
													if (Row >= 9)
													{
														cout << " ";
													}
													Value_Setup = Column;
												}
												if (Row % 2 == 0)
												{
													Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
												}
												if (Row % 2 != 0)
												{
													Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
												}
												cout << "\t\t\t\t\t\t\t |                                                                                               |";
												cout << "\t\t\t\t\t\t\t |===============================================================================================|" << endl;
											}
										}
									}
									if (sum_1 > 100)
									{
										cout << "Sum becomes greater than 100 " << endl;
										cout << "Better Luck net time !" << endl;
										sum_1 = sum_1 - Column;
									}
								}
							}
							else if (roll % 2 != 0)
							{
								cout << "========================================================================================================================================================================" << endl;
								if (stop2 == 0)
								{
									cout << "\nComputer  " << "   ";
									int r = rand() % 6 + 1;
									cout << "attempt(s) " << pl2 << " \t  " << "Number on dice is : " << r << endl;
									pl2++;
									if (r == 6 && stop2 == 0)
									{
										stop2++;
										cout << "The game starts for Computer " << endl;
										cout << "\nComputer " << "   ";
										int z = rand() % 6 + 1;
										cout << "attempt(s) " << pl2 << " \t  " << "Number on dice is : " << z << endl;
										sum_2 = sum_2 + z;
										cout << "\n\tComputer sum till now is :" << sum_2 << endl;
										cout << endl << endl;
										for (int Row = 0; Row < 10; Row++)
										{
											cout << "\t\t\t\t\t\ |     ";
											for (int Column = 0; Column < 10; Column++)
											{
												if (Row % 2 == 0)
												{
													Box[Row][Column + 1] = Box[Row][Column] - 1;
												}
												else if (Row % 2 != 0)
												{
													Box[Row][Column + 1] = Box[Row][Column] + 1;
												}
												for (int Limit = 1; Limit < 7; Limit++)
												{
													if (sum_1 == Box[Row][Column])
													{
														cout << Person << "     ";
														break;
													}
													if (sum_2 == Box[Row][Column])
													{
														cout << "Com" << "     ";
														break;
													}
													if (Snake_Head[Limit] == Box[Row][Column] || Snake_Head[Limit + 1] == Box[Row][Column] || Snake_Head[Limit + 2] == Box[Row][Column] || Snake_Head[Limit + 3] == Box[Row][Column] || Snake_Head[Limit + 4] == Box[Row][Column] || Snake_Head[Limit + 5] == Box[Row][Column])
													{
														cout << "SH" << "       ";
														break;
													}
													if (Snake_Tail[Limit] == Box[Row][Column] || Snake_Tail[Limit + 1] == Box[Row][Column] || Snake_Tail[Limit + 2] == Box[Row][Column] || Snake_Tail[Limit + 3] == Box[Row][Column] || Snake_Tail[Limit + 4] == Box[Row][Column] || Snake_Tail[Limit + 5] == Box[Row][Column])
													{
														cout << "ST" << "       ";
														break;
													}
													if (Ladder_Start[Limit] == Box[Row][Column] || Ladder_Start[Limit + 1] == Box[Row][Column] || Ladder_Start[Limit + 2] == Box[Row][Column] || Ladder_Start[Limit + 3] == Box[Row][Column] || Ladder_Start[Limit + 4] == Box[Row][Column] || Ladder_Start[Limit + 5] == Box[Row][Column])
													{
														cout << "LS" << "       ";
														break;
													}
													if (Ladder_Stop[Limit] == Box[Row][Column] || Ladder_Stop[Limit + 1] == Box[Row][Column] || Ladder_Stop[Limit + 2] == Box[Row][Column] || Ladder_Stop[Limit + 3] == Box[Row][Column] || Ladder_Stop[Limit + 4] == Box[Row][Column] || Ladder_Stop[Limit + 5] == Box[Row][Column])
													{
														cout << "LE" << "       ";
														break;
													}
													else if (Snake_Head[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
													else if (Snake_Tail[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
													else if (Ladder_Start[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
													else if (Ladder_Stop[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
												}
												if (Row >= 9)
												{
													cout << " ";
												}
												Value_Setup = Column;
											}
											if (Row % 2 == 0)
											{
												Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
											}
											if (Row % 2 != 0)
											{
												Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
											}
											cout << "\t\t\t\t\t\t\t |                                                                                               |";
											cout << "\t\t\t\t\t\t\t |===============================================================================================|" << endl;
										}
										pl2++;
									}
								}
								else if (stop2 != 0)
								{
									cout << "\nComputer  " << "   ";
									int z = rand() % 6 + 1;
									cout << "attempt(s) " << pl2 << " \t  " << "Number on dice is : " << z << endl;
									sum_2 = sum_2 + z;
									if (sum_2 > 100)
									{
										cout << "Sum becomes greater than 100 " << endl;
										cout << "Better Luck net time !" << endl;
										sum_2 = sum_2 - z;
									}
									for (int Row = 1; Row < 7; Row++)
									{
										if (sum_2 == Snake_Head[Row]) // loop to check whether player stands on snake or ladder
										{
											cout << "Computer steps on snake's head of snake: " << Row << endl;
											sum_2 = Snake_Tail[Row];
										}
										else if (sum_2 == Ladder_Start[Row])
										{
											cout << "Computer steps on ladder " << Row << endl;
											sum_2 = Ladder_Stop[Row];
										}
									}
									{
										cout << "\t Computer sum till now is :" << sum_2 << endl;
										for (int Row = 0; Row < 10; Row++)
										{
											cout << "\t\t\t\t\t\ |     ";
											for (int Column = 0; Column < 10; Column++)
											{
												if (Row % 2 == 0)
												{
													Box[Row][Column + 1] = Box[Row][Column] - 1;
												}
												else if (Row % 2 != 0)
												{
													Box[Row][Column + 1] = Box[Row][Column] + 1;
												}
												for (int Limit = 1; Limit < 7; Limit++)
												{
													if (sum_1 == Box[Row][Column])
													{
														cout << Person << "     ";
														break;
													}
													if (sum_2 == Box[Row][Column])
													{
														cout << "Com" << "     ";
														break;
													}
													if (Snake_Head[Limit] == Box[Row][Column] || Snake_Head[Limit + 1] == Box[Row][Column] || Snake_Head[Limit + 2] == Box[Row][Column] || Snake_Head[Limit + 3] == Box[Row][Column] || Snake_Head[Limit + 4] == Box[Row][Column] || Snake_Head[Limit + 5] == Box[Row][Column])
													{
														cout << "SH" << "       ";
														break;
													}
													if (Snake_Tail[Limit] == Box[Row][Column] || Snake_Tail[Limit + 1] == Box[Row][Column] || Snake_Tail[Limit + 2] == Box[Row][Column] || Snake_Tail[Limit + 3] == Box[Row][Column] || Snake_Tail[Limit + 4] == Box[Row][Column] || Snake_Tail[Limit + 5] == Box[Row][Column])
													{
														cout << "ST" << "       ";
														break;
													}
													if (Ladder_Start[Limit] == Box[Row][Column] || Ladder_Start[Limit + 1] == Box[Row][Column] || Ladder_Start[Limit + 2] == Box[Row][Column] || Ladder_Start[Limit + 3] == Box[Row][Column] || Ladder_Start[Limit + 4] == Box[Row][Column] || Ladder_Start[Limit + 5] == Box[Row][Column])
													{
														cout << "LS" << "       ";
														break;
													}
													if (Ladder_Stop[Limit] == Box[Row][Column] || Ladder_Stop[Limit + 1] == Box[Row][Column] || Ladder_Stop[Limit + 2] == Box[Row][Column] || Ladder_Stop[Limit + 3] == Box[Row][Column] || Ladder_Stop[Limit + 4] == Box[Row][Column] || Ladder_Stop[Limit + 5] == Box[Row][Column])
													{
														cout << "LE" << "       ";
														break;
													}
													else if (Snake_Head[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
													else if (Snake_Tail[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
													else if (Ladder_Start[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
													else if (Ladder_Stop[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
												}
												if (Row >= 9)
												{
													cout << " ";
												}
												Value_Setup = Column;
											}
											if (Row % 2 == 0)
											{
												Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
											}
											if (Row % 2 != 0)
											{
												Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
											}
											cout << "\t\t\t\t\t\t\t |                                                                                               |";
											cout << "\t\t\t\t\t\t\t |===============================================================================================|" << endl;
										}
										pl2++;
									}
									pl2++;
									if (z == 6) // if 6 rolled second time for player 2
									{
										cout << "Computer Bonus Turn " << "   ";
										int z = rand() % 6 + 1;
										cout << "attempt(s) " << pl2 << " \t  " << "Number on dice is : " << z << endl;
										sum_2 = sum_2 + z;
										cout << endl << endl;
										for (int Row = 0; Row < 10; Row++)
										{
											cout << "\t\t\t\t\t\ |     ";
											for (int Column = 0; Column < 10; Column++)
											{
												if (Row % 2 == 0)
												{
													Box[Row][Column + 1] = Box[Row][Column] - 1;
												}
												else if (Row % 2 != 0)
												{
													Box[Row][Column + 1] = Box[Row][Column] + 1;
												}
												for (int Limit = 1; Limit < 7; Limit++)
												{
													if (sum_1 == Box[Row][Column])
													{
														cout << Person << "     ";
														break;
													}
													if (sum_2 == Box[Row][Column])
													{
														cout << "Com" << "     ";
														break;
													}
													if (Snake_Head[Limit] == Box[Row][Column] || Snake_Head[Limit + 1] == Box[Row][Column] || Snake_Head[Limit + 2] == Box[Row][Column] || Snake_Head[Limit + 3] == Box[Row][Column] || Snake_Head[Limit + 4] == Box[Row][Column] || Snake_Head[Limit + 5] == Box[Row][Column])
													{
														cout << "SH" << "       ";
														break;
													}
													if (Snake_Tail[Limit] == Box[Row][Column] || Snake_Tail[Limit + 1] == Box[Row][Column] || Snake_Tail[Limit + 2] == Box[Row][Column] || Snake_Tail[Limit + 3] == Box[Row][Column] || Snake_Tail[Limit + 4] == Box[Row][Column] || Snake_Tail[Limit + 5] == Box[Row][Column])
													{
														cout << "ST" << "       ";
														break;
													}
													if (Ladder_Start[Limit] == Box[Row][Column] || Ladder_Start[Limit + 1] == Box[Row][Column] || Ladder_Start[Limit + 2] == Box[Row][Column] || Ladder_Start[Limit + 3] == Box[Row][Column] || Ladder_Start[Limit + 4] == Box[Row][Column] || Ladder_Start[Limit + 5] == Box[Row][Column])
													{
														cout << "LS" << "       ";
														break;
													}
													if (Ladder_Stop[Limit] == Box[Row][Column] || Ladder_Stop[Limit + 1] == Box[Row][Column] || Ladder_Stop[Limit + 2] == Box[Row][Column] || Ladder_Stop[Limit + 3] == Box[Row][Column] || Ladder_Stop[Limit + 4] == Box[Row][Column] || Ladder_Stop[Limit + 5] == Box[Row][Column])
													{
														cout << "LE" << "       ";
														break;
													}
													else if (Snake_Head[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
													else if (Snake_Tail[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
													else if (Ladder_Start[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
													else if (Ladder_Stop[Limit] != Box[Row][Column])
													{
														cout << Box[Row][Column] << "       ";
														break;
													}
												}
												if (Row >= 9)
												{
													cout << " ";
												}
												Value_Setup = Column;
											}
											if (Row % 2 == 0)
											{
												Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
											}
											if (Row % 2 != 0)
											{
												Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
											}
											cout << "\t\t\t\t\t\t\t |                                                                                               |";
											cout << "\t\t\t\t\t\t\t |===============================================================================================|" << endl;
										}
										pl2++;
										if (sum_2 > 100)
										{
											cout << "Sum becomes greater than 100 " << endl;
											cout << "Better Luck net time !" << endl;
											sum_2 = sum_2 - z;
										}
										for (int Row = 1; Row < 7; Row++) // loop to check whether player stands on snake or ladder
										{
											if (sum_2 == Snake_Head[Row])
											{
												cout << "Computer steps on snake's head of snake: " << Row << endl;
												sum_2 = Snake_Tail[Row];
												cout << "\tComputer sum till now is :" << sum_2 << endl;
											}
											else if (sum_2 == Ladder_Start[Row])
											{
												cout << " Computer steps on ladder " << Row << endl;
												sum_2 = Ladder_Stop[Row];
											}
										}
										{
											cout << "\tComputer sum till now is :" << sum_2 << endl;
										}
									}
								}
								cout << "========================================================================================================================================================================" << endl;
							}
							cout << endl;
							roll++;
						}
					}
					else
					{
						cout << "\t\t\t\t\t\t" << Person << " is not a developer. Certification does not allow " << Person << " to play it ";
					}
				}
				if (Choice == 1)
				{
					srand(time(0));
					for (int Row = 1; Row < 7; Row++)
					{
						Rand1 = rand() % 99 + 1;
						Rand2 = rand() % 99 + 1;
						if (Rand1 == Rand2)
						{
							Rand1 = rand() % 99 + 1;
							Rand2 = rand() % 99 + 1;
						}
						if (Rand1 > Rand2)
						{
							Snake_Head[Row] = Rand1;
							Snake_Tail[Row] = Rand2;
						}
						else if (Rand1 < Rand2)
						{
							Row--;
						}
						for (int Row = 0; Row < 7; Row++)
						{
							Rand1 = rand() % 99 + 1;
							Rand2 = rand() % 99 + 1;
							if (Rand1 == Rand2)
							{
								Rand1 = rand() % 99 + 1;
								Rand2 = rand() % 99 + 1;
							}
							if (Rand1 < Rand2)
							{
								Ladder_Start[Row] = Rand1;
								Ladder_Stop[Row] = Rand2;
							}
							else if (Rand1 > Rand2)
							{
								Row--;
							}
						}
					}
					cout << endl << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << endl << endl << endl;
					cout << "\t\t\t\t\t\t     SSSSSS  " << "  NNN    NN  " << "      AAA     " << "  KK     KK  " << "  EEEEEEE " << "  SSSSSS  " << endl;
					cout << "\t\t\t\t\t\t     SS      " << "  NN N   NN  " << "     A   A    " << "  KK   KK    " << "  EE      " << "  SS      " << endl;
					cout << "\t\t\t\t\t\t     SSSSSS  " << "  NN  N  NN  " << "    AAAAAAA   " << "  KK KK      " << "  EEEEE   " << "  SSSSSS  " << endl;
					cout << "\t\t\t\t\t\t         SS  " << "  NN   N NN  " << "   AA     AA  " << "  KK   KK    " << "  EE      " << "      SS  " << endl;
					cout << "\t\t\t\t\t\t     SSSSSS  " << "  NN    NNN  " << "  AA       AA " << "  KK     KK  " << "  EEEEEEE " << "  SSSSSS  " << endl;
					cout << endl << endl << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << "\n\t\t\t\t\t\t\t   \"\" :: Snake Postion is Given as Below With Respect to Box :: \"\" " << endl << endl;
					for (int Row = 1; Row < 7; Row++)
					{
						cout << "\t\t\t\t\t\t\t\t\t ** Snake " << Row << " Head Position : " << Snake_Head[Row] << " ** " << endl;
						cout << "\t\t\t\t\t\t\t\t\t ** Snake " << Row << " Tail Position : " << Snake_Tail[Row] << " ** " << endl << endl;
					}
					cout << "========================================================================================================================================================================" << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << endl << endl << endl;
					cout << "\t\t\t\t\t\t\t LL       " << "     AAA     " << " DDDDD    " << " DDDDD    " << " EEEEEEE  " << "RRRRRRR   " << " SSSSSS " << endl;
					cout << "\t\t\t\t\t\t\t LL       " << "    A   A    " << " DD   DD  " << " DD   DD  " << " EE       " << "RR    RR  " << " SS     " << endl;
					cout << "\t\t\t\t\t\t\t LL       " << "   AAAAAAA   " << " DD    DD " << " DD    DD " << " EEEEE    " << "RRRRRRR   " << " SSSSSS " << endl;
					cout << "\t\t\t\t\t\t\t LL       " << "  AA     AA  " << " DD   DD  " << " DD   DD  " << " EE       " << "RR    RR  " << "     SS " << endl;
					cout << "\t\t\t\t\t\t\t LLLLLLLL " << " AA       AA " << " DDDDD    " << " DDDDD    " << " EEEEEEE  " << "RR     RR " << " SSSSSS " << endl;
					cout << endl << endl << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << "\n\t\t\t\t\t\t\t   \"\" :: Ladder Postion is Given as Below With Respect to Box :: \"\" " << endl << endl;
					for (int Row = 1; Row < 7; Row++)
					{
						cout << "\t\t\t\t\t\t\t\t\t :: Ladder " << Row << " Starting Position : " << Ladder_Start[Row] << " :: " << endl;
						cout << "\t\t\t\t\t\t\t\t\t :: Ladder " << Row << " Stoping  Position : " << Ladder_Stop[Row] << " :: " << endl << endl;
					}
					cout << "========================================================================================================================" << endl;

					int Dice, x, Column, n = 0;
					cout << "========================================================================================================================================================================" << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << endl;
					cout << "\t\t\t\t\t\t\t  TTTTTTTTTTTT " << "     AAA     " << " BBBBBBBB  " << " LL        " << " EEEEEEEE " << endl;
					cout << "\t\t\t\t\t\t\t       TT      " << "    A   A    " << " BB     BB " << " LL        " << " EE       " << endl;
					cout << "\t\t\t\t\t\t\t       TT      " << "   AAAAAAA   " << " BBBBBBB   " << " LL        " << " EEEEEEE  " << endl;
					cout << "\t\t\t\t\t\t\t       TT      " << "  AA     AA  " << " BB     BB " << " LL        " << " EE       " << endl;
					cout << "\t\t\t\t\t\t\t       TT      " << " AA       AA " << " BBBBBBBB  " << " LLLLLLLLL " << " EEEEEEEE " << endl;
					cout << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << "========================================================================================================================================================================" << endl;
					cout << endl << endl;
					cout << "\t\t\t\t\t |===============================================================================================|";
					cout << "\t\t\t\t\t\t\t |                                                                                               |";
					cout << "\t\t  ";
					for (int Row = 0; Row < 10; Row++)
					{
						cout << "\t\t\t\t\t\ |     ";
						for (int Column = 0; Column < 10; Column++)
						{
							if (Row % 2 == 0)
							{
								Box[Row][Column + 1] = Box[Row][Column] - 1;
							}
							else if (Row % 2 != 0)
							{
								Box[Row][Column + 1] = Box[Row][Column] + 1;
							}
							for (int Limit = 1; Limit < 7; Limit++)
							{
								if (Snake_Head[Limit] == Box[Row][Column] || Snake_Head[Limit + 1] == Box[Row][Column] || Snake_Head[Limit + 2] == Box[Row][Column] || Snake_Head[Limit + 3] == Box[Row][Column] || Snake_Head[Limit + 4] == Box[Row][Column] || Snake_Head[Limit + 5] == Box[Row][Column])
								{
									cout << "SH" << "       ";
									break;
								}
								if (Snake_Tail[Limit] == Box[Row][Column] || Snake_Tail[Limit + 1] == Box[Row][Column] || Snake_Tail[Limit + 2] == Box[Row][Column] || Snake_Tail[Limit + 3] == Box[Row][Column] || Snake_Tail[Limit + 4] == Box[Row][Column] || Snake_Tail[Limit + 5] == Box[Row][Column])
								{
									cout << "ST" << "       ";
									break;
								}
								if (Ladder_Start[Limit] == Box[Row][Column] || Ladder_Start[Limit + 1] == Box[Row][Column] || Ladder_Start[Limit + 2] == Box[Row][Column] || Ladder_Start[Limit + 3] == Box[Row][Column] || Ladder_Start[Limit + 4] == Box[Row][Column] || Ladder_Start[Limit + 5] == Box[Row][Column])
								{
									cout << "LS" << "       ";
									break;
								}
								if (Ladder_Stop[Limit] == Box[Row][Column] || Ladder_Stop[Limit + 1] == Box[Row][Column] || Ladder_Stop[Limit + 2] == Box[Row][Column] || Ladder_Stop[Limit + 3] == Box[Row][Column] || Ladder_Stop[Limit + 4] == Box[Row][Column] || Ladder_Stop[Limit + 5] == Box[Row][Column])
								{
									cout << "LE" << "       ";
									break;
								}
								else if (Snake_Head[Limit] != Box[Row][Column])
								{
									cout << Box[Row][Column] << "       ";
									break;
								}
								else if (Snake_Tail[Limit] != Box[Row][Column])
								{
									cout << Box[Row][Column] << "       ";
									break;
								}
								else if (Ladder_Start[Limit] != Box[Row][Column])
								{
									cout << Box[Row][Column] << "       ";
									break;
								}
								else if (Ladder_Stop[Limit] != Box[Row][Column])
								{
									cout << Box[Row][Column] << "       ";
									break;
								}
							}
							if (Row >= 9)
							{
								cout << " ";
							}
							Value_Setup = Column;
						}
						if (Row % 2 == 0)
						{
							Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
						}
						if (Row % 2 != 0)
						{
							Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
						}
						cout << "\t\t\t\t\t\t\t |                                                                                               |";
						cout << "\t\t\t\t\t\t\t |===============================================================================================|" << endl;
					}
					cout << endl;
					srand(time(0));
					int l;
					cout << "Enter Player_1 name : ";
					cin >> Player_1;
					cout << "Enter Player_2 name : ";
					cin >> Player_2;
					if (Player_1 == "Afan" || Player_1 == "afan" || Player_1 == "farhan" || Player_1 == "Farhan" || Player_1 == "Ehtisham" || Player_1 == "ehtisham")
					{
						if (Player_2 == "Farhan" || Player_2 == "farhan" || Player_2 == "Afan" || Player_2 == "afan" || Player_2 == "Ehtisham" || Player_2 == "ehtisham")
						{
							cout << "========================================================================================================================================================================" << endl;
							getchar();
							while (sum_1 < 100 || sum_2 < 100)
							{
								int r, z;
								if (sum_1 == 100)
								{
									cout << Player_1 << " won the game !!!";
								}
								else if (sum_2 == 100)
								{
									cout << Player_2 << " won the game !!!";
								}
								if (sum_1 == 100 || sum_2 == 100)
								{
									break;
								}
								if (roll % 2 == 0)
								{
									if (stop1 == 0)
									{
										cout << "How do you want to roll the dice " << Player_1 << endl << endl;
										cout << "Slow" << endl << "Medium" << endl << "Fast" << endl << endl;
										cin >> Dice_Roll;
										
										if (Dice_Roll == "Slow" || Dice_Roll == "slow")
										{
											cout << "Rolling !!!" << endl << endl;
										    r = rand() % 6 + 1;
										}
										else if (Dice_Roll == "Medium" || Dice_Roll == "medium")
										{
											for (int i = 0; i < 2; i++)
											{
												cout << "Rolling !!!" << endl << endl;
												r = rand() % 6 + 1;
											}
										}
										else if (Dice_Roll == "Fast" || Dice_Roll == "fast")
										{
											for (int i = 0; i < 4; i++)
											{
												cout << "Rolling !!!" << endl << endl;
												r = rand() % 6 + 1;
											}
										}
										cout << Player_1 << "  " << "   ";
										cout << "attempt(s) " << pl1 << " \t  " << "Number on dice is : " << r << endl;
										pl1++;
										if (r == 6 && stop1 == 0)
										{
											stop1++;
											cout << "\nThe game starts for " << Player_1 << endl;
											cout << "How do you want to roll the dice " << Player_1 << endl << endl;
											cout << "Slow" << endl << "Medium" << endl << "Fast" << endl << endl;
											cin >> Dice_Roll;
											int column;
											if (Dice_Roll == "Slow" || Dice_Roll == "slow")
											{
												cout << "Rolling !!!" << endl << endl;
												Column = rand() % 6 + 1;
											}
											else if (Dice_Roll == "Medium" || Dice_Roll == "medium")
											{
												for (int i = 0; i < 2; i++)
												{
													cout << "Rolling !!!" << endl << endl;
													Column = rand() % 6 + 1;
												}
											}
											else if (Dice_Roll == "Fast" || Dice_Roll == "fast")
											{
												for (int i = 0; i < 4; i++)
												{
													cout << "Rolling !!!" << endl << endl;
													Column = rand() % 6 + 1;
												}
											}
											cout << Player_1 << "  " << "   ";
											cout << "attempt(s) " << pl1 << " \t  " << "Number on dice is : " << Column << endl;
											sum_1 = sum_1 + Column;
											cout << "\n\t" << Player_1 << "'s " << "sum till now is :" << sum_1 << endl;
											cout << endl << endl;
											for (int Row = 0; Row < 10; Row++)
											{
												cout << "\t\t\t\t\t\ |     ";
												for (int Column = 0; Column < 10; Column++)
												{
													if (Row % 2 == 0)
													{
														Box[Row][Column + 1] = Box[Row][Column] - 1;
													}
													else if (Row % 2 != 0)
													{
														Box[Row][Column + 1] = Box[Row][Column] + 1;
													}
													for (int Limit = 1; Limit < 7; Limit++)
													{
														if (sum_1 == Box[Row][Column])
														{
															cout << Player_1 << "     ";
															break;
														}
														if (sum_2 == Box[Row][Column])
														{
															cout << Player_2 << "     ";
															break;
														}
														if (Snake_Head[Limit] == Box[Row][Column] || Snake_Head[Limit + 1] == Box[Row][Column] || Snake_Head[Limit + 2] == Box[Row][Column] || Snake_Head[Limit + 3] == Box[Row][Column] || Snake_Head[Limit + 4] == Box[Row][Column] || Snake_Head[Limit + 5] == Box[Row][Column])
														{
															cout << "SH" << "       ";
															break;
														}
														if (Snake_Tail[Limit] == Box[Row][Column] || Snake_Tail[Limit + 1] == Box[Row][Column] || Snake_Tail[Limit + 2] == Box[Row][Column] || Snake_Tail[Limit + 3] == Box[Row][Column] || Snake_Tail[Limit + 4] == Box[Row][Column] || Snake_Tail[Limit + 5] == Box[Row][Column])
														{
															cout << "ST" << "       ";
															break;
														}
														if (Ladder_Start[Limit] == Box[Row][Column] || Ladder_Start[Limit + 1] == Box[Row][Column] || Ladder_Start[Limit + 2] == Box[Row][Column] || Ladder_Start[Limit + 3] == Box[Row][Column] || Ladder_Start[Limit + 4] == Box[Row][Column] || Ladder_Start[Limit + 5] == Box[Row][Column])
														{
															cout << "LS" << "       ";
															break;
														}
														if (Ladder_Stop[Limit] == Box[Row][Column] || Ladder_Stop[Limit + 1] == Box[Row][Column] || Ladder_Stop[Limit + 2] == Box[Row][Column] || Ladder_Stop[Limit + 3] == Box[Row][Column] || Ladder_Stop[Limit + 4] == Box[Row][Column] || Ladder_Stop[Limit + 5] == Box[Row][Column])
														{
															cout << "LE" << "       ";
															break;
														}
														else if (Snake_Head[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Snake_Tail[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Ladder_Start[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Ladder_Stop[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
													}
													if (Row >= 9)
													{
														cout << " ";
													}
													Value_Setup = Column;
												}
												if (Row % 2 == 0)
												{
													Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
												}
												if (Row % 2 != 0)
												{
													Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
												}
												cout << "\t\t\t\t\t\t\t |                                                                                               |";
												cout << "\t\t\t\t\t\t\t |===============================================================================================|" << endl;
											}
											pl1++;
											if (Column == 6)
											{
												cout << "Bonus Turn turn :" << endl;
												cout << "How do you want to roll the dice " << Player_1 << endl << endl;
												cout << "Slow" << endl << "Medium" << endl << "Fast" << endl << endl;
												cin >> Dice_Roll;
												int column;
												if (Dice_Roll == "Slow" || Dice_Roll == "slow")
												{
													cout << "Rolling !!!" << endl << endl;
													Column = rand() % 6 + 1;
												}
												else if (Dice_Roll == "Medium" || Dice_Roll == "medium")
												{
													for (int i = 0; i < 2; i++)
													{
														cout << "Rolling !!!" << endl << endl;
														Column = rand() % 6 + 1;
													}
												}
												else if (Dice_Roll == "Fast" || Dice_Roll == "fast")
												{
													for (int i = 0; i < 4; i++)
													{
														cout << "Rolling !!!" << endl << endl;
														Column = rand() % 6 + 1;
													}
												}
												cout << Player_1 << "  " << "   ";
												cout << "attempt(s) " << pl1 << " \t  " << "Number on dice is : " << Column << endl;
												sum_1 = sum_1 + Column;
												cout << endl << endl;
												for (int Row = 0; Row < 10; Row++)
												{
													cout << "\t\t\t\t\t\ |     ";
													for (int Column = 0; Column < 10; Column++)
													{
														if (Row % 2 == 0)
														{
															Box[Row][Column + 1] = Box[Row][Column] - 1;
														}
														else if (Row % 2 != 0)
														{
															Box[Row][Column + 1] = Box[Row][Column] + 1;
														}
														for (int Limit = 1; Limit < 7; Limit++)
														{
															if (sum_1 == Box[Row][Column])
															{
																cout << Player_1 << "     ";
																break;
															}
															if (sum_2 == Box[Row][Column])
															{
																cout << Player_2 << "     ";
																break;
															}
															if (Snake_Head[Limit] == Box[Row][Column] || Snake_Head[Limit + 1] == Box[Row][Column] || Snake_Head[Limit + 2] == Box[Row][Column] || Snake_Head[Limit + 3] == Box[Row][Column] || Snake_Head[Limit + 4] == Box[Row][Column] || Snake_Head[Limit + 5] == Box[Row][Column])
															{
																cout << "SH" << "       ";
																break;
															}
															if (Snake_Tail[Limit] == Box[Row][Column] || Snake_Tail[Limit + 1] == Box[Row][Column] || Snake_Tail[Limit + 2] == Box[Row][Column] || Snake_Tail[Limit + 3] == Box[Row][Column] || Snake_Tail[Limit + 4] == Box[Row][Column] || Snake_Tail[Limit + 5] == Box[Row][Column])
															{
																cout << "ST" << "       ";
																break;
															}
															if (Ladder_Start[Limit] == Box[Row][Column] || Ladder_Start[Limit + 1] == Box[Row][Column] || Ladder_Start[Limit + 2] == Box[Row][Column] || Ladder_Start[Limit + 3] == Box[Row][Column] || Ladder_Start[Limit + 4] == Box[Row][Column] || Ladder_Start[Limit + 5] == Box[Row][Column])
															{
																cout << "LS" << "       ";
																break;
															}
															if (Ladder_Stop[Limit] == Box[Row][Column] || Ladder_Stop[Limit + 1] == Box[Row][Column] || Ladder_Stop[Limit + 2] == Box[Row][Column] || Ladder_Stop[Limit + 3] == Box[Row][Column] || Ladder_Stop[Limit + 4] == Box[Row][Column] || Ladder_Stop[Limit + 5] == Box[Row][Column])
															{
																cout << "LE" << "       ";
																break;
															}
															else if (Snake_Head[Limit] != Box[Row][Column])
															{
																cout << Box[Row][Column] << "       ";
																break;
															}
															else if (Snake_Tail[Limit] != Box[Row][Column])
															{
																cout << Box[Row][Column] << "       ";
																break;
															}
															else if (Ladder_Start[Limit] != Box[Row][Column])
															{
																cout << Box[Row][Column] << "       ";
																break;
															}
															else if (Ladder_Stop[Limit] != Box[Row][Column])
															{
																cout << Box[Row][Column] << "       ";
																break;
															}
														}
														if (Row >= 9)
														{
															cout << " ";
														}
														Value_Setup = Column;
													}
													if (Row % 2 == 0)
													{
														Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
													}
													if (Row % 2 != 0)
													{
														Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
													}
													cout << "\t\t\t\t\t\t\t |                                                                                               |";
													cout << "\t\t\t\t\t\t\t |===============================================================================================|" << endl;
												}
											}
										}
									}
									else if (stop1 != 0)
									{
										cout << "Roll the dice " << Player_1 << "   " << endl;
										cout << "How do you want to roll the dice " << Player_1 << endl << endl;
										cout << "Slow" << endl << "Medium" << endl << "Fast" << endl << endl;
										cin >> Dice_Roll;
										int column;
										if (Dice_Roll == "Slow" || Dice_Roll == "slow")
										{
											cout << "Rolling !!!" << endl << endl;
											Column = rand() % 6 + 1;
										}
										else if (Dice_Roll == "Medium" || Dice_Roll == "medium")
										{
											for (int i = 0; i < 2; i++)
											{
												cout << "Rolling !!!" << endl << endl;
												Column = rand() % 6 + 1;
											}
										}
										else if (Dice_Roll == "Fast" || Dice_Roll == "fast")
										{
											for (int i = 0; i < 4; i++)
											{
												cout << "Rolling !!!" << endl << endl;
												Column = rand() % 6 + 1;
											}
										}
										cout << Player_1 << "  " << "   ";
										cout << "attempt(s) " << pl1 << " \t  " << "Number on dice is : " << Column << endl;
										sum_1 = sum_1 + Column;
										if (sum_1 > 100)
										{
											cout << "Sum becomes greater than 100 " << endl;
											cout << "Better Luck net time !" << endl;
											sum_1 = sum_1 - Column;
										}
										for (int Row = 1; Row < 7; Row++)
										{
											if (sum_1 == Snake_Head[Row])
											{
												cout << Player_1 << " steps on snake's head of Snake: " << Row << endl;
												sum_1 = Snake_Tail[Row];
											}
											else if (sum_1 == Ladder_Start[Row])
											{
												cout << Player_1 << " steps on Ladder " << Row << endl;
												sum_1 = Ladder_Stop[Row];
											}
										}
										{
											cout << "\n\t" << Player_1 << "'s " << "sum till now is :" << sum_1 << endl;
											for (int Row = 0; Row < 10; Row++)
											{
												cout << "\t\t\t\t\t\ |     ";
												for (int Column = 0; Column < 10; Column++)
												{
													if (Row % 2 == 0)
													{
														Box[Row][Column + 1] = Box[Row][Column] - 1;
													}
													else if (Row % 2 != 0)
													{
														Box[Row][Column + 1] = Box[Row][Column] + 1;
													}
													for (int Limit = 1; Limit < 7; Limit++)
													{
														if (sum_1 == Box[Row][Column])
														{
															cout << Player_1 << "     ";
															break;
														}
														if (sum_2 == Box[Row][Column])
														{
															cout << Player_2 << "     ";
															break;
														}
														if (Snake_Head[Limit] == Box[Row][Column] || Snake_Head[Limit + 1] == Box[Row][Column] || Snake_Head[Limit + 2] == Box[Row][Column] || Snake_Head[Limit + 3] == Box[Row][Column] || Snake_Head[Limit + 4] == Box[Row][Column] || Snake_Head[Limit + 5] == Box[Row][Column])
														{
															cout << "SH" << "       ";
															break;
														}
														if (Snake_Tail[Limit] == Box[Row][Column] || Snake_Tail[Limit + 1] == Box[Row][Column] || Snake_Tail[Limit + 2] == Box[Row][Column] || Snake_Tail[Limit + 3] == Box[Row][Column] || Snake_Tail[Limit + 4] == Box[Row][Column] || Snake_Tail[Limit + 5] == Box[Row][Column])
														{
															cout << "ST" << "       ";
															break;
														}
														if (Ladder_Start[Limit] == Box[Row][Column] || Ladder_Start[Limit + 1] == Box[Row][Column] || Ladder_Start[Limit + 2] == Box[Row][Column] || Ladder_Start[Limit + 3] == Box[Row][Column] || Ladder_Start[Limit + 4] == Box[Row][Column] || Ladder_Start[Limit + 5] == Box[Row][Column])
														{
															cout << "LS" << "       ";
															break;
														}
														if (Ladder_Stop[Limit] == Box[Row][Column] || Ladder_Stop[Limit + 1] == Box[Row][Column] || Ladder_Stop[Limit + 2] == Box[Row][Column] || Ladder_Stop[Limit + 3] == Box[Row][Column] || Ladder_Stop[Limit + 4] == Box[Row][Column] || Ladder_Stop[Limit + 5] == Box[Row][Column])
														{
															cout << "LE" << "       ";
															break;
														}
														else if (Snake_Head[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Snake_Tail[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Ladder_Start[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Ladder_Stop[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
													}
													if (Row >= 9)
													{
														cout << " ";
													}
													Value_Setup = Column;
												}
												if (Row % 2 == 0)
												{
													Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
												}
												if (Row % 2 != 0)
												{
													Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
												}
												cout << "\t\t\t\t\t\t\t |                                                                                               |";
												cout << "\t\t\t\t\t\t\t |===============================================================================================|" << endl;
											}
										}
										pl1++;
										if (Column == 6)
										{
											cout << "Bonus Turn turn :" << endl;
											cout << "How do you want to roll the dice " << Player_1 << endl << endl;
											cout << "Slow" << endl << "Medium" << endl << "Fast" << endl << endl;
											cin >> Dice_Roll;
											int column;
											if (Dice_Roll == "Slow" || Dice_Roll == "slow")
											{
												cout << "Rolling !!!" << endl << endl;
												Column = rand() % 6 + 1;
											}
											else if (Dice_Roll == "Medium" || Dice_Roll == "medium")
											{
												for (int i = 0; i < 2; i++)
												{
													cout << "Rolling !!!" << endl << endl;
													Column = rand() % 6 + 1;
												}
											}
											else if (Dice_Roll == "Fast" || Dice_Roll == "fast")
											{
												for (int i = 0; i < 4; i++)
												{
													cout << "Rolling !!!" << endl << endl;
													Column = rand() % 6 + 1;
												}
											}
											int Column = rand() % 6 + 1;
											cout << "attempt(s) " << pl1 << " \t  " << "Number on dice is : " << Column << endl;
											sum_1 = sum_1 + Column;
											pl1++;
											if (sum_1 > 100)
											{
												sum_1 = sum_1 - Column;
												pl1++;
											}
											for (int Row = 1; Row < 7; Row++)
											{
												if (sum_1 == Snake_Head[Row])
												{
													cout << Player_1 << " steps on snake's head of Snake: " << Row << endl;
													sum_1 = Snake_Tail[Row];
												}
												else if (sum_1 == Ladder_Start[Row])
												{
													cout << Player_1 << " steps on Ladder " << Row << endl;
													sum_1 = Ladder_Stop[Row];
												}
											}
											{
												cout << "\n\t" << Player_1 << "'s " << "sum till now is :" << sum_1 << endl;
												cout << endl << endl;
												for (int Row = 0; Row < 10; Row++)
												{
													cout << "\t\t\t\t\t\ |     ";
													for (int Column = 0; Column < 10; Column++)
													{
														if (Row % 2 == 0)
														{
															Box[Row][Column + 1] = Box[Row][Column] - 1;
														}
														else if (Row % 2 != 0)
														{
															Box[Row][Column + 1] = Box[Row][Column] + 1;
														}
														for (int Limit = 1; Limit < 7; Limit++)
														{
															if (sum_1 == Box[Row][Column])
															{
																cout << Player_1 << "     ";
																break;
															}
															if (sum_2 == Box[Row][Column])
															{
																cout << Player_2 << "     ";
																break;
															}
															if (Snake_Head[Limit] == Box[Row][Column] || Snake_Head[Limit + 1] == Box[Row][Column] || Snake_Head[Limit + 2] == Box[Row][Column] || Snake_Head[Limit + 3] == Box[Row][Column] || Snake_Head[Limit + 4] == Box[Row][Column] || Snake_Head[Limit + 5] == Box[Row][Column])
															{
																cout << "SH" << "       ";
																break;
															}
															if (Snake_Tail[Limit] == Box[Row][Column] || Snake_Tail[Limit + 1] == Box[Row][Column] || Snake_Tail[Limit + 2] == Box[Row][Column] || Snake_Tail[Limit + 3] == Box[Row][Column] || Snake_Tail[Limit + 4] == Box[Row][Column] || Snake_Tail[Limit + 5] == Box[Row][Column])
															{
																cout << "ST" << "       ";
																break;
															}
															if (Ladder_Start[Limit] == Box[Row][Column] || Ladder_Start[Limit + 1] == Box[Row][Column] || Ladder_Start[Limit + 2] == Box[Row][Column] || Ladder_Start[Limit + 3] == Box[Row][Column] || Ladder_Start[Limit + 4] == Box[Row][Column] || Ladder_Start[Limit + 5] == Box[Row][Column])
															{
																cout << "LS" << "       ";
																break;
															}
															if (Ladder_Stop[Limit] == Box[Row][Column] || Ladder_Stop[Limit + 1] == Box[Row][Column] || Ladder_Stop[Limit + 2] == Box[Row][Column] || Ladder_Stop[Limit + 3] == Box[Row][Column] || Ladder_Stop[Limit + 4] == Box[Row][Column] || Ladder_Stop[Limit + 5] == Box[Row][Column])
															{
																cout << "LE" << "       ";
																break;
															}
															else if (Snake_Head[Limit] != Box[Row][Column])
															{
																cout << Box[Row][Column] << "       ";
																break;
															}
															else if (Snake_Tail[Limit] != Box[Row][Column])
															{
																cout << Box[Row][Column] << "       ";
																break;
															}
															else if (Ladder_Start[Limit] != Box[Row][Column])
															{
																cout << Box[Row][Column] << "       ";
																break;
															}
															else if (Ladder_Stop[Limit] != Box[Row][Column])
															{
																cout << Box[Row][Column] << "       ";
																break;
															}
														}
														if (Row >= 9)
														{
															cout << " ";
														}
														Value_Setup = Column;
													}
													if (Row % 2 == 0)
													{
														Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
													}
													if (Row % 2 != 0)
													{
														Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
													}
													cout << "\t\t\t\t\t\t\t |                                                                                               |";
													cout << "\t\t\t\t\t\t\t |===============================================================================================|" << endl;
												}
											}
										}
										if (sum_1 > 100)
										{
											cout << "Sum becomes greater than 100 " << endl;
											cout << "Better Luck net time !" << endl;
											sum_1 = sum_1 - Column;
										}
									}
								}
								else if (roll % 2 != 0)
								{
									cout << "========================================================================================================================================================================" << endl;
									
									if (stop2 == 0)
									{
										cout << "How do you want to roll the dice " << Player_2 << endl << endl;
										cout << "Slow" << endl << "Medium" << endl << "Fast" << endl << endl;
										cin >> Dice_Roll;
										
										if (Dice_Roll == "Slow" || Dice_Roll == "slow")
										{
											cout << "Rolling !!!" << endl << endl;
										    r = rand() % 6 + 1;
										}
										else if (Dice_Roll == "Medium" || Dice_Roll == "medium")
										{
											for (int i = 0; i < 2; i++)
											{
												cout << "Rolling !!!" << endl << endl;
												r = rand() % 6 + 1;
											}
										}
										else if (Dice_Roll == "Fast" || Dice_Roll == "fast")
										{
											for (int i = 0; i < 4; i++)
											{
												cout << "Rolling !!!" << endl << endl;
												r = rand() % 6 + 1;
											}
										}
										cout << "attempt(s) " << pl2 << " \t  " << "Number on dice is : " << r << endl;
										pl2++;
										if (r == 6 && stop2 == 0)
										{
											
											stop2++;
											cout << "The game starts for " << Player_2 << endl;
											cout << "How do you want to roll the dice " << Player_1 << endl << endl;
											cout << "Slow" << endl << "Medium" << endl << "Fast" << endl << endl;
											cin >> Dice_Roll;
											if (Dice_Roll == "Slow" || Dice_Roll == "slow")
											{
												cout << "Rolling !!!" << endl << endl;
												z = rand() % 6 + 1;
											}
											else if (Dice_Roll == "Medium" || Dice_Roll == "medium")
											{
												for (int i = 0; i < 2; i++)
												{
													cout << "Rolling !!!" << endl << endl;
													z = rand() % 6 + 1;
												}
											}
											else if (Dice_Roll == "Fast" || Dice_Roll == "fast")
											{
												for (int i = 0; i < 4; i++)
												{
													cout << "Rolling !!!" << endl << endl;
													z = rand() % 6 + 1;
												}
											}
											cout << "attempt(s) " << pl2 << " \t  " << "Number on dice is : " << z << endl;
											sum_2 = sum_2 + z;
											cout << "\n\t" << Player_2 << "sum till now is :" << sum_2 << endl;
											cout << endl << endl;
											for (int Row = 0; Row < 10; Row++)
											{
												cout << "\t\t\t\t\t\ |     ";
												for (int Column = 0; Column < 10; Column++)
												{
													if (Row % 2 == 0)
													{
														Box[Row][Column + 1] = Box[Row][Column] - 1;
													}
													else if (Row % 2 != 0)
													{
														Box[Row][Column + 1] = Box[Row][Column] + 1;
													}
													for (int Limit = 1; Limit < 7; Limit++)
													{
														if (sum_1 == Box[Row][Column])
														{
															cout << Player_1 << "     ";
															break;
														}
														if (sum_2 == Box[Row][Column])
														{
															cout << Player_2 << "     ";
															break;
														}
														if (Snake_Head[Limit] == Box[Row][Column] || Snake_Head[Limit + 1] == Box[Row][Column] || Snake_Head[Limit + 2] == Box[Row][Column] || Snake_Head[Limit + 3] == Box[Row][Column] || Snake_Head[Limit + 4] == Box[Row][Column] || Snake_Head[Limit + 5] == Box[Row][Column])
														{
															cout << "SH" << "       ";
															break;
														}
														if (Snake_Tail[Limit] == Box[Row][Column] || Snake_Tail[Limit + 1] == Box[Row][Column] || Snake_Tail[Limit + 2] == Box[Row][Column] || Snake_Tail[Limit + 3] == Box[Row][Column] || Snake_Tail[Limit + 4] == Box[Row][Column] || Snake_Tail[Limit + 5] == Box[Row][Column])
														{
															cout << "ST" << "       ";
															break;
														}
														if (Ladder_Start[Limit] == Box[Row][Column] || Ladder_Start[Limit + 1] == Box[Row][Column] || Ladder_Start[Limit + 2] == Box[Row][Column] || Ladder_Start[Limit + 3] == Box[Row][Column] || Ladder_Start[Limit + 4] == Box[Row][Column] || Ladder_Start[Limit + 5] == Box[Row][Column])
														{
															cout << "LS" << "       ";
															break;
														}
														if (Ladder_Stop[Limit] == Box[Row][Column] || Ladder_Stop[Limit + 1] == Box[Row][Column] || Ladder_Stop[Limit + 2] == Box[Row][Column] || Ladder_Stop[Limit + 3] == Box[Row][Column] || Ladder_Stop[Limit + 4] == Box[Row][Column] || Ladder_Stop[Limit + 5] == Box[Row][Column])
														{
															cout << "LE" << "       ";
															break;
														}
														else if (Snake_Head[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Snake_Tail[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Ladder_Start[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Ladder_Stop[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
													}
													if (Row >= 9)
													{
														cout << " ";
													}
													Value_Setup = Column;
												}
												if (Row % 2 == 0)
												{
													Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
												}
												if (Row % 2 != 0)
												{
													Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
												}
												cout << "\t\t\t\t\t\t\t |                                                                                               |";
												cout << "\t\t\t\t\t\t\t |===============================================================================================|" << endl;
											}
										}
									}
									else if (stop2 != 0)
									{
										cout << "Roll the dice " << Player_2 << "   " << endl;
										cout << "How do you want to roll the dice " << Player_2 << endl << endl;
										cout << "Slow" << endl << "Medium" << endl << "Fast" << endl << endl;
										cin >> Dice_Roll;
										if (Dice_Roll == "Slow" || Dice_Roll == "slow")
										{
											cout << "Rolling !!!" << endl << endl;
											z = rand() % 6 + 1;
										}
										else if (Dice_Roll == "Medium" || Dice_Roll == "medium")
										{
											for (int i = 0; i < 2; i++)
											{
												cout << "Rolling !!!" << endl << endl;
												z = rand() % 6 + 1;
											}
										}
										else if (Dice_Roll == "Fast" || Dice_Roll == "fast")
										{
											for (int i = 0; i < 4; i++)
											{
												cout << "Rolling !!!" << endl << endl;
												z = rand() % 6 + 1;
											}
										}
										cout << "attempt(s) " << pl2 << " \t  " << "Number on dice is : " << z << endl;
										sum_2 = sum_2 + z;
										if (sum_2 > 100)
										{
											cout << "Sum becomes greater than 100 " << endl;
											cout << "Better Luck net time !" << endl;
											sum_2 = sum_2 - z;
										}
										for (int Row = 1; Row < 7; Row++)
										{
											if (sum_2 == Snake_Head[Row]) // loop to check whether player stands on snake or ladder
											{
												cout << Player_2 << " steps on snake's head of snake: " << Row << endl;
												sum_2 = Snake_Tail[Row];
											}
											else if (sum_2 == Ladder_Start[Row])
											{
												cout << Player_2 << "steps on ladder " << Row << endl;
												sum_2 = Ladder_Stop[Row];
											}
										}
										{
											cout << "\t" << Player_2 << " sum till now is :" << sum_2 << endl;
											for (int Row = 0; Row < 10; Row++)
											{
												cout << "\t\t\t\t\t\ |     ";
												for (int Column = 0; Column < 10; Column++)
												{
													if (Row % 2 == 0)
													{
														Box[Row][Column + 1] = Box[Row][Column] - 1;
													}
													else if (Row % 2 != 0)
													{
														Box[Row][Column + 1] = Box[Row][Column] + 1;
													}
													for (int Limit = 1; Limit < 7; Limit++)
													{
														if (sum_1 == Box[Row][Column])
														{
															cout << Player_1 << "     ";
															break;
														}
														if (sum_2 == Box[Row][Column])
														{
															cout << Player_2 << "     ";
															break;
														}
														if (Snake_Head[Limit] == Box[Row][Column] || Snake_Head[Limit + 1] == Box[Row][Column] || Snake_Head[Limit + 2] == Box[Row][Column] || Snake_Head[Limit + 3] == Box[Row][Column] || Snake_Head[Limit + 4] == Box[Row][Column] || Snake_Head[Limit + 5] == Box[Row][Column])
														{
															cout << "SH" << "       ";
															break;
														}
														if (Snake_Tail[Limit] == Box[Row][Column] || Snake_Tail[Limit + 1] == Box[Row][Column] || Snake_Tail[Limit + 2] == Box[Row][Column] || Snake_Tail[Limit + 3] == Box[Row][Column] || Snake_Tail[Limit + 4] == Box[Row][Column] || Snake_Tail[Limit + 5] == Box[Row][Column])
														{
															cout << "ST" << "       ";
															break;
														}
														if (Ladder_Start[Limit] == Box[Row][Column] || Ladder_Start[Limit + 1] == Box[Row][Column] || Ladder_Start[Limit + 2] == Box[Row][Column] || Ladder_Start[Limit + 3] == Box[Row][Column] || Ladder_Start[Limit + 4] == Box[Row][Column] || Ladder_Start[Limit + 5] == Box[Row][Column])
														{
															cout << "LS" << "       ";
															break;
														}
														if (Ladder_Stop[Limit] == Box[Row][Column] || Ladder_Stop[Limit + 1] == Box[Row][Column] || Ladder_Stop[Limit + 2] == Box[Row][Column] || Ladder_Stop[Limit + 3] == Box[Row][Column] || Ladder_Stop[Limit + 4] == Box[Row][Column] || Ladder_Stop[Limit + 5] == Box[Row][Column])
														{
															cout << "LE" << "       ";
															break;
														}
														else if (Snake_Head[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Snake_Tail[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Ladder_Start[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Ladder_Stop[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
													}
													if (Row >= 9)
													{
														cout << " ";
													}
													Value_Setup = Column;
												}
												if (Row % 2 == 0)
												{
													Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
												}
												if (Row % 2 != 0)
												{
													Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
												}
												cout << "\t\t\t\t\t\t\t |                                                                                               |";
												cout << "\t\t\t\t\t\t\t |===============================================================================================|" << endl;
											}
										}
										pl2++;
										if (z == 6) // if 6 rolled second time for player 2
										{
											cout << Player_2 << " Bonus Turn " << "   ";
											cout << "How do you want to roll the dice " << Player_2 << endl << endl;
											cout << "Slow" << endl << "Medium" << endl << "Fast" << endl << endl;
											cin >> Dice_Roll;
											if (Dice_Roll == "Slow" || Dice_Roll == "slow")
											{
												cout << "Rolling !!!" << endl << endl;
												z = rand() % 6 + 1;
											}
											else if (Dice_Roll == "Medium" || Dice_Roll == "medium")
											{
												for (int i = 0; i < 2; i++)
												{
													cout << "Rolling !!!" << endl << endl;
													z = rand() % 6 + 1;
												}
											}
											else if (Dice_Roll == "Fast" || Dice_Roll == "fast")
											{
												for (int i = 0; i < 4; i++)
												{
													cout << "Rolling !!!" << endl << endl;
													z = rand() % 6 + 1;
												}
											}
											cout << "attempt(s) " << pl2 << " \t  " << " Number on dice is : " << z << endl;
											sum_2 = sum_2 + z;
											cout << endl << endl;
											for (int Row = 0; Row < 10; Row++)
											{
												cout << "\t\t\t\t\t\ |     ";
												for (int Column = 0; Column < 10; Column++)
												{
													if (Row % 2 == 0)
													{
														Box[Row][Column + 1] = Box[Row][Column] - 1;
													}
													else if (Row % 2 != 0)
													{
														Box[Row][Column + 1] = Box[Row][Column] + 1;
													}
													for (int Limit = 1; Limit < 7; Limit++)
													{
														if (sum_1 == Box[Row][Column])
														{
															cout << Player_1 << "     ";
															break;
														}
														if (sum_2 == Box[Row][Column])
														{
															cout << Player_2 << "     ";
															break;
														}
														if (Snake_Head[Limit] == Box[Row][Column] || Snake_Head[Limit + 1] == Box[Row][Column] || Snake_Head[Limit + 2] == Box[Row][Column] || Snake_Head[Limit + 3] == Box[Row][Column] || Snake_Head[Limit + 4] == Box[Row][Column] || Snake_Head[Limit + 5] == Box[Row][Column])
														{
															cout << "SH" << "       ";
															break;
														}
														if (Snake_Tail[Limit] == Box[Row][Column] || Snake_Tail[Limit + 1] == Box[Row][Column] || Snake_Tail[Limit + 2] == Box[Row][Column] || Snake_Tail[Limit + 3] == Box[Row][Column] || Snake_Tail[Limit + 4] == Box[Row][Column] || Snake_Tail[Limit + 5] == Box[Row][Column])
														{
															cout << "ST" << "       ";
															break;
														}
														if (Ladder_Start[Limit] == Box[Row][Column] || Ladder_Start[Limit + 1] == Box[Row][Column] || Ladder_Start[Limit + 2] == Box[Row][Column] || Ladder_Start[Limit + 3] == Box[Row][Column] || Ladder_Start[Limit + 4] == Box[Row][Column] || Ladder_Start[Limit + 5] == Box[Row][Column])
														{
															cout << "LS" << "       ";
															break;
														}
														if (Ladder_Stop[Limit] == Box[Row][Column] || Ladder_Stop[Limit + 1] == Box[Row][Column] || Ladder_Stop[Limit + 2] == Box[Row][Column] || Ladder_Stop[Limit + 3] == Box[Row][Column] || Ladder_Stop[Limit + 4] == Box[Row][Column] || Ladder_Stop[Limit + 5] == Box[Row][Column])
														{
															cout << "LE" << "       ";
															break;
														}
														else if (Snake_Head[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Snake_Tail[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Ladder_Start[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
														else if (Ladder_Stop[Limit] != Box[Row][Column])
														{
															cout << Box[Row][Column] << "       ";
															break;
														}
													}
													if (Row >= 9)
													{
														cout << " ";
													}
													Value_Setup = Column;
												}
												if (Row % 2 == 0)
												{
													Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
												}
												if (Row % 2 != 0)
												{
													Box[Row + 1][0] = Box[Row][Value_Setup] - 10;
												}
												cout << "\t\t\t\t\t\t\t |                                                                                               |";
												cout << "\t\t\t\t\t\t\t |===============================================================================================|" << endl;
											}
											pl2++;
											if (sum_2 > 100)
											{
												cout << "Sum becomes greater than 100 " << endl;
												cout << "Better Luck net time !" << endl;
												sum_2 = sum_2 - z;
											}
											for (int Row = 1; Row < 7; Row++) // loop to check whether player stands on snake or ladder
											{
												if (sum_2 == Snake_Head[Row])
												{
													cout << Player_2 << "steps on snake's head of snake: " << Row << endl;
													sum_2 = Snake_Tail[Row];
													cout << "\t" << Player_2 << "sum till now is :" << sum_2 << endl;
												}
												else if (sum_2 == Ladder_Start[Row])
												{
													cout << Player_2 << "steps on ladder " << Row << endl;
													sum_2 = Ladder_Stop[Row];
												}
											}
											{
												cout << "\t" << Player_2 << " sum till now is :" << sum_2 << endl;

											}
										}
									}
									cout << "========================================================================================================================================================================" << endl;
								}
								cout << endl;
								roll++;
							}
						}
						else
						{
							cout << "\n\n\t\t\t\t\t\t" << " Player is not a developer. Certification does not allow Player to play it ";
						}
					}
					else
					{
						cout << "\n\n\t\t\t\t\t\t" << " Player is not a developer. Certification does not allow Player to play it ";
					}
				}
				if (Choice != 1 && Choice != 3 && Choice != 2)
				{
					cout << "\n\t\t\t\t\t\t\t\t\t\t  Wrong Choice";
				}
			}
			else
			{
				cout << "Wrong Choice";
			}
		}
		else
		{
			cout << "\n\n\n You Enter The Wrong Choice So the Game Ended. ";
		}
		cout << "\n\n\n Do You Want to Play the Game Again (YES/NO)";
		cin >> ch;
	}
	while (ch == "YES" || ch == "yes");
	return 0;
}
