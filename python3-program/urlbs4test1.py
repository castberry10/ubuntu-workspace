#2022-3-3 

import urllib.request
from bs4 import BeautifulSoup 

url = "https://dinae.tistory.com"

res = urllib.request.urlopen(url)

urlhtml = res.read() 

soup = BeautifulSoup(urlhtml, 'html5lib')

result = soup.select('button')

print(result)
