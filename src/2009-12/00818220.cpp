// roc 2009-12 00818220  unit: CRobloxReportView  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00818220
//
// 00818220  8b01                 mov eax, dword ptr [ecx]
// 00818222  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00818228  ffd2                 call edx
// 0081822a  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00818230  c3                   ret 
// copied from an identical function in another client (function ?GetPaintManager@CXTPReportView@@QBEPAVCXTPReportPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp