#!/usr/bin python
import sys

#sign =  input("input a sight")
#operandA = input("First Operand")
#operandB = input("Second Operand")
trivia = {'Question1' : 10, 'Question2' : 25, 'Question3' : 3,  'Question4' : 25 }

class Score:

	def __init__(self, s):
		self.score = s

	def setScore(self, pts):
		self.score += pts

	def calculateScore(self):
		if (self.score >= 4 or self.score > 2):
			print ("Final Score is: ")
			print(self.score)
			print("You Win!")
		elif(selfself.score < 2):
			print("You Lose!")

def main():
	sc = Score(0)

	uInput = input("What is 5 + 5")
	if (int(uInput) == trivia['Question1']):
		sc.setScore(1)
		print ("Correct")
	else:
		sc.setScore(0)
		print("Incorrect")

	uInput = input("What is 5 * 5")
	if (int(uInput) == trivia['Question2']):
		sc.setScore(1)
		print ("Correct")
	else:
		sc.setScore(0)
		print("Incorrect")

	uInput = input("What is 15 / 5")
	if (int(uInput) == trivia['Question3']):
		sc.setScore(1)
		print ("Correct")
	else:
		sc.setScore(0)
		print("Incorrect")

	uInput = input("What is 5 Squared")
	if (int(uInput) == trivia['Question4']):
		sc.setScore(1)
		print ("Correct")
		sc.calculateScore()
	else:
		sc.setScore(0)
		print("Incorrect")

main()