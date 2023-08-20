#include <stdio.h>
#include <stdlib.h>

int main()
{ int t[10];
int n,x,i,j;
    for (i=0;i<10;i++){
    printf("enter t[%d]",i+1);
    scanf("%d",&t[i]);
}
    printf("enter n:number");
    scanf("%d",&j);
x=0;
for(i=0;i<10;i++){
        if(n=t[i])
         x++;
}
if(x==0)
    printf("%d there is not on table");
else
    printf("%d there in on array",n);



            system("PAUSE");
}
