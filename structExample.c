#include<stdio.h>
#include<string.h>
struct ClgData{	
    int college_id;
    char college_name[50];
};
struct Student{
	char name[20];
	struct ClgData d1;
	int scores[5];
};
int total(struct Student *s){
	int sum=0;
	int j;
	for(j=0;j<5;j++){
		sum+=s->scores[j];
	}
	return sum;
}
int main()	
{
	int i;
	struct Student s[5]={{"robert",1,"MIT",{5,4,5,3,5}},
	                     {"regina",2,"VIT",{3,5,4,5,4}},
	                     [2]={"tailor",3,"IITM",{3,5,2,4,1}},
	                     [3]={"jacob",4,"NIT",{3,4,2,1,5}},
						 [4]={"rehman",5,"BITS",{3,5,2,4,1}},
						 };
	struct Student * sptr;
	sptr=&s[0];
	int sum=0;
	for(i=0;i<5;i++){
		printf("name : %s,college : %s,total score : %d \n",(sptr+i)->name,s[i].d1.college_name,total(&s[i]));
	}
    return 0;
}
