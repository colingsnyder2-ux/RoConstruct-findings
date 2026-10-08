// roc 2008-06 0063b770  unit: RBX::VDebrisService::?$FactoryProduct  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063b770
//
// 0063b770  6aff                 push -1
// 0063b772  6841a67d00           push 0x7da641
// 0063b777  64a100000000         mov eax, dword ptr fs:[0]
// 0063b77d  50                   push eax
// 0063b77e  64892500000000       mov dword ptr fs:[0], esp
// 0063b785  83ec0c               sub esp, 0xc
// 0063b788  56                   push esi
// 0063b789  57                   push edi
// 0063b78a  c744240800000000     mov dword ptr [esp + 8], 0
// 0063b792  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0063b796  83ec08               sub esp, 8
// 0063b799  8bc4                 mov eax, esp
// 0063b79b  89642414             mov dword ptr [esp + 0x14], esp
// 0063b79f  8908                 mov dword ptr [eax], ecx
// 0063b7a1  8b542438             mov edx, dword ptr [esp + 0x38]
// 0063b7a5  895004               mov dword ptr [eax + 4], edx
// 0063b7a8  8b442438             mov eax, dword ptr [esp + 0x38]
// 0063b7ac  be01000000           mov esi, 1
// 0063b7b1  89742424             mov dword ptr [esp + 0x24], esi
// 0063b7b5  85c0                 test eax, eax
// 0063b7b7  7409                 je 0x63b7c2
// 0063b7b9  83c004               add eax, 4
// 0063b7bc  8bce                 mov ecx, esi
// 0063b7be  f00fc108             lock xadd dword ptr [eax], ecx
// 0063b7c2  8d4c2414             lea ecx, [esp + 0x14]
// 0063b7c6  e865d0fdff           call 0x618830
// 0063b7cb  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0063b7cf  8b542428             mov edx, dword ptr [esp + 0x28]
// 0063b7d3  8917                 mov dword ptr [edi], edx
// 0063b7d5  8b08                 mov ecx, dword ptr [eax]
// 0063b7d7  894f04               mov dword ptr [edi + 4], ecx
// 0063b7da  8b4004               mov eax, dword ptr [eax + 4]
// 0063b7dd  894708               mov dword ptr [edi + 8], eax
// 0063b7e0  85c0                 test eax, eax
// 0063b7e2  7409                 je 0x63b7ed
// 0063b7e4  83c004               add eax, 4
// 0063b7e7  8bd6                 mov edx, esi
// 0063b7e9  f00fc110             lock xadd dword ptr [eax], edx
// 0063b7ed  89742408             mov dword ptr [esp + 8], esi
// 0063b7f1  8b742410             mov esi, dword ptr [esp + 0x10]
// 0063b7f5  85f6                 test esi, esi
// 0063b7f7  742a                 je 0x63b823
// 0063b7f9  8d4604               lea eax, [esi + 4]
// 0063b7fc  83c9ff               or ecx, 0xffffffff
// 0063b7ff  f00fc108             lock xadd dword ptr [eax], ecx
// 0063b803  751e                 jne 0x63b823
// 0063b805  8b16                 mov edx, dword ptr [esi]
// 0063b807  8b4204               mov eax, dword ptr [edx + 4]
// 0063b80a  8bce                 mov ecx, esi
// 0063b80c  ffd0                 call eax
// 0063b80e  8d4e08               lea ecx, [esi + 8]
// 0063b811  83caff               or edx, 0xffffffff
// 0063b814  f00fc111             lock xadd dword ptr [ecx], edx
// 0063b818  7509                 jne 0x63b823
// 0063b81a  8b06                 mov eax, dword ptr [esi]
// 0063b81c  8b5008               mov edx, dword ptr [eax + 8]
// 0063b81f  8bce                 mov ecx, esi
// 0063b821  ffd2                 call edx
// 0063b823  8b742430             mov esi, dword ptr [esp + 0x30]
// 0063b827  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0063b82c  85f6                 test esi, esi
// 0063b82e  742a                 je 0x63b85a
// 0063b830  8d4604               lea eax, [esi + 4]
// 0063b833  83c9ff               or ecx, 0xffffffff
// 0063b836  f00fc108             lock xadd dword ptr [eax], ecx
// 0063b83a  751e                 jne 0x63b85a
// 0063b83c  8b16                 mov edx, dword ptr [esi]
// 0063b83e  8b4204               mov eax, dword ptr [edx + 4]
// 0063b841  8bce                 mov ecx, esi
// 0063b843  ffd0                 call eax
// 0063b845  8d4e08               lea ecx, [esi + 8]
// 0063b848  83caff               or edx, 0xffffffff
// 0063b84b  f00fc111             lock xadd dword ptr [ecx], edx
// 0063b84f  7509                 jne 0x63b85a
// 0063b851  8b06                 mov eax, dword ptr [esi]
// 0063b853  8b5008               mov edx, dword ptr [eax + 8]
// 0063b856  8bce                 mov ecx, esi
// 0063b858  ffd2                 call edx
// 0063b85a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063b85e  8bc7                 mov eax, edi
// 0063b860  5f                   pop edi
// 0063b861  64890d00000000       mov dword ptr fs:[0], ecx
// 0063b868  5e                   pop esi
// 0063b869  83c418               add esp, 0x18
// 0063b86c  c3                   ret 
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$bind@XV?$weak_ptr@VInstance@RBX@@@boost@@V?$shared_ptr@VInstance@RBX@@@2@@boost@@YA?AV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@0@P6AXV?$weak_ptr@VInstance@RBX@@@0@@ZV?$shared_ptr@VInstance@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
