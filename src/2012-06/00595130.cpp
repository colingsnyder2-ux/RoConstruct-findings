// roc 2012-06 00595130  unit: RBX::Network::Replicator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00595130
//
// 00595130  6aff                 push -1
// 00595132  68f810ab00           push 0xab10f8
// 00595137  64a100000000         mov eax, dword ptr fs:[0]
// 0059513d  50                   push eax
// 0059513e  64892500000000       mov dword ptr fs:[0], esp
// 00595145  51                   push ecx
// 00595146  56                   push esi
// 00595147  57                   push edi
// 00595148  8bf1                 mov esi, ecx
// 0059514a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059514e  83ec0c               sub esp, 0xc
// 00595151  8bc4                 mov eax, esp
// 00595153  c70600000000         mov dword ptr [esi], 0
// 00595159  8908                 mov dword ptr [eax], ecx
// 0059515b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059515f  895004               mov dword ptr [eax + 4], edx
// 00595162  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00595166  894808               mov dword ptr [eax + 8], ecx
// 00595169  8b442430             mov eax, dword ptr [esp + 0x30]
// 0059516d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00595175  89642414             mov dword ptr [esp + 0x14], esp
// 00595179  85c0                 test eax, eax
// 0059517b  740c                 je 0x595189
// 0059517d  83c004               add eax, 4
// 00595180  ba01000000           mov edx, 1
// 00595185  f00fc110             lock xadd dword ptr [eax], edx
// 00595189  8bce                 mov ecx, esi
// 0059518b  e8f0f4ffff           call 0x594680
// 00595190  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00595194  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0059519c  85ff                 test edi, edi
// 0059519e  742a                 je 0x5951ca
// 005951a0  8d4704               lea eax, [edi + 4]
// 005951a3  83c9ff               or ecx, 0xffffffff
// 005951a6  f00fc108             lock xadd dword ptr [eax], ecx
// 005951aa  751e                 jne 0x5951ca
// 005951ac  8b17                 mov edx, dword ptr [edi]
// 005951ae  8b4204               mov eax, dword ptr [edx + 4]
// 005951b1  8bcf                 mov ecx, edi
// 005951b3  ffd0                 call eax
// 005951b5  8d4f08               lea ecx, [edi + 8]
// 005951b8  83caff               or edx, 0xffffffff
// 005951bb  f00fc111             lock xadd dword ptr [ecx], edx
// 005951bf  7509                 jne 0x5951ca
// 005951c1  8b07                 mov eax, dword ptr [edi]
// 005951c3  8b5008               mov edx, dword ptr [eax + 8]
// 005951c6  8bcf                 mov ecx, edi
// 005951c8  ffd2                 call edx
// 005951ca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005951ce  5f                   pop edi
// 005951cf  8bc6                 mov eax, esi
// 005951d1  64890d00000000       mov dword ptr fs:[0], ecx
// 005951d8  5e                   pop esi
// 005951d9  83c410               add esp, 0x10
// 005951dc  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
