import random
import sys
import os

def printtortoise(tortoise_total, hare_total):
	step = ""
	if tortoise_total == hare_total:
		for i in range(tortoise_total-1):
			step += " "
		print(step + "BUMP")
	elif tortoise_total > hare_total:
		for i in range(hare_total-1):
			step += " "
		step += "H"	
		for i in range(tortoise_total - hare_total - 1):
			step += " "	
		print(step + "T")
	elif tortoise_total < hare_total:
		for i in range(tortoise_total-1):
			step += " "
		step += "T"	
		for i in range(hare_total - tortoise_total - 1):
			step += " "
		print(step + "H" )

def test():
	tortoise_total = 0
	hare_total = 0
	while True:
		current = random.randint(0,9)
		tortoise_move = [3,3,3,3,3,6,6,1,1,1]
		hare_move =[0,0,9,9,12,1,1,1,2,2]

		tortoise_total += tortoise_move[current]
		hare_total += hare_move[current]
		printtortoise(tortoise_total, hare_total)

		if tortoise_total >= 70 or hare_total >= 70:
			if tortoise_total > hare_total:
				print("Woo-hooo! Slow and steady wins the race! Congratulations, turtle!")
				return 0
			if 	tortoise_total < hare_total:
				print("Yay! The rabbit won! He hops the fastest!")
				return 0
			if tortoise_total == hare_total:
				return 1

def main():
	a = test()
	while a == 1:
		b = input("Tie score--no winner! Want to race again? Yes or No")
		if b == "Yes":
			a = test()
			continue
		else:
			return

if __name__ == "__main__":
	main()	