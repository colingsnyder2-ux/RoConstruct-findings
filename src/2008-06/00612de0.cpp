// roc 2008-06 00612de0  unit: seg_00610000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00612de0
//
// 00612de0  83ec08               sub esp, 8
// 00612de3  56                   push esi
// 00612de4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00612de8  57                   push edi
// 00612de9  8bf9                 mov edi, ecx
// 00612deb  56                   push esi
// 00612dec  8d4c2410             lea ecx, [esp + 0x10]
// 00612df0  8974240c             mov dword ptr [esp + 0xc], esi
// 00612df4  e8077ae1ff           call 0x42a800
// 00612df9  56                   push esi
// 00612dfa  8d442410             lea eax, [esp + 0x10]
// 00612dfe  56                   push esi
// 00612dff  50                   push eax
// 00612e00  e80ba6e6ff           call 0x47d410
// 00612e05  8d4c2414             lea ecx, [esp + 0x14]
// 00612e09  83c40c               add esp, 0xc
// 00612e0c  3bcf                 cmp ecx, edi
// 00612e0e  7406                 je 0x612e16
// 00612e10  8b542408             mov edx, dword ptr [esp + 8]
// 00612e14  8917                 mov dword ptr [edi], edx
// 00612e16  8b7704               mov esi, dword ptr [edi + 4]
// 00612e19  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00612e1d  894704               mov dword ptr [edi + 4], eax
// 00612e20  85f6                 test esi, esi
// 00612e22  742a                 je 0x612e4e
// 00612e24  8d4e04               lea ecx, [esi + 4]
// 00612e27  83caff               or edx, 0xffffffff
// 00612e2a  f00fc111             lock xadd dword ptr [ecx], edx
// 00612e2e  751e                 jne 0x612e4e
// 00612e30  8b06                 mov eax, dword ptr [esi]
// 00612e32  8b5004               mov edx, dword ptr [eax + 4]
// 00612e35  8bce                 mov ecx, esi
// 00612e37  ffd2                 call edx
// 00612e39  8d4608               lea eax, [esi + 8]
// 00612e3c  83c9ff               or ecx, 0xffffffff
// 00612e3f  f00fc108             lock xadd dword ptr [eax], ecx
// 00612e43  7509                 jne 0x612e4e
// 00612e45  8b16                 mov edx, dword ptr [esi]
// 00612e47  8b4208               mov eax, dword ptr [edx + 8]
// 00612e4a  8bce                 mov ecx, esi
// 00612e4c  ffd0                 call eax
// 00612e4e  5f                   pop edi
// 00612e4f  5e                   pop esi
// 00612e50  83c408               add esp, 8
// 00612e53  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
