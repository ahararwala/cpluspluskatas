#include "FizzBuzz.h"

FizzBuzz::FizzBuzz() {

}

string FizzBuzz::process(int num) {
    string result = std::to_string(num);

    if(num % 15 == 0)
        result = "FizzBuzz";
    else if (num % 3 == 0)
        result = "Fizz";
    else if(num % 5 == 0)
        result = "Buzz";

    return result;
}
