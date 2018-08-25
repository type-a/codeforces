import re

def remove(text):
    return re.sub("[aeiouy]","",text)

a = remove(str(input()).lower())
s = ""
for i in range(len(a)):
    s += '.'+a[i]

print(s)