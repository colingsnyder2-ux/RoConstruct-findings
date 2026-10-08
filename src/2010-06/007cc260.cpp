// roc 2010-06 007cc260  unit: CRobloxReportView  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cc260
//
// 007cc260  8b542404             mov edx, dword ptr [esp + 4]
// 007cc264  83fa01               cmp edx, 1
// 007cc267  750a                 jne 0x7cc273
// 007cc269  8b8164030000         mov eax, dword ptr [ecx + 0x364]
// 007cc26f  85c0                 test eax, eax
// 007cc271  7509                 jne 0x7cc27c
// 007cc273  89542404             mov dword ptr [esp + 4], edx
// 007cc277  e926bbfdff           jmp 0x7a7da2
// 007cc27c  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?GetScrollBarCtrl@CXTPReportView@@MBEPAVCScrollBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
