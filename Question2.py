def element_search(arr, i):

    if i < 0:
        return -1
    else:
        if arr[i] == 2 * i:
            return arr[i]
        else:
            return element_search(arr, i - 1)
