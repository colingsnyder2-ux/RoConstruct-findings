// roc 2012-06 00a1c440  unit: CXTPMenuBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1c440
//
// 00a1c440  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a1c444  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a1c448  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00a1c44e  6a01                 push 1
// 00a1c450  50                   push eax
// 00a1c451  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a1c455  52                   push edx
// 00a1c456  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a1c45a  50                   push eax
// 00a1c45b  52                   push edx
// 00a1c45c  e83f5afbff           call 0x9d1ea0
// 00a1c461  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?AddSysButton@CXTPMenuBar@@AAEXPAVCXTPControl@@HPBDH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
