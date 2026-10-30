// roc 2009-12 008181a0  unit: CRobloxReportView  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008181a0
//
// 008181a0  8b8158030000         mov eax, dword ptr [ecx + 0x358]
// 008181a6  85c0                 test eax, eax
// 008181a8  7503                 jne 0x8181ad
// 008181aa  8d4174               lea eax, [ecx + 0x74]
// 008181ad  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?GetReportCtrl@CXTPReportView@@UBEAAVCXTPReportControl@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
