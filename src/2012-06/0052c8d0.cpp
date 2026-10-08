// roc 2012-06 0052c8d0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0052c8d0
//
// 0052c8d0  6aff                 push -1
// 0052c8d2  68f810ab00           push 0xab10f8
// 0052c8d7  64a100000000         mov eax, dword ptr fs:[0]
// 0052c8dd  50                   push eax
// 0052c8de  64892500000000       mov dword ptr fs:[0], esp
// 0052c8e5  51                   push ecx
// 0052c8e6  56                   push esi
// 0052c8e7  57                   push edi
// 0052c8e8  8bf1                 mov esi, ecx
// 0052c8ea  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052c8ee  83ec0c               sub esp, 0xc
// 0052c8f1  8bc4                 mov eax, esp
// 0052c8f3  c70600000000         mov dword ptr [esi], 0
// 0052c8f9  8908                 mov dword ptr [eax], ecx
// 0052c8fb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0052c8ff  895004               mov dword ptr [eax + 4], edx
// 0052c902  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0052c906  894808               mov dword ptr [eax + 8], ecx
// 0052c909  8b442430             mov eax, dword ptr [esp + 0x30]
// 0052c90d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0052c915  89642414             mov dword ptr [esp + 0x14], esp
// 0052c919  85c0                 test eax, eax
// 0052c91b  740c                 je 0x52c929
// 0052c91d  83c004               add eax, 4
// 0052c920  ba01000000           mov edx, 1
// 0052c925  f00fc110             lock xadd dword ptr [eax], edx
// 0052c929  8bce                 mov ecx, esi
// 0052c92b  e880e4ffff           call 0x52adb0
// 0052c930  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0052c934  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0052c93c  85ff                 test edi, edi
// 0052c93e  742a                 je 0x52c96a
// 0052c940  8d4704               lea eax, [edi + 4]
// 0052c943  83c9ff               or ecx, 0xffffffff
// 0052c946  f00fc108             lock xadd dword ptr [eax], ecx
// 0052c94a  751e                 jne 0x52c96a
// 0052c94c  8b17                 mov edx, dword ptr [edi]
// 0052c94e  8b4204               mov eax, dword ptr [edx + 4]
// 0052c951  8bcf                 mov ecx, edi
// 0052c953  ffd0                 call eax
// 0052c955  8d4f08               lea ecx, [edi + 8]
// 0052c958  83caff               or edx, 0xffffffff
// 0052c95b  f00fc111             lock xadd dword ptr [ecx], edx
// 0052c95f  7509                 jne 0x52c96a
// 0052c961  8b07                 mov eax, dword ptr [edi]
// 0052c963  8b5008               mov edx, dword ptr [eax + 8]
// 0052c966  8bcf                 mov ecx, edi
// 0052c968  ffd2                 call edx
// 0052c96a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052c96e  5f                   pop edi
// 0052c96f  8bc6                 mov eax, esi
// 0052c971  64890d00000000       mov dword ptr fs:[0], ecx
// 0052c978  5e                   pop esi
// 0052c979  83c410               add esp, 0x10
// 0052c97c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
