def topView(P):
    pass
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
    P2 = [ [ [1,0,0], [0,0,0], [1,0,0] ] ,
    [ [0,0,1], [1,1,0], [1,0,1] ] ,
    [ [0,1,0], [0,0,0], [1,0,0] ] ]
    print(topView(P2)) # [[1,1,1], [1,1,0], [1,0,1]]
    print(frontView(P2)) # [[1,0,0], [1,1,1], [1,1,0]]
    print(rightView(P2)) # [[1,0,1], [1,1,1], [1,0,1]]

poc()