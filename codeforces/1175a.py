n = int(input())


for _ in range(n):
    ans=0
    x, k = map(int, input().split())
    if k==2:
        if(k%2):
            print(int(k/2))
        else:
            print(int(k/2)+1)
    else:
        while(x != 0):
            if(x%k == 0):
                x //= int(k)
            else:
                x-=1
            ans+=1
        print(ans)

