#include "EditCardAction.h"
#include "Input.h"
#include "Output.h"
#include "CardOne.h"
#include "CardTwo.h"
#include "CardThree.h"
#include "CardFour.h"
#include "CardFive.h"
#include "CardSix.h"
#include "CardSeven.h"
#include "CardEight.h"
#include "CardNine.h"
#include "CardTen.h"
#include "CardEleven.h"
#include "CardTwelve.h"
#include "CardThirteen.h"
#include "CardFourteen.h"
EditCardAction::EditCardAction(ApplicationManager* pApp):Action(pApp)
{
	CardNumber = 0;
}

void EditCardAction::ReadActionParameters()
{
	//Allocation of Grid ,Input,Output Pointers
	Grid* pGrid = pManager->GetGrid();
	Input* pIn = pGrid->GetInput();
	Output* pOut = pGrid->GetOutput();
	pOut->PrintMessage("Click on The Sourse To Edit ..");
	cardPosition = pIn->GetCellClicked();
	Cell* Cellptr = pGrid->GetCell(cardPosition); //Get the Cell of clicked Cell position 
	 Cardptr = Cellptr->HasCard(); 
	if (Cardptr) //Check of not null pointer 
	{
		CardNumber = Cardptr->GetCardNumber();
	}
	//Deallocations
	delete pGrid;
	delete pIn;
	delete pOut;
	delete Cellptr;
}

void EditCardAction::Execute()
{
	Grid* pGrid = pManager->GetGrid();
	Input* pIn = pGrid->GetInput();
	Output* pOut = pGrid->GetOutput();
	if (CardNumber != 0)
	{
		switch (CardNumber)

		{
		case 1:
			Cardptr->ReadCardParameters(pGrid);
			break;
		case 2:
			Cardptr->ReadCardParameters(pGrid);
			break;
		case 9:
			Cardptr->ReadCardParameters(pGrid);
			break;
		case 10:
			Cardptr->ReadCardParameters(pGrid);
			break;
		case 11:
			Cardptr->ReadCardParameters(pGrid);
			break;
		case 12:
			Cardptr->ReadCardParameters(pGrid);
			break;
		case 13:
			Cardptr->ReadCardParameters(pGrid);
			break;
		case 14:
			Cardptr->ReadCardParameters(pGrid);
			break;
		default:
			break;
		}
		delete pGrid;
		delete pIn;
		delete pOut;
	}
}

EditCardAction::~EditCardAction()
{
}
