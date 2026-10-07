// roc 2007-08 0063cfd0  unit: CXTPPaintManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063cfd0
//
// 0063cfd0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0063cfd4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063cfd8  8b542408             mov edx, dword ptr [esp + 8]
// 0063cfdc  50                   push eax
// 0063cfdd  8b442410             mov eax, dword ptr [esp + 0x10]
// 0063cfe1  2bc8                 sub ecx, eax
// 0063cfe3  51                   push ecx
// 0063cfe4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063cfe8  6a01                 push 1
// 0063cfea  50                   push eax
// 0063cfeb  52                   push edx
// 0063cfec  e8d9b30f00           call 0x7383ca
// 0063cff1  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ?VerticalLine@CXTPPaintManager@@QAEXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
