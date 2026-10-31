// roc 2009-12 00415c60  unit: PasteVerb  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00415c60
//
// 00415c60  56                   push esi
// 00415c61  8b742408             mov esi, dword ptr [esp + 8]
// 00415c65  57                   push edi
// 00415c66  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00415c6a  57                   push edi
// 00415c6b  56                   push esi
// 00415c6c  ff152cba9800         call dword ptr [0x98ba2c]
// 00415c72  85c0                 test eax, eax
// 00415c74  7c27                 jl 0x415c9d
// 00415c76  85ff                 test edi, edi
// 00415c78  7423                 je 0x415c9d
// 00415c7a  66833f0d             cmp word ptr [edi], 0xd
// 00415c7e  751d                 jne 0x415c9d
// 00415c80  85f6                 test esi, esi
// 00415c82  7419                 je 0x415c9d
// 00415c84  0fb74e02             movzx ecx, word ptr [esi + 2]
// 00415c88  f6c140               test cl, 0x40
// 00415c8b  7410                 je 0x415c9d
// 00415c8d  f7c100040000         test ecx, 0x400
// 00415c93  7408                 je 0x415c9d
// 00415c95  b909000000           mov ecx, 9
// 00415c9a  66890f               mov word ptr [edi], cx
// 00415c9d  5f                   pop edi
// 00415c9e  5e                   pop esi
// 00415c9f  c3                   ret 
// copied from an identical function in another client (function ?AtlSafeArrayGetActualVartype@ATL@@YAJPAUtagSAFEARRAY@@PAG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: atl-9.0-dll-rtm roc_espeon_varianttypeaccessor21691409a28158c7.cpp