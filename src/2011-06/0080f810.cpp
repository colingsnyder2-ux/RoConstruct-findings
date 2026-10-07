// roc 2011-06 0080f810  unit: CXTPPaintManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080f810
//
// 0080f810  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080f814  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080f818  8b542408             mov edx, dword ptr [esp + 8]
// 0080f81c  50                   push eax
// 0080f81d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0080f821  2bc8                 sub ecx, eax
// 0080f823  51                   push ecx
// 0080f824  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080f828  6a01                 push 1
// 0080f82a  50                   push eax
// 0080f82b  52                   push edx
// 0080f82c  e8a5cd1b00           call 0x9cc5d6
// 0080f831  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?VerticalLine@CXTPPaintManager@@QAEXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
