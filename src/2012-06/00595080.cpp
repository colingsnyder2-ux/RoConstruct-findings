// roc 2012-06 00595080  unit: RBX::Network::Replicator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00595080
//
// 00595080  6aff                 push -1
// 00595082  68f810ab00           push 0xab10f8
// 00595087  64a100000000         mov eax, dword ptr fs:[0]
// 0059508d  50                   push eax
// 0059508e  64892500000000       mov dword ptr fs:[0], esp
// 00595095  51                   push ecx
// 00595096  56                   push esi
// 00595097  57                   push edi
// 00595098  8bf1                 mov esi, ecx
// 0059509a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059509e  83ec0c               sub esp, 0xc
// 005950a1  8bc4                 mov eax, esp
// 005950a3  c70600000000         mov dword ptr [esi], 0
// 005950a9  8908                 mov dword ptr [eax], ecx
// 005950ab  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005950af  895004               mov dword ptr [eax + 4], edx
// 005950b2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005950b6  894808               mov dword ptr [eax + 8], ecx
// 005950b9  8b442430             mov eax, dword ptr [esp + 0x30]
// 005950bd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005950c5  89642414             mov dword ptr [esp + 0x14], esp
// 005950c9  85c0                 test eax, eax
// 005950cb  740c                 je 0x5950d9
// 005950cd  83c004               add eax, 4
// 005950d0  ba01000000           mov edx, 1
// 005950d5  f00fc110             lock xadd dword ptr [eax], edx
// 005950d9  8bce                 mov ecx, esi
// 005950db  e8e0f4ffff           call 0x5945c0
// 005950e0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005950e4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005950ec  85ff                 test edi, edi
// 005950ee  742a                 je 0x59511a
// 005950f0  8d4704               lea eax, [edi + 4]
// 005950f3  83c9ff               or ecx, 0xffffffff
// 005950f6  f00fc108             lock xadd dword ptr [eax], ecx
// 005950fa  751e                 jne 0x59511a
// 005950fc  8b17                 mov edx, dword ptr [edi]
// 005950fe  8b4204               mov eax, dword ptr [edx + 4]
// 00595101  8bcf                 mov ecx, edi
// 00595103  ffd0                 call eax
// 00595105  8d4f08               lea ecx, [edi + 8]
// 00595108  83caff               or edx, 0xffffffff
// 0059510b  f00fc111             lock xadd dword ptr [ecx], edx
// 0059510f  7509                 jne 0x59511a
// 00595111  8b07                 mov eax, dword ptr [edi]
// 00595113  8b5008               mov edx, dword ptr [eax + 8]
// 00595116  8bcf                 mov ecx, edi
// 00595118  ffd2                 call edx
// 0059511a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059511e  5f                   pop edi
// 0059511f  8bc6                 mov eax, esi
// 00595121  64890d00000000       mov dword ptr fs:[0], ecx
// 00595128  5e                   pop esi
// 00595129  83c410               add esp, 0x10
// 0059512c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
