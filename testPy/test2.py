from bs4 import BeautifulSoup
import requests
 
def tag_helper(tag):
    if tag.name == 'img':
        # img tag
        return '[IMG]'
    elif tag.name == 'p':
        # p tag
        return tag.get_text()
    else:
        return ''
 
def get_content():
    url = 'https://notice.tistory.com/m/2469'
    headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98 Safari/537.36'}
    req = requests.get(url, headers=headers)
    content = req.content
 
    soup = BeautifulSoup(content, 'html.parser')
    contents = soup.select_one('div.blogview_content')
 
    result = list(map(tag_helper, contents.find_all(['img', 'p'])))
 
    return result
 
contents = get_content()
 
for item in contents:
    print(item)
