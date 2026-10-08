// roc 2011-06 0082dc70  unit: CRobloxReportView  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082dc70
//
// 0082dc70  8b542404             mov edx, dword ptr [esp + 4]
// 0082dc74  83fa01               cmp edx, 1
// 0082dc77  750a                 jne 0x82dc83
// 0082dc79  8b8164030000         mov eax, dword ptr [ecx + 0x364]
// 0082dc7f  85c0                 test eax, eax
// 0082dc81  7509                 jne 0x82dc8c
// 0082dc83  89542404             mov dword ptr [esp + 4], edx
// 0082dc87  e9d4c7fdff           jmp 0x80a460
// 0082dc8c  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?GetScrollBarCtrl@CXTPReportView@@MBEPAVCScrollBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
