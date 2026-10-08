// roc 2012-06 005951e0  unit: RBX::Network::Replicator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005951e0
//
// 005951e0  6aff                 push -1
// 005951e2  68f810ab00           push 0xab10f8
// 005951e7  64a100000000         mov eax, dword ptr fs:[0]
// 005951ed  50                   push eax
// 005951ee  64892500000000       mov dword ptr fs:[0], esp
// 005951f5  51                   push ecx
// 005951f6  56                   push esi
// 005951f7  57                   push edi
// 005951f8  8bf1                 mov esi, ecx
// 005951fa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005951fe  83ec0c               sub esp, 0xc
// 00595201  8bc4                 mov eax, esp
// 00595203  c70600000000         mov dword ptr [esi], 0
// 00595209  8908                 mov dword ptr [eax], ecx
// 0059520b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059520f  895004               mov dword ptr [eax + 4], edx
// 00595212  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00595216  894808               mov dword ptr [eax + 8], ecx
// 00595219  8b442430             mov eax, dword ptr [esp + 0x30]
// 0059521d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00595225  89642414             mov dword ptr [esp + 0x14], esp
// 00595229  85c0                 test eax, eax
// 0059522b  740c                 je 0x595239
// 0059522d  83c004               add eax, 4
// 00595230  ba01000000           mov edx, 1
// 00595235  f00fc110             lock xadd dword ptr [eax], edx
// 00595239  8bce                 mov ecx, esi
// 0059523b  e800f5ffff           call 0x594740
// 00595240  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00595244  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0059524c  85ff                 test edi, edi
// 0059524e  742a                 je 0x59527a
// 00595250  8d4704               lea eax, [edi + 4]
// 00595253  83c9ff               or ecx, 0xffffffff
// 00595256  f00fc108             lock xadd dword ptr [eax], ecx
// 0059525a  751e                 jne 0x59527a
// 0059525c  8b17                 mov edx, dword ptr [edi]
// 0059525e  8b4204               mov eax, dword ptr [edx + 4]
// 00595261  8bcf                 mov ecx, edi
// 00595263  ffd0                 call eax
// 00595265  8d4f08               lea ecx, [edi + 8]
// 00595268  83caff               or edx, 0xffffffff
// 0059526b  f00fc111             lock xadd dword ptr [ecx], edx
// 0059526f  7509                 jne 0x59527a
// 00595271  8b07                 mov eax, dword ptr [edi]
// 00595273  8b5008               mov edx, dword ptr [eax + 8]
// 00595276  8bcf                 mov ecx, edi
// 00595278  ffd2                 call edx
// 0059527a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059527e  5f                   pop edi
// 0059527f  8bc6                 mov eax, esi
// 00595281  64890d00000000       mov dword ptr fs:[0], ecx
// 00595288  5e                   pop esi
// 00595289  83c410               add esp, 0x10
// 0059528c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
