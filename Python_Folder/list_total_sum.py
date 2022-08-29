CONST_SUM = 15
def verify_sum(list_num, l_results):
    list_num.sort()
    for pos in range(0,len(list_num)):
        if list_num[pos] < CONST_SUM:
            if list_num[pos] + list_num[pos+1] == CONST_SUM:
                l_results.append(pos)
                l_results.append(pos+1)
                break



list_num = [1,34,6,1,9,23,5,6,10,6,12]
results=[]
verify_sum(list_num,results)
print(list_num)
print(f"La suma las posisciones que dan la suma de {CONST_SUM} son {results[0]} y {results[1]}")

