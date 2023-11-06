#include <iostream>

using namespace std;

/* 0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181
This program is a simple fibonacci sequence implementation.
main() is aimed only to show what the written function does.
fibonacci function calculates, displays and return value of n element of fibonacci sequence
n - index of an element*/
// In this code, the index of the first element(0) is 0.
// to prevent function from displaying values u can simply enter whatever string you want as an optional argument f.ex. "no"
int fibonacci (int n, string print="yes") {
    int previous=0, last=1, answer;
    if (n==0) {
        answer = 0;
        if (print=="yes")
            cout << answer << endl;
        return answer;
    } else if (n==1){
        answer = 1;
        if (print == "yes")
            cout << answer << endl;
        return answer;
    } else if (n >= 2) {
        for (int i=2; i <= n; i++) {
            answer = previous + last;
            previous = last;
            last = answer;

        }
        if (print == "yes")
            cout << answer << endl;
        return answer;
    } else {
        cout << "Wrong index entered" << endl;
    }

}

int main()
{

    fibonacci(0,"no");
    fibonacci(1);
    fibonacci(2);
    fibonacci(3);
    fibonacci(4);
    fibonacci(10);
    fibonacci(19);
    fibonacci(-1);
    int a = fibonacci(5,"no");
    cout << a;
  return 0;
}