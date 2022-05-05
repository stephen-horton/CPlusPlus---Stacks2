#include <iostream>
#include <stack>

using namespace std;

void createStack(stack <int> newStack) {
	stack <int> ns = newStack;

	while (!ns.empty()) {
		cout << '\t' << ns.top();
		ns.pop();
	}
	cout << '\n';
}

int main2() {
	stack <int> st;

	st.push(100);
	st.push(200);
	st.push(300);
	st.push(400);
	st.push(500);

	cout << "The stack called st is: ";

	createStack(st);

	cout << "\n st.size() - the size of the stack: " << st.size();
	cout << "\n st.top() - the top of the stack: " << st.top();
	cout << "\n st.pop() - pops the top of the stack off, so the result is : ";
	st.pop();

	createStack(st);

	/*Output:
	The stack called st is:         500     400     300     200     100

	st.size() - the size of the stack: 5
	st.top() - the top of the stack: 500
	st.pop() - pops the top of the stack off, so the result is :   400     300     200     100*/

	return 0;
}