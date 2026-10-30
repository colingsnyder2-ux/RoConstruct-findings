// from server: 100% by auto
// roc 2008-06 006c4cd0  unit: CRobloxReportView  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4cd0
//
// 006c4cd0  8b8158030000         mov eax, dword ptr [ecx + 0x358]
// 006c4cd6  85c0                 test eax, eax
// 006c4cd8  7503                 jne 0x6c4cdd
// 006c4cda  8d4174               lea eax, [ecx + 0x74]
// 006c4cdd  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?GetReportCtrl@CXTPReportView@@UBEAAVCXTPReportControl@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
