#include<bits/stdc++.h>
using namespace std;

int main(){
    int size = 6;
    char name[] = {'T','a','w','h','i','d'};

    cout << "The array is ";
    for (int i = 0; i < size; i++)
    {
        cout << name[i] ;
    }
    

    char toChange= 'w';
    char replacement = 'u';

    cout << "\nThe replaced string is " ;
    for (int i = 0; i < size ; i++)
    {
        if(name[i] == toChange){
            name[i]= replacement;
        }
        cout << name[i];
    }
    
    return 0;
    }
