import json

data={}
with open('.expected.json') as f:
    data = json.load(f)
log = ""
with open('.output.log') as f:
    log = f.readlines()
    log = [line.strip() for line in log]

if log=="":
    print("Error: output.log is empty")
    exit(1)

log_karel=log[0].split(" ")

karel_x=int(log_karel[0])
karel_y=int(log_karel[1])
direction=log_karel[3]
bag=int(log_karel[2])

if data["karel"]["x"]!=karel_x or data["karel"]["y"]!=karel_y:
    print("Error: Karel's final coord is wrong\n-> Expected: ",data["karel"]["x"],data["karel"]["y"],"\n-> Got: ",karel_x,karel_y)
    exit(2) # coord error
elif direction != data["karel"]["direction"]:
    print("Error: Karel's final direction is wrong\n-> Expected: ",data["karel"]["direction"],"\n-> Got: ",direction)
    exit(3) # direction error
elif bag != data["karel"]["bag"]:
    print("Error: Karel's final beepers count is wrong\n-> Expected: ",data["karel"]["bag"],"\n-> Got: ",bag)
    exit(4) # bag error

log_beriess=[i.split(" ") for i in log[1].split("/")]

def check_berrie(my_berrie):
    it=0
    for b in data["beepers"]:
        if my_berrie[0]==b["x"] and my_berrie[1]==b["y"]:
            if my_berrie[2]==b["count"]:
                data["beepers"].pop(it)
                return 0
            else:
                data["beepers"].pop(it)
                return -b["count"]
        it+=1
    return 1
for i in log_beriess[:-1:]:
    berrie=[int(i[0]),int(i[1]),int(i[2])]

    result=check_berrie(berrie)
    if result==1:
        print(f"Error: Berrie's coord is wrong, extra berry at coordinates\n-> x = {berrie[0]} y = {berrie[1]}")
        exit(5)
    if result<0:
        print(f"Error: extra berry at coordinates: x = {berrie[0]} y = {berrie[1]}\n-> Expected: ",-result,"\n-> Got: ",berrie[2])
        exit(6)
    # if data["beriess"][i][j]!=int(i[1]) or data["beriess"][i[0]]["y"]!=int(i[2]):
# if data["karel"]["x"]
