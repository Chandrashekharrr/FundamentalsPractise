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


// #include<iostream>
// using namespace std;

// class BankAccount{
//     public:
    
//     int opening_balance = 500;
    

//     BankAccount(): credit(0), debit(0){}


//     int credit, debit;
//     BankAccount(const int& amountCredit, int amountDebit):
//         credit(amountCredit), debit(amountDebit){}

//     int deposit(int amount){
//         int CreditedBal = opening_balance + amount;
//         return CreditedBal;
//     }

//     int Withdraw( int amount){

//         if(amount>opening_balance){
//             cout<<"Insufficient balance"<<'\n';
//             return opening_balance;
//         }
//         int DebitedBal = opening_balance - amount;
//         return DebitedBal;
//     }

//     int getBalance() const {
//         return opening_balance;
//     }


// };



// int main(){


//     BankAccount user1;

//     // // user1.credit = 200;

//     cout<<"Credited Balance: "<<user1.deposit(200)<<'\n';
//     cout<<"Debited Balance: "<<user1.Withdraw(100)<<'\n';
//     cout<<"Current Balance: "<<user1.getBalance()<<'\n';
//     cout<<user1.getBalance()<<'\n';


//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int even = 0;
    int odd = 0;
    double arr[] = {1,2,3,4,5,6,7,8,9,5,52,63,41,85,96,7,20,36,45,89,74,456,963,852,741};

    int size = sizeof(arr) / sizeof(arr[0]);    

    for(int i=0; i<size; i++){
        if(i % 2 == 0){
            // cout<<"even number: "<<arr[i]<<'\n';
            even++;
        }else{
            // cout<<"odd number: "<<arr[i]<<'\n';
            odd++;
        }
    }

    cout<<"even numbers: "<<even<<'\n';
    cout<<"odd numbers: "<<odd<<'\n';

    return 0;
}




