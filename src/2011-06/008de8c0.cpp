// roc 2011-06 008de8c0  unit: CXTPPropertyGridInplaceEdit  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de8c0
//
// 008de8c0  56                   push esi
// 008de8c1  8b742408             mov esi, dword ptr [esp + 8]
// 008de8c5  85f6                 test esi, esi
// 008de8c7  7c19                 jl 0x8de8e2
// 008de8c9  81c184000000         add ecx, 0x84
// 008de8cf  ff15a826a400         call dword ptr [0xa426a8]
// 008de8d5  3bf0                 cmp esi, eax
// 008de8d7  7d09                 jge 0x8de8e2
// 008de8d9  b801000000           mov eax, 1
// 008de8de  5e                   pop esi
// 008de8df  c20400               ret 4
// 008de8e2  33c0                 xor eax, eax
// 008de8e4  5e                   pop esi
// 008de8e5  c20400               ret 4
// copied from an identical function in another client (function ?PosInRange@?$CXTMaskEditT@VCEdit@@@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp