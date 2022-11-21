import os
for i in range(0, 7):
    for j in range(0, 10):
        print(i, j)


def main(t = 9):
    print("You are doing good")
    print(t * 8)
main(7)   

for k in range(2, 48, 3):
    print(k + 1)


import urllib3
import logging
from string import Template
import requests
x = requests.get('https://www.mtn.com/about/')
print(x.text)
