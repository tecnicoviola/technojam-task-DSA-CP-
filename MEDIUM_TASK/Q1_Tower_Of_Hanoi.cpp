#include <iostream>
using namespace std;

void tower_of_hanoi(int n, char start, char mid, char target) {
    if (n > 0) {

        // Moving n - 1 disks from start to mid, using target 

        tower_of_hanoi(n - 1, start, target, mid);
        
        // Moving the nth disk from start to target

        cout << "Move disk " << n << " from " << start << " to " << target << endl;
        
        // Moving  n - 1 disks from mid to target, using start

        tower_of_hanoi(n - 1, mid, start, target);
    }
}

int main() {
    int disks = 3;
    char start = 'A', mid = 'B', target = 'C';
    tower_of_hanoi(disks, start,mid, target);
    return 0;
}