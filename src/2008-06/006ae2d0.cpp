// roc 2008-06 006ae2d0  unit: CXTPPaintManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae2d0
//
// 006ae2d0  8b442414             mov eax, dword ptr [esp + 0x14]
// 006ae2d4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006ae2d8  8b542408             mov edx, dword ptr [esp + 8]
// 006ae2dc  50                   push eax
// 006ae2dd  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ae2e1  2bc8                 sub ecx, eax
// 006ae2e3  51                   push ecx
// 006ae2e4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ae2e8  6a01                 push 1
// 006ae2ea  50                   push eax
// 006ae2eb  52                   push edx
// 006ae2ec  e84fdd1000           call 0x7bc040
// 006ae2f1  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?VerticalLine@CXTPPaintManager@@QAEXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
