#pragma once
#include "GameObject.h"
class Snake :
	public GameObject
{
	CellPosition endCellPos;
	CellPosition startCellPos;
public :
	Snake(const CellPosition& startCellPos, const CellPosition& endCellPos); // A constructor for initialization
	virtual void Draw(Output* pOut) const; // Draws a ladder from its start cell to its end cell

	virtual void Apply(Grid* pGrid, Player* pPlayer); // Applys the effect of the ladder by moving player to ladder's end cell

	CellPosition GetEndPosition() const;
	CellPosition GetStartPosition() const;// A getter for the endCellPos data member
	virtual ~Snake();
};

