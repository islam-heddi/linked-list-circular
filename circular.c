#include <stdio.h>

typedef struct{
	int data;
	struct node *next;
}node;

void display(node *head){
	node *temp=head;
	printf("display the linked list\n");
	do{
		printf("%d \n", temp->data);
		temp=temp->next;
	}while(temp!=head);
}

int main(){
	node *h=(node*)malloc(sizeof(node));
	node *q=NULL;
	node *p=h;
	for(int i=1;i<=4;i++){
		printf("enter a number : ");
		scanf("%d", &p->data);
		if(i!=4){
			p->next=(node*)malloc(sizeof(node));
			p=p->next;
		}else{
			p->next=h;
			q=p;
		}
	}
	p=h;
	// showing in
	display(h);
	return 0;
}
