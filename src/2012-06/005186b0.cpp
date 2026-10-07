// roc 2012-06 005186b0  unit: Ogre::RbxCluster  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005186b0
//
// 005186b0  83ec08               sub esp, 8
// 005186b3  56                   push esi
// 005186b4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005186b8  57                   push edi
// 005186b9  8bf9                 mov edi, ecx
// 005186bb  56                   push esi
// 005186bc  8d4c2410             lea ecx, [esp + 0x10]
// 005186c0  8974240c             mov dword ptr [esp + 0xc], esi
// 005186c4  e8a7f9ffff           call 0x518070
// 005186c9  56                   push esi
// 005186ca  8d442410             lea eax, [esp + 0x10]
// 005186ce  56                   push esi
// 005186cf  50                   push eax
// 005186d0  e8bb200800           call 0x59a790
// 005186d5  8d4c2414             lea ecx, [esp + 0x14]
// 005186d9  83c40c               add esp, 0xc
// 005186dc  3bcf                 cmp ecx, edi
// 005186de  7406                 je 0x5186e6
// 005186e0  8b542408             mov edx, dword ptr [esp + 8]
// 005186e4  8917                 mov dword ptr [edi], edx
// 005186e6  8b7704               mov esi, dword ptr [edi + 4]
// 005186e9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005186ed  894704               mov dword ptr [edi + 4], eax
// 005186f0  85f6                 test esi, esi
// 005186f2  742a                 je 0x51871e
// 005186f4  8d4e04               lea ecx, [esi + 4]
// 005186f7  83caff               or edx, 0xffffffff
// 005186fa  f00fc111             lock xadd dword ptr [ecx], edx
// 005186fe  751e                 jne 0x51871e
// 00518700  8b06                 mov eax, dword ptr [esi]
// 00518702  8b5004               mov edx, dword ptr [eax + 4]
// 00518705  8bce                 mov ecx, esi
// 00518707  ffd2                 call edx
// 00518709  8d4608               lea eax, [esi + 8]
// 0051870c  83c9ff               or ecx, 0xffffffff
// 0051870f  f00fc108             lock xadd dword ptr [eax], ecx
// 00518713  7509                 jne 0x51871e
// 00518715  8b16                 mov edx, dword ptr [esi]
// 00518717  8b4208               mov eax, dword ptr [edx + 8]
// 0051871a  8bce                 mov ecx, esi
// 0051871c  ffd0                 call eax
// 0051871e  5f                   pop edi
// 0051871f  5e                   pop esi
// 00518720  83c408               add esp, 8
// 00518723  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
