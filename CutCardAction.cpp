#include "CutCardAction.h"
#include "Input.h"
#include "Output.h"

CutCardAction::CutCardAction(ApplicationManager* pApp) : Action(pApp)
{
	// Initializes the pManager pointer of Action with the passed pointer

}

CutCardAction::~CutCardAction()
{
	delete CutCardcell;
	position = NULL;
	CutCardcell = NULL;
	CutCardinfo = NULL;
}

void CutCardAction::ReadActionParameters()
{
	//getting pointer to output && input class
	Output* pOut = pGrid->GetOutput();
	Input* pIn = pGrid->GetInput();

	//getting position of the cell clicked 
	pOut->PrintMessage("Click On The Card To Cut it..");
	position = pIn->GetCellClicked();
	CutCardcell = new Cell(position);
	CutCardinfo = CutCardcell->HasCard();
	pOut->ClearStatusBar();

}

void CutCardAction::Execute()
{
	//cut the card clicked After check there is card in clicked 

	if (CutCardinfo != NULL)
	{
		pGrid->RemoveObjectFromCell(position);
		pGrid->SetClipboard(CutCardinfo);
	}
}
