#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int rolegrade;
void role(){
    rolegrade=rand()%9+1;
}
int main(){
    srand(time(0));
    string grade;
cout << "Press Enter 3 times to reveal your future.";
cin.get();
cin.get();
cin.get();
role();
        if(rolegrade == 1) {
			grade = "A";
		}else if(rolegrade == 2) {
		    grade = "B+";
			}else if(rolegrade == 3){
			grade = "B";
			}else if(rolegrade == 4){
		    grade = "C+";
			}else if(rolegrade == 5){
		    grade = "C";
			}else if(rolegrade == 6){
            grade = "D+";
            }else if(rolegrade == 7){
            grade = "D";
            }else if(rolegrade == 8){
            grade = "F";
            }else if(rolegrade == 9){
            grade = "W";
            }
cout << "You will get "<< grade <<" in this 261102.";
return 0;
}
