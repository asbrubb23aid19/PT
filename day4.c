/*
#include <stdio.h>
#include <string.h>
int main() {
  char username[20]="gokila";
  int password=12345;
  char arr[20];
  int x;
    scanf("%s%d",arr,&x);
  printf("%d",(strcmp(username,arr)));
if((strcmp(username,arr)==0)&& (password==x))
    printf("login success");
    else
    printf("fail");
    return 0;
}
    */

/*
#include <stdio.h>
#include <string.h>
int main() {
int x= 7;
int  flag=0;
for(int i=1;i<=x;i++){
  if(x%i==0)
  flag++;
    
}
if(flag==2)
printf("%d is a prime number",x);
else printf("%d is not prime no",x);
printf("%d",flag);
    return 0;
}*/

/*
#include <stdio.h>
#include <string.h>
int main() {
int x,y;
scanf("%d%d",&x,&y);
for(int i=1;i<=x;i++){
    printf("%d * %d = %d\n",i,y,i*y);
}
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
int main() {
   int x =100;
int count =0;
for (int i=1;i<=x;i++) {
    if (x%i== 0)
    count++;}
      printf("%d",count);
    
}
*/
/*
#include <stdio.h>
int main() {
 int x =1;
 while(x<=10){
     printf("%d\n",x);
     x++;
 }
}
 */
/*
#include <stdio.h>
int main() {
 int x;
 scanf("%d",&x);
 int sum=0;
 while(x>0){
     int r=x%10;
     x/=10;
     sum+=r;
 }
     printf("%d\n",sum);
     
}
     */
 
 
 #include <stdio.h>
int main() {
 int x=5,y=20;
     do {
      if(x%5==0)
      printf("hi");
      x++;
 }
    while(x<=y);
 
}
 