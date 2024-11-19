#include <iostream>
#include <string>
using namespace std;

bool senhatest(string senha)
{
    if (senha.length() != 5){ // Check if senha has at least 5 characters
        cout<<"fora do tamanho"<<endl;
        return true;
    }
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        if (isdigit(senha[i]))
        {
            array[i] = senha[i] - '0'; // Convert char to int
        }
        else
        {
            cout<<"not digit"<<endl;
            return true; // Return false if a non-digit is found
        }
    }

    // Check if the digits form an increasing or decreasing sequence
    if ((array[0] == array[1] - 1 &&
         array[1] == array[2] - 1 &&
         array[2] == array[3] - 1 &&
         array[3] == array[4] - 1) ||
        (array[0] == array[1] + 1 &&
         array[1] == array[2] + 1 &&
         array[2] == array[3] + 1 &&
         array[3] == array[4] + 1))
    {
        cout<<"dec or cres"<<endl;
        return true;
    }else
    {
        for (int i = 0; i < 5; i++)
        {
            int num=array[i];
            for (int j = 0; j < 5; j++)
            {
                if (j!=i)
                {
                   if (num==array[j]){
                    cout<<"numero duplicado"<<endl;
                    return true;
                    } 
                }
                
            }
            
        }
        
    }
    return false; // Return false if no sequence matches
}

int main()
{
    while (true)
    {
        string senha;
        cout << "senha: ";
        cin >> senha;
        cout << (senhatest(senha)) << endl; // Output true/false as a string
    }
}
