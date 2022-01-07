This simple c++ code checks that the credit card number entered is valid or not and if valid then what is the credit card type. 
In order to implement this code I have used Luhn's Algorithm. 

Luhn's Algorithm was invented by Hans Peter Luhn of IBM. 

It states that -> 

1. Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
2. Add the sum to the sum of the digits that weren’t multiplied by 2.
3. If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!
