// from server: 100% by auto
// roc 2007-08 0063cfa0  unit: CXTPPaintManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063cfa0
//
// 0063cfa0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0063cfa4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063cfa8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0063cfac  50                   push eax
// 0063cfad  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063cfb1  6a01                 push 1
// 0063cfb3  2bc8                 sub ecx, eax
// 0063cfb5  51                   push ecx
// 0063cfb6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063cfba  52                   push edx
// 0063cfbb  50                   push eax
// 0063cfbc  e809b40f00           call 0x7383ca
// 0063cfc1  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ?HorizontalLine@CXTPPaintManager@@QAEXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
