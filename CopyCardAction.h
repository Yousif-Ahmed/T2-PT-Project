#pragma once
#include "Action.h"
#include"Cell.h"
#include"Card.h"
#include "GameObject.h"
#include "Grid.h"
#include"CellPosition.h"
class CopyCardAction:public Action 
{
		// [Action Parameters]
	Cell* CpiedCardcell;     //cell of the card which need to copied 
	Card* CpiedCardinfo;// 2- cell position of the card 
	Grid* pGrid;
	CellPosition position;
	
		// Note: These parameters should be read in ReadActionParameters()

	public:
		CopyCardAction(ApplicationManager* pApp); // A Constructor

		virtual void ReadActionParameters(); // Reads CopyCardAction action parameters (cardNumber, cardPosition)

		virtual void Execute(); // Creates a new Card Object of the specific Card Number
								// and Reads the Parameters of This Card Number (if any)
								// then Sets this Card Object to GameObject Pointer of its Cell

		virtual ~CopyCardAction(); // A Virtual Destructor
	};
};

