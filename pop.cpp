#include <iostream>
#include <queue>

using namespace std;

int main() {
  queue<int> q;

  // Enqueue
  q.push(1);
  q.push(2);
  q.push(3);

  // Dequeue
  cout << q.front() << endl;  // Output: 1
  q.pop();
  cout << q.front() << endl;  // Output: 2
  q.pop();
  cout << q.front() << endl;  // Output: 3
  q.pop();

  return 0;
}
