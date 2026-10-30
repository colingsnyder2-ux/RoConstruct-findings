// roc 2010-06 0087abf0  unit: CXTPPropertyGridInplaceEdit  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087abf0
//
// 0087abf0  56                   push esi
// 0087abf1  8b742408             mov esi, dword ptr [esp + 8]
// 0087abf5  85f6                 test esi, esi
// 0087abf7  7c19                 jl 0x87ac12
// 0087abf9  81c184000000         add ecx, 0x84
// 0087abff  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087ac05  3bf0                 cmp esi, eax
// 0087ac07  7d09                 jge 0x87ac12
// 0087ac09  b801000000           mov eax, 1
// 0087ac0e  5e                   pop esi
// 0087ac0f  c20400               ret 4
// 0087ac12  33c0                 xor eax, eax
// 0087ac14  5e                   pop esi
// 0087ac15  c20400               ret 4
// copied from an identical function in another client (function ?PosInRange@?$CXTMaskEditT@VCEdit@@@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp