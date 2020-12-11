#include <stdio.h>
#include <stdlib.h>

struct film_t
{
	char name[250];
	char director[30];
	int duration;
	int time_watched;
	float price_for_minute;
};

struct user_t
{
	char name[30];
	char email[50];
	int watched_films;
	struct film_t* films;
};

float get_bill(struct user_t user)
{

    if(user.watched_films == 0){return 0;}

    float bill = 0.0;
    int j = 0;
	while(j < user.watched_films)
    {
	    bill += ((user.films+j)->price_for_minute) * ((user.films+j)->time_watched);
	    ++j;
    }
	return bill;
}

int main()
{
	struct film_t film1 = {"suicide_squad", "Nqkoj Nqkojsi", 137, 25, 2.0};
	struct film_t film2 = {"back_to_the_future", "Nqkoj Nqkojsi2", 115, 130, 0.5};
	struct film_t film3 = {"bulgar_the_film", "Nedelcho Bogdanov", 72, 435, 1.33};

	struct user_t user1 = {"", "", 3};
	struct user_t user2 = {"", "", 0};

	user1.films = (struct film_t*)malloc(sizeof(struct film_t)*(user1.watched_films));
	*(user1.films) = film1;
	*(user1.films+1) = film2;
	*(user1.films+2) = film3;

	printf("User1's bill: %f\n", get_bill(user1));
	printf("User2's bill: %f\n", get_bill(user2));

	free(user1.films);
	return 0;
}

