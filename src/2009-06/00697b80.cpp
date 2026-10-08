// roc 2009-06 00697b80  unit: RBX::VDebrisService::?$FactoryProduct  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00697b80
//
// 00697b80  6aff                 push -1
// 00697b82  68883e8700           push 0x873e88
// 00697b87  64a100000000         mov eax, dword ptr fs:[0]
// 00697b8d  50                   push eax
// 00697b8e  64892500000000       mov dword ptr fs:[0], esp
// 00697b95  51                   push ecx
// 00697b96  56                   push esi
// 00697b97  57                   push edi
// 00697b98  8bf1                 mov esi, ecx
// 00697b9a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00697b9e  83ec0c               sub esp, 0xc
// 00697ba1  8bc4                 mov eax, esp
// 00697ba3  c70600000000         mov dword ptr [esi], 0
// 00697ba9  8908                 mov dword ptr [eax], ecx
// 00697bab  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00697baf  895004               mov dword ptr [eax + 4], edx
// 00697bb2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00697bb6  894808               mov dword ptr [eax + 8], ecx
// 00697bb9  8b442430             mov eax, dword ptr [esp + 0x30]
// 00697bbd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00697bc5  89642414             mov dword ptr [esp + 0x14], esp
// 00697bc9  85c0                 test eax, eax
// 00697bcb  740c                 je 0x697bd9
// 00697bcd  83c004               add eax, 4
// 00697bd0  ba01000000           mov edx, 1
// 00697bd5  f00fc110             lock xadd dword ptr [eax], edx
// 00697bd9  8bce                 mov ecx, esi
// 00697bdb  e8e0feffff           call 0x697ac0
// 00697be0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00697be4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00697bec  85ff                 test edi, edi
// 00697bee  742a                 je 0x697c1a
// 00697bf0  8d4704               lea eax, [edi + 4]
// 00697bf3  83c9ff               or ecx, 0xffffffff
// 00697bf6  f00fc108             lock xadd dword ptr [eax], ecx
// 00697bfa  751e                 jne 0x697c1a
// 00697bfc  8b17                 mov edx, dword ptr [edi]
// 00697bfe  8b4204               mov eax, dword ptr [edx + 4]
// 00697c01  8bcf                 mov ecx, edi
// 00697c03  ffd0                 call eax
// 00697c05  8d4f08               lea ecx, [edi + 8]
// 00697c08  83caff               or edx, 0xffffffff
// 00697c0b  f00fc111             lock xadd dword ptr [ecx], edx
// 00697c0f  7509                 jne 0x697c1a
// 00697c11  8b07                 mov eax, dword ptr [edi]
// 00697c13  8b5008               mov edx, dword ptr [eax + 8]
// 00697c16  8bcf                 mov ecx, edi
// 00697c18  ffd2                 call edx
// 00697c1a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00697c1e  5f                   pop edi
// 00697c1f  8bc6                 mov eax, esi
// 00697c21  64890d00000000       mov dword ptr fs:[0], ecx
// 00697c28  5e                   pop esi
// 00697c29  83c410               add esp, 0x10
// 00697c2c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
