


def main():
    pylist = ['1','2','3','4']
    pylist2 = ['5','6','7','8']
    pystr = "1234"
    pystr2 = "5678"
    # index/직접 접근하는 방법
    # string / list 다른점

    list_to_str = " ".join(pylist)
    print(pylist + pylist2)
    print(pystr + pystr2)

    # range_list = [_ for i in range()]
    # range_list = [i for i in range(1, 11)]
    # range_list = [int(i) for i in pylist]
    # print(range_list, type(range_list[0]))
    
    range_list = [i for i in range(1, 11)]
    sum(range_list) # int
    max(range_list) # int
    min(range_list) # int
    len(range_list) # anything
    range_list.append(11)
    print(range_list)
    range_list.remove(11)
    print(range_list)

    if "박" in "박세연":
        print("OK")
    
    range_list2 = [[] for i in range(4)]
    print(range_list2)

    tmp_str = "hello world nice to meet you"
    print(tmp_str.replace("nice","!"))
    tmp_str2 = "hello hello hello hello"
    print(tmp_str2.replace("hello", "!", 1))
    print(tmp_str2)

main()