#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
//CREDIT 
// To find if the card is valid 

int main(){ 
    char n[17]; 
    cout <<"Number: "; 
    cin >> n; 
    for (int i = 0; i < strlen(n); i++)
    {
        if(isdigit(n[i]) == 0 || isspace(n[i]) == 1){ 
            cout << "\nNumber: "; 
            cin >> n;
        }
    }
    long long number = stoll(n, nullptr, 10); 
    long long num = number;
    int counter = 0; 
   while (num > 0)
   {
       num /= 10;  
       counter++;
   } 
    
    if( counter < 13||counter == 14){ 
        cout << "INVALID";
    }
    else{  
        long long x = number;
        int sum1, sum2, sum; 
        sum1 = sum2 = 0; 
        int mod1, mod2, d1, d2; 
        do
        {
            mod1 = x%10;  
            x /= 10; 
            sum1 += mod1; 

            mod2 = x%10; 
            x /= 10; 
            mod2 = mod2 * 2; 
            d1 = mod2 % 10; 
            d2 = mod2 / 10; 
            sum2 += d1+d2;

        } while (x > 0);  
        sum = sum1 + sum2;  
        if((sum%10) != 0){ 
            cout << "INVALID" << endl;
        } 
        else{ 
            long long start = number;  
            do
            {
                start /= 10;
            } while (start > 100);

            if((start/10) == 5 && (start%10)>0 && (start%10)<6){ 
                cout << "MASTERCARD" << endl; 
            } 
            else if((start/10) == 3 && (start%10) == 3 || (start%10) == 4){ 
                cout << "AMERICAN EXPRESS" << endl;
            } 
            else if((start/10) == 4){ 
                cout << "VISA" << endl;
            } 
            else { 
                cout << "INVALID" << endl;
            } 
        }
    }
    return 0;
}
