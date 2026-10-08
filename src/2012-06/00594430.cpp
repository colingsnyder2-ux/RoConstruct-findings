// roc 2012-06 00594430  unit: RBX::Network::ServerReplicator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00594430
//
// 00594430  6aff                 push -1
// 00594432  68f810ab00           push 0xab10f8
// 00594437  64a100000000         mov eax, dword ptr fs:[0]
// 0059443d  50                   push eax
// 0059443e  64892500000000       mov dword ptr fs:[0], esp
// 00594445  51                   push ecx
// 00594446  56                   push esi
// 00594447  57                   push edi
// 00594448  8bf1                 mov esi, ecx
// 0059444a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059444e  83ec0c               sub esp, 0xc
// 00594451  8bc4                 mov eax, esp
// 00594453  c70600000000         mov dword ptr [esi], 0
// 00594459  8908                 mov dword ptr [eax], ecx
// 0059445b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059445f  895004               mov dword ptr [eax + 4], edx
// 00594462  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00594466  894808               mov dword ptr [eax + 8], ecx
// 00594469  8b442430             mov eax, dword ptr [esp + 0x30]
// 0059446d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00594475  89642414             mov dword ptr [esp + 0x14], esp
// 00594479  85c0                 test eax, eax
// 0059447b  740c                 je 0x594489
// 0059447d  83c004               add eax, 4
// 00594480  ba01000000           mov edx, 1
// 00594485  f00fc110             lock xadd dword ptr [eax], edx
// 00594489  8bce                 mov ecx, esi
// 0059448b  e890f3ffff           call 0x593820
// 00594490  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00594494  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0059449c  85ff                 test edi, edi
// 0059449e  742a                 je 0x5944ca
// 005944a0  8d4704               lea eax, [edi + 4]
// 005944a3  83c9ff               or ecx, 0xffffffff
// 005944a6  f00fc108             lock xadd dword ptr [eax], ecx
// 005944aa  751e                 jne 0x5944ca
// 005944ac  8b17                 mov edx, dword ptr [edi]
// 005944ae  8b4204               mov eax, dword ptr [edx + 4]
// 005944b1  8bcf                 mov ecx, edi
// 005944b3  ffd0                 call eax
// 005944b5  8d4f08               lea ecx, [edi + 8]
// 005944b8  83caff               or edx, 0xffffffff
// 005944bb  f00fc111             lock xadd dword ptr [ecx], edx
// 005944bf  7509                 jne 0x5944ca
// 005944c1  8b07                 mov eax, dword ptr [edi]
// 005944c3  8b5008               mov edx, dword ptr [eax + 8]
// 005944c6  8bcf                 mov ecx, edi
// 005944c8  ffd2                 call edx
// 005944ca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005944ce  5f                   pop edi
// 005944cf  8bc6                 mov eax, esi
// 005944d1  64890d00000000       mov dword ptr fs:[0], ecx
// 005944d8  5e                   pop esi
// 005944d9  83c410               add esp, 0x10
// 005944dc  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
