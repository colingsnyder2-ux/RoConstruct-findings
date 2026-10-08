// roc 2007-03 0055c660  unit: seg_00550000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055c660
//
// 0055c660  6aff                 push -1
// 0055c662  68e8397500           push 0x7539e8
// 0055c667  64a100000000         mov eax, dword ptr fs:[0]
// 0055c66d  50                   push eax
// 0055c66e  64892500000000       mov dword ptr fs:[0], esp
// 0055c675  83ec08               sub esp, 8
// 0055c678  53                   push ebx
// 0055c679  56                   push esi
// 0055c67a  8bf1                 mov esi, ecx
// 0055c67c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0055c680  57                   push edi
// 0055c681  e84a250100           call 0x56ebd0
// 0055c686  83ec20               sub esp, 0x20
// 0055c689  8bdc                 mov ebx, esp
// 0055c68b  8bf8                 mov edi, eax
// 0055c68d  8964244c             mov dword ptr [esp + 0x4c], esp
// 0055c691  57                   push edi
// 0055c692  8bcb                 mov ecx, ebx
// 0055c694  ff157ce77700         call dword ptr [0x77e77c]
// 0055c69a  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0055c69d  8d4c242c             lea ecx, [esp + 0x2c]
// 0055c6a1  89431c               mov dword ptr [ebx + 0x1c], eax
// 0055c6a4  8b5628               mov edx, dword ptr [esi + 0x28]
// 0055c6a7  51                   push ecx
// 0055c6a8  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0055c6ab  034c2448             add ecx, dword ptr [esp + 0x48]
// 0055c6af  ffd2                 call edx
// 0055c6b1  8bf0                 mov esi, eax
// 0055c6b3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0055c6bb  e8a00a0100           call 0x56d160
// 0055c6c0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0055c6c4  8901                 mov dword ptr [ecx], eax
// 0055c6c6  56                   push esi
// 0055c6c7  83c104               add ecx, 4
// 0055c6ca  e8813cf3ff           call 0x490350
// 0055c6cf  8b442410             mov eax, dword ptr [esp + 0x10]
// 0055c6d3  85c0                 test eax, eax
// 0055c6d5  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0055c6dd  742c                 je 0x55c70b
// 0055c6df  8bf0                 mov esi, eax
// 0055c6e1  83c004               add eax, 4
// 0055c6e4  83c9ff               or ecx, 0xffffffff
// 0055c6e7  f00fc108             lock xadd dword ptr [eax], ecx
// 0055c6eb  751e                 jne 0x55c70b
// 0055c6ed  8b16                 mov edx, dword ptr [esi]
// 0055c6ef  8b4204               mov eax, dword ptr [edx + 4]
// 0055c6f2  8bce                 mov ecx, esi
// 0055c6f4  ffd0                 call eax
// 0055c6f6  8d4e08               lea ecx, [esi + 8]
// 0055c6f9  83caff               or edx, 0xffffffff
// 0055c6fc  f00fc111             lock xadd dword ptr [ecx], edx
// 0055c700  7509                 jne 0x55c70b
// 0055c702  8b06                 mov eax, dword ptr [esi]
// 0055c704  8b5008               mov edx, dword ptr [eax + 8]
// 0055c707  8bce                 mov ecx, esi
// 0055c709  ffd2                 call edx
// 0055c70b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0055c70f  5f                   pop edi
// 0055c710  5e                   pop esi
// 0055c711  64890d00000000       mov dword ptr fs:[0], ecx
// 0055c718  5b                   pop ebx
// 0055c719  83c414               add esp, 0x14
// 0055c71c  c20c00               ret 0xc
// library rbxgs/v8datamodel\DataModel.cpp (function ??$call@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@ABEXPAVDataModel@2@AAVValue@12@1@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
