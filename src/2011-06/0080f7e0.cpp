// roc 2011-06 0080f7e0  unit: CXTPPaintManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080f7e0
//
// 0080f7e0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080f7e4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080f7e8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0080f7ec  50                   push eax
// 0080f7ed  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0080f7f1  6a01                 push 1
// 0080f7f3  2bc8                 sub ecx, eax
// 0080f7f5  51                   push ecx
// 0080f7f6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080f7fa  52                   push edx
// 0080f7fb  50                   push eax
// 0080f7fc  e8d5cd1b00           call 0x9cc5d6
// 0080f801  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?HorizontalLine@CXTPPaintManager@@QAEXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
