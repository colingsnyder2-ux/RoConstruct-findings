// roc 2010-06 007221d0  unit: RBX::UniversalTool  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007221d0
//
// 007221d0  83ec08               sub esp, 8
// 007221d3  56                   push esi
// 007221d4  8b742410             mov esi, dword ptr [esp + 0x10]
// 007221d8  57                   push edi
// 007221d9  8bf9                 mov edi, ecx
// 007221db  56                   push esi
// 007221dc  8d4c2410             lea ecx, [esp + 0x10]
// 007221e0  8974240c             mov dword ptr [esp + 0xc], esi
// 007221e4  e857ffffff           call 0x722140
// 007221e9  56                   push esi
// 007221ea  8d442410             lea eax, [esp + 0x10]
// 007221ee  56                   push esi
// 007221ef  50                   push eax
// 007221f0  e8bb23d3ff           call 0x4545b0
// 007221f5  8d4c2414             lea ecx, [esp + 0x14]
// 007221f9  83c40c               add esp, 0xc
// 007221fc  3bcf                 cmp ecx, edi
// 007221fe  7406                 je 0x722206
// 00722200  8b542408             mov edx, dword ptr [esp + 8]
// 00722204  8917                 mov dword ptr [edi], edx
// 00722206  8b7704               mov esi, dword ptr [edi + 4]
// 00722209  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0072220d  894704               mov dword ptr [edi + 4], eax
// 00722210  85f6                 test esi, esi
// 00722212  742a                 je 0x72223e
// 00722214  8d4e04               lea ecx, [esi + 4]
// 00722217  83caff               or edx, 0xffffffff
// 0072221a  f00fc111             lock xadd dword ptr [ecx], edx
// 0072221e  751e                 jne 0x72223e
// 00722220  8b06                 mov eax, dword ptr [esi]
// 00722222  8b5004               mov edx, dword ptr [eax + 4]
// 00722225  8bce                 mov ecx, esi
// 00722227  ffd2                 call edx
// 00722229  8d4608               lea eax, [esi + 8]
// 0072222c  83c9ff               or ecx, 0xffffffff
// 0072222f  f00fc108             lock xadd dword ptr [eax], ecx
// 00722233  7509                 jne 0x72223e
// 00722235  8b16                 mov edx, dword ptr [esi]
// 00722237  8b4208               mov eax, dword ptr [edx + 8]
// 0072223a  8bce                 mov ecx, esi
// 0072223c  ffd0                 call eax
// 0072223e  5f                   pop edi
// 0072223f  5e                   pop esi
// 00722240  83c408               add esp, 8
// 00722243  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
