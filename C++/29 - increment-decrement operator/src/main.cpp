#include <iostream>

/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
         ++ increases the value by 1
         -- decreases the value by 1

         x++ evaluets first the value of x and then increments it, meaning that it returns to the given buffer
             the previous value before the increment.

         ++x increments directly the value of x and returns the latest value.

         The prefix is more performant than the suffix, but both are fine and 
         in most cases they produce the same behavior.

         The value is incremented anyways in both cases.

 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

 int main()
 {
   int x {0}, y {1};

   std::cout << x++ << " " << y++ << "\n"; // value will take precedence and cout will retreive 0 and 1 before increment

   std::cout << ++x << " " << ++y << "\n"; // increment takes precedence, cout will retreive the incremented values.
   return 0;
 }
