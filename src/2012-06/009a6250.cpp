// roc 2012-06 009a6250  unit: CRobloxReportView  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a6250
//
// 009a6250  8b542404             mov edx, dword ptr [esp + 4]
// 009a6254  83fa01               cmp edx, 1
// 009a6257  750a                 jne 0x9a6263
// 009a6259  8b8164030000         mov eax, dword ptr [ecx + 0x364]
// 009a625f  85c0                 test eax, eax
// 009a6261  7509                 jne 0x9a626c
// 009a6263  89542404             mov dword ptr [esp + 4], edx
// 009a6267  e99ec2fdff           jmp 0x98250a
// 009a626c  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?GetScrollBarCtrl@CXTPReportView@@MBEPAVCScrollBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
