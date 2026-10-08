// from server: 100% by auto
// roc 2008-06 006c8ff0  unit: CXTPReportControl  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c8ff0
//
// 006c8ff0  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c8ff4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c8ff8  50                   push eax
// 006c8ff9  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c8ffd  52                   push edx
// 006c8ffe  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c9002  50                   push eax
// 006c9003  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c9007  52                   push edx
// 006c9008  50                   push eax
// 006c9009  6a00                 push 0
// 006c900b  6874368500           push 0x853674
// 006c9010  e8dd76fdff           call 0x6a06f2
// 006c9015  f7d8                 neg eax
// 006c9017  1bc0                 sbb eax, eax
// 006c9019  f7d8                 neg eax
// 006c901b  c21400               ret 0x14
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?Create@CXTPReportControl@@QAEHKABUtagRECT@@PAVCWnd@@IPAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
