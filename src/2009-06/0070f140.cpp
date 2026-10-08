// roc 2009-06 0070f140  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070f140
//
// 0070f140  6aff                 push -1
// 0070f142  68883e8700           push 0x873e88
// 0070f147  64a100000000         mov eax, dword ptr fs:[0]
// 0070f14d  50                   push eax
// 0070f14e  64892500000000       mov dword ptr fs:[0], esp
// 0070f155  51                   push ecx
// 0070f156  56                   push esi
// 0070f157  57                   push edi
// 0070f158  8bf1                 mov esi, ecx
// 0070f15a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0070f15e  83ec0c               sub esp, 0xc
// 0070f161  8bc4                 mov eax, esp
// 0070f163  c70600000000         mov dword ptr [esi], 0
// 0070f169  8908                 mov dword ptr [eax], ecx
// 0070f16b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0070f16f  895004               mov dword ptr [eax + 4], edx
// 0070f172  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0070f176  894808               mov dword ptr [eax + 8], ecx
// 0070f179  8b442430             mov eax, dword ptr [esp + 0x30]
// 0070f17d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0070f185  89642414             mov dword ptr [esp + 0x14], esp
// 0070f189  85c0                 test eax, eax
// 0070f18b  740c                 je 0x70f199
// 0070f18d  83c004               add eax, 4
// 0070f190  ba01000000           mov edx, 1
// 0070f195  f00fc110             lock xadd dword ptr [eax], edx
// 0070f199  8bce                 mov ecx, esi
// 0070f19b  e860feffff           call 0x70f000
// 0070f1a0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0070f1a4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0070f1ac  85ff                 test edi, edi
// 0070f1ae  742a                 je 0x70f1da
// 0070f1b0  8d4704               lea eax, [edi + 4]
// 0070f1b3  83c9ff               or ecx, 0xffffffff
// 0070f1b6  f00fc108             lock xadd dword ptr [eax], ecx
// 0070f1ba  751e                 jne 0x70f1da
// 0070f1bc  8b17                 mov edx, dword ptr [edi]
// 0070f1be  8b4204               mov eax, dword ptr [edx + 4]
// 0070f1c1  8bcf                 mov ecx, edi
// 0070f1c3  ffd0                 call eax
// 0070f1c5  8d4f08               lea ecx, [edi + 8]
// 0070f1c8  83caff               or edx, 0xffffffff
// 0070f1cb  f00fc111             lock xadd dword ptr [ecx], edx
// 0070f1cf  7509                 jne 0x70f1da
// 0070f1d1  8b07                 mov eax, dword ptr [edi]
// 0070f1d3  8b5008               mov edx, dword ptr [eax + 8]
// 0070f1d6  8bcf                 mov ecx, edi
// 0070f1d8  ffd2                 call edx
// 0070f1da  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070f1de  5f                   pop edi
// 0070f1df  8bc6                 mov eax, esi
// 0070f1e1  64890d00000000       mov dword ptr fs:[0], ecx
// 0070f1e8  5e                   pop esi
// 0070f1e9  83c410               add esp, 0x10
// 0070f1ec  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
