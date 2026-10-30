// roc 2009-12 008c6a50  unit: CXTPPropertyGridInplaceEdit  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6a50
//
// 008c6a50  56                   push esi
// 008c6a51  8b742408             mov esi, dword ptr [esp + 8]
// 008c6a55  85f6                 test esi, esi
// 008c6a57  7c19                 jl 0x8c6a72
// 008c6a59  81c184000000         add ecx, 0x84
// 008c6a5f  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c6a65  3bf0                 cmp esi, eax
// 008c6a67  7d09                 jge 0x8c6a72
// 008c6a69  b801000000           mov eax, 1
// 008c6a6e  5e                   pop esi
// 008c6a6f  c20400               ret 4
// 008c6a72  33c0                 xor eax, eax
// 008c6a74  5e                   pop esi
// 008c6a75  c20400               ret 4
// copied from an identical function in another client (function ?PosInRange@?$CXTMaskEditT@VCEdit@@@@QBEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp