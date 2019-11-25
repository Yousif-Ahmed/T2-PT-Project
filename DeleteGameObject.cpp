#include "DeleteGameObject.h"
#include "Input.h"
#include "Output.h"
#include "Grid.h"
DeleteGameObject::DeleteGameObject(ApplicationManager* pApp):Action(pApp)
{
}

void DeleteGameObject::ReadActionParameters()
{
	Grid* pGrid = pManager->GetGrid();
	Input* pIn = pGrid->GetInput();
	Output* pOut = pGrid->GetOutput();
	pOut->PrintMessage("Click on any cell to remove object from it ");
	cellPos = pIn->GetCellClicked();
	delete pOut;
	delete pIn;
	delete pGrid;
}

void DeleteGameObject::Execute()
{
	Grid* pGrid = pManager->GetGrid();
	pGrid->RemoveObjectFromCell(cellPos);
	delete pGrid;
}

DeleteGameObject::~DeleteGameObject()
{
}
