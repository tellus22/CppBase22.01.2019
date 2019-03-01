#include <iostream>
#include <string>

using namespace std;

enum class Fields : char
    {
        Field = '.',
        Tree  = 'T',
        House = 'X'
    };
static const int ROW{5};
static const int COL{7};

static Fields map[ROW][COL]
{
    {Fields::Field, Fields::Field,  Fields::Tree, Fields::Field, Fields::Tree, Fields::Tree, Fields::Field},
    {Fields::Field, Fields::Field, Fields::Field, Fields::Tree, Fields::Field, Fields::Field, Fields::Field},
    {Fields::Field, Fields::Tree, Fields::Field, Fields::Field, Fields::Field, Fields::Tree, Fields::Field},
    {Fields::Field, Fields::Tree, Fields::Tree, Fields::Field, Fields::Field, Fields::Field, Fields::Tree},
    {Fields::Field, Fields::Field, Fields::Field, Fields::Tree, Fields::Tree, Fields::Field, Fields::House},
};

struct {
    char symbol{'G'};
    int x{0};
    int y{0};
} static Player{};

void Map(){

    cout.clear();

        for (int i=0;i<ROW;++i)
        {
            for (int j=0;j<COL;++j)
            {
                if((i == Player.y) && (j == Player.x))
                {
                    cout << Player.symbol << ' ';
                }
                else
                {
                    cout << static_cast<char>(map[i][j]) << ' ';
                }
            }
            cout << endl;
        }

        cout << endl;
}

void Input(){

    cout<<"w->UP"<<endl;
    cout<<"a->LEFT"<<endl;
    cout<<"s->DOWN"<<endl;
    cout<<"d->RIGHT"<<endl;

    char command;
        cin >> command;

        switch (command) {
        case 'w':

            if(Player.y-1 >= 0)
            {
                --Player.y;
            }
            else {
                cout << "Cannot move!" << endl;
            }

            break;

        case 's':if(Player.y+1 >= 0)

            {
                ++Player.y;
            }
            else {
                cout << "Cannot move!" << endl;
            }

            break;

        case 'a':

            if(Player.x-1 >= 0)
            {
                --Player.x;
            }
            else {
                cout << "Cannot move!" << endl;
            }

            break;

        case 'd':
            if(Player.x+1 >= 0)
            {
                ++Player.x;
            }
            else {
                cout << "Cannot move!" << endl;
            }

            break;

        default:
            break;
        }
}
bool checkPlayer()
{
    bool goahead = true;

    switch (map[Player.y][Player.x]) {
    case Fields::Tree:
        Player.symbol = '=';
        goahead = false;
        break;
    default:
        break;
    }

    return goahead;
}
int main()
{
    bool goahead = true;

//        do
//        {
//            Map();
//            Input();
//            goahead = checkPlayer();
//        }while(goahead);
//    Map();
        while(goahead){
            Map();
            Input();
            goahead = checkPlayer();
        }
        Map();

        return 0;
}

