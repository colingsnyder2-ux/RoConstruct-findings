// roc 2009-06 0073d280  unit: CRobloxReportView  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073d280
//
// 0073d280  8b8158030000         mov eax, dword ptr [ecx + 0x358]
// 0073d286  85c0                 test eax, eax
// 0073d288  7503                 jne 0x73d28d
// 0073d28a  8d4174               lea eax, [ecx + 0x74]
// 0073d28d  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?GetReportCtrl@CXTPReportView@@UBEAAVCXTPReportControl@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
