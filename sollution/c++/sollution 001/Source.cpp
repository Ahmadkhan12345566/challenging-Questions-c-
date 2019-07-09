#include<iostream>
#include<conio.h>
#include<vector>
#include<string>
#include <algorithm> 
using namespace std;


void swap(int num1, int num2){
    cout <<  "        Swaping Integer :\n " << endl;
	cout << "Befor swap : num1 = "<<num1<<" num2 = "<<num2 << endl;
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	cout << "After swap : num1 = " << num1 << " num2 = " << num2 << endl;
}

void sum_from_vectors(std::vector<int> vc1, std::vector<int> vc2, int sum) {
	//std::vector<int> vc1 = { 1,2,4,3,1,3,1,4,5,15,5,2,3,5,4 };
	//std::vector<int> vc2 = { 0,1,2 };
	cout << "        Pair (s) of Sum " << endl;
	

	int siz = vc1.size();
	int siz1 = vc2.size();
	bool dec = false;
	//vc1[3]=1000;
	for (int i = 0; i < siz; i++) {
	//	cout << vc1[i]<<" ";
		for (int j = 0; j < siz1 ; j++) {
			if (vc1[i] + vc2[j] == sum) {
				cout << vc1[i] << " + " << vc2[j] << "=" << sum << endl;
				dec = true;
			//	break;
	 		}
		}
		//if (dec) break;
	}
	if (!dec) {
		cout << "Cann't find sum of two number = " << sum<<endl;
	}
}

void duplicates(int arry1[],int sizz){
	cout << "     Finding Duplicate  : \n" << endl;
	
	
	int nun=0;
	
    for (int i = 0; i < sizz; i++) {
	       int counter = 0;

	for (int j = 0; j < sizz; j++) {
		   if (arry1[i] == arry1[j]) {
				if (i > j) {
						break;
					}
				else
					{
				counter++;
					}
				}
			}
	if (counter >= 2) {
		nun = 1;
		cout << arry1[i] << ": Dublicated " <<counter/2<<" times"<< endl;
	                 }
    }
	if (nun == 0) {
		cout << "No Dublicates find" << endl;
	}
}


void char_repeated(string str1) {
	//cout << "\nstr1 = "<<str1 << endl;
	//string str1 = "               ";
	cout << "     Maximum repetitive character \n" << endl;
	int size_str = str1.length();
	int maxRept = 0;
	char chr;
	if (str1.find_first_not_of(' ') != std::string::npos&& !str1.empty()) {
		int counter;
		for (int i = 0; i < size_str; i++) {
			 counter = 1;
			for (int j = i + 1; j < size_str; j++) {
				if (str1[i] == str1[j] && str1[i] != ' ') {
					counter++;
				}
			}
			
			if (counter > maxRept && counter != 1) {
				maxRept = counter;
				chr = str1[i];
			}
		}
		if (maxRept>1) {
			cout << "Max repeated char in string is : " << chr << endl << "Repeated " << maxRept << " Times " << endl;
		}
		else
		{
			cout << "no repetatipon" << endl;
		}

	}
	else
	{
		cout << "String is Empty" << endl;
	}
}

int main() {
	
	
	int num=12;
	int siz;
	std::vector<int> vc1 = { -13,0,2,4,3,1,3,1,4,-19,15,5,2,10,5,7 };
	std::vector<int> vc2 = { 7,1,12 };
	std::sort(vc1.begin(), vc1.end());
	vc1.erase(unique(vc1.begin(), vc1.end()), vc1.end());
	std::sort(vc2.begin(), vc2.end());
	vc2.erase(unique(vc2.begin(), vc2.end()), vc2.end());
	int arry1[] = { 1,2,3,4,5,6,7,8,1,8,8,8,8,8};
	siz=size(arry1);
	
	string str1=" b v v b v b v b v b v   b    vvvv    bbbbb   ";
	string str2="str2";
	int num1 = 0;
	int num2 = 0;
	
	
	//duplicates(arry1,siz);
	//sum_from_vectors(vc1, vc2, num);
	//swap(num1, num2);
 	char_repeated(str1);
	

	
}