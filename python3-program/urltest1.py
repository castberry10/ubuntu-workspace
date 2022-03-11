#2022-3-3 
#in knu v.net 
#url library test

import urllib.request

url = "https://dinae.tistory.com"

res = urllib.request.urlopen(url)

print(res.status)


