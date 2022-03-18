#include <stdio.h>

int main(void)
{
    int i;
    for(i=1; i<=100; i++)
    {
        if(((i%3)||(i%5))== 0)
            printf("number= %d FizzBuzz\n", i);
        else if((i%3)==0)
            printf("number= %d Fizz\n", i);
        else if((i%5)==0)
            printf("number= %d Buzz\n", i);
        else
            printf("number= %d\n",i);

    }

    return 0;
}

/*
LEARN C
Fizz Buzz
Fizz Buzz is a classic developer interview question that is asked or referred to so often for so long, it is almost a cliché!

Though this challenge will appear very simplistic to those with some coding experience, it is designed to weed out 99.5% of programming job candidates who cannot creatively use their coding knowledge to solve simple problems.

Want to give it a shot?

Write a fizzbuzz.c program that outputs numbers from 1 to 100.

But for multiples of 3, print Fizz instead of the number and for the multiples of 5, print Buzz. For numbers which are multiples of both 3 and 5, print FizzBuzz.

1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
    ...
98
Fizz
Buzz
Happy coding!

Tasks
2/8 Complete
Mark the tasks as complete by checking them off
What we are building in the project:
1.
As the inventor of this challenge, Imran Ghory, states:

"After a fair bit of trial and error I’ve come to discover that people who struggle to code don’t just struggle on big problems, or even smallish problems (i.e. write an implementation of a linked list). They struggle with tiny problems. 

So I set out to develop questions that can identify this kind of developer and came up with a class of questions I call “FizzBuzz Questions” named after a game children often play (or are made to play) in schools in the UK.”


Hint
To learn more: http://www.imranghory.org

Setting up:
2.
Let’s create a skeleton for the program. Add:

#include <stdio.h>
 
int main() {
  // Code here
}

Hint
In order to read or write to the standard input/output streams, you need to include:

#include <stdio.h>
The main() is the main function that houses your program.

Outputs numbers from 1 to 100:
3.
How do we output all the numbers from 1 to 100?

Well, we could write printf() 100 times back to back but that’s no fun. What else can we do?

That’s right! A for loop!

Write a for loop that starts at 1 and iterates to 100.


Hint
We want the loop to start at 1 and end at 100, inclusively.

4.
Inside the for loop, let’s print the counter i.


Hint
Your output should now look like:

1
2
3
4
5
.
.
.
100
5.
And now we have all the numbers. Let’s solve the hard part.

Before coding further, take out a piece of paper and brainstorm. How do we check for whether or not a number is divisible by 3?

When you are ready, try to implement the check for just divisibility by 3.


Hint
You will need a if/else if/else statement and the % operator for this!

It’s not a true test of your abilities if you look at other people’s answers or Google for examples — try to solve this yourself as if you were in a job interview situation.

If i is a multiple of 3, then the condition i % 3 == 0 will be true.

You might need to do the same for 5 and 15.

6.
Now try to implement the check for divisibility by 5.


Hint
This is very similar to the check for divisibility by 3.

7.
Now combining what you figured out for 3 and 5, try to work out a way to test for divisibility by 15 and implement it.


Hint
This can be done in a few ways, and could utilize the number 15 or could entirely go without checking directly for the divisibility of 15. If you want to take the latter route, keep in mind that 15 is a number divisible by both conditions you’ve already tested.

Done!


*/