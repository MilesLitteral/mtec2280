def guessGame():
	guesses = ["Pigs", "Angeles", "Robot"]
	questions = ["____ in a blanket", "Los _______", "Super _____ Wars"]
	tries = 3
	success = 0

	print("Welcome to Miles' Guessing Game!")
	print("Starting Game")
	playGame = True
	q = 0
	x = 0
	while(playGame == True):
		if(success >= 3):
			print("Congradulations! You Won!")
			return 0
			
		if(tries <= 0):
			print("Game Over")
			playGame = False
			return 0

		print(questions[q])
		answer = raw_input("Answer: ")

		if(str(answer) == guesses[x]):
			success = success + 1
			q = q + 1
			x = x + 1
		elif(str(answer) != guesses[x]):
			tries = tries - 1
			print("Try again, tries remaining %i" % tries)


guessGame()
