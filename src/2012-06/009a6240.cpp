// roc 2012-06 009a6240  unit: CRobloxReportView  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a6240
//
// 009a6240  8b8158030000         mov eax, dword ptr [ecx + 0x358]
// 009a6246  85c0                 test eax, eax
// 009a6248  7503                 jne 0x9a624d
// 009a624a  8d4174               lea eax, [ecx + 0x74]
// 009a624d  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?GetReportCtrl@CXTPReportView@@UBEAAVCXTPReportControl@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
