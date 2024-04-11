import requests
from bs4 import BeautifulSoup
import pandas as pd

url = "https://www.amazon.in/s?k=iphone&crid=2B4HQGLRNK9DO&sprefix=iph%2Caps%2C324&ref=nb_sb_ss_ts-doa-p_1_3"
headers = {
    "User-Agent": "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/39.0.2171.95 Safari/537.36"
}

data = {"Title": [], "Price": []}

r = requests.get(url, headers=headers)

soup = BeautifulSoup(r.text, "html.parser")
# print(soup.prettify())
spans = soup.select("span.a-size-medium.a-color-base.a-text-normal")
# print(spans)
prices = soup.select("span.a-price")
for span in spans:
    print(span.string)
    data["Title"].append(span.string)

for price in prices:
    if not ("a-text-Price" in price.get("class")):
        print(price.find("span").get_text())
        data["Price"].append(price.find("span").get_text())
        if len(data["Price"]) == len(data["Title"]):
            break

df = pd.DataFrame.from_dict(data)
df.to_excel("data.xlsx", index=False)
