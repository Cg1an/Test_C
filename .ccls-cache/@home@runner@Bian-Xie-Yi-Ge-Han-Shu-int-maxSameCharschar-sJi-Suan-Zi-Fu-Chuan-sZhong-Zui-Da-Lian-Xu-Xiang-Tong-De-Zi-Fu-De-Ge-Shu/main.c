#include <stdio.h>
#include <string.h>
int maxSameChars(char *s);
int main(void) {
	char buffer[100];
	char *string;
  printf("请输入一个字符串：");
  fgets(buffer, sizeof(buffer), stdin);
  string = buffer;
  printf("该字符串中最大连续相同字符的个数为：%d\n",maxSameChars(string));
  return 0;
}
int maxSameChars(char *s){
  int i;
  int l;
  int n=1;
  int temp;
  int temp1=1;
  l = strlen(s);//strlen函数参数可以是字符串的地址，算长度时不包括  '\0'，多的是回车
  for(i=0;i<l-1;i++){
  	if(*(s+i)==*(s+i+1)){
      n++;
    }
    else{
      temp=n;
      if(temp>temp1){
        temp1=temp;
      }
      n=1;
    }
    
  }
  return temp1; 
}
/*
int main(){
  char m;
  m = 'a'+5;
  printf("%c",m);
}*/
/*
int main(){
  int l;
  char buffer[100];
  char *string;
  printf("请输入一个字符串：\n");
  fgets(buffer, sizeof(buffer), stdin);
  string = buffer;
  puts(string);
  l = strlen(string);
  printf("%d",l);
}*/