// roc 2009-12 00892c90  unit: CXTPMenuBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00892c90
//
// 00892c90  8b442410             mov eax, dword ptr [esp + 0x10]
// 00892c94  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00892c98  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00892c9e  6a01                 push 1
// 00892ca0  50                   push eax
// 00892ca1  8b442410             mov eax, dword ptr [esp + 0x10]
// 00892ca5  52                   push edx
// 00892ca6  8b542410             mov edx, dword ptr [esp + 0x10]
// 00892caa  50                   push eax
// 00892cab  52                   push edx
// 00892cac  e83f53fbff           call 0x847ff0
// 00892cb1  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?AddSysButton@CXTPMenuBar@@AAEXPAVCXTPControl@@HPBDH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
