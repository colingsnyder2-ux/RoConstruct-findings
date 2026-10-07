// roc 2010-06 004ff170  unit: RBX::Network::ProfiledRakPeer  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ff170
//
// 004ff170  83ec08               sub esp, 8
// 004ff173  56                   push esi
// 004ff174  8b742410             mov esi, dword ptr [esp + 0x10]
// 004ff178  57                   push edi
// 004ff179  8bf9                 mov edi, ecx
// 004ff17b  56                   push esi
// 004ff17c  8d4c2410             lea ecx, [esp + 0x10]
// 004ff180  8974240c             mov dword ptr [esp + 0xc], esi
// 004ff184  e897feffff           call 0x4ff020
// 004ff189  56                   push esi
// 004ff18a  8d442410             lea eax, [esp + 0x10]
// 004ff18e  56                   push esi
// 004ff18f  50                   push eax
// 004ff190  e81b54f5ff           call 0x4545b0
// 004ff195  8d4c2414             lea ecx, [esp + 0x14]
// 004ff199  83c40c               add esp, 0xc
// 004ff19c  3bcf                 cmp ecx, edi
// 004ff19e  7406                 je 0x4ff1a6
// 004ff1a0  8b542408             mov edx, dword ptr [esp + 8]
// 004ff1a4  8917                 mov dword ptr [edi], edx
// 004ff1a6  8b7704               mov esi, dword ptr [edi + 4]
// 004ff1a9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ff1ad  894704               mov dword ptr [edi + 4], eax
// 004ff1b0  85f6                 test esi, esi
// 004ff1b2  742a                 je 0x4ff1de
// 004ff1b4  8d4e04               lea ecx, [esi + 4]
// 004ff1b7  83caff               or edx, 0xffffffff
// 004ff1ba  f00fc111             lock xadd dword ptr [ecx], edx
// 004ff1be  751e                 jne 0x4ff1de
// 004ff1c0  8b06                 mov eax, dword ptr [esi]
// 004ff1c2  8b5004               mov edx, dword ptr [eax + 4]
// 004ff1c5  8bce                 mov ecx, esi
// 004ff1c7  ffd2                 call edx
// 004ff1c9  8d4608               lea eax, [esi + 8]
// 004ff1cc  83c9ff               or ecx, 0xffffffff
// 004ff1cf  f00fc108             lock xadd dword ptr [eax], ecx
// 004ff1d3  7509                 jne 0x4ff1de
// 004ff1d5  8b16                 mov edx, dword ptr [esi]
// 004ff1d7  8b4208               mov eax, dword ptr [edx + 8]
// 004ff1da  8bce                 mov ecx, esi
// 004ff1dc  ffd0                 call eax
// 004ff1de  5f                   pop edi
// 004ff1df  5e                   pop esi
// 004ff1e0  83c408               add esp, 8
// 004ff1e3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
