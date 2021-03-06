﻿//==============================================================================
//  WARNING!!  This file is overwritten by the Block Styler while generating
//  the automation code. Any modifications to this file will be lost after
//  generating the code again.
//
//       Filename:  D:\YX_Tools\Application\simple_cylinder.hpp
//
//        This file was generated by the NX Block Styler
//        Created by: Yang
//              Version: NX 11
//              Date: 09-01-2016  (Format: mm-dd-yyyy)
//              Time: 20:44
//
//==============================================================================

#ifndef SIMPLE_CYLINDER_H_INCLUDED
#define SIMPLE_CYLINDER_H_INCLUDED

//------------------------------------------------------------------------------
//These includes are needed for the following template code
//------------------------------------------------------------------------------
#include <uf_defs.h>
#include <uf_ui_types.h>
#include <iostream>
#include <NXOpen/Session.hxx>
#include <NXOpen/UI.hxx>
#include <NXOpen/NXMessageBox.hxx>
#include <NXOpen/Callback.hxx>
#include <NXOpen/NXException.hxx>
#include <NXOpen/BlockStyler_UIBlock.hxx>
#include <NXOpen/BlockStyler_BlockDialog.hxx>
#include <NXOpen/BlockStyler_PropertyList.hxx>
#include <NXOpen/BlockStyler_Group.hxx>
#include <NXOpen/BlockStyler_SpecifyPoint.hxx>
#include <NXOpen/BlockStyler_SpecifyVector.hxx>
#include <NXOpen/BlockStyler_LinearDimension.hxx>
#include <NXOpen/BlockStyler_Toggle.hxx>
#include <NXOpen/BlockStyler_Enumeration.hxx>
#include <NXOpen/BlockStyler_BodyCollector.hxx>
#include <NXOpen/BlockStyler_Button.hxx>
//用户定义头文件
#include <uf.h>
#include <uf_ui.h>
#include <uf_modl_primitives.h>
#include <uf_modl.h>
#include <uf_modl_utilities.h>
#include <NXOpen/TaggedObject.hxx>
//------------------------------------------------------------------------------
// Namespaces needed for following template
//------------------------------------------------------------------------------
using namespace std;
using namespace NXOpen;
using namespace NXOpen::BlockStyler;

class DllExport simple_cylinder
{
    // class members
public:
    static Session *theSession;
    static UI *theUI;
    simple_cylinder();
    ~simple_cylinder();
    int Show();
    
    //----------------------- BlockStyler Callback Prototypes ---------------------
    // The following member function prototypes define the callbacks 
    // specified in your BlockStyler dialog.  The empty implementation
    // of these prototypes is provided in the simple_cylinder.cpp file. 
    // You are REQUIRED to write the implementation for these functions.
    //------------------------------------------------------------------------------
    void initialize_cb();
    void dialogShown_cb();
    int apply_cb();
    int ok_cb();
    int update_cb(NXOpen::BlockStyler::UIBlock* block);
    PropertyList* GetBlockProperties(const char *blockID);
    
private:
    const char* theDlxFileName;
    NXOpen::BlockStyler::BlockDialog* theDialog;
    NXOpen::BlockStyler::Group* group0;// Block type: Group
    NXOpen::BlockStyler::SpecifyPoint* selectpoint;// Block type: Specify Point
    NXOpen::BlockStyler::SpecifyVector* selectvector;// Block type: Specify Vector
    NXOpen::BlockStyler::Group* group1;// Block type: Group
    NXOpen::BlockStyler::LinearDimension* CYdiameter;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* CYlength;// Block type: Linear Dim
    NXOpen::BlockStyler::Toggle* startball;// Block type: Toggle
    NXOpen::BlockStyler::Toggle* endball;// Block type: Toggle
    NXOpen::BlockStyler::Group* group2;// Block type: Group
    NXOpen::BlockStyler::Enumeration* booltype;// Block type: Enumeration
    NXOpen::BlockStyler::BodyCollector* boolbodySelect;// Block type: Body Collector
    NXOpen::BlockStyler::Group* group3;// Block type: Group
    NXOpen::BlockStyler::Button* previewresult;// Block type: Button
    
	//用户定义函数
	void createcylinder();
	void selectbooltype();
	void previestate(bool previekey);
	void Showpreviebutton();

	//用户自定义的全局变量

	bool previekey;
/*	std::vector <TaggedObject>creatbodyTAG;*/
	tag_t cylinderTAG,startballTAG,endballTAG,TAG4,newbodyTAG;

};
#endif //SIMPLE_CYLINDER_H_INCLUDED
