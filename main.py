import string
import time
import json
import datetime
import pandas as pd
import yfinance as yf

nasdaq_100 = yf.download(tickers='qqq', period='1h', interval='1m', rounding=True)
# print(nasdaq_100)


print(nasdaq_100[0][4])

# print(isinstance(nasdaq_100, NoneType)) #check the type of the nasdaq_100
