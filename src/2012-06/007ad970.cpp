// roc 2012-06 007ad970  unit: RBX::VCacheableContentProvider::?$NonFactoryProduct  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007ad970
//
// 007ad970  83ec08               sub esp, 8
// 007ad973  56                   push esi
// 007ad974  8b742410             mov esi, dword ptr [esp + 0x10]
// 007ad978  57                   push edi
// 007ad979  8bf9                 mov edi, ecx
// 007ad97b  56                   push esi
// 007ad97c  8d4c2410             lea ecx, [esp + 0x10]
// 007ad980  8974240c             mov dword ptr [esp + 0xc], esi
// 007ad984  e867feffff           call 0x7ad7f0
// 007ad989  56                   push esi
// 007ad98a  8d442410             lea eax, [esp + 0x10]
// 007ad98e  56                   push esi
// 007ad98f  50                   push eax
// 007ad990  e8fbcddeff           call 0x59a790
// 007ad995  8d4c2414             lea ecx, [esp + 0x14]
// 007ad999  83c40c               add esp, 0xc
// 007ad99c  3bcf                 cmp ecx, edi
// 007ad99e  7406                 je 0x7ad9a6
// 007ad9a0  8b542408             mov edx, dword ptr [esp + 8]
// 007ad9a4  8917                 mov dword ptr [edi], edx
// 007ad9a6  8b7704               mov esi, dword ptr [edi + 4]
// 007ad9a9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007ad9ad  894704               mov dword ptr [edi + 4], eax
// 007ad9b0  85f6                 test esi, esi
// 007ad9b2  742a                 je 0x7ad9de
// 007ad9b4  8d4e04               lea ecx, [esi + 4]
// 007ad9b7  83caff               or edx, 0xffffffff
// 007ad9ba  f00fc111             lock xadd dword ptr [ecx], edx
// 007ad9be  751e                 jne 0x7ad9de
// 007ad9c0  8b06                 mov eax, dword ptr [esi]
// 007ad9c2  8b5004               mov edx, dword ptr [eax + 4]
// 007ad9c5  8bce                 mov ecx, esi
// 007ad9c7  ffd2                 call edx
// 007ad9c9  8d4608               lea eax, [esi + 8]
// 007ad9cc  83c9ff               or ecx, 0xffffffff
// 007ad9cf  f00fc108             lock xadd dword ptr [eax], ecx
// 007ad9d3  7509                 jne 0x7ad9de
// 007ad9d5  8b16                 mov edx, dword ptr [esi]
// 007ad9d7  8b4208               mov eax, dword ptr [edx + 8]
// 007ad9da  8bce                 mov ecx, esi
// 007ad9dc  ffd0                 call eax
// 007ad9de  5f                   pop edi
// 007ad9df  5e                   pop esi
// 007ad9e0  83c408               add esp, 8
// 007ad9e3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
