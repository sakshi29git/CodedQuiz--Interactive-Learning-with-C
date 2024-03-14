# CodedQuiz: Interactive Learning with C
 
Title: CodedQuiz: Interactive Learning with C
# Overview 
Welcome to the Quiz Platform in C! This project aims to revolutionize education by providing a comprehensive quiz platform with user authentication, performance tracking, and multimedia integration. Whether you're a teacher managing quizzes or a student engaging in diverse quiz types, this platform has you covered.

 # Features: 
1. User Authentication: 
    - Secure login for both teachers and students.
`   - Personalized dashboards based on user roles.

2.  Teacher Dashboard: 
	- View details of students who attended quizzes.
	- Track students' quiz performance and scores.

3.  Student Dashboard: 
    - Solve quizzes across four different types.
    - Access personalized quiz history and performance metrics.

4.  Multiple Quiz Types: 
	- Engage in various quiz formats to cater to different subjects.
	- Keep the learning experience dynamic and engaging.

5.  Music Functionality: 
	- Enjoy a musical element during quiz sessions.
	- Enhance the overall user experience.

6.  Timer: 
	- Implement a timer to add a time-bound challenge to quizzes.
	- Improve time management skills during quiz-solving.

# Note:
 The project is developed in Dec C++ software. Please make sure you have created a new project. The instructions below describe steps to add music to the program in Dev C++ software.



# Music File Integration: 
To include music functionality, follow these steps:
1.  Link Music Library: 
	- Ensure you have a music library (e.g., libmpg123) installed on your system.
	- Add the following command in the linker section of the project (Go to project, click on project then go to parameter section annd paste following code and save it):
       “-lwinmm”

2.  Convert Music to WAV: 
	- Convert your music file (e.g., music.mp3) to WAV format using a tool like FFmpeg.
	- Make sure to link the converted WAV file in your program.
	- Make sure music file duration is between 10-14 seconds.

# Working of the Project: 
1. The quiz project is developed in the C language to utilize different libraries and features provided by C.
2. This project is divided into two sections - Student and Teacher.
3. In the Teacher section, teachers can log in to the dashboard and check details of students who attempted the quiz with the marks. Authentication is done in this section.
4. The next section is the student section.
5. Here, students have to log in to the student dashboard.
6. In the dashboard, four sections are available (Four quizzes - technical, non-technical, math, programming).
7. Students can start any quiz by registering themselves.
8. For each quiz, a timer is allotted. Students have to submit answers to each question within 10 seconds; if they fail to submit an answer, the quiz will be reset.
9. In the math section, students have the choice to decide how many questions they want to solve (e.g., 1, 2, 10). Based on the solved questions, the result will be declared.
10. At the end of each quiz, the result will be declared.
11. Logout facility is provided for each section, so users can exit from the quiz at any time.
12. Please read the instructions given in the dashboard of every quiz before starting the quiz.

License: 
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
