#include<stdio.h>
int main()
{
  int cp,sp;
  printf("Enter the value of cp and sp:\n");
  scanf("%d%d",&cp,&sp);
  if(cp>sp)
  {
    printf("loss :%d\n",cp-sp);
  }
  else if(sp>cp)
  {
    printf("profit :%d\n",sp-cp);
  }
  else
  {
    printf("no loss no profit");
  }
  return 0;
}
