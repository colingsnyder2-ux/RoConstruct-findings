// roc 2011-06 006eb2b0  unit: VWiniInetRequest_source::?$stream_buffer  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006eb2b0
//
// 006eb2b0  83ec08               sub esp, 8
// 006eb2b3  56                   push esi
// 006eb2b4  8b742410             mov esi, dword ptr [esp + 0x10]
// 006eb2b8  57                   push edi
// 006eb2b9  8bf9                 mov edi, ecx
// 006eb2bb  56                   push esi
// 006eb2bc  8d4c2410             lea ecx, [esp + 0x10]
// 006eb2c0  8974240c             mov dword ptr [esp + 0xc], esi
// 006eb2c4  e8c7fcffff           call 0x6eaf90
// 006eb2c9  56                   push esi
// 006eb2ca  8d442410             lea eax, [esp + 0x10]
// 006eb2ce  56                   push esi
// 006eb2cf  50                   push eax
// 006eb2d0  e86b031800           call 0x86b640
// 006eb2d5  8d4c2414             lea ecx, [esp + 0x14]
// 006eb2d9  83c40c               add esp, 0xc
// 006eb2dc  3bcf                 cmp ecx, edi
// 006eb2de  7406                 je 0x6eb2e6
// 006eb2e0  8b542408             mov edx, dword ptr [esp + 8]
// 006eb2e4  8917                 mov dword ptr [edi], edx
// 006eb2e6  8b7704               mov esi, dword ptr [edi + 4]
// 006eb2e9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006eb2ed  894704               mov dword ptr [edi + 4], eax
// 006eb2f0  85f6                 test esi, esi
// 006eb2f2  742a                 je 0x6eb31e
// 006eb2f4  8d4e04               lea ecx, [esi + 4]
// 006eb2f7  83caff               or edx, 0xffffffff
// 006eb2fa  f00fc111             lock xadd dword ptr [ecx], edx
// 006eb2fe  751e                 jne 0x6eb31e
// 006eb300  8b06                 mov eax, dword ptr [esi]
// 006eb302  8b5004               mov edx, dword ptr [eax + 4]
// 006eb305  8bce                 mov ecx, esi
// 006eb307  ffd2                 call edx
// 006eb309  8d4608               lea eax, [esi + 8]
// 006eb30c  83c9ff               or ecx, 0xffffffff
// 006eb30f  f00fc108             lock xadd dword ptr [eax], ecx
// 006eb313  7509                 jne 0x6eb31e
// 006eb315  8b16                 mov edx, dword ptr [esi]
// 006eb317  8b4208               mov eax, dword ptr [edx + 8]
// 006eb31a  8bce                 mov ecx, esi
// 006eb31c  ffd0                 call eax
// 006eb31e  5f                   pop edi
// 006eb31f  5e                   pop esi
// 006eb320  83c408               add esp, 8
// 006eb323  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
