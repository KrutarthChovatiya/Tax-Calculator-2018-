//---------------------------------------------------------------------------
//
// Name:        Project1App.h
// Author:      kRutArtH
// Created:     10-03-2019 11:50:23 AM
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __PROJECT1FRMApp_h__
#define __PROJECT1FRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class Project1FrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
