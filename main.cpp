#include <iostream>
#include <thread>
#include <chrono>

int main(int argc, char **argv) {
    std::cout<<"\n\n\n\n hello world"<<std::endl;

    // Sleep for 10 minutes
    std::this_thread::sleep_for(std::chrono::minutes(10));

    return 0;
}
