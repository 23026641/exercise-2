#include <iostream>

int main(){

    string personality, appearance;

    cout<<"Enter the type of personality you want in a girl (Rude, funny, intelligent, caring): ";
    cin>>personality;

    cout<<"Enter the type of appearance you prefer in a girl (blonde, brunette, redhead, brunette): ";
    cin>>appearance;

    if(personality == "Rude" && appearance == "blonde"){
        cout<<"You want a rude and blonde girl.";
    }
    else if(personality == "funny" && appearance == "brunette"){
        cout<<"You want a funny and brunette girl.";
    }
    else if(personality == "intelligent" && appearance == "redhead"){
        cout<<"You want an intelligent and redhead girl.";
    }
    else if(personality == "caring" && appearance == "brunette"){
        cout<<"You want a caring and brunette girl.";
    }
    else{
        cout<<"Your preferences don't match any type of girl.";
    }

    return 0;
}
