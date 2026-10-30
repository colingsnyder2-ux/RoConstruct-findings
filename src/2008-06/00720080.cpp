// from server: 100% by auto
// roc 2008-06 00720080  unit: CXTPMenuBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00720080
//
// 00720080  8b442410             mov eax, dword ptr [esp + 0x10]
// 00720084  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00720088  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0072008e  6a01                 push 1
// 00720090  50                   push eax
// 00720091  8b442410             mov eax, dword ptr [esp + 0x10]
// 00720095  52                   push edx
// 00720096  8b542410             mov edx, dword ptr [esp + 0x10]
// 0072009a  50                   push eax
// 0072009b  52                   push edx
// 0072009c  e82f48fdff           call 0x6f48d0
// 007200a1  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?AddSysButton@CXTPMenuBar@@AAEXPAVCXTPControl@@HPBDH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
