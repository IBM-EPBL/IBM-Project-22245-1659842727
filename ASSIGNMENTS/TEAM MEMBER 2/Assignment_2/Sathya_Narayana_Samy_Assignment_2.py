import random as r
i=1
while(i):
    tem=int(r.random()*100)
    humidity=int(r.random())
    if tem>=90:
        print("Hazard has been detected")
    elif tem>70:
        print("High is temperature")
    elif tem==70:
        print("Moderate temperature is found")
    else:
        print("Normal temperature is normal")