// roc 2012-06 0041ae30  unit: CopyVerb  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041ae30
//
// 0041ae30  56                   push esi
// 0041ae31  8b742408             mov esi, dword ptr [esp + 8]
// 0041ae35  57                   push edi
// 0041ae36  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0041ae3a  57                   push edi
// 0041ae3b  56                   push esi
// 0041ae3c  ff15242bb200         call dword ptr [0xb22b24]
// 0041ae42  85c0                 test eax, eax
// 0041ae44  7c27                 jl 0x41ae6d
// 0041ae46  85ff                 test edi, edi
// 0041ae48  7423                 je 0x41ae6d
// 0041ae4a  66833f0d             cmp word ptr [edi], 0xd
// 0041ae4e  751d                 jne 0x41ae6d
// 0041ae50  85f6                 test esi, esi
// 0041ae52  7419                 je 0x41ae6d
// 0041ae54  0fb74e02             movzx ecx, word ptr [esi + 2]
// 0041ae58  f6c140               test cl, 0x40
// 0041ae5b  7410                 je 0x41ae6d
// 0041ae5d  f7c100040000         test ecx, 0x400
// 0041ae63  7408                 je 0x41ae6d
// 0041ae65  b909000000           mov ecx, 9
// 0041ae6a  66890f               mov word ptr [edi], cx
// 0041ae6d  5f                   pop edi
// 0041ae6e  5e                   pop esi
// 0041ae6f  c3                   ret 
// copied from an identical function in another client (function ?AtlSafeArrayGetActualVartype@ATL@@YAJPAUtagSAFEARRAY@@PAG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: atl-9.0-dll-rtm roc_espeon_varianttypeaccessor21691409a28158c7.cpp