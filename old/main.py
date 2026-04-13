from Question2 import element_search

arr = [1, 3, 3, 4, 5]


def main():

    print(
        "Press 1. for output to Question 1. \nPress 2. for output to Question 2. \nPress 3. for output to Question 3"
    )
    option = int(input())

    if option == 1:
        pass  # insert the function for question 1 ight? (remove pass btw)

    elif option == 2:
        question2(arr)

    elif option == 3:
        pass  # insert function for question 3 :D


def question2(arr):

    result = element_search(arr, len(arr) - 1)

    if result != -1:
        print("The element is: ", result)
    else:
        print("No element in the array meets the criteria")


if __name__ == "__main__":
    main()
