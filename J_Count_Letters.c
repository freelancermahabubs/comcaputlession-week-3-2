#include<stdio.h>

int main(){
    char ch;
    int fq[26] = {0};
   while (scanf("%c",&ch)!=EOF){
   int index = ch - 'a';
   fq[index] +=1;
   
}

for (int i = 0; i <26; i++)
{
    if (fq[i] >0)
    {
      printf("%c : %d\n", i + 'a', fq[i]);
    }
    
}

}