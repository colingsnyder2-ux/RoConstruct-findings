// roc 2010-06 00725b10  unit: VYieldFunctionStateObject::?$sp_counted_impl_p  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00725b10
//
// 00725b10  6aff                 push -1
// 00725b12  6888df9a00           push 0x9adf88
// 00725b17  64a100000000         mov eax, dword ptr fs:[0]
// 00725b1d  50                   push eax
// 00725b1e  64892500000000       mov dword ptr fs:[0], esp
// 00725b25  51                   push ecx
// 00725b26  56                   push esi
// 00725b27  57                   push edi
// 00725b28  8bf1                 mov esi, ecx
// 00725b2a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00725b2e  83ec0c               sub esp, 0xc
// 00725b31  8bc4                 mov eax, esp
// 00725b33  c70600000000         mov dword ptr [esi], 0
// 00725b39  8908                 mov dword ptr [eax], ecx
// 00725b3b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00725b3f  895004               mov dword ptr [eax + 4], edx
// 00725b42  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00725b46  894808               mov dword ptr [eax + 8], ecx
// 00725b49  8b442430             mov eax, dword ptr [esp + 0x30]
// 00725b4d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00725b55  89642414             mov dword ptr [esp + 0x14], esp
// 00725b59  85c0                 test eax, eax
// 00725b5b  740c                 je 0x725b69
// 00725b5d  83c004               add eax, 4
// 00725b60  ba01000000           mov edx, 1
// 00725b65  f00fc110             lock xadd dword ptr [eax], edx
// 00725b69  8bce                 mov ecx, esi
// 00725b6b  e8d0fbffff           call 0x725740
// 00725b70  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00725b74  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00725b7c  85ff                 test edi, edi
// 00725b7e  742a                 je 0x725baa
// 00725b80  8d4704               lea eax, [edi + 4]
// 00725b83  83c9ff               or ecx, 0xffffffff
// 00725b86  f00fc108             lock xadd dword ptr [eax], ecx
// 00725b8a  751e                 jne 0x725baa
// 00725b8c  8b17                 mov edx, dword ptr [edi]
// 00725b8e  8b4204               mov eax, dword ptr [edx + 4]
// 00725b91  8bcf                 mov ecx, edi
// 00725b93  ffd0                 call eax
// 00725b95  8d4f08               lea ecx, [edi + 8]
// 00725b98  83caff               or edx, 0xffffffff
// 00725b9b  f00fc111             lock xadd dword ptr [ecx], edx
// 00725b9f  7509                 jne 0x725baa
// 00725ba1  8b07                 mov eax, dword ptr [edi]
// 00725ba3  8b5008               mov edx, dword ptr [eax + 8]
// 00725ba6  8bcf                 mov ecx, edi
// 00725ba8  ffd2                 call edx
// 00725baa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00725bae  5f                   pop edi
// 00725baf  8bc6                 mov eax, esi
// 00725bb1  64890d00000000       mov dword ptr fs:[0], ecx
// 00725bb8  5e                   pop esi
// 00725bb9  83c410               add esp, 0x10
// 00725bbc  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
