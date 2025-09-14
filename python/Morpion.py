import random
from random import *

case = [3,0,0,0,0,0,0,0,0,0,3]
case2 = [" "," "," "," "," "," "," "," "," "," "," "]

def iswinner(case):
  if case[1] == case[2] & case[3] == case[1] & case[1] != 0:
    return 1
  elif case[4] == case[5] & case[6] == case[4] & case[4] != 0:
    return 1
  elif case[7] == case[8] & case[9] == case[7] & case[7] != 0:
    return 1
  elif case[1] == case[4] & case[7] == case[1] & case[1] != 0:
    return 1
  elif case[2] == case[5] & case[8] == case[2] & case[2] != 0:
    return 1
  elif case[3] == case[6] & case[9] == case[3] & case[3] != 0:
    return 1
  elif case[1] == case[5] & case[9] == case[1] & case[1] != 0:
    return 1
  elif case[3] == case[5] & case[7] == case[3] & case[3] != 0:
    return 1
  else:
    return 0

def printgrille(q,y):
  x = 0
  while x < 11:
    if q[x] == 0:
      y[x] = " "
    elif q[x] == 1:
      y[x] = "X"
    elif q[x] == 2:
      y[x] = "O"
    else:
      y[x] = ""
      
    x = x + 1
       
  print(y[1],"|",y[2],"|",y[3])
  print(y[4],"|",y[5],"|",y[6])
  print(y[7],"|",y[8],"|",y[9])
  print(" ")

def iscasetaken(case,chx):
  if case[chx]!=0:
    return 1
  else:
    return 0

def isallcasetaken(case):
  a = 0
  compt = 0
  while a < 10:
    if case[a] != 0:
      compt += 1
    a += 1
  if compt == 10:
    return 1
  else:
    return 0

def choix():  
  cx = int(input())  
  return cx
  
print("1 player (1) | 2 players (2)")
p = int(input())

def main():
  if p == 1:
    loop = 0
    while loop == 0:
      printgrille(case,case2)

      take = 1
      while take == 1:
        chx = choix()
        take = iscasetaken(case,chx)
      case[chx] = 1
      printgrille(case,case2)
    
      if iswinner(case) == 1:
        return 1
      elif isallcasetaken(case) == 1:
        return 0
    
      take = 1
      while take == 1:
        chxbot = int(random()*10)
        take = iscasetaken(case,chxbot)
      case[chxbot] = 2
      printgrille(case,case2)

      if iswinner(case) == 1:
        return 2
      elif isallcasetaken(case) == 1:
        return 0
  elif p == 2:
    loop = 0
    while loop == 0:
      printgrille(case,case2)
      take = 1
      while take == 1:
        chx = choix()
        take = iscasetaken(case,chx)
      case[chx] = 1
      printgrille(case,case2)
      if iswinner(case) == 1:
        return 1
      elif isallcasetaken(case) == 1:
        return 0
      
      take = 1
      while take == 1:
        chx2 = choix()
        take = iscasetaken(case,chx2)
      case[chx2] = 2
      printgrille(case,case2)
      if iswinner(case) == 1:
        return 2
      elif isallcasetaken(case):
        return 0
        
result = main()
if p == 1:
  if result == 1:
    print("You did it... but it's random")
  elif result == 2:
    print("You are a noob bro...")
  else:
    print("Bruh")
elif p == 2:
  if result == 1:
    print("Player 1 win")
  elif result == 2:
    print("Player 2 win")
  else:
    print("Equality")
else:
  print("Select a choice bro. You are so stupid!!!")