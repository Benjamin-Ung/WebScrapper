import requests
from bs4 import BeautifulSoup

#Making a GET requests
r = requests.get('https://www.geeksforgeeks.org/python-programming-language/')

#check status code for response recieved
#success code - 200
print(r)

#parsing HTML
soup = BeautifulSoup(r.content, 'html.parser')
print(soup.prettify())
