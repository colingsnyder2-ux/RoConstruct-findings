// roc 2011-06 005015f0  unit: RBX::Instance::$$A6AXW4CombinedSignalType::?$signal::Vslot::?$callable  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005015f0
//
// 005015f0  6aff                 push -1
// 005015f2  6858949e00           push 0x9e9458
// 005015f7  64a100000000         mov eax, dword ptr fs:[0]
// 005015fd  50                   push eax
// 005015fe  64892500000000       mov dword ptr fs:[0], esp
// 00501605  51                   push ecx
// 00501606  56                   push esi
// 00501607  57                   push edi
// 00501608  8bf1                 mov esi, ecx
// 0050160a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050160e  83ec0c               sub esp, 0xc
// 00501611  8bc4                 mov eax, esp
// 00501613  c70600000000         mov dword ptr [esi], 0
// 00501619  8908                 mov dword ptr [eax], ecx
// 0050161b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0050161f  895004               mov dword ptr [eax + 4], edx
// 00501622  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00501626  894808               mov dword ptr [eax + 8], ecx
// 00501629  8b442430             mov eax, dword ptr [esp + 0x30]
// 0050162d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00501635  89642414             mov dword ptr [esp + 0x14], esp
// 00501639  85c0                 test eax, eax
// 0050163b  740c                 je 0x501649
// 0050163d  83c004               add eax, 4
// 00501640  ba01000000           mov edx, 1
// 00501645  f00fc110             lock xadd dword ptr [eax], edx
// 00501649  8bce                 mov ecx, esi
// 0050164b  e850e1ffff           call 0x4ff7a0
// 00501650  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00501654  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0050165c  85ff                 test edi, edi
// 0050165e  742a                 je 0x50168a
// 00501660  8d4704               lea eax, [edi + 4]
// 00501663  83c9ff               or ecx, 0xffffffff
// 00501666  f00fc108             lock xadd dword ptr [eax], ecx
// 0050166a  751e                 jne 0x50168a
// 0050166c  8b17                 mov edx, dword ptr [edi]
// 0050166e  8b4204               mov eax, dword ptr [edx + 4]
// 00501671  8bcf                 mov ecx, edi
// 00501673  ffd0                 call eax
// 00501675  8d4f08               lea ecx, [edi + 8]
// 00501678  83caff               or edx, 0xffffffff
// 0050167b  f00fc111             lock xadd dword ptr [ecx], edx
// 0050167f  7509                 jne 0x50168a
// 00501681  8b07                 mov eax, dword ptr [edi]
// 00501683  8b5008               mov edx, dword ptr [eax + 8]
// 00501686  8bcf                 mov ecx, edi
// 00501688  ffd2                 call edx
// 0050168a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050168e  5f                   pop edi
// 0050168f  8bc6                 mov eax, esi
// 00501691  64890d00000000       mov dword ptr fs:[0], ecx
// 00501698  5e                   pop esi
// 00501699  83c410               add esp, 0x10
// 0050169c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
