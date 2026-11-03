# COMP3016_CW1 Report

The project I have created is a 2D puzzle game called "Sliding Penguins", where you slide across ice in order to get home. However, the path home is covered in ice and obstacles block your way, meaning that you must navigate around them in order to reach your home. These obstacles have been frozen so that they won't move, meaning that you must slide into these obstacles to find the correct path.

The player must use the arrow keys to control their character, and they will continue sliding across the ice until they collide with a wall or an obstacle. The obstacles have built a maze meaning that you must choose the right path and move through the maze in order to reach the goal. In order to reach the goal, the player must carefully plan the movements, due to how their is only one path home.

[COMP3016 CW1 project proposal(10909750).pdf](https://github.com/user-attachments/files/34281130/COMP3016.CW1.project.proposal.10909750.pdf)

Throughout the course of the project's development, I have stuck to the original plan and features that were intended. The only change made during the development is the starting positions of the player and the end goal. Originally, the player was to start at the middle of the top part of the screen, and the goal was vertically under it, meaning that the player would need to traverse the maze and collide with obstacles in order to reach the goal, however their positions have been changed to the top left and bottom right respectively, with obstacles blocking the direct path.

To build and develop this game, I first started by creating the required header files and then made sure that SDL3 was working and functioning as intended. There were issues originally with the window creation when I started implementing it using an object-oriented programming approach (which can be seen in commit "1c7206c0fb28b77ee4650cc345994aadaf4e1879"), however this was quickly fixed after asking AI for debugging support. After that came the grid creation logic - which is used in the obstacle, goal, and player positioning and movement. Once the grid was complete, then I was able to quickly create the required functions, allowing for movement and collisions with the walls, obstacles and goal. 

In terms of dependencies, I have used SDL3 (as instructed), so that I could handle the window creation, updating, creation of tile types (obstacles, goal and player), and keyboard inputs. This allowed me to create a functional game loop and make the game executable outside of Visual Studio. Alongside this, I also used the "vector" library and "iostream", so that I could define within the grid, what a cell is (its coordinates) and also to print a message in the console telling the user that they have won.

[Updated AI Log.pdf](https://github.com/user-attachments/files/34281888/Updated.AI.Log.pdf)

As you can see from the AI log, I have used AI in order to help explain concepts that I was struggling to understand and support me in debugging my code. The grid logic used in "Grid.h" and the moving of the SDL3 window generation to the header file "Window.h", caused issues and I asked AI to aid me by explaining what is needed and how it can be implement, and why my window is no longer being created. By using AI for code explanation and debugging support, I have been able to quickly fix issues and errors that have appeared during the development of my project. 

[UML DIAGRAM.pdf](https://github.com/user-attachments/files/34282300/UML.DIAGRAM.pdf)

The provided UML diagram above, shows how the main C++ file connects to the header files, and how the header files connect to one another. As you can see in the diagram, both "Obstacle.h" and "Player.h" use features from the "Grid.h" file and "Grid" class. This is due to how the grid creation function uses the "rows", "columns", "cell" and "cell_size" variables to determine how big the grid is, how many cells are made, and how big each cell is. This information is useful to the player and obstacle functions due to how it allows for cell movement, collisions with obstacles by checking if the next cell is empty, and how big to render the player and obstacles.

[Test log.pdf](https://github.com/user-attachments/files/34282862/Test.log.pdf)
[Game evidence.pdf](https://github.com/user-attachments/files/34282871/Game.evidence.pdf)

Above are both the testing log, where I tested if the game functioned as intended, and the evidence proving that it runs and a message appears in the console when you have won. Due to the nature of my game, the tests were primarily focused on how the player moves and if collisions would stop the player from moving. Whilst testing, I concluded that the obstacles would block the player from moving, allowing them to make another move, but also I tested how the game would handle unrecognized keyboard inputs. Luckily when a key that wasn't assigned was pressed, nothing would happen, meaning that the game runs as intended.  

After completing this project, I feel I have improved my understanding and ability to use C++ effectively, and improved my ability to create functions to detect collisions. Before this coursework, I was unfamiliar with SDL3, however I now understand how the library works and how to build a better game loop. I am proud of my progress and development during this project and feel more confident that I can use what I have learnt to build better games in the future. Despite this, if I were to attempt this project again, I would aim to add sound effects to when the player collides with an obstacle and goal, an ambient soundtrack that plays while the game is running, and a start and end screen. This is due to how i believe that these improvements would allow for better immersion and an improved sense of enjoyment from the game.

In order to run the project, click on the file, then go to x64 and click "Debug", then you will find the executable file and then the game will start after clicking on it.

Link to the Github: https://github.com/agr6014/COMP3016_CW1 

Link to Youtube video: https://youtu.be/QMSjHnEXiFY
