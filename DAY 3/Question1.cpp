// What’ll be the output of the following programs :

// int main() {
// int x = 2, y = 5;
// int exp1 = (x * y / x);
// int exp2 = (x * (y / x));
// cout << exp1 << ",";
// cout << exp2 << "\n";
// }

// 1.	First step → x * y
// 2 * 5 = 10
// 	2.	Second step → 10 / x
// 10 / 2 = 5 (integer division, result is still an integer)

// ✅ Result: exp1 = 5

// 1.	Inside parentheses first → y / x
// 5 / 2 = 2 (integer division — decimal part .5 is discarded)
// 	2.	Multiply by x → x * 2
// 2 * 2 = 4

// ✅ Result: exp2 = 4

// B.
// int main() {
// int x = 10, y = 5;
// int exp1 = (y * (x / y + x / y));
// int exp2 = (y * x / y + y * x / y);
// cout << exp1 << " ";
// cout << exp2<< " ";

// ans: exp1=20
//      exp2=20

// C.

// int main() {
// int x = 200, y = 50, z = 100;
// if(x > y && y > z){
// cout << "Hello \n";
// }
// if(z > y && z < x){
// cout << "C++ \n";
// }
// if((y+200) < x && (y+150) < z){
// cout << "Hello C++ \n";
// }
// }