def topView(P):
    x = len(P[0][0])
    y = len(P[0])
    toplist = [[0]*x for i in range(y)]

    for i in range(3):
        # print(toplist)
        for j in range(3):
            for k in range(3):
                # print("toplist:", toplist[j][k])
                if P[i][j][k] == 1:
                    toplist[j][k]=1

    return toplist                

# ADD ADDITIONAL CODE HERE!
def frontView(P):
    pass
# ADD ADDITIONAL CODE HERE!
def rightView(P):
    pass
# ADD ADDITIONAL CODE HERE!

def poc():
    P1 = [ [ [0,0,0], [0,0,0], [1,0,0] ] ,
    [ [1,0,1], [0,0,0], [1,0,1] ] ,
    [ [1,0,1], [1,1,1], [1,1,1] ] ]
    print(topView(P1)) # [[1,0,1], [1,1,1], [1,1,1]]
    print(frontView(P1)) # [[1,0,0], [1,0,1], [1,1,1]]
    print(rightView(P1)) # [[0,0,1], [1,0,1], [1,1,1]]
    # P2 = [ [ [1,0,0], [0,0,0], [1,0,0] ] ,
    # [ [0,0,1], [1,1,0], [1,0,1] ] ,
    # [ [0,1,0], [0,0,0], [1,0,0] ] ]
    # print(topView(P2)) # [[1,1,1], [1,1,0], [1,0,1]]
    # print(frontView(P2)) # [[1,0,0], [1,1,1], [1,1,0]]
    # print(rightView(P2)) # [[1,0,1], [1,1,1], [1,0,1]]

poc()