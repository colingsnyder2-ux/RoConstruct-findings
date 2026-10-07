// roc 2009-06 004e21d0  unit: ProfiledRakPeer  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e21d0
//
// 004e21d0  83ec08               sub esp, 8
// 004e21d3  56                   push esi
// 004e21d4  8b742410             mov esi, dword ptr [esp + 0x10]
// 004e21d8  57                   push edi
// 004e21d9  8bf9                 mov edi, ecx
// 004e21db  56                   push esi
// 004e21dc  8d4c2410             lea ecx, [esp + 0x10]
// 004e21e0  8974240c             mov dword ptr [esp + 0xc], esi
// 004e21e4  e867feffff           call 0x4e2050
// 004e21e9  56                   push esi
// 004e21ea  8d442410             lea eax, [esp + 0x10]
// 004e21ee  56                   push esi
// 004e21ef  50                   push eax
// 004e21f0  e8eb271900           call 0x6749e0
// 004e21f5  8d4c2414             lea ecx, [esp + 0x14]
// 004e21f9  83c40c               add esp, 0xc
// 004e21fc  3bcf                 cmp ecx, edi
// 004e21fe  7406                 je 0x4e2206
// 004e2200  8b542408             mov edx, dword ptr [esp + 8]
// 004e2204  8917                 mov dword ptr [edi], edx
// 004e2206  8b7704               mov esi, dword ptr [edi + 4]
// 004e2209  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e220d  894704               mov dword ptr [edi + 4], eax
// 004e2210  85f6                 test esi, esi
// 004e2212  742a                 je 0x4e223e
// 004e2214  8d4e04               lea ecx, [esi + 4]
// 004e2217  83caff               or edx, 0xffffffff
// 004e221a  f00fc111             lock xadd dword ptr [ecx], edx
// 004e221e  751e                 jne 0x4e223e
// 004e2220  8b06                 mov eax, dword ptr [esi]
// 004e2222  8b5004               mov edx, dword ptr [eax + 4]
// 004e2225  8bce                 mov ecx, esi
// 004e2227  ffd2                 call edx
// 004e2229  8d4608               lea eax, [esi + 8]
// 004e222c  83c9ff               or ecx, 0xffffffff
// 004e222f  f00fc108             lock xadd dword ptr [eax], ecx
// 004e2233  7509                 jne 0x4e223e
// 004e2235  8b16                 mov edx, dword ptr [esi]
// 004e2237  8b4208               mov eax, dword ptr [edx + 8]
// 004e223a  8bce                 mov ecx, esi
// 004e223c  ffd0                 call eax
// 004e223e  5f                   pop edi
// 004e223f  5e                   pop esi
// 004e2240  83c408               add esp, 8
// 004e2243  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
