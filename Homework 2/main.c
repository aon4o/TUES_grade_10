#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#define EMPTY_BOARD {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
#define sleep Sleep(2000)
#define print_board for(int i=0;i<15;i++){printf("%d ",game->board[i]);}
#define print_board1 for(int i=0;i<15;i++){printf("%d ",game.board[i]);}printf("\n");

struct player_t
{
    char name[10];
    int num;
};
struct game_t
{
    int current_round;
    struct player_t* players[4];
    int board[16];
};
int roll_die()
{
    sleep;
    int x;
    time_t t;
    srand((unsigned) time(&t));
    x = (rand() % 6) + 1;

    return x;
};

void move_player(struct game_t* game, struct player_t* player)
{
    int dice = roll_die();
    int new_position;
    int *board = game->board;

    if(game->current_round==1)
    {

        new_position = dice;

    }
    else if(game->current_round!=1)
    {
        for(int i=0; i<15; i++)
        {
            if(board[i]==player->num)
            {
                board[i] = 0;
                new_position = i+dice;
                if(new_position>15)
                {
                    new_position -= 16;
                }


                break;
            }
        }
    }

    printf("Moving player %s    ", player->name);
    printf("Rolled %d\n", dice);

    if(board[new_position]!=0)
    {
        int losing_player = board[new_position];
        printf("    Eliminated player %s\n", game->players[losing_player-1]->name);
        game->players[losing_player-1]=NULL;
    }
    board[new_position] = player->num;


};

int play_round(struct game_t* game)
{
    game->current_round += 1;
    printf("\nStarting round %d\n",game->current_round);

    for(int player = 0; player < 4; player++)
    {
        if(game->players[player]!=NULL)
        {

            move_player(game, game->players[player]);

            int players_alive = 4;
            for(int i = 0; i < 4; i++)
            {
                if(game->players[i]==0)
                {
                    players_alive -= 1;
                }
            }
            if(players_alive==1)
            {
                return 1;
            }
        }
    }
    return 0;
};

void play_game(struct game_t* game)
{
    int game_end = 0;

    while(game_end != 1)
    {
        game_end = play_round(game);
    }
    for(int i = 0; i < 4; i++)
    {
        if(game->players[i] != 0)
        {
            printf("\nGame Over. Player %s wins!\n", game->players[i]->name);
        }
    }
};







int main()
{
    struct player_t p1 = {"Sasheto", 1};
    struct player_t p2 = {"Dankata", 2};
    struct player_t p3 = {"Kriskata", 3};
    struct player_t p4 = {"Uju", 4};
    struct game_t game = {0, {&p1, &p2, &p3, &p4}, EMPTY_BOARD};

    play_game(&game);

    //DEBUGGING
    /*
    printf("DEBUGGING TEXT");
    printf("%s, %d\n", p1.name, p1.num);
    printf("%d, %d, %s\n", game.board[0], game.current_round, game.players[0]->name);
    */

    /*
    printf("%s, %d\n", game.players[0]->name, game.players[0]->num);
    printf("%s, %d\n", game.players[1]->name, game.players[1]->num);
    printf("%s, %d\n", game.players[2]->name, game.players[2]->num);
    printf("%s, %d\n", game.players[3]->name, game.players[3]->num);
    printf("%d, %d, %s\n", game.board[0], game.current_round, game.players[0]->name);
    */

    return 0;
}
