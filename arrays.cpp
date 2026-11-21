// #include<iostream>
// using namespace std;

// int main(){

//     int sum = 0;

//     int arr[] = {1,12,6,4,20};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     for(int i =0 ;i<size;i++){

//         if(arr[i]%2==0){
//             sum++;
//         }
     
//     }   

//     cout<<"evens are:"<<sum<<endl;
//     cout<<"odds are:"<<size-sum<<endl;


//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){


//     int arr[] = {1,12,6,4,20};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     for(int i = size-1 ;i>=0;i--){
//         cout<<arr[i]<<endl;
     
//     }   


//     return 0;
// }


// #include<iostream>
// #include<string>

// using namespace std;

// class Teachers{
// private:
//     double salary;
// public:
//     string name;
//     string dept;
//     string subject;

//     void changeDept(string newDept){
//         dept = newDept;
//     }



// };

// int main(){

//     Teachers t1;

//     t1.name = "shradha";
//     t1.dept="IT";
//     t1.subject="science";
//     t1.dept="computer science";
//     cout<< t1.name <<endl;
//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;


// class student{
//     public:
//         string name;
//         int age;

//     public:
//         student(const string& StudentNAme, int StudentAge):
//         name(StudentNAme), age(StudentAge){}

//         void showDetails() {
//     cout << "The name is " << name << " and age is " << age << '\n';
//     }

// };


// int main(){

//     student students[] = {
//         student("Asha", 19),
//     student("Ravi", 20),
//     student("Maya", 18)

//     };

    
//     for(student& stud: students){
//         stud.showDetails();
//     }



//     return 0;

// }

// #include<iostream>
// using namespace std;

// class rect{

//     int width;
//     int height;

//     public:
//     rect(const int& rectWidth, int rectHeight):
//     width(rectWidth), height(rectHeight){}

//     void area(){
//         cout<<width * height<<'\n';
//     }



// };



// int main(){


//     rect rectangle[] = {
//     rect(4,2),
//     rect(2,6),
//     rect(2,12),
//     rect(2,3),
//     };


//     for( rect& rectan:rectangle ){
//         rectan.area();
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Counter{

//     int count = 0;

//     public:

//     void increment(){
//         ++count;
//     }

//     int GetCount() const{
//         return count;
//     }


// };


// int main(){

//     Counter first;
//     Counter Second;

//     first.increment();
//     first.increment();
//     first.increment();
//     Second.increment();

//     cout<<first.GetCount()<<'\n';
//     cout<<Second.GetCount()<<'\n';



//     return 0;
// }


#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    public:
    int credit, debit;
    int opening_balance = 500;

    public:
    BankAccount(const int& amountCredit, int amountDebit):
        credit(amountCredit), debit(amountDebit){}

    int deposit(int credit){
        int CreditedBal = opening_balance + credit;
        return CreditedBal;
    }

    int Withdraw( int debit){
        int DebitedBal = opening_balance - debit;
        return DebitedBal;
    }


};



int main(){


    BankAccount user1;

    user1.credit = 200;


    return 0;
}