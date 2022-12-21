#include <stdio.h>

struct ball {
	int size;
	char name[10];
};

void plus(struct ball *exSize){
	exSize->size++ ;
}

int main() {

  struct ball s1;
  printf("\n Enter Ball Size : ");
  scanf("%d",&s1.size);
  printf(" Enter Ball Name : ");
  scanf("%s",&s1.name);
  plus(&s1);

  // Print values
  printf("\n Ball size is : %d \n", s1.size);
  printf(" Ball name is : %s ", s1.name);
  
  return 0;
}
