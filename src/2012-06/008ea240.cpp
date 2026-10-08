// roc 2012-06 008ea240  unit: RBX::Network::$$A6A?AW4FilterResult::?$CallbackDescImpl  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008ea240
//
// 008ea240  6aff                 push -1
// 008ea242  68f810ab00           push 0xab10f8
// 008ea247  64a100000000         mov eax, dword ptr fs:[0]
// 008ea24d  50                   push eax
// 008ea24e  64892500000000       mov dword ptr fs:[0], esp
// 008ea255  51                   push ecx
// 008ea256  56                   push esi
// 008ea257  57                   push edi
// 008ea258  8bf1                 mov esi, ecx
// 008ea25a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ea25e  83ec0c               sub esp, 0xc
// 008ea261  8bc4                 mov eax, esp
// 008ea263  c70600000000         mov dword ptr [esi], 0
// 008ea269  8908                 mov dword ptr [eax], ecx
// 008ea26b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008ea26f  895004               mov dword ptr [eax + 4], edx
// 008ea272  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008ea276  894808               mov dword ptr [eax + 8], ecx
// 008ea279  8b442430             mov eax, dword ptr [esp + 0x30]
// 008ea27d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008ea285  89642414             mov dword ptr [esp + 0x14], esp
// 008ea289  85c0                 test eax, eax
// 008ea28b  740c                 je 0x8ea299
// 008ea28d  83c004               add eax, 4
// 008ea290  ba01000000           mov edx, 1
// 008ea295  f00fc110             lock xadd dword ptr [eax], edx
// 008ea299  8bce                 mov ecx, esi
// 008ea29b  e820fcffff           call 0x8e9ec0
// 008ea2a0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008ea2a4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008ea2ac  85ff                 test edi, edi
// 008ea2ae  742a                 je 0x8ea2da
// 008ea2b0  8d4704               lea eax, [edi + 4]
// 008ea2b3  83c9ff               or ecx, 0xffffffff
// 008ea2b6  f00fc108             lock xadd dword ptr [eax], ecx
// 008ea2ba  751e                 jne 0x8ea2da
// 008ea2bc  8b17                 mov edx, dword ptr [edi]
// 008ea2be  8b4204               mov eax, dword ptr [edx + 4]
// 008ea2c1  8bcf                 mov ecx, edi
// 008ea2c3  ffd0                 call eax
// 008ea2c5  8d4f08               lea ecx, [edi + 8]
// 008ea2c8  83caff               or edx, 0xffffffff
// 008ea2cb  f00fc111             lock xadd dword ptr [ecx], edx
// 008ea2cf  7509                 jne 0x8ea2da
// 008ea2d1  8b07                 mov eax, dword ptr [edi]
// 008ea2d3  8b5008               mov edx, dword ptr [eax + 8]
// 008ea2d6  8bcf                 mov ecx, edi
// 008ea2d8  ffd2                 call edx
// 008ea2da  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ea2de  5f                   pop edi
// 008ea2df  8bc6                 mov eax, esi
// 008ea2e1  64890d00000000       mov dword ptr fs:[0], ecx
// 008ea2e8  5e                   pop esi
// 008ea2e9  83c410               add esp, 0x10
// 008ea2ec  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
