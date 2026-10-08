// roc 2007-03 004b9140  unit: seg_004b0000  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9140
//
// 004b9140  56                   push esi
// 004b9141  57                   push edi
// 004b9142  8bf1                 mov esi, ecx
// 004b9144  33ff                 xor edi, edi
// 004b9146  397e04               cmp dword ptr [esi + 4], edi
// 004b9149  7628                 jbe 0x4b9173
// 004b914b  53                   push ebx
// 004b914c  8d642400             lea esp, [esp]
// 004b9150  8b06                 mov eax, dword ptr [esi]
// 004b9152  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 004b9155  85db                 test ebx, ebx
// 004b9157  7411                 je 0x4b916a
// 004b9159  8b0b                 mov ecx, dword ptr [ebx]
// 004b915b  51                   push ecx
// 004b915c  e88f4f1600           call 0x61e0f0
// 004b9161  53                   push ebx
// 004b9162  e8894f1600           call 0x61e0f0
// 004b9167  83c408               add esp, 8
// 004b916a  83c701               add edi, 1
// 004b916d  3b7e04               cmp edi, dword ptr [esi + 4]
// 004b9170  72de                 jb 0x4b9150
// 004b9172  5b                   pop ebx
// 004b9173  8b4608               mov eax, dword ptr [esi + 8]
// 004b9176  85c0                 test eax, eax
// 004b9178  7426                 je 0x4b91a0
// 004b917a  3d00020000           cmp eax, 0x200
// 004b917f  7618                 jbe 0x4b9199
// 004b9181  8b16                 mov edx, dword ptr [esi]
// 004b9183  52                   push edx
// 004b9184  e8674f1600           call 0x61e0f0
// 004b9189  83c404               add esp, 4
// 004b918c  c7460800000000       mov dword ptr [esi + 8], 0
// 004b9193  c70600000000         mov dword ptr [esi], 0
// 004b9199  c7460400000000       mov dword ptr [esi + 4], 0
// 004b91a0  5f                   pop edi
// 004b91a1  5e                   pop esi
// 004b91a2  c3                   ret 
// library rbxgs-raknet/RPCMap.cpp (function ?Clear@RPCMap@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
