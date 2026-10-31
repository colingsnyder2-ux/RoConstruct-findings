// roc 2011-06 004178f0  unit: PasteVerb  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004178f0
//
// 004178f0  56                   push esi
// 004178f1  8b742408             mov esi, dword ptr [esp + 8]
// 004178f5  57                   push edi
// 004178f6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004178fa  57                   push edi
// 004178fb  56                   push esi
// 004178fc  ff15e00aa400         call dword ptr [0xa40ae0]
// 00417902  85c0                 test eax, eax
// 00417904  7c27                 jl 0x41792d
// 00417906  85ff                 test edi, edi
// 00417908  7423                 je 0x41792d
// 0041790a  66833f0d             cmp word ptr [edi], 0xd
// 0041790e  751d                 jne 0x41792d
// 00417910  85f6                 test esi, esi
// 00417912  7419                 je 0x41792d
// 00417914  0fb74e02             movzx ecx, word ptr [esi + 2]
// 00417918  f6c140               test cl, 0x40
// 0041791b  7410                 je 0x41792d
// 0041791d  f7c100040000         test ecx, 0x400
// 00417923  7408                 je 0x41792d
// 00417925  b909000000           mov ecx, 9
// 0041792a  66890f               mov word ptr [edi], cx
// 0041792d  5f                   pop edi
// 0041792e  5e                   pop esi
// 0041792f  c3                   ret 
// copied from an identical function in another client (function ?AtlSafeArrayGetActualVartype@ATL@@YAJPAUtagSAFEARRAY@@PAG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: atl-9.0-dll-rtm roc_espeon_varianttypeaccessor21691409a28158c7.cpp