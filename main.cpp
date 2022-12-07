#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{
    int n=0, len=0, ans=0, ans2=0, K, E, Y;
    bool f = true;

    //string st;

    //st ="Joyce enjoyed eating pancakes with ketchup. Going from child, to childish, to childlike is only a matter of time. There were three sphered rocks congregating in a cubed room."
    char arr[] = "Joyce enjoyed eating pancakes with ketchup using a key. Going from child, to childish, to childlike is only a matter of time. There were three sphered rocks congregating in a cubed room.";
    len = strlen(arr);
    cout<<len<<endl;
    for(int i=0; i<len; i++)
    {
        if(arr[i] == ' ')
        {
            ans++;
        }
    }
    for(int i=0; i<len; i++)
    {
        if(arr[i] == '.')
        {
            ans2=i;
            break;
        }
    }
    for(int i=0; i<len; i++)
    {
           if(arr[i] == 'k')
              {
                   K++;
              }

           if(arr[i] == 'e')
              {
                  E++;
              }

           if(arr[i] == 'y')
              {
                  Y++;
              }


    }

    cout<<ans<<endl;
    cout<<ans2<<endl;
    if(K>1)
    {
        cout<<"K"<<endl;
    }
    if(E>1)
    {
        cout<<"E"<<endl;
    }
    if(Y>1)
    {
        cout<<"Y"<<endl;
    }
    return 0;
}
