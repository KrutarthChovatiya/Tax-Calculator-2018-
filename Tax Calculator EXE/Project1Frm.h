///-----------------------------------------------------------------
///
/// @file      Project1Frm.h
/// @author    kRutArtH
/// Created:   10-03-2019 11:50:23 AM
/// @section   DESCRIPTION
///            Project1Frm class declaration
///
///------------------------------------------------------------------

#ifndef __PROJECT1FRM_H__
#define __PROJECT1FRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/checkbox.h>
#include <wx/button.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
////Header Include End

////Dialog Style Start
#undef Project1Frm_STYLE
#define Project1Frm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class Project1Frm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		Project1Frm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Project1"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = Project1Frm_STYLE);
		virtual ~Project1Frm();
		void WxEdit1Updated(wxCommandEvent& event);
		void WxButton1Click(wxCommandEvent& event);
		void Project1FrmActivate(wxActivateEvent& event);
		void WxCheckBox1Click(wxCommandEvent& event);
		void WxEdit12Updated(wxCommandEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxCheckBox *WxCheckBox1;
		wxStaticText *WxStaticText12;
		wxTextCtrl *WxEdit11;
		wxTextCtrl *WxEdit10;
		wxStaticText *WxStaticText11;
		wxStaticText *WxStaticText10;
		wxTextCtrl *WxEdit9;
		wxTextCtrl *WxEdit8;
		wxTextCtrl *WxEdit7;
		wxStaticText *WxStaticText9;
		wxStaticText *WxStaticText8;
		wxTextCtrl *WxEdit6;
		wxStaticText *WxStaticText7;
		wxStaticText *WxStaticText6;
		wxStaticText *WxStaticText5;
		wxStaticText *WxStaticText1;
		wxTextCtrl *WxEdit5;
		wxTextCtrl *WxEdit1;
		wxButton *WxButton1;
		wxStaticText *WxStaticText4;
		wxStaticText *WxStaticText3;
		wxStaticText *WxStaticText2;
		wxTextCtrl *WxEdit4;
		wxTextCtrl *WxEdit3;
		wxTextCtrl *WxEdit2;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXCHECKBOX1 = 1039,
			ID_WXSTATICTEXT12 = 1038,
			ID_WXEDIT11 = 1037,
			ID_WXEDIT10 = 1035,
			ID_WXSTATICTEXT11 = 1034,
			ID_WXSTATICTEXT10 = 1032,
			ID_WXEDIT9 = 1031,
			ID_WXEDIT8 = 1029,
			ID_WXEDIT7 = 1028,
			ID_WXSTATICTEXT9 = 1027,
			ID_WXSTATICTEXT8 = 1026,
			ID_WXEDIT6 = 1025,
			ID_WXSTATICTEXT7 = 1024,
			ID_WXSTATICTEXT6 = 1023,
			ID_WXSTATICTEXT5 = 1022,
			ID_WXSTATICTEXT1 = 1021,
			ID_WXEDIT5 = 1020,
			ID_WXEDIT1 = 1019,
			ID_WXBUTTON1 = 1018,
			ID_WXSTATICTEXT4 = 1017,
			ID_WXSTATICTEXT3 = 1016,
			ID_WXSTATICTEXT2 = 1015,
			ID_WXEDIT4 = 1013,
			ID_WXEDIT3 = 1012,
			ID_WXEDIT2 = 1011,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
