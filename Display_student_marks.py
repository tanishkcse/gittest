student_name = str(input())
marks = {'james': 90,'jules': 55,'Authur': 77}
for student in marks:
    if student == student_name:
        print(marks[student])
        break
    else:
        print('No entry with that name found')
        