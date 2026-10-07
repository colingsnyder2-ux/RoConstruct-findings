// roc 2009-06 005e2730  unit: boost::Vthread::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e2730
//
// 005e2730  83ec08               sub esp, 8
// 005e2733  56                   push esi
// 005e2734  8b742410             mov esi, dword ptr [esp + 0x10]
// 005e2738  57                   push edi
// 005e2739  8bf9                 mov edi, ecx
// 005e273b  56                   push esi
// 005e273c  8d4c2410             lea ecx, [esp + 0x10]
// 005e2740  8974240c             mov dword ptr [esp + 0xc], esi
// 005e2744  e837fbffff           call 0x5e2280
// 005e2749  56                   push esi
// 005e274a  8d442410             lea eax, [esp + 0x10]
// 005e274e  56                   push esi
// 005e274f  50                   push eax
// 005e2750  e88b220900           call 0x6749e0
// 005e2755  8d4c2414             lea ecx, [esp + 0x14]
// 005e2759  83c40c               add esp, 0xc
// 005e275c  3bcf                 cmp ecx, edi
// 005e275e  7406                 je 0x5e2766
// 005e2760  8b542408             mov edx, dword ptr [esp + 8]
// 005e2764  8917                 mov dword ptr [edi], edx
// 005e2766  8b7704               mov esi, dword ptr [edi + 4]
// 005e2769  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005e276d  894704               mov dword ptr [edi + 4], eax
// 005e2770  85f6                 test esi, esi
// 005e2772  742a                 je 0x5e279e
// 005e2774  8d4e04               lea ecx, [esi + 4]
// 005e2777  83caff               or edx, 0xffffffff
// 005e277a  f00fc111             lock xadd dword ptr [ecx], edx
// 005e277e  751e                 jne 0x5e279e
// 005e2780  8b06                 mov eax, dword ptr [esi]
// 005e2782  8b5004               mov edx, dword ptr [eax + 4]
// 005e2785  8bce                 mov ecx, esi
// 005e2787  ffd2                 call edx
// 005e2789  8d4608               lea eax, [esi + 8]
// 005e278c  83c9ff               or ecx, 0xffffffff
// 005e278f  f00fc108             lock xadd dword ptr [eax], ecx
// 005e2793  7509                 jne 0x5e279e
// 005e2795  8b16                 mov edx, dword ptr [esi]
// 005e2797  8b4208               mov eax, dword ptr [edx + 8]
// 005e279a  8bce                 mov ecx, esi
// 005e279c  ffd0                 call eax
// 005e279e  5f                   pop edi
// 005e279f  5e                   pop esi
// 005e27a0  83c408               add esp, 8
// 005e27a3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
