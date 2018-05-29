#include <stdio.h>
#include <semaphore.h>

#define NUM 5

#define DIREITA(id+1)%NUM

#define PENSANDO 0
#define FAMINTO 1
#define COMENDO 2

sem_t mutex = 1;

void filosofo(int id) {
	while (1 == 1) {
		pensar();
		down(&mutex);
		pegar_garfo(id);
		pegar_garfo(DIREITA);
		comer();
		largar_garfo(id);
		largar_garfo(DIREITA);
		up(&mutex);
	}
	}
