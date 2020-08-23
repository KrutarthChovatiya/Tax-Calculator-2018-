///-----------------------------------------------------------------
///
/// @file      Project1Frm.cpp
/// @author    kRutArtH
/// Created:   10-03-2019 11:50:23 AM
/// @section   DESCRIPTION
///            Project1Frm class implementation
///
///------------------------------------------------------------------

#include "Project1Frm.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
double taxable_income,tax=0,surcharge,cess,min1=0,min2=0,per;
int flag=0;
//double income;
//double *income;
//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// Project1Frm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(Project1Frm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(Project1Frm::OnClose)
	EVT_ACTIVATE(Project1Frm::Project1FrmActivate)
	EVT_CHECKBOX(ID_WXCHECKBOX1,Project1Frm::WxCheckBox1Click)
	
	EVT_TEXT(ID_WXEDIT11,Project1Frm::WxEdit1Updated)
	
	EVT_TEXT(ID_WXEDIT10,Project1Frm::WxEdit1Updated)
	
	EVT_TEXT(ID_WXEDIT9,Project1Frm::WxEdit1Updated)
	
	EVT_TEXT(ID_WXEDIT8,Project1Frm::WxEdit1Updated)
	
	EVT_TEXT(ID_WXEDIT7,Project1Frm::WxEdit1Updated)
	
	EVT_TEXT(ID_WXEDIT6,Project1Frm::WxEdit1Updated)
	
	EVT_TEXT(ID_WXEDIT5,Project1Frm::WxEdit1Updated)
	
	EVT_TEXT(ID_WXEDIT1,Project1Frm::WxEdit1Updated)
	EVT_BUTTON(ID_WXBUTTON1,Project1Frm::WxButton1Click)
	
	EVT_TEXT(ID_WXEDIT4,Project1Frm::WxEdit1Updated)
	
	EVT_TEXT(ID_WXEDIT3,Project1Frm::WxEdit1Updated)
	
	EVT_TEXT(ID_WXEDIT2,Project1Frm::WxEdit1Updated)
END_EVENT_TABLE()
////Event Table End

Project1Frm::Project1Frm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

Project1Frm::~Project1Frm()
{
}
//my class
class taxCalculation
{   
    
	public:	void taxcal(int age,int ub1,int limit2,int limit3,double taxable_income,float min1,float min2)
			{
				if(taxable_income<ub1)                                    //slab 1
					tax=0;
				else if(taxable_income>=ub1 && taxable_income<=limit2)       //slab 2
				{	
					if(age<=80)
						per=0.05;
					else
						per=0.2;					
					tax=(taxable_income-ub1)*per;
					if(taxable_income<350000)
						tax=tax-2500;
				}
				else if(taxable_income>limit2 && taxable_income<=limit3)       //slab 3
				{
					if(age<=80)
					{
						per=0.2;
						tax=min1+(taxable_income-limit2)*per;
					}
				}
				else if(taxable_income>limit3)                             //slab 4
				{
					per=0.3;
					if(taxable_income>5000000 && taxable_income<10000000)
						surcharge=taxable_income*0.1;
					else if(taxable_income>=10000000)
						surcharge=taxable_income*0.15;
					tax=min1+min2+(taxable_income-limit3)*per+surcharge;
				}
				cess=tax*0.04;		//Education Cess
				tax=tax+cess;    
			}
			
};
void Project1Frm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxCheckBox1 = new wxCheckBox(this, ID_WXCHECKBOX1, _("Salaried Person"), wxPoint(137, 299), wxSize(111, 17), 0, wxDefaultValidator, _("WxCheckBox1"));

	WxStaticText12 = new wxStaticText(this, ID_WXSTATICTEXT12, _("Education Cess (4%)"), wxPoint(50, 395), wxDefaultSize, 0, _("WxStaticText12"));

	WxEdit11 = new wxTextCtrl(this, ID_WXEDIT11, _(""), wxPoint(195, 395), wxSize(121, 19), 0, wxDefaultValidator, _("WxEdit11"));

	WxEdit10 = new wxTextCtrl(this, ID_WXEDIT10, _(""), wxPoint(195, 364), wxSize(121, 19), 0, wxDefaultValidator, _("WxEdit10"));

	WxStaticText11 = new wxStaticText(this, ID_WXSTATICTEXT11, _("Taxable Income"), wxPoint(50, 365), wxDefaultSize, 0, _("WxStaticText11"));

	WxStaticText10 = new wxStaticText(this, ID_WXSTATICTEXT10, _("Name"), wxPoint(30, 15), wxDefaultSize, 0, _("WxStaticText10"));

	WxEdit9 = new wxTextCtrl(this, ID_WXEDIT9, _(""), wxPoint(205, 15), wxSize(121, 19), 0, wxDefaultValidator, _("WxEdit9"));

	WxEdit8 = new wxTextCtrl(this, ID_WXEDIT8, _(""), wxPoint(205, 261), wxSize(121, 19), 0, wxDefaultValidator, _("WxEdit8"));

	WxEdit7 = new wxTextCtrl(this, ID_WXEDIT7, _(""), wxPoint(204, 231), wxSize(121, 19), 0, wxDefaultValidator, _("WxEdit7"));

	WxStaticText9 = new wxStaticText(this, ID_WXSTATICTEXT9, _("Educational Loan Interest "), wxPoint(30, 260), wxDefaultSize, 0, _("WxStaticText9"));

	WxStaticText8 = new wxStaticText(this, ID_WXSTATICTEXT8, _("Donation on Charity"), wxPoint(30, 230), wxDefaultSize, 0, _("WxStaticText8"));

	WxEdit6 = new wxTextCtrl(this, ID_WXEDIT6, _(""), wxPoint(205, 201), wxSize(121, 19), 0, wxDefaultValidator, _("WxEdit6"));

	WxStaticText7 = new wxStaticText(this, ID_WXSTATICTEXT7, _("Medical Insurance"), wxPoint(30, 200), wxDefaultSize, 0, _("WxStaticText7"));

	WxStaticText6 = new wxStaticText(this, ID_WXSTATICTEXT6, _("PF , PFF , Insurance Premiums"), wxPoint(30, 170), wxDefaultSize, 0, _("WxStaticText6"));

	WxStaticText5 = new wxStaticText(this, ID_WXSTATICTEXT5, _("Deductions"), wxPoint(160, 140), wxDefaultSize, 0, _("WxStaticText5"));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("Income from Other Source "), wxPoint(30, 105), wxDefaultSize, 0, _("WxStaticText1"));

	WxEdit5 = new wxTextCtrl(this, ID_WXEDIT5, _(""), wxPoint(205, 171), wxSize(121, 19), 0, wxDefaultValidator, _("WxEdit5"));

	WxEdit1 = new wxTextCtrl(this, ID_WXEDIT1, _(""), wxPoint(205, 105), wxSize(121, 19), 0, wxDefaultValidator, _("WxEdit1"));

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("CALCULATE"), wxPoint(130, 325), wxSize(110, 29), 0, wxDefaultValidator, _("WxButton1"));

	WxStaticText4 = new wxStaticText(this, ID_WXSTATICTEXT4, _("Total Tax :"), wxPoint(50, 425), wxDefaultSize, 0, _("WxStaticText4"));

	WxStaticText3 = new wxStaticText(this, ID_WXSTATICTEXT3, _("Annual Income"), wxPoint(30, 75), wxDefaultSize, 0, _("WxStaticText3"));

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _("Age"), wxPoint(30, 45), wxDefaultSize, 0, _("WxStaticText2"));

	WxEdit4 = new wxTextCtrl(this, ID_WXEDIT4, _(""), wxPoint(205, 75), wxSize(121, 19), 0, wxDefaultValidator, _("WxEdit4"));

	WxEdit3 = new wxTextCtrl(this, ID_WXEDIT3, _(""), wxPoint(205, 45), wxSize(121, 19), 0, wxDefaultValidator, _("WxEdit3"));

	WxEdit2 = new wxTextCtrl(this, ID_WXEDIT2, _(""), wxPoint(195, 425), wxSize(121, 19), 0, wxDefaultValidator, _("WxEdit2"));

	SetTitle(_("  Tax Calculator"));
	SetIcon(wxNullIcon);
	SetSize(8,8,392,508);
	Center();
	
	////GUI Items Creation End
}

