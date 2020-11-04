
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>  
#include <conio.h>
using namespace std;
int main()// 開始 執行程式 
{
while (1) // 讀取玩家按鍵 
	{
		int END_button=1 ;
        END_button = getch();// 讀取玩家按鍵 
        cout << END_button <<endl;
        if (END_button == 0)
		{
			break; 
		}
    } // 讀取玩家按鍵 
}

