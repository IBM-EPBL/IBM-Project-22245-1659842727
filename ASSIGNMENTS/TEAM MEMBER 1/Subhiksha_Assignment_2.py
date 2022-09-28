import random as r
i=1
while(i):
    tem=int(r.random()*100)
    humidity=int(r.random())
    if tem>=90:
        print("Hazard is detected")
    elif tem>70:
        print("High temperature")
    elif tem==70:
        print("Moderate temperature")
    else:
        print("Normal temperature")