void Project1Frm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxEdit1Updated
 */
void Project1Frm::WxEdit1Updated(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxButton1Click
 */
/*class income
{
    public : income
};*/
void Project1Frm::WxCheckBox1Click(wxCommandEvent& event)
{
	if(event.IsChecked())
    {
        ::flag=1;
    }
}
void Project1Frm::WxButton1Click(wxCommandEvent& event)
{
    char name[20];double age,limit1,limit2,limit3;
    double income,taxable_income,otherincome,PFPPFinsurance,medicalinsurance,donation,educationloan;
    if(WxEdit3->GetValue().ToDouble(&age) && WxEdit4->GetValue().ToDouble(&income) && WxEdit1->GetValue().ToDouble(&otherincome) && 
        WxEdit5->GetValue().ToDouble(&PFPPFinsurance) && WxEdit6->GetValue().ToDouble(&medicalinsurance) && WxEdit7->GetValue().ToDouble(&donation) &&
         WxEdit8->GetValue().ToDouble(&educationloan))
    {
        if(::flag==1)
        {
            income=income-40000;
            ::flag=0;
        }
	   taxable_income=income+otherincome-PFPPFinsurance-medicalinsurance-donation-educationloan;
       taxCalculation t;
	   if(age<60)
	   {
    		limit1=250000;limit2=500000;limit3=1000000;
    		min1=12500;min2=100000;
    		t.taxcal(age,limit1,limit2,limit3,taxable_income,min1,min2);
    	}
    	else if(age>=60 && age<=80)
    	{
    		limit1=300000;limit2=500000;limit3=1000000;
    		min1=10000;min2=100000;
    		t.taxcal(age,limit1,limit2,limit3,taxable_income,min1,min2);
    	}
    	else if(age>80)
    	{
    		limit1=500000;limit2=1000000;limit3=limit2;
    		min1=100000,min2=0;
	       	t.taxcal(age,limit1,limit2,limit3,taxable_income,min1,min2);
	    }  
        WxEdit10->SetValue(wxString::Format(wxT("%lf"),taxable_income));
        WxEdit11->SetValue(wxString::Format(wxT("%lf"),cess));
        WxEdit2->SetValue(wxString::Format(wxT("%lf"),tax));
    }
}

/*
 * Project1FrmActivate
 */
void Project1Frm::Project1FrmActivate(wxActivateEvent& event)
{
	// insert your code here
}

/*
 * WxCheckBox1Click
 */


/*
 * WxEdit12Updated
 */

