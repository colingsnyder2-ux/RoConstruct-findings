// roc 2012-06 008300f0  unit: RBX::BallBlockContact  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008300f0
//
// 008300f0  83ec08               sub esp, 8
// 008300f3  56                   push esi
// 008300f4  8b742410             mov esi, dword ptr [esp + 0x10]
// 008300f8  57                   push edi
// 008300f9  8bf9                 mov edi, ecx
// 008300fb  56                   push esi
// 008300fc  8d4c2410             lea ecx, [esp + 0x10]
// 00830100  8974240c             mov dword ptr [esp + 0xc], esi
// 00830104  e83792e6ff           call 0x699340
// 00830109  56                   push esi
// 0083010a  8d442410             lea eax, [esp + 0x10]
// 0083010e  56                   push esi
// 0083010f  50                   push eax
// 00830110  e87ba6d6ff           call 0x59a790
// 00830115  8d4c2414             lea ecx, [esp + 0x14]
// 00830119  83c40c               add esp, 0xc
// 0083011c  3bcf                 cmp ecx, edi
// 0083011e  7406                 je 0x830126
// 00830120  8b542408             mov edx, dword ptr [esp + 8]
// 00830124  8917                 mov dword ptr [edi], edx
// 00830126  8b7704               mov esi, dword ptr [edi + 4]
// 00830129  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0083012d  894704               mov dword ptr [edi + 4], eax
// 00830130  85f6                 test esi, esi
// 00830132  742a                 je 0x83015e
// 00830134  8d4e04               lea ecx, [esi + 4]
// 00830137  83caff               or edx, 0xffffffff
// 0083013a  f00fc111             lock xadd dword ptr [ecx], edx
// 0083013e  751e                 jne 0x83015e
// 00830140  8b06                 mov eax, dword ptr [esi]
// 00830142  8b5004               mov edx, dword ptr [eax + 4]
// 00830145  8bce                 mov ecx, esi
// 00830147  ffd2                 call edx
// 00830149  8d4608               lea eax, [esi + 8]
// 0083014c  83c9ff               or ecx, 0xffffffff
// 0083014f  f00fc108             lock xadd dword ptr [eax], ecx
// 00830153  7509                 jne 0x83015e
// 00830155  8b16                 mov edx, dword ptr [esi]
// 00830157  8b4208               mov eax, dword ptr [edx + 8]
// 0083015a  8bce                 mov ecx, esi
// 0083015c  ffd0                 call eax
// 0083015e  5f                   pop edi
// 0083015f  5e                   pop esi
// 00830160  83c408               add esp, 8
// 00830163  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
