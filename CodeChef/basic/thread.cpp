#include <iostream>
#include <thread>

void hello() {
    std::cout << "hello concurrent\n"; 
}

int main() {
    std::thread t(hello);
    t.join();
}