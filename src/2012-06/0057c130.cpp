// roc 2012-06 0057c130  unit: RBX::Network::Replicator::NewInstanceItem  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0057c130
//
// 0057c130  83ec08               sub esp, 8
// 0057c133  56                   push esi
// 0057c134  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057c138  57                   push edi
// 0057c139  8bf9                 mov edi, ecx
// 0057c13b  56                   push esi
// 0057c13c  8d4c2410             lea ecx, [esp + 0x10]
// 0057c140  8974240c             mov dword ptr [esp + 0xc], esi
// 0057c144  e847e6ffff           call 0x57a790
// 0057c149  56                   push esi
// 0057c14a  8d442410             lea eax, [esp + 0x10]
// 0057c14e  56                   push esi
// 0057c14f  50                   push eax
// 0057c150  e83be60100           call 0x59a790
// 0057c155  8d4c2414             lea ecx, [esp + 0x14]
// 0057c159  83c40c               add esp, 0xc
// 0057c15c  3bcf                 cmp ecx, edi
// 0057c15e  7406                 je 0x57c166
// 0057c160  8b542408             mov edx, dword ptr [esp + 8]
// 0057c164  8917                 mov dword ptr [edi], edx
// 0057c166  8b7704               mov esi, dword ptr [edi + 4]
// 0057c169  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057c16d  894704               mov dword ptr [edi + 4], eax
// 0057c170  85f6                 test esi, esi
// 0057c172  742a                 je 0x57c19e
// 0057c174  8d4e04               lea ecx, [esi + 4]
// 0057c177  83caff               or edx, 0xffffffff
// 0057c17a  f00fc111             lock xadd dword ptr [ecx], edx
// 0057c17e  751e                 jne 0x57c19e
// 0057c180  8b06                 mov eax, dword ptr [esi]
// 0057c182  8b5004               mov edx, dword ptr [eax + 4]
// 0057c185  8bce                 mov ecx, esi
// 0057c187  ffd2                 call edx
// 0057c189  8d4608               lea eax, [esi + 8]
// 0057c18c  83c9ff               or ecx, 0xffffffff
// 0057c18f  f00fc108             lock xadd dword ptr [eax], ecx
// 0057c193  7509                 jne 0x57c19e
// 0057c195  8b16                 mov edx, dword ptr [esi]
// 0057c197  8b4208               mov eax, dword ptr [edx + 8]
// 0057c19a  8bce                 mov ecx, esi
// 0057c19c  ffd0                 call eax
// 0057c19e  5f                   pop edi
// 0057c19f  5e                   pop esi
// 0057c1a0  83c408               add esp, 8
// 0057c1a3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
