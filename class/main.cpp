// class is a abstract data type
// structure contains just variable names where as class contains variable name as well as methods
// classes provide concept of visibility

#include<iostream>

// let us assume we are defining a player and its characterstics
class Player
{
private:
    
public:
    int x , y;  // cordinates
    int speed;

    void Move(int xa , int ya)
    {
        x = xa * speed;
        y = ya * speed;
    }
};

int main()
{
    Player player;          // variable of class type are called objects
    player.Move(1 , -1);
}