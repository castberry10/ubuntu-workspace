#2022-3-3 

import urllib.request

url = "https://dinae.tistory.com"

res = urllib.request.urlopen(url)

print(res.status)


