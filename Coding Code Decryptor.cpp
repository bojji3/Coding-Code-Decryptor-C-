// =================================================
// Filename : Sandejo_LE5
// Author(s) : Edmund James Sandejo
// Email : esandejo@gbox.adnu.edu.ph
// Exercise Number : 5
// Assignment Number : 
// Description : Decrypt the code given
// Last modified: September 22, 2022
// =================================================


#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main()
{
   string str1, str2;
   int key, counter, length;
   
   
  
cout<<"Code Decryptor"<<endl; 
 cout   <<"Enter the intercepted message: ";
cin >> str1;
cout << endl 
 << "Key        Decrypted Message"<<endl;
str2 = str1;
   
   char* Encrypted = const_cast<char*>(str1.c_str());;
   char* Output = const_cast<char*>(str2.c_str());;
   length = strlen(Encrypted);
   
    for (key =1; key <= 100; key++)    {
    for (counter=0; counter<length; counter++)  {
    if (Encrypted[counter]-key < 32)
       {
           Output[counter] = Encrypted[counter] - 32 - key + 127 ;
       }
        else
        {
            Output[counter] = Encrypted[counter]-key;
        }
    }
        cout  << key << "  " << Output << endl;
    }
  
    return 0;
}