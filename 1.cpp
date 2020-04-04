#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int Max = 0;
    int temp;
    cin >> num;
    if (num <= 0)
    {
        cout << "error" <<endl;
    }
    else
    {
        int* arra = new int[num];
        for (int i = 0; i < num; i++)
        {
            cin >> arra[i];
        }
        for (int i = 0; i < num; i++)
        {
            for (int k = 0; k < num; k++)
            {
                temp = arra[i];
                if (temp > Max)
                {
                    Max = temp;
                }
                for (int j = i + 1; j <= k; j++)
                {
                    temp = temp + arra[j];
                    if (temp > Max)
                    {
                        Max = temp;
                    }
                }
            }
        }
        cout << Max << endl;
        delete[] arra;
    }
}
