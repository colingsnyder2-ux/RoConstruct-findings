// roc 2012-06 009a8c30  unit: CXTPReportControl  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8c30
//
// 009a8c30  8b442414             mov eax, dword ptr [esp + 0x14]
// 009a8c34  8b542410             mov edx, dword ptr [esp + 0x10]
// 009a8c38  50                   push eax
// 009a8c39  8b442410             mov eax, dword ptr [esp + 0x10]
// 009a8c3d  52                   push edx
// 009a8c3e  8b542410             mov edx, dword ptr [esp + 0x10]
// 009a8c42  50                   push eax
// 009a8c43  8b442410             mov eax, dword ptr [esp + 0x10]
// 009a8c47  52                   push edx
// 009a8c48  50                   push eax
// 009a8c49  6a00                 push 0
// 009a8c4b  68d0fec000           push 0xc0fed0
// 009a8c50  e83195fdff           call 0x982186
// 009a8c55  f7d8                 neg eax
// 009a8c57  1bc0                 sbb eax, eax
// 009a8c59  f7d8                 neg eax
// 009a8c5b  c21400               ret 0x14
// library xtp-13.2.1/Source\ReportControl\XTPReportControl.cpp (function ?Create@CXTPReportControl@@QAEHKABUtagRECT@@PAVCWnd@@IPAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/ReportControl/XTPReportControl.cpp
