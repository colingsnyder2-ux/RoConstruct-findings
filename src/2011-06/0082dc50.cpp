// roc 2011-06 0082dc50  unit: CRobloxReportView  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082dc50
//
// 0082dc50  8b8158030000         mov eax, dword ptr [ecx + 0x358]
// 0082dc56  85c0                 test eax, eax
// 0082dc58  7503                 jne 0x82dc5d
// 0082dc5a  8d4174               lea eax, [ecx + 0x74]
// 0082dc5d  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?GetReportCtrl@CXTPReportView@@UBEAAVCXTPReportControl@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
