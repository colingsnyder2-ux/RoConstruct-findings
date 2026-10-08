// roc 2012-06 00766230  unit: RBX::Network::$$A6A?AW4FilterResult::?$CallbackDescImpl  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00766230
//
// 00766230  6aff                 push -1
// 00766232  68f810ab00           push 0xab10f8
// 00766237  64a100000000         mov eax, dword ptr fs:[0]
// 0076623d  50                   push eax
// 0076623e  64892500000000       mov dword ptr fs:[0], esp
// 00766245  51                   push ecx
// 00766246  56                   push esi
// 00766247  57                   push edi
// 00766248  8bf1                 mov esi, ecx
// 0076624a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0076624e  83ec0c               sub esp, 0xc
// 00766251  8bc4                 mov eax, esp
// 00766253  c70600000000         mov dword ptr [esi], 0
// 00766259  8908                 mov dword ptr [eax], ecx
// 0076625b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0076625f  895004               mov dword ptr [eax + 4], edx
// 00766262  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00766266  894808               mov dword ptr [eax + 8], ecx
// 00766269  8b442430             mov eax, dword ptr [esp + 0x30]
// 0076626d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00766275  89642414             mov dword ptr [esp + 0x14], esp
// 00766279  85c0                 test eax, eax
// 0076627b  740c                 je 0x766289
// 0076627d  83c004               add eax, 4
// 00766280  ba01000000           mov edx, 1
// 00766285  f00fc110             lock xadd dword ptr [eax], edx
// 00766289  8bce                 mov ecx, esi
// 0076628b  e820f9ffff           call 0x765bb0
// 00766290  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00766294  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0076629c  85ff                 test edi, edi
// 0076629e  742a                 je 0x7662ca
// 007662a0  8d4704               lea eax, [edi + 4]
// 007662a3  83c9ff               or ecx, 0xffffffff
// 007662a6  f00fc108             lock xadd dword ptr [eax], ecx
// 007662aa  751e                 jne 0x7662ca
// 007662ac  8b17                 mov edx, dword ptr [edi]
// 007662ae  8b4204               mov eax, dword ptr [edx + 4]
// 007662b1  8bcf                 mov ecx, edi
// 007662b3  ffd0                 call eax
// 007662b5  8d4f08               lea ecx, [edi + 8]
// 007662b8  83caff               or edx, 0xffffffff
// 007662bb  f00fc111             lock xadd dword ptr [ecx], edx
// 007662bf  7509                 jne 0x7662ca
// 007662c1  8b07                 mov eax, dword ptr [edi]
// 007662c3  8b5008               mov edx, dword ptr [eax + 8]
// 007662c6  8bcf                 mov ecx, edi
// 007662c8  ffd2                 call edx
// 007662ca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007662ce  5f                   pop edi
// 007662cf  8bc6                 mov eax, esi
// 007662d1  64890d00000000       mov dword ptr fs:[0], ecx
// 007662d8  5e                   pop esi
// 007662d9  83c410               add esp, 0x10
// 007662dc  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
