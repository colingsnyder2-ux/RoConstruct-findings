// roc 2012-06 007b26b0  unit: RBX::VCacheableContentProvider::?$NonFactoryProduct  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b26b0
//
// 007b26b0  83ec08               sub esp, 8
// 007b26b3  56                   push esi
// 007b26b4  8b742410             mov esi, dword ptr [esp + 0x10]
// 007b26b8  57                   push edi
// 007b26b9  8bf9                 mov edi, ecx
// 007b26bb  56                   push esi
// 007b26bc  8d4c2410             lea ecx, [esp + 0x10]
// 007b26c0  8974240c             mov dword ptr [esp + 0xc], esi
// 007b26c4  e867feffff           call 0x7b2530
// 007b26c9  56                   push esi
// 007b26ca  8d442410             lea eax, [esp + 0x10]
// 007b26ce  56                   push esi
// 007b26cf  50                   push eax
// 007b26d0  e8bb80deff           call 0x59a790
// 007b26d5  8d4c2414             lea ecx, [esp + 0x14]
// 007b26d9  83c40c               add esp, 0xc
// 007b26dc  3bcf                 cmp ecx, edi
// 007b26de  7406                 je 0x7b26e6
// 007b26e0  8b542408             mov edx, dword ptr [esp + 8]
// 007b26e4  8917                 mov dword ptr [edi], edx
// 007b26e6  8b7704               mov esi, dword ptr [edi + 4]
// 007b26e9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007b26ed  894704               mov dword ptr [edi + 4], eax
// 007b26f0  85f6                 test esi, esi
// 007b26f2  742a                 je 0x7b271e
// 007b26f4  8d4e04               lea ecx, [esi + 4]
// 007b26f7  83caff               or edx, 0xffffffff
// 007b26fa  f00fc111             lock xadd dword ptr [ecx], edx
// 007b26fe  751e                 jne 0x7b271e
// 007b2700  8b06                 mov eax, dword ptr [esi]
// 007b2702  8b5004               mov edx, dword ptr [eax + 4]
// 007b2705  8bce                 mov ecx, esi
// 007b2707  ffd2                 call edx
// 007b2709  8d4608               lea eax, [esi + 8]
// 007b270c  83c9ff               or ecx, 0xffffffff
// 007b270f  f00fc108             lock xadd dword ptr [eax], ecx
// 007b2713  7509                 jne 0x7b271e
// 007b2715  8b16                 mov edx, dword ptr [esi]
// 007b2717  8b4208               mov eax, dword ptr [edx + 8]
// 007b271a  8bce                 mov ecx, esi
// 007b271c  ffd0                 call eax
// 007b271e  5f                   pop edi
// 007b271f  5e                   pop esi
// 007b2720  83c408               add esp, 8
// 007b2723  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
