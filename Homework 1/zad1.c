#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

struct card_t
{
    char value;
    char* paint;
};

struct card_t draw()
{
    char values[] = {'2','3','4','5','6','7','8','9','T','J','Q','K','A'};
    char paints[][10] = {"club","diamond","heart","spade"};

    time_t t;
    srand((unsigned)time(&t));

    struct card_t card = {values[rand()%13], paints[rand()%4]};
    sleep(1);
    //printf("%c\n",card.value);
    //printf("%s\n",card.paint);
    return card;
}

int hearts_count(struct card_t* deck, int num_cards)
{
    int br = 0;
    for (int j = 0; j < num_cards ; ++j)
    {
        if(!strcmp((deck+j)->paint, "heart"))
        {
            br++;
        }
    }
    return br;
}

void face_up(struct card_t* deck, int num_cards)
{
    for (int i = 0; i <= num_cards ; ++i)
    {
        printf("%c %s\n",(deck+i)->value,(deck+i)->paint);
    }
}
}

int main()
{
    int i = 0;
    struct card_t* deck = (struct card_t*)malloc(sizeof(struct card_t));
    *(deck+i) = draw();
    while(!(((deck+i)->value == 'A') && !strcmp((deck+i)->paint, "spade")))
    {
        i++;
        deck = (struct card_t*)realloc(deck, (sizeof(struct card_t))*(i+1));
        *(deck+i) = draw();
    }
    printf("The drown cards are %d\n", i+1);

    printf("The Hearts are %d\n", hearts_count(deck, i));

    face_up(deck, i);

    free(deck);
    return 0;
}
