a = int(input())
X = 0
for i in range(a):
    cmd = str(input())
    if cmd == 'X++':
        cmd = 'X+=1'
    elif cmd == '++X':
        cmd = 'X+=1'
    elif cmd == '--X':
        cmd = 'X-=1'
    else :
        cmd = 'X -=1'
    exec(cmd)

print(X)