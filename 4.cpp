#include <stdio.h>

struct ball {
	int size;
	char name[10];
};

void Coolman(char cname[10]) {
  printf(" 1991 %s\n", cname);
}

int main() {
  char *a;
  struct ball s1;
  printf("\n Enter Ball Size : ");
  scanf("%d",&s1.size);
  printf(" Enter Ball Name : ");
  scanf("%s",&s1.name);	
  a = &s1.name;

  
  // Print values
  printf("\n Ball size is : %d \n", s1.size);
  printf(" Ball name is :" );
  Coolman(*a);
  return 0;
}
