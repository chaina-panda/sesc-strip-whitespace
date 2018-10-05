#include stdio.h

int main(){

char str[1000];

gets(str);

int i, n;
i = 0;
n = 0;

while(str[i++] == ' '){
  } 
i = i - 1;

for(i ; str[i]; i++){
if (str[i] != ' '  str[i-1] != ' ') {
  str[n++] = str[i];
}
}
if (str[n - 1] == ' ') {
  n = n - 1;
  }
str[n] = 0;

printf(%s, str);

return 0;
}