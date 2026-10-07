// roc 2010-06 009091c0  unit: Ogre::RbxCluster  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009091c0
//
// 009091c0  83ec08               sub esp, 8
// 009091c3  56                   push esi
// 009091c4  8b742410             mov esi, dword ptr [esp + 0x10]
// 009091c8  57                   push edi
// 009091c9  8bf9                 mov edi, ecx
// 009091cb  56                   push esi
// 009091cc  8d4c2410             lea ecx, [esp + 0x10]
// 009091d0  8974240c             mov dword ptr [esp + 0xc], esi
// 009091d4  e817faffff           call 0x908bf0
// 009091d9  56                   push esi
// 009091da  8d442410             lea eax, [esp + 0x10]
// 009091de  56                   push esi
// 009091df  50                   push eax
// 009091e0  e8cbb3b4ff           call 0x4545b0
// 009091e5  8d4c2414             lea ecx, [esp + 0x14]
// 009091e9  83c40c               add esp, 0xc
// 009091ec  3bcf                 cmp ecx, edi
// 009091ee  7406                 je 0x9091f6
// 009091f0  8b542408             mov edx, dword ptr [esp + 8]
// 009091f4  8917                 mov dword ptr [edi], edx
// 009091f6  8b7704               mov esi, dword ptr [edi + 4]
// 009091f9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009091fd  894704               mov dword ptr [edi + 4], eax
// 00909200  85f6                 test esi, esi
// 00909202  742a                 je 0x90922e
// 00909204  8d4e04               lea ecx, [esi + 4]
// 00909207  83caff               or edx, 0xffffffff
// 0090920a  f00fc111             lock xadd dword ptr [ecx], edx
// 0090920e  751e                 jne 0x90922e
// 00909210  8b06                 mov eax, dword ptr [esi]
// 00909212  8b5004               mov edx, dword ptr [eax + 4]
// 00909215  8bce                 mov ecx, esi
// 00909217  ffd2                 call edx
// 00909219  8d4608               lea eax, [esi + 8]
// 0090921c  83c9ff               or ecx, 0xffffffff
// 0090921f  f00fc108             lock xadd dword ptr [eax], ecx
// 00909223  7509                 jne 0x90922e
// 00909225  8b16                 mov edx, dword ptr [esi]
// 00909227  8b4208               mov eax, dword ptr [edx + 8]
// 0090922a  8bce                 mov ecx, esi
// 0090922c  ffd0                 call eax
// 0090922e  5f                   pop edi
// 0090922f  5e                   pop esi
// 00909230  83c408               add esp, 8
// 00909233  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
