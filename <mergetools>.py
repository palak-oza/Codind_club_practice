def merge_the_tools(string, k):
    num_subsegments = int(len(string) / k)
    for index in range(num_subsegments):
        t = string[index * k : (index + 1) * k]
        u = ""
    
        for c in t:
            if c not in u:
                u += c
        print(u)
