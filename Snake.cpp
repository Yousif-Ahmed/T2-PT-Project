#include "Snake.h"

Snake::Snake(const CellPosition& startCellPos, const CellPosition& endCellPos):GameObject(startCellPos)
{
	this->endCellPos = endCellPos;
	this->startCellPos = startCellPos;
//Validation 
}

void Snake::Draw(Output* pOut) const
{
	pOut->DrawSnake(endCellPos, position);
}

void Snake::Apply(Grid* pGrid, Player* pPlayer)
{
	
}

CellPosition Snake::GetEndPosition() const
{
	return endCellPos;
}

CellPosition Snake::GetStartPosition() const
{
	return startCellPos;
}

Snake::~Snake()
{
}
