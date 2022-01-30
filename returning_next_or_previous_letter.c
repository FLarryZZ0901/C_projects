
#include <stdio.h>
char next_letter(char a){
       if(a<='z' && a>='a'){
        if(a=='z') return 'a';
        else return (char)(((int)a) + 1); 
        //We cast to Int because every char corresponds to some value in ASCII table we add 1 
        //That means that it will go up for one value
        //Next step is to return it back to char

    }
    else return a;
     
}
char previous_letter(char a){
       if(a<='z' && a>='a'){
        if(a=='a') return 'z';
        else return (char)(((int)a) - 1); 
        //Almost the same like in previous function but in this one we just subtract for given value
    }
     else return a;
}

int main()
{
    char b = 'a';
    printf("Next letter is %c",next_letter(b));
    printf("\nPrevious letter %c",previous_letter(b));
    return 0;
}



