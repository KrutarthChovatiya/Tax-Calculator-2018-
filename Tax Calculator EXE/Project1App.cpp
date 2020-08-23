//---------------------------------------------------------------------------
//
// Name:        Project1App.cpp
// Author:      kRutArtH
// Created:     10-03-2019 11:50:23 AM
// Description: 
//
//---------------------------------------------------------------------------

#include "Project1App.h"
#include "Project1Frm.h"

IMPLEMENT_APP(Project1FrmApp)

bool Project1FrmApp::OnInit()
{
    Project1Frm* frame = new Project1Frm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int Project1FrmApp::OnExit()
{
	return 0;
}
