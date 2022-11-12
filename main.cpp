// Aalaysia Kelley j00958443 11/8/2022
// program #22 pg. 264

#include <iostream>
using namespace std;
int main()
{
    int num;
    int prime [11]= {2,3,5,7,11,13,17,19,23,29,31};
    cout << "Enter integer between 1 and 1000:" << endl;
    cin >> num;
    for(int i=0; i<11; i++)
    {
        if (num%prime[i]==0 && num != prime[i])
        {
            
            cout << prime[i] << "\t";
            for(int j=i+1;j<11;j++)
            {
                if (num%prime[j]==0)
                cout << prime[j] << "\t";
            }
            return 0;
        }
    }
    cout << num << " is prime!" << endl;
    return 0;
} 

