#include <iostream>
#include <utility>

/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
         This operator returns the remainder of a operation.
         using pair type to do a simple example. will cover that later.

         A simple usage is to check if the remainder is 0 or 1 to determine
         if the number is even or odd.

         NOTE: Don't confuse the RESULT with the REMAINDER.

               it is recommended to compare the remainder between 0 or 1 to see if the number is 
               even or odd.

 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

 int main()
 {
   constexpr std::pair<int, int> values {25, 5};

   if ((values.first % values.second) == 0) {
      std::cout << "Number is evenly divisible, remainder is 0 \n";
   } else {
      std::cout << "Number is odd, remainder is not 0\n";
   }
   return 0;
 }
