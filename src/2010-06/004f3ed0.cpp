// roc 2010-06 004f3ed0  unit: RBX::Network::VReplicator::?$BoundFuncDesc  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004f3ed0
//
// 004f3ed0  6aff                 push -1
// 004f3ed2  6888df9a00           push 0x9adf88
// 004f3ed7  64a100000000         mov eax, dword ptr fs:[0]
// 004f3edd  50                   push eax
// 004f3ede  64892500000000       mov dword ptr fs:[0], esp
// 004f3ee5  51                   push ecx
// 004f3ee6  56                   push esi
// 004f3ee7  57                   push edi
// 004f3ee8  8bf1                 mov esi, ecx
// 004f3eea  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004f3eee  83ec0c               sub esp, 0xc
// 004f3ef1  8bc4                 mov eax, esp
// 004f3ef3  c70600000000         mov dword ptr [esi], 0
// 004f3ef9  8908                 mov dword ptr [eax], ecx
// 004f3efb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004f3eff  895004               mov dword ptr [eax + 4], edx
// 004f3f02  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004f3f06  894808               mov dword ptr [eax + 8], ecx
// 004f3f09  8b442430             mov eax, dword ptr [esp + 0x30]
// 004f3f0d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004f3f15  89642414             mov dword ptr [esp + 0x14], esp
// 004f3f19  85c0                 test eax, eax
// 004f3f1b  740c                 je 0x4f3f29
// 004f3f1d  83c004               add eax, 4
// 004f3f20  ba01000000           mov edx, 1
// 004f3f25  f00fc110             lock xadd dword ptr [eax], edx
// 004f3f29  8bce                 mov ecx, esi
// 004f3f2b  e800ebffff           call 0x4f2a30
// 004f3f30  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004f3f34  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004f3f3c  85ff                 test edi, edi
// 004f3f3e  742a                 je 0x4f3f6a
// 004f3f40  8d4704               lea eax, [edi + 4]
// 004f3f43  83c9ff               or ecx, 0xffffffff
// 004f3f46  f00fc108             lock xadd dword ptr [eax], ecx
// 004f3f4a  751e                 jne 0x4f3f6a
// 004f3f4c  8b17                 mov edx, dword ptr [edi]
// 004f3f4e  8b4204               mov eax, dword ptr [edx + 4]
// 004f3f51  8bcf                 mov ecx, edi
// 004f3f53  ffd0                 call eax
// 004f3f55  8d4f08               lea ecx, [edi + 8]
// 004f3f58  83caff               or edx, 0xffffffff
// 004f3f5b  f00fc111             lock xadd dword ptr [ecx], edx
// 004f3f5f  7509                 jne 0x4f3f6a
// 004f3f61  8b07                 mov eax, dword ptr [edi]
// 004f3f63  8b5008               mov edx, dword ptr [eax + 8]
// 004f3f66  8bcf                 mov ecx, edi
// 004f3f68  ffd2                 call edx
// 004f3f6a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f3f6e  5f                   pop edi
// 004f3f6f  8bc6                 mov eax, esi
// 004f3f71  64890d00000000       mov dword ptr fs:[0], ecx
// 004f3f78  5e                   pop esi
// 004f3f79  83c410               add esp, 0x10
// 004f3f7c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
