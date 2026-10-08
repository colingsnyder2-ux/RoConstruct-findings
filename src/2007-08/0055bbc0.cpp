// roc 2007-08 0055bbc0  unit: RBX::VTool::?$FactoryProduct::Creator  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055bbc0
//
// 0055bbc0  6aff                 push -1
// 0055bbc2  68d8bc7500           push 0x75bcd8
// 0055bbc7  64a100000000         mov eax, dword ptr fs:[0]
// 0055bbcd  50                   push eax
// 0055bbce  64892500000000       mov dword ptr fs:[0], esp
// 0055bbd5  83ec08               sub esp, 8
// 0055bbd8  53                   push ebx
// 0055bbd9  56                   push esi
// 0055bbda  8bf1                 mov esi, ecx
// 0055bbdc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0055bbe0  57                   push edi
// 0055bbe1  e86a370100           call 0x56f350
// 0055bbe6  83ec20               sub esp, 0x20
// 0055bbe9  8bdc                 mov ebx, esp
// 0055bbeb  8bf8                 mov edi, eax
// 0055bbed  8964244c             mov dword ptr [esp + 0x4c], esp
// 0055bbf1  57                   push edi
// 0055bbf2  8bcb                 mov ecx, ebx
// 0055bbf4  ff159ce67700         call dword ptr [0x77e69c]
// 0055bbfa  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0055bbfd  8d4c242c             lea ecx, [esp + 0x2c]
// 0055bc01  89431c               mov dword ptr [ebx + 0x1c], eax
// 0055bc04  8b5628               mov edx, dword ptr [esi + 0x28]
// 0055bc07  51                   push ecx
// 0055bc08  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0055bc0b  034c2448             add ecx, dword ptr [esp + 0x48]
// 0055bc0f  ffd2                 call edx
// 0055bc11  8bf0                 mov esi, eax
// 0055bc13  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0055bc1b  e8401b0100           call 0x56d760
// 0055bc20  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0055bc24  8901                 mov dword ptr [ecx], eax
// 0055bc26  56                   push esi
// 0055bc27  83c104               add ecx, 4
// 0055bc2a  e801a8f3ff           call 0x496430
// 0055bc2f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0055bc33  85c0                 test eax, eax
// 0055bc35  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0055bc3d  742c                 je 0x55bc6b
// 0055bc3f  8bf0                 mov esi, eax
// 0055bc41  83c004               add eax, 4
// 0055bc44  83c9ff               or ecx, 0xffffffff
// 0055bc47  f00fc108             lock xadd dword ptr [eax], ecx
// 0055bc4b  751e                 jne 0x55bc6b
// 0055bc4d  8b16                 mov edx, dword ptr [esi]
// 0055bc4f  8b4204               mov eax, dword ptr [edx + 4]
// 0055bc52  8bce                 mov ecx, esi
// 0055bc54  ffd0                 call eax
// 0055bc56  8d4e08               lea ecx, [esi + 8]
// 0055bc59  83caff               or edx, 0xffffffff
// 0055bc5c  f00fc111             lock xadd dword ptr [ecx], edx
// 0055bc60  7509                 jne 0x55bc6b
// 0055bc62  8b06                 mov eax, dword ptr [esi]
// 0055bc64  8b5008               mov edx, dword ptr [eax + 8]
// 0055bc67  8bce                 mov ecx, esi
// 0055bc69  ffd2                 call edx
// 0055bc6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0055bc6f  5f                   pop edi
// 0055bc70  5e                   pop esi
// 0055bc71  64890d00000000       mov dword ptr fs:[0], ecx
// 0055bc78  5b                   pop ebx
// 0055bc79  83c414               add esp, 0x14
// 0055bc7c  c20c00               ret 0xc
// library rbxgs/v8datamodel\DataModel.cpp (function ??$call@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@ABEXPAVDataModel@2@AAVValue@12@1@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
