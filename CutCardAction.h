#pragma once
#include "Action.h"
#include"Cell.h"
#include"Card.h"
#include "Grid.h"
#include"CellPosition.h"
class CutCardAction:Action
{
		// [Action Parameters]
		Cell* CutCardcell;     //cell of the card which need to copied 
		Card* CutCardinfo;	// cpied card 
		CellPosition position; //position of the copied card
		Grid* pGrid;
		// Note: These parameters should be read in ReadActionParameters()

	public:
		CutCardAction(ApplicationManager* pApp); // A Constructor

		virtual void ReadActionParameters(); // Reads CopyCardAction action parameters (cardNumber, cardPosition)

		virtual void Execute(); // Creates a new Card Object of the specific Card Number
								// and Reads the Parameters of This Card Number (if any)
								// then Sets this Card Object to GameObject Pointer of its Cell

		virtual ~CutCardAction(); // A Virtual Destructor


};

