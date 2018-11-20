/*
 * B-15
 * 
 * Bergische Universität Wuppertal
 * Codename "zweierpotenzen.c"
 * 
 * Copyright 2018 Darius Musiolik <MrFlyingToasterman@GitHub>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <math.h>

//Global Var'z
int z = 0;
int m;

//Start
int main(int argc, char **argv) {
	//While-Schleife; bis z = 1 oder größer
	while(z < 1) {
		//Ausgabe
		printf("Geben Sie eine ganze, positive Zahl ein: ");
		//Einlesen vom Intenger z
		scanf("%d",&z);
	}
	
	//Zoidberg-Schleife; Zählt exponenten hoch; Hat kein Ende
	for(int exponent = 0; ; exponent++) {
		
		//Berechnung der Aufgabe
		m = pow(2, exponent);
		
		//Prüfung ob das Ergebnis zu "z" überschreitet
		if (m >= z) {
			break;
		}
		
		//Ausgabe der aktuellen Rechnung; Ausgabe der Lösung der aktuellen Aufgabe
		printf("\n2 ^ %i = %i", exponent,  m);
	}
	
	//Ende - ohne Fehler
	return 0;
}

