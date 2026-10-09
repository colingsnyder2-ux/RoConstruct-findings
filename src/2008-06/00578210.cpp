// roc 2008-06 00578210  unit: RBX::VLocalBackpack::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00578210
//
// 00578210  6aff                 push -1
// 00578212  68a9677c00           push 0x7c67a9
// 00578217  64a100000000         mov eax, dword ptr fs:[0]
// 0057821d  50                   push eax
// 0057821e  64892500000000       mov dword ptr fs:[0], esp
// 00578225  83ec0c               sub esp, 0xc
// 00578228  8d442404             lea eax, [esp + 4]
// 0057822c  50                   push eax
// 0057822d  c744240400000000     mov dword ptr [esp + 4], 0
// 00578235  e876efffff           call 0x5771b0
// 0057823a  8b08                 mov ecx, dword ptr [eax]
// 0057823c  83c404               add esp, 4
// 0057823f  85c9                 test ecx, ecx
// 00578241  7405                 je 0x578248
// 00578243  83c110               add ecx, 0x10
// 00578246  eb02                 jmp 0x57824a
// 00578248  33c9                 xor ecx, ecx
// 0057824a  56                   push esi
// 0057824b  57                   push edi
// 0057824c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00578250  890f                 mov dword ptr [edi], ecx
// 00578252  8b4004               mov eax, dword ptr [eax + 4]
// 00578255  894704               mov dword ptr [edi + 4], eax
// 00578258  85c0                 test eax, eax
// 0057825a  740c                 je 0x578268
// 0057825c  83c004               add eax, 4
// 0057825f  b901000000           mov ecx, 1
// 00578264  f00fc108             lock xadd dword ptr [eax], ecx
// 00578268  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057826c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00578274  c744240801000000     mov dword ptr [esp + 8], 1
// 0057827c  85f6                 test esi, esi
// 0057827e  742a                 je 0x5782aa
// 00578280  8d5604               lea edx, [esi + 4]
// 00578283  83c8ff               or eax, 0xffffffff
// 00578286  f00fc102             lock xadd dword ptr [edx], eax
// 0057828a  751e                 jne 0x5782aa
// 0057828c  8b16                 mov edx, dword ptr [esi]
// 0057828e  8b4204               mov eax, dword ptr [edx + 4]
// 00578291  8bce                 mov ecx, esi
// 00578293  ffd0                 call eax
// 00578295  8d4e08               lea ecx, [esi + 8]
// 00578298  83caff               or edx, 0xffffffff
// 0057829b  f00fc111             lock xadd dword ptr [ecx], edx
// 0057829f  7509                 jne 0x5782aa
// 005782a1  8b06                 mov eax, dword ptr [esi]
// 005782a3  8b5008               mov edx, dword ptr [eax + 8]
// 005782a6  8bce                 mov ecx, esi
// 005782a8  ffd2                 call edx
// 005782aa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005782ae  8bc7                 mov eax, edi
// 005782b0  5f                   pop edi
// 005782b1  5e                   pop esi
// 005782b2  64890d00000000       mov dword ptr fs:[0], ecx
// 005782b9  83c418               add esp, 0x18
// 005782bc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
