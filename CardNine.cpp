#include "CardNine.h"

#include "CardOne.h"
CardNine::CardNine(const CellPosition& pos) : Card(pos) // set the cell position of the card
{
	// setting the inherited cardNumber data member with 9
	cardNumber = 9; 
}

CardNine::~CardNine(void)
{
}

void CardNine::ReadCardParameters(Grid* pGrid)
{

	//Getting pointer to the input && output Interfaces from the Grid

	Input* pIn =pGrid->GetInput();
	Output* pOut=pGrid->GetOutput();

	//Ptinting message to gide the user 
	// get cell clicked and stored it in a paramewte CellTomove (object from  CellPosition )
	
	pOut->PrintMessage("New CardNine: Click at any Cell to move to it");
	CellTomove=pIn->GetCellClicked();
	

	//Deletting the status Bar 
	pOut->ClearStatusBar();
}

void CardNine::Apply(Grid* pGrid, Player* pPlayer)
{
	//Calling Apply() of the base class Card to print the message that I reached this card number

	Card::Apply(pGrid ,pPlayer);

	//Update player cell with the new clicked position 

	pGrid->UpdatePlayerCell(pPlayer, CellTomove);
}