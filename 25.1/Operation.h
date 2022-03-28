#pragma once

struct coordinate
{
	int x;
	int y;
};

coordinate coordinate_enter(coordinate& coordinate);
void scalpel();
void hemostat();
void tweezers();
void suture();
bool checking_operation_status();
