#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    cout << "Hello World!";
    cout << "Hello" << " world!";
    cout << 618;
    int x{ 5 };
    cout << "x is equal to: " << x << endl;
    cout << "My name is Alex." << std::endl;
    std::cout << "And that's all, folks!\n"; // Using '\n' embedded into a double-quoted piece of text (note: no single quotes when used this way)


    cout << "Enter a number: ";
    int y{};
    cin >> y;
    cout << "You entered " << y << '\n';

    std::cout << "Enter two numbers separated by a space: ";

    int a{ }; // define variable x to hold user input (and zero-initialize it)
    int b{ }; // define variable y to hold user input (and zero-initialize it)
    std::cin >> a >> b; // get two numbers and store in variable x and y respectively

    std::cout << "You entered " << a << " and " << b << '\n';

    return 0;
}
