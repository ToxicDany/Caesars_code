//Libraries
#include <iostream>
#include <fstream> 

using namespace std;

int main() 
{ 
//Create alphabet
char ABC[25];
ABC[0] = 'a';
ABC[1] = 'b'; 
ABC[2] = 'c'; 
ABC[3] = 'd';
ABC[4] = 'e'; 
ABC[5] = 'f';
ABC[6] = 'g';
ABC[7] = 'h'; 
ABC[8] = 'i'; 
ABC[9] = 'j'; 
ABC[10] = 'k';
ABC[11] = 'l'; 
ABC[12] = 'm';
ABC[13] = 'n'; 
ABC[14] = 'o';
ABC[15] = 'p'; 
ABC[16] = 'q'; 
ABC[17] = 'r'; 
ABC[18] = 's'; 
ABC[19] = 't'; 
ABC[20] = 'u'; 
ABC[21] = 'v'; 
ABC[22] = 'w';
ABC[23] = 'x'; 
ABC[24] = 'y'; 
ABC[25] = 'z'; 
   
//Mesage for encryption
cout << "Compleate stirng:" << endl;
string message;
getline(cin, message);
    
//Libraries to work with txt files
ofstream myfile;
fstream file;

//Create file
myfile.open ("example.txt", ios::out);
myfile << message;
myfile.close();

//Decryption

for(int i=0; i<message.length(); i++)
{
    for (int c = 0; c<26; c++)
    { 
        if(message[i] == ABC[c] && message[i] != ABC[0])
        {
            message[i] = ABC[c += 1];
        } 
        else if(message[i] == ABC[25] ) 
        { 
            message[i] = ABC[0]; 
        }
    } 
} 

//Write the result to a file
myfile.open ("example.txt", ios::trunc );
myfile << message;
myfile.close();

}
