// roc 2010-06 0045be50  unit: RBX::VSpecialShape::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0045be50
//
// 0045be50  6aff                 push -1
// 0045be52  6888df9a00           push 0x9adf88
// 0045be57  64a100000000         mov eax, dword ptr fs:[0]
// 0045be5d  50                   push eax
// 0045be5e  64892500000000       mov dword ptr fs:[0], esp
// 0045be65  51                   push ecx
// 0045be66  56                   push esi
// 0045be67  57                   push edi
// 0045be68  8bf1                 mov esi, ecx
// 0045be6a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0045be6e  83ec0c               sub esp, 0xc
// 0045be71  8bc4                 mov eax, esp
// 0045be73  c70600000000         mov dword ptr [esi], 0
// 0045be79  8908                 mov dword ptr [eax], ecx
// 0045be7b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0045be7f  895004               mov dword ptr [eax + 4], edx
// 0045be82  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0045be86  894808               mov dword ptr [eax + 8], ecx
// 0045be89  8b442430             mov eax, dword ptr [esp + 0x30]
// 0045be8d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0045be95  89642414             mov dword ptr [esp + 0x14], esp
// 0045be99  85c0                 test eax, eax
// 0045be9b  740c                 je 0x45bea9
// 0045be9d  83c004               add eax, 4
// 0045bea0  ba01000000           mov edx, 1
// 0045bea5  f00fc110             lock xadd dword ptr [eax], edx
// 0045bea9  8bce                 mov ecx, esi
// 0045beab  e830f9ffff           call 0x45b7e0
// 0045beb0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0045beb4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0045bebc  85ff                 test edi, edi
// 0045bebe  742a                 je 0x45beea
// 0045bec0  8d4704               lea eax, [edi + 4]
// 0045bec3  83c9ff               or ecx, 0xffffffff
// 0045bec6  f00fc108             lock xadd dword ptr [eax], ecx
// 0045beca  751e                 jne 0x45beea
// 0045becc  8b17                 mov edx, dword ptr [edi]
// 0045bece  8b4204               mov eax, dword ptr [edx + 4]
// 0045bed1  8bcf                 mov ecx, edi
// 0045bed3  ffd0                 call eax
// 0045bed5  8d4f08               lea ecx, [edi + 8]
// 0045bed8  83caff               or edx, 0xffffffff
// 0045bedb  f00fc111             lock xadd dword ptr [ecx], edx
// 0045bedf  7509                 jne 0x45beea
// 0045bee1  8b07                 mov eax, dword ptr [edi]
// 0045bee3  8b5008               mov edx, dword ptr [eax + 8]
// 0045bee6  8bcf                 mov ecx, edi
// 0045bee8  ffd2                 call edx
// 0045beea  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045beee  5f                   pop edi
// 0045beef  8bc6                 mov eax, esi
// 0045bef1  64890d00000000       mov dword ptr fs:[0], ecx
// 0045bef8  5e                   pop esi
// 0045bef9  83c410               add esp, 0x10
// 0045befc  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
