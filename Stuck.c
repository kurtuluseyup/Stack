# include <stdlib.h>
# include <string.h>
# include <stdio.h>


struct kutu{
	int data;
	struct kutu * next;
};

struct kutu * top = NULL;
struct kutu * temp =  NULL;


void push(int veri){
	struct kutu * neew = (struct kutu * )malloc(sizeof(struct kutu));
	neew->data = veri;
	neew->next = NULL;
	
	if(top == NULL){
		top = neew;	
	}
	else{
		neew->next = top;
		top = neew;
	}
}

void pop(){
	if(top == NULL){
		printf("Your list is empty.");
	}
	else{
		temp = top->next;
		free(top);
		top = temp;
	}
}

void yazdir(){
	temp = top;
	if(top==NULL){
		printf("Your list is empty.");
	}
	else{
		while(temp->next != NULL){
			printf("Your data is: %d \n \n", temp->data);
			temp = temp->next;
		}
		printf("Your data is: %d \n \n", temp->data);
	}
}




int main(){

	push(15);
	push(26);
	push(81);
	pop(81);
	
	yazdir();

	return 0;
}
