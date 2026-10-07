// roc 2008-06 006ae2a0  unit: CXTPPaintManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae2a0
//
// 006ae2a0  8b442414             mov eax, dword ptr [esp + 0x14]
// 006ae2a4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006ae2a8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006ae2ac  50                   push eax
// 006ae2ad  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ae2b1  6a01                 push 1
// 006ae2b3  2bc8                 sub ecx, eax
// 006ae2b5  51                   push ecx
// 006ae2b6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006ae2ba  52                   push edx
// 006ae2bb  50                   push eax
// 006ae2bc  e87fdd1000           call 0x7bc040
// 006ae2c1  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?HorizontalLine@CXTPPaintManager@@QAEXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
