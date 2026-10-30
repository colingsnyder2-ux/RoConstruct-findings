// from server: 100% by auto
// roc 2012-06 00987af0  unit: CXTPPaintManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00987af0
//
// 00987af0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00987af4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00987af8  8b542408             mov edx, dword ptr [esp + 8]
// 00987afc  50                   push eax
// 00987afd  8b442410             mov eax, dword ptr [esp + 0x10]
// 00987b01  2bc8                 sub ecx, eax
// 00987b03  51                   push ecx
// 00987b04  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00987b08  6a01                 push 1
// 00987b0a  50                   push eax
// 00987b0b  52                   push edx
// 00987b0c  e87f1a1100           call 0xa99590
// 00987b11  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?VerticalLine@CXTPPaintManager@@QAEXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
