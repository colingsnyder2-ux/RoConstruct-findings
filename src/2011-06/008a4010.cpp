// roc 2011-06 008a4010  unit: CXTPMenuBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a4010
//
// 008a4010  8b442410             mov eax, dword ptr [esp + 0x10]
// 008a4014  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008a4018  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 008a401e  6a01                 push 1
// 008a4020  50                   push eax
// 008a4021  8b442410             mov eax, dword ptr [esp + 0x10]
// 008a4025  52                   push edx
// 008a4026  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a402a  50                   push eax
// 008a402b  52                   push edx
// 008a402c  e86f5afbff           call 0x859aa0
// 008a4031  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?AddSysButton@CXTPMenuBar@@AAEXPAVCXTPControl@@HPBDH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
