import re

def find_global_variables(filename):
    if filename.split(".")[-1] != "c":
        exit(0)
    with open(filename, 'r') as file:
        lines = file.readlines()
    type_pattern = re.compile(r'^(int|float|char|double|short|long|unsigned|signed|struct|typedef)\s+[^;]*;')
    open_bracket=0
    open_bracket2=0
    for line in lines:
        for char in line:
            if char == '{':
                open_bracket+=1
            elif char == ')':
                open_bracket2-=1
            elif char=='(':
                open_bracket2+=1
            elif char == '}':
                open_bracket-=1
        if open_bracket==0 and type_pattern.match(line):
            print(line)
            exit(1)

    exit(0)
filename = input()
try:
    find_global_variables(filename)
except FileNotFoundError:
    exit(2)


