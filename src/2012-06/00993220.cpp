// from server: 100% by auto
// roc 2012-06 00993220  unit: CXTPCommandBar  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00993220
//
// 00993220  8b442414             mov eax, dword ptr [esp + 0x14]
// 00993224  8b542410             mov edx, dword ptr [esp + 0x10]
// 00993228  8b4904               mov ecx, dword ptr [ecx + 4]
// 0099322b  50                   push eax
// 0099322c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00993230  52                   push edx
// 00993231  8b542410             mov edx, dword ptr [esp + 0x10]
// 00993235  50                   push eax
// 00993236  8b442410             mov eax, dword ptr [esp + 0x10]
// 0099323a  52                   push edx
// 0099323b  50                   push eax
// 0099323c  51                   push ecx
// 0099323d  ff153821b200         call dword ptr [0xb22138]
// 00993243  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPDefaultTheme.cpp (function ?PatBlt@CDC@@QAEHHHHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDefaultTheme.cpp
