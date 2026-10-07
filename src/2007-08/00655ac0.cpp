// roc 2007-08 00655ac0  unit: CXTPReportControl  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00655ac0
//
// 00655ac0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00655ac4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00655ac8  50                   push eax
// 00655ac9  8b442410             mov eax, dword ptr [esp + 0x10]
// 00655acd  52                   push edx
// 00655ace  8b542410             mov edx, dword ptr [esp + 0x10]
// 00655ad2  50                   push eax
// 00655ad3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00655ad7  52                   push edx
// 00655ad8  50                   push eax
// 00655ad9  6a00                 push 0
// 00655adb  6864817c00           push 0x7c8164
// 00655ae0  e8f5a1fdff           call 0x62fcda
// 00655ae5  f7d8                 neg eax
// 00655ae7  1bc0                 sbb eax, eax
// 00655ae9  f7d8                 neg eax
// 00655aeb  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?Create@CXTPReportControl@@QAEHKABUtagRECT@@PAVCWnd@@IPAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
