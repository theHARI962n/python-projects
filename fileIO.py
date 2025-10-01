

with open("notes.txt", "r") as kal:
    content = kal.read()
    print(content)

with open("notes.txt", "w") as f:
   f.write("Overwriting file content\n")

with open("notes.txt", "r") as f:
    new_content = f.read()
    print("After overwrite:")
    print(new_content)

