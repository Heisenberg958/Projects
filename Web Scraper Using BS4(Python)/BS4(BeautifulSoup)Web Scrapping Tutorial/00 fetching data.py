import requests


def fetchAndSaveToFile(url, path):
    r = requests.get(url)
    # UnicodeEncodeError when saving scraped web content to a file. To fix it I replaced this code:

    # with open(fname, "w") as f:
    #     f.write(html)

    with open(path, "w", encoding="utf-8") as f:
        f.write(r.text)


url = "https://timesofindia.indiatimes.com/city/delhi"

fetchAndSaveToFile(url, "data/times.html")
