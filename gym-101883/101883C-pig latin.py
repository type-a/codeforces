
n = int(input())

for _ in range(n):
    s = str(input())
    s_arr = s.split(' ')
    string = ""
    for words in s_arr:
        string += (words[1:]+words[0]+"ay ")
        # print(words, end=" ")
    print(string[0].upper()+string[1:len(string)-1].lower())