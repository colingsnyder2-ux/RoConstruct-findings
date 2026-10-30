// roc 2009-06 007ebec0  unit: CXTPPropertyGridInplaceEdit  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ebec0
//
// 007ebec0  56                   push esi
// 007ebec1  8b742408             mov esi, dword ptr [esp + 8]
// 007ebec5  85f6                 test esi, esi
// 007ebec7  7c19                 jl 0x7ebee2
// 007ebec9  81c184000000         add ecx, 0x84
// 007ebecf  ff1554fb8900         call dword ptr [0x89fb54]
// 007ebed5  3bf0                 cmp esi, eax
// 007ebed7  7d09                 jge 0x7ebee2
// 007ebed9  b801000000           mov eax, 1
// 007ebede  5e                   pop esi
// 007ebedf  c20400               ret 4
// 007ebee2  33c0                 xor eax, eax
// 007ebee4  5e                   pop esi
// 007ebee5  c20400               ret 4
// copied from an identical function in another client (function ?PosInRange@?$CXTMaskEditT@VCEdit@@@@QBEHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp