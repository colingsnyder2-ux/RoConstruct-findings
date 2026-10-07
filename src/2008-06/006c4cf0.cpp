// roc 2008-06 006c4cf0  unit: CRobloxReportView  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4cf0
//
// 006c4cf0  8b542404             mov edx, dword ptr [esp + 4]
// 006c4cf4  83fa01               cmp edx, 1
// 006c4cf7  750a                 jne 0x6c4d03
// 006c4cf9  8b8164030000         mov eax, dword ptr [ecx + 0x364]
// 006c4cff  85c0                 test eax, eax
// 006c4d01  7509                 jne 0x6c4d0c
// 006c4d03  89542404             mov dword ptr [esp + 4], edx
// 006c4d07  e964bdfdff           jmp 0x6a0a70
// 006c4d0c  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?GetScrollBarCtrl@CXTPReportView@@MBEPAVCScrollBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
