// roc 2012-06 00765b00  unit: RBX::Network::$$A6A?AW4FilterResult::?$CallbackDescImpl  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00765b00
//
// 00765b00  6aff                 push -1
// 00765b02  68f810ab00           push 0xab10f8
// 00765b07  64a100000000         mov eax, dword ptr fs:[0]
// 00765b0d  50                   push eax
// 00765b0e  64892500000000       mov dword ptr fs:[0], esp
// 00765b15  51                   push ecx
// 00765b16  56                   push esi
// 00765b17  57                   push edi
// 00765b18  8bf1                 mov esi, ecx
// 00765b1a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00765b1e  83ec0c               sub esp, 0xc
// 00765b21  8bc4                 mov eax, esp
// 00765b23  c70600000000         mov dword ptr [esi], 0
// 00765b29  8908                 mov dword ptr [eax], ecx
// 00765b2b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00765b2f  895004               mov dword ptr [eax + 4], edx
// 00765b32  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00765b36  894808               mov dword ptr [eax + 8], ecx
// 00765b39  8b442430             mov eax, dword ptr [esp + 0x30]
// 00765b3d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00765b45  89642414             mov dword ptr [esp + 0x14], esp
// 00765b49  85c0                 test eax, eax
// 00765b4b  740c                 je 0x765b59
// 00765b4d  83c004               add eax, 4
// 00765b50  ba01000000           mov edx, 1
// 00765b55  f00fc110             lock xadd dword ptr [eax], edx
// 00765b59  8bce                 mov ecx, esi
// 00765b5b  e8f0f8ffff           call 0x765450
// 00765b60  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00765b64  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00765b6c  85ff                 test edi, edi
// 00765b6e  742a                 je 0x765b9a
// 00765b70  8d4704               lea eax, [edi + 4]
// 00765b73  83c9ff               or ecx, 0xffffffff
// 00765b76  f00fc108             lock xadd dword ptr [eax], ecx
// 00765b7a  751e                 jne 0x765b9a
// 00765b7c  8b17                 mov edx, dword ptr [edi]
// 00765b7e  8b4204               mov eax, dword ptr [edx + 4]
// 00765b81  8bcf                 mov ecx, edi
// 00765b83  ffd0                 call eax
// 00765b85  8d4f08               lea ecx, [edi + 8]
// 00765b88  83caff               or edx, 0xffffffff
// 00765b8b  f00fc111             lock xadd dword ptr [ecx], edx
// 00765b8f  7509                 jne 0x765b9a
// 00765b91  8b07                 mov eax, dword ptr [edi]
// 00765b93  8b5008               mov edx, dword ptr [eax + 8]
// 00765b96  8bcf                 mov ecx, edi
// 00765b98  ffd2                 call edx
// 00765b9a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00765b9e  5f                   pop edi
// 00765b9f  8bc6                 mov eax, esi
// 00765ba1  64890d00000000       mov dword ptr fs:[0], ecx
// 00765ba8  5e                   pop esi
// 00765ba9  83c410               add esp, 0x10
// 00765bac  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
