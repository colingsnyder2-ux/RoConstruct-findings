// roc 2009-06 006973f0  unit: RBX::VDebrisService::?$FactoryProduct  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006973f0
//
// 006973f0  6aff                 push -1
// 006973f2  68218f8500           push 0x858f21
// 006973f7  64a100000000         mov eax, dword ptr fs:[0]
// 006973fd  50                   push eax
// 006973fe  64892500000000       mov dword ptr fs:[0], esp
// 00697405  83ec0c               sub esp, 0xc
// 00697408  56                   push esi
// 00697409  57                   push edi
// 0069740a  c744240800000000     mov dword ptr [esp + 8], 0
// 00697412  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00697416  83ec08               sub esp, 8
// 00697419  8bc4                 mov eax, esp
// 0069741b  89642414             mov dword ptr [esp + 0x14], esp
// 0069741f  8908                 mov dword ptr [eax], ecx
// 00697421  8b542438             mov edx, dword ptr [esp + 0x38]
// 00697425  895004               mov dword ptr [eax + 4], edx
// 00697428  8b442438             mov eax, dword ptr [esp + 0x38]
// 0069742c  be01000000           mov esi, 1
// 00697431  89742424             mov dword ptr [esp + 0x24], esi
// 00697435  85c0                 test eax, eax
// 00697437  7409                 je 0x697442
// 00697439  83c004               add eax, 4
// 0069743c  8bce                 mov ecx, esi
// 0069743e  f00fc108             lock xadd dword ptr [eax], ecx
// 00697442  8d4c2414             lea ecx, [esp + 0x14]
// 00697446  e865dee1ff           call 0x4b52b0
// 0069744b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0069744f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00697453  8917                 mov dword ptr [edi], edx
// 00697455  8b08                 mov ecx, dword ptr [eax]
// 00697457  894f04               mov dword ptr [edi + 4], ecx
// 0069745a  8b4004               mov eax, dword ptr [eax + 4]
// 0069745d  894708               mov dword ptr [edi + 8], eax
// 00697460  85c0                 test eax, eax
// 00697462  7409                 je 0x69746d
// 00697464  83c004               add eax, 4
// 00697467  8bd6                 mov edx, esi
// 00697469  f00fc110             lock xadd dword ptr [eax], edx
// 0069746d  89742408             mov dword ptr [esp + 8], esi
// 00697471  8b742410             mov esi, dword ptr [esp + 0x10]
// 00697475  85f6                 test esi, esi
// 00697477  742a                 je 0x6974a3
// 00697479  8d4604               lea eax, [esi + 4]
// 0069747c  83c9ff               or ecx, 0xffffffff
// 0069747f  f00fc108             lock xadd dword ptr [eax], ecx
// 00697483  751e                 jne 0x6974a3
// 00697485  8b16                 mov edx, dword ptr [esi]
// 00697487  8b4204               mov eax, dword ptr [edx + 4]
// 0069748a  8bce                 mov ecx, esi
// 0069748c  ffd0                 call eax
// 0069748e  8d4e08               lea ecx, [esi + 8]
// 00697491  83caff               or edx, 0xffffffff
// 00697494  f00fc111             lock xadd dword ptr [ecx], edx
// 00697498  7509                 jne 0x6974a3
// 0069749a  8b06                 mov eax, dword ptr [esi]
// 0069749c  8b5008               mov edx, dword ptr [eax + 8]
// 0069749f  8bce                 mov ecx, esi
// 006974a1  ffd2                 call edx
// 006974a3  8b742430             mov esi, dword ptr [esp + 0x30]
// 006974a7  c644241c00           mov byte ptr [esp + 0x1c], 0
// 006974ac  85f6                 test esi, esi
// 006974ae  742a                 je 0x6974da
// 006974b0  8d4604               lea eax, [esi + 4]
// 006974b3  83c9ff               or ecx, 0xffffffff
// 006974b6  f00fc108             lock xadd dword ptr [eax], ecx
// 006974ba  751e                 jne 0x6974da
// 006974bc  8b16                 mov edx, dword ptr [esi]
// 006974be  8b4204               mov eax, dword ptr [edx + 4]
// 006974c1  8bce                 mov ecx, esi
// 006974c3  ffd0                 call eax
// 006974c5  8d4e08               lea ecx, [esi + 8]
// 006974c8  83caff               or edx, 0xffffffff
// 006974cb  f00fc111             lock xadd dword ptr [ecx], edx
// 006974cf  7509                 jne 0x6974da
// 006974d1  8b06                 mov eax, dword ptr [esi]
// 006974d3  8b5008               mov edx, dword ptr [eax + 8]
// 006974d6  8bce                 mov ecx, esi
// 006974d8  ffd2                 call edx
// 006974da  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006974de  8bc7                 mov eax, edi
// 006974e0  5f                   pop edi
// 006974e1  64890d00000000       mov dword ptr fs:[0], ecx
// 006974e8  5e                   pop esi
// 006974e9  83c418               add esp, 0x18
// 006974ec  c3                   ret 
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$bind@XV?$weak_ptr@VInstance@RBX@@@boost@@V?$shared_ptr@VInstance@RBX@@@2@@boost@@YA?AV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@0@P6AXV?$weak_ptr@VInstance@RBX@@@0@@ZV?$shared_ptr@VInstance@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
