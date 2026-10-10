// roc 2008-06 006c4d60  unit: CRobloxReportView  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4d60
//
// 006c4d60  8b01                 mov eax, dword ptr [ecx]
// 006c4d62  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006c4d68  ffd2                 call edx
// 006c4d6a  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 006c4d70  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportView.cpp (function ?GetPaintManager@CXTPReportView@@QBEPAVCXTPReportPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
