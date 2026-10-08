// roc 2008-06 004d3ca0  unit: seg_004d0000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d3ca0
//
// 004d3ca0  56                   push esi
// 004d3ca1  57                   push edi
// 004d3ca2  8bf1                 mov esi, ecx
// 004d3ca4  33ff                 xor edi, edi
// 004d3ca6  397e04               cmp dword ptr [esi + 4], edi
// 004d3ca9  7626                 jbe 0x4d3cd1
// 004d3cab  53                   push ebx
// 004d3cac  8d642400             lea esp, [esp]
// 004d3cb0  8b06                 mov eax, dword ptr [esi]
// 004d3cb2  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 004d3cb5  85db                 test ebx, ebx
// 004d3cb7  7411                 je 0x4d3cca
// 004d3cb9  8b0b                 mov ecx, dword ptr [ebx]
// 004d3cbb  51                   push ecx
// 004d3cbc  e8b9c91c00           call 0x6a067a
// 004d3cc1  53                   push ebx
// 004d3cc2  e8b3c91c00           call 0x6a067a
// 004d3cc7  83c408               add esp, 8
// 004d3cca  47                   inc edi
// 004d3ccb  3b7e04               cmp edi, dword ptr [esi + 4]
// 004d3cce  72e0                 jb 0x4d3cb0
// 004d3cd0  5b                   pop ebx
// 004d3cd1  8b4608               mov eax, dword ptr [esi + 8]
// 004d3cd4  85c0                 test eax, eax
// 004d3cd6  7426                 je 0x4d3cfe
// 004d3cd8  3d00020000           cmp eax, 0x200
// 004d3cdd  7618                 jbe 0x4d3cf7
// 004d3cdf  8b16                 mov edx, dword ptr [esi]
// 004d3ce1  52                   push edx
// 004d3ce2  e893c91c00           call 0x6a067a
// 004d3ce7  83c404               add esp, 4
// 004d3cea  c7460800000000       mov dword ptr [esi + 8], 0
// 004d3cf1  c70600000000         mov dword ptr [esi], 0
// 004d3cf7  c7460400000000       mov dword ptr [esi + 4], 0
// 004d3cfe  5f                   pop edi
// 004d3cff  5e                   pop esi
// 004d3d00  c3                   ret 
// library rbxgs-raknet/RPCMap.cpp (function ?Clear@RPCMap@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
