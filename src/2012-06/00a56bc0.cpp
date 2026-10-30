// roc 2012-06 00a56bc0  unit: CXTPPropertyGridInplaceEdit  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a56bc0
//
// 00a56bc0  56                   push esi
// 00a56bc1  8b742408             mov esi, dword ptr [esp + 8]
// 00a56bc5  85f6                 test esi, esi
// 00a56bc7  7c19                 jl 0xa56be2
// 00a56bc9  81c184000000         add ecx, 0x84
// 00a56bcf  ff155846b200         call dword ptr [0xb24658]
// 00a56bd5  3bf0                 cmp esi, eax
// 00a56bd7  7d09                 jge 0xa56be2
// 00a56bd9  b801000000           mov eax, 1
// 00a56bde  5e                   pop esi
// 00a56bdf  c20400               ret 4
// 00a56be2  33c0                 xor eax, eax
// 00a56be4  5e                   pop esi
// 00a56be5  c20400               ret 4
// copied from an identical function in another client (function ?PosInRange@?$CXTMaskEditT@VCEdit@@@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp