#include "PasteCardAction.h"
#include "Input.h"
#include "Output.h"

PasteCardAction::PasteCardAction(ApplicationManager* pApp) : Action(pApp)
{
	// Initializes the pManager pointer of Action with the passed pointer

}

PasteCardAction::~PasteCardAction()
{
	delete Cardcell;
	position = NULL;
	Cardcell = NULL;
	PasteCardinfo = NULL;
}

void PasteCardAction::ReadActionParameters()
{
	//getting pointer to output && input class
	Output* pOut = pGrid->GetOutput();
	Input* pIn = pGrid->GetInput();

	//getting position of the clicked cell
	//settig the Game object with the card cpied||cutted
	pOut->PrintMessage("Click On The Cell To Paste The Card On It..");
	position = pIn->GetCellClicked();
	PasteCardinfo = pGrid->GetClipboard();
	Object = PasteCardinfo;
	pOut->ClearStatusBar();

}

void PasteCardAction::Execute()
{
	//Paste the card to clicked After check  
	if (PasteCardinfo != NULL)
	{
		pGrid->AddObjectToCell(Object);
	}
}
