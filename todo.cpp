#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Task{
    string description;
    bool isCompleted;

};

void addTask(vector<Task> taskList, string& desp){
    Task newTask;
    newTask.description = desp;
    newTask.isCompleted = false;
    taskList.push_back(newTask);
    cout << "Task entered!" << endl;
}

void removeTask(vector<Task> &taskList, int index){
    if(index > 0 && index <taskList.size()){
        taskList.erase(taskList.begin() + index);

    }
}



void displayTasks(const vector<Task>& taskList) {
    for (size_t i = 0; i < taskList.size(); ++i) {
        cout << i + 1 << ". ";
        if (taskList[i].isCompleted) {
            cout << "[X] ";
        } else {
            cout << "[ ] ";
        }
        cout << taskList[i].description << std::endl;
    }
}

int main()
{
    vector<Task> tasks;
    int choice;

    string desp;
    while(true){
        cout << "To-do List Menu: " << endl;
        cout << "1. Add Task" << endl;
        cout << "2. Remove Task" << endl;
        cout << "3. Display Tasks" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;


        switch (choice)
        {
        case 1:
            cout << "Emter your task: ";
            cin >> desp;
            getline(cin, desp);
            addTask(tasks, desp);
            break;
        
        case 2:
            int index;
            cout << "Enter the task number to remove: ";
            cin >> index;
            removeTask(tasks, index - 1);
            cout << "Selected item deleted!";
            break;
        
        case 3:
            displayTasks(tasks);
            break;

        case 4:
            return 0;

        default:
        cout << "Invalid Choice. Try Again." << endl;

        }
   
    }
    return 0;
}