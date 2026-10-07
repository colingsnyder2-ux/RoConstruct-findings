// roc 2010-06 00909440  unit: Ogre::RbxCluster::VRbxPartBinding::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00909440
//
// 00909440  83ec08               sub esp, 8
// 00909443  56                   push esi
// 00909444  8b742410             mov esi, dword ptr [esp + 0x10]
// 00909448  57                   push edi
// 00909449  8bf9                 mov edi, ecx
// 0090944b  56                   push esi
// 0090944c  8d4c2410             lea ecx, [esp + 0x10]
// 00909450  8974240c             mov dword ptr [esp + 0xc], esi
// 00909454  e897f9ffff           call 0x908df0
// 00909459  56                   push esi
// 0090945a  8d442410             lea eax, [esp + 0x10]
// 0090945e  56                   push esi
// 0090945f  50                   push eax
// 00909460  e84bb1b4ff           call 0x4545b0
// 00909465  8d4c2414             lea ecx, [esp + 0x14]
// 00909469  83c40c               add esp, 0xc
// 0090946c  3bcf                 cmp ecx, edi
// 0090946e  7406                 je 0x909476
// 00909470  8b542408             mov edx, dword ptr [esp + 8]
// 00909474  8917                 mov dword ptr [edi], edx
// 00909476  8b7704               mov esi, dword ptr [edi + 4]
// 00909479  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0090947d  894704               mov dword ptr [edi + 4], eax
// 00909480  85f6                 test esi, esi
// 00909482  742a                 je 0x9094ae
// 00909484  8d4e04               lea ecx, [esi + 4]
// 00909487  83caff               or edx, 0xffffffff
// 0090948a  f00fc111             lock xadd dword ptr [ecx], edx
// 0090948e  751e                 jne 0x9094ae
// 00909490  8b06                 mov eax, dword ptr [esi]
// 00909492  8b5004               mov edx, dword ptr [eax + 4]
// 00909495  8bce                 mov ecx, esi
// 00909497  ffd2                 call edx
// 00909499  8d4608               lea eax, [esi + 8]
// 0090949c  83c9ff               or ecx, 0xffffffff
// 0090949f  f00fc108             lock xadd dword ptr [eax], ecx
// 009094a3  7509                 jne 0x9094ae
// 009094a5  8b16                 mov edx, dword ptr [esi]
// 009094a7  8b4208               mov eax, dword ptr [edx + 8]
// 009094aa  8bce                 mov ecx, esi
// 009094ac  ffd0                 call eax
// 009094ae  5f                   pop edi
// 009094af  5e                   pop esi
// 009094b0  83c408               add esp, 8
// 009094b3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
