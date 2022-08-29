def ones_last(local_list):
    l = len(local_list)
    las_pos = (l- 1)
    tmp = 0
    for i in range(0,l):
        if local_list[i] == 1 and local_list[las_pos] != 1:
            tmp = local_list[i]
            local_list[i] = local_list[las_pos]
            local_list[las_pos] = tmp
            las_pos = las_pos - 1
        if local_list[las_pos] == 1:
            las_pos = las_pos - 1
        if i == las_pos:
            break


list = [1,3,41,1,4,5,1,5,7,86,1,7,0,2,0,-9,23,-3]
print(list)
ones_last(list)
print(list)