class LectureDetails:
    def __init__(self):
        self.name = ""
        self.subject = ""
        self.course = ""
        self.num_lectures = 0

    def add_lecture_details(self, name, subject, course, num_lectures):
        self.name = name
        self.subject = subject
        self.course = course
        self.num_lectures = num_lectures

    def display_lecture_details(self):
        print("Name:", self.name)
        print("Subject:", self.subject)
        print("Course:", self.course)
        print("Number of Lectures:", self.num_lectures)


# Create lecture details objects
lecture1 = LectureDetails()
lecture2 = LectureDetails()
lecture3 = LectureDetails()
lecture4 = LectureDetails()
lecture5 = LectureDetails()

# Add lecture details
lecture1.add_lecture_details("John Doe", "Mathematics", "Advanced Calculus", 10)
lecture2.add_lecture_details("Jane Smith", "Physics", "Quantum Mechanics", 12)
lecture3.add_lecture_details("Mark Johnson", "Computer Science", "Algorithms", 8)
lecture4.add_lecture_details("Emily Brown", "History", "World War II", 6)
lecture5.add_lecture_details("Michael Davis", "English Literature", "Shakespearean Plays", 9)

# Display lecture details
lecture1.display_lecture_details()
print()
lecture2.display_lecture_details()
print()
lecture3.display_lecture_details()
print()
lecture4.display_lecture_details()
print()
lecture5.display_lecture_details()
