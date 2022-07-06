#include<stdio.h>
void main(){
int i;int j;int n;
clrscr();
printf("enter  no");
scanf("%d",&n);
for(i=1;i<=(n+1)/2;i++){
for(j=1;j<=n;j++){
if(j>=((n+3)/2)-i&&j<=i+(n-1)/2){
printf("*");
}else{
printf(" ");
}
}
printf("\n");
}
for(i=1;i<=n/2;i++){
for(j=1;j<=n;j++){
if(j>=i+1&&j<=n-i){
printf("*");
}
else{
printf(" ");
}
}
printf("\n");
}
getch();
}