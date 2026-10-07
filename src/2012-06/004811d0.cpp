// roc 2012-06 004811d0  unit: CRobloxDoc  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004811d0
//
// 004811d0  83ec08               sub esp, 8
// 004811d3  56                   push esi
// 004811d4  8b742410             mov esi, dword ptr [esp + 0x10]
// 004811d8  57                   push edi
// 004811d9  8bf9                 mov edi, ecx
// 004811db  56                   push esi
// 004811dc  8d4c2410             lea ecx, [esp + 0x10]
// 004811e0  8974240c             mov dword ptr [esp + 0xc], esi
// 004811e4  e857e7ffff           call 0x47f940
// 004811e9  56                   push esi
// 004811ea  8d442410             lea eax, [esp + 0x10]
// 004811ee  56                   push esi
// 004811ef  50                   push eax
// 004811f0  e89b951100           call 0x59a790
// 004811f5  8d4c2414             lea ecx, [esp + 0x14]
// 004811f9  83c40c               add esp, 0xc
// 004811fc  3bcf                 cmp ecx, edi
// 004811fe  7406                 je 0x481206
// 00481200  8b542408             mov edx, dword ptr [esp + 8]
// 00481204  8917                 mov dword ptr [edi], edx
// 00481206  8b7704               mov esi, dword ptr [edi + 4]
// 00481209  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048120d  894704               mov dword ptr [edi + 4], eax
// 00481210  85f6                 test esi, esi
// 00481212  742a                 je 0x48123e
// 00481214  8d4e04               lea ecx, [esi + 4]
// 00481217  83caff               or edx, 0xffffffff
// 0048121a  f00fc111             lock xadd dword ptr [ecx], edx
// 0048121e  751e                 jne 0x48123e
// 00481220  8b06                 mov eax, dword ptr [esi]
// 00481222  8b5004               mov edx, dword ptr [eax + 4]
// 00481225  8bce                 mov ecx, esi
// 00481227  ffd2                 call edx
// 00481229  8d4608               lea eax, [esi + 8]
// 0048122c  83c9ff               or ecx, 0xffffffff
// 0048122f  f00fc108             lock xadd dword ptr [eax], ecx
// 00481233  7509                 jne 0x48123e
// 00481235  8b16                 mov edx, dword ptr [esi]
// 00481237  8b4208               mov eax, dword ptr [edx + 8]
// 0048123a  8bce                 mov ecx, esi
// 0048123c  ffd0                 call eax
// 0048123e  5f                   pop edi
// 0048123f  5e                   pop esi
// 00481240  83c408               add esp, 8
// 00481243  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
