// from server: 100% by auto
// roc 2007-08 0063d650  unit: CXTPPaintManager  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063d650
//
// 0063d650  8b442418             mov eax, dword ptr [esp + 0x18]
// 0063d654  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063d658  8b542410             mov edx, dword ptr [esp + 0x10]
// 0063d65c  50                   push eax
// 0063d65d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0063d661  51                   push ecx
// 0063d662  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063d666  52                   push edx
// 0063d667  8b542410             mov edx, dword ptr [esp + 0x10]
// 0063d66b  50                   push eax
// 0063d66c  51                   push ecx
// 0063d66d  52                   push edx
// 0063d66e  e8cd4b0400           call 0x682240
// 0063d673  8bc8                 mov ecx, eax
// 0063d675  e8c64c0400           call 0x682340
// 0063d67a  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ?GradientFill@CXTPPaintManager@@QAEXPAVCDC@@PAUtagRECT@@KKHPBU3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
