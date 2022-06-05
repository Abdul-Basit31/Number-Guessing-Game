#Random Numer Guessing Game.
import random
range=random.randrange(1,19)
userinput=int(input('Enter Your Number = '))
print("Computer Number = ",range)
if userinput>range:
    print("Your Guess Number is too High")
elif userinput<range:
    print("Your Guess number is too Low")
else:
    print("Your Guess Number is Equal")