// let arr = [1, 2, 3, 78, 5];

// let sum=0;
// for(let i = arr.length-1; i>=0; i--){
//     console.log(arr[i])
// }

// class cars{
//     brand:string;
//     year:number;

//     constructor(brand?: string, year?: number) {
//         this.brand = brand ?? "";
//         this.year = year ?? 0;
//     }



// }


// const car1 = new cars("audi",2006);
// const car2 = new cars("Benz",2016);
// const car3 = new cars("mayback",2026);

// // second way of intializing if parameters are optional with the help of "?"
// const car4 = new cars();
// car4.brand = "BMW";
// car4.year = 2025;

// console.log(car4);

// class student {
//     st_name: string;
//     st_age: number;


//     constructor(st_name:string, st_age:number){
//         this.st_name = st_name;
//         this.st_age = st_age;
//     }

//     showDetails(): void{
//         console.log(`Student Name:${this.st_name} and the age is ${this.st_age}`);
//     }


// }

// const students =[ new student("mahes",45),
//  new student("joe",23),
//  new student("vistor",15),
//  new student("priya",42),
//  new student("akash",52)]

// for(const stud of students){
//     stud.showDetails(); 
// }



// class rectangle{

//     width: number;
//     height: number;


//     constructor(width:number, height:number){
//         this.width = width
//         this.height = height
    
//     }


//     area(): void{
//         console.log(this.width*this.height);
//     }
// }

// const rect = [
//     new rectangle(1,2),
//     new rectangle(3,2),
//     new rectangle(8,2),
//     new rectangle(10,2),
// ]

// for (const rectan of rect){
//     rectan.area();
// }


// class Counter{
//     count:number = 0;

//     increment(): void{
//         ++this.count;
//     }

//     getCount(){
//         return this.count;

//     }


// }

// const first = new Counter;

// first.increment();
// first.increment();
// first.increment();
// first.increment();

// console.log(first.getCount());


// class BankAccount{

//     OpeningBalance:number = 500;

//     credit:number = 0;
//     debit:number = 0;

//     constructor(credit?:number, debit?:number){
//         this.credit = credit ?? 0;
//         this.debit = debit ?? 0;
//     }


//     deposit(amount:number) {
//         this.OpeningBalance += amount;
//         return this.OpeningBalance;
//     }

//     withdraw(amount:number){
//         if(amount > this.OpeningBalance){
//             console.log('Insufficient Balance!');
//         }

//             this.OpeningBalance -= amount;

//             return this.OpeningBalance;
//     }


//     getBalance(){

//         return this.OpeningBalance
//     }

// }

// const user1 = new BankAccount();

// console.log(user1.deposit(200));
// console.log(user1.withdraw(100));
// console.log(user1.getBalance());

