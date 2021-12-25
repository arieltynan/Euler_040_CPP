// Euler_040_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v; 
    
    int n = 1000;
    for (int i = 1; i < n; i++)
    {
        int temp = i;

        /*while (temp != 0)
        {
            v.push_back(temp % 10);
            temp /= 10;
        }*/

        int rem = 0; //remainder
        int revTemp = 0; //reversed temp int
        int countInt = 0;
        while (temp != 0) {
            rem = temp % 10;
            revTemp = revTemp * 10 + rem;
            temp /= 10;
            countInt++;
            //cout << rem << " ";
        }
        //cout << endl << endl;

        int rem2 = 0; //remainder
        int revTemp2 = 0; //reversed temp int
       if ((i - 1) % 10 == 9)
       {
            while (revTemp != 0)          
            {
                rem2 = revTemp % 10;

                revTemp2 = revTemp2 * 10 + rem2;
                revTemp /= 10;
                cout << rem2 << " ";
                
            }
            for(int k = 0; k < countInt - 1; k++)
                cout << 0 << " ";
        }
       else
       {
           while (revTemp != 0)
           {
               rem2 = revTemp % 10;

               revTemp2 = revTemp2 * 10 + rem2;
               revTemp /= 10;
               cout << rem2 << " ";

           }
       }
    }
    //print vector v
   // for (int j = 0; j < v.size(); j++)
     //   cout << v[j] << " ";

}

// for loop n through big number
    //for each number i, split i into ints
    //pushback each into into vector
