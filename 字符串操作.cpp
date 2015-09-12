

#include<iostream.h>
//#include<string.h>

//字符串长度
int getstrLength(char* a){
	int x = 0;
	while(*a!='\0'){
		a++;
		x++;
	}
	return x;
}

//字符串复制
char* strcpy2(char* a,char* b,int n){
		char* temp = a;
		while(n--){
			*a = *b;
			b++;
			a++;
		}
		while(*a!='\0'){
			*a = '\0';
			a++;
		}
		return  temp;
}

//字符串连接
char* strcat(char* a,char* b){
	char* temp = a;
	int x = 0;
	while(*a!='\0'){
		a++;
		x++;
	}
	
	while(*b!='\0'){
		*a = '\0';
		*a++ = *b++;
		x++;
	}
	*a = '\0';
	cout<<x<<"   ";
	return temp;
}

//选出字符串中的数子
int* getNumber(int* a,char* b){
	int*temp = a;

	while(*b!='\0'){
		if((*b)>='0'&&(*b)<='9'){
			*a = (int)*b-48;
			a++;
		}
		b++;
	}
	*a = '\0';
	return temp;
}


int strcmp(char* a,char* b){
	int sum1=0,sum2=0;
	int flag = -1;
	while(*a!='\0'){
		sum1+=(int)*a;
	    sum2+=(int)*b;
		if(*a==*b){
			a++;
			b++;
		}
		else{
			flag = 0;
			break;
		}
	}
	if(*a=='\0'&&*b=='\0'){
		return 0;
	}
	else{
		return -1;
	}
	
}
int main(){ 
	int a[10];
	char b[]="6asdfd789";
	
	//cout<<strcpy2(a,b,11)<<endl;
	int sum = 0;
	int* c = getNumber(a,b);
	while(*c!=0){
		cout<<*c;
		c++;
	}
    cout<<endl;
	cout<<strcmp("ab","abc")<<endl;
//	cout<<getstrLength(strcat(a,b))<<endl;
	return 0;
}
