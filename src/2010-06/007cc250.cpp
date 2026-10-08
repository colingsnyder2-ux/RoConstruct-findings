// roc 2010-06 007cc250  unit: CRobloxReportView  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cc250
//
// 007cc250  8b8158030000         mov eax, dword ptr [ecx + 0x358]
// 007cc256  85c0                 test eax, eax
// 007cc258  7503                 jne 0x7cc25d
// 007cc25a  8d4174               lea eax, [ecx + 0x74]
// 007cc25d  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?GetReportCtrl@CXTPReportView@@UBEAAVCXTPReportControl@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
