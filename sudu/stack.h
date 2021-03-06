/*  stack();
 *  push(void* q)
 *  pop()
 *  get(int=1)
 *  len()   */

#ifndef __STACK_H__
#define __STACK_H__


#include <iostream>
using namespace std;

class stack{
protected:
	stack *next;
	void*p;
	int length;
public:
	stack(){
		next=NULL;
		p=NULL;
		length=0;
	}
	void unshift(void* q){
		stack* tmp=new stack();
		tmp->next=NULL;
		tmp->p=q;
		stack* index=this;
		for(int i=0;i<length;i++){
			index=index->next;
		}
		index->next=tmp;
		length++;
	}
	void* push(void* q){
		stack* tmp=new stack();
		tmp->next=next;
		tmp->p=q;
		next=tmp;
		length++;
	}
	void* get(int index=1){  // start from position "1"
		void* q=NULL;

		stack *i=this;
		while((i=i->next) && (--index>0)){
		}
		q=i->p;
		return q;
	}
	void* pop(){
		void* q=NULL;
		if(next){
			q=next->p;
			stack* tmp=next;
			next=next->next;
			delete tmp;
			length--;
		}
		return q;
	}
	int len(){
		return length;
	}
};

#endif
