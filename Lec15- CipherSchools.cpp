
// writing function to compare two numbers and printing greater one...



#include<iostream>
using namespace std;
int compare(int a, int b){
	
	if(a>b){
		cout<<a<<" is greater number";
	}
	else{
		cout<<b<<" is greater number";
	}
	return 0;
}
int main(){
	compare(40,280);
	return 0;
	

}



// Writing a function to compare two numbers and then storing the greater number into 3rd
 //variable and then returning that value....
 
  

#include<iostream>
using namespace std;
int compare(int a, int b){
	int c;
	if(a>b){
		c=a;
	}
	else{
		c=b;
	}
	
	cout<<"Among "<<a<<" and "<<b<<" greater number is: "<<c;
	return c;
	//cout<<"Among"<<a<<"and"<<b<<"greater number is:"<<c;
}
int main(){
	compare(29,46);
	return 0;
}
