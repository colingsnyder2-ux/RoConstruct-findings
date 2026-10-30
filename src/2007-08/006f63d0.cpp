// roc 2007-08 006f63d0  unit: CXTPPropertyGridInplaceEdit  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f63d0
//
// 006f63d0  56                   push esi
// 006f63d1  8b742408             mov esi, dword ptr [esp + 8]
// 006f63d5  85f6                 test esi, esi
// 006f63d7  7c19                 jl 0x6f63f2
// 006f63d9  81c184000000         add ecx, 0x84
// 006f63df  ff15c8dc7700         call dword ptr [0x77dcc8]
// 006f63e5  3bf0                 cmp esi, eax
// 006f63e7  7d09                 jge 0x6f63f2
// 006f63e9  b801000000           mov eax, 1
// 006f63ee  5e                   pop esi
// 006f63ef  c20400               ret 4
// 006f63f2  33c0                 xor eax, eax
// 006f63f4  5e                   pop esi
// 006f63f5  c20400               ret 4
// copied from an identical function in another client (function ?PosInRange@?$CXTMaskEditT@VCEdit@@@@QBEHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp