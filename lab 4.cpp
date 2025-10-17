	#include<iostream>
	using namespace std;
	int main (){
		int num;
		int oddcounter=0;
		int evencounter=0;
		bool looprun=true;
		while (looprun){
			 cout<<"enter the number";
			 cin>>num;
			 if(num==0){
			 	looprun=false;
			 }
		
	     else{
	    	if (num %2==0){
	    		    evencounter++;
	    		}else{
	    			oddcounter++;
				}
				
			}
			cout<<"number of evens="<<evencounter<<endl;
			cout<<"number of odds="<<oddcounter<<endl;
			return 0;	
		}
	}
			
