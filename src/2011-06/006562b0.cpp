// roc 2011-06 006562b0  unit: std::D::DU?$char_traits::V?$basic_string::V?$basic_path::V?$basic_filesystem_error::U?$error_info_injector::?$clone_impl  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006562b0
//
// 006562b0  83ec08               sub esp, 8
// 006562b3  56                   push esi
// 006562b4  8b742410             mov esi, dword ptr [esp + 0x10]
// 006562b8  57                   push edi
// 006562b9  8bf9                 mov edi, ecx
// 006562bb  56                   push esi
// 006562bc  8d4c2410             lea ecx, [esp + 0x10]
// 006562c0  8974240c             mov dword ptr [esp + 0xc], esi
// 006562c4  e877f6ffff           call 0x655940
// 006562c9  56                   push esi
// 006562ca  8d442410             lea eax, [esp + 0x10]
// 006562ce  56                   push esi
// 006562cf  50                   push eax
// 006562d0  e86b532100           call 0x86b640
// 006562d5  8d4c2414             lea ecx, [esp + 0x14]
// 006562d9  83c40c               add esp, 0xc
// 006562dc  3bcf                 cmp ecx, edi
// 006562de  7406                 je 0x6562e6
// 006562e0  8b542408             mov edx, dword ptr [esp + 8]
// 006562e4  8917                 mov dword ptr [edi], edx
// 006562e6  8b7704               mov esi, dword ptr [edi + 4]
// 006562e9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006562ed  894704               mov dword ptr [edi + 4], eax
// 006562f0  85f6                 test esi, esi
// 006562f2  742a                 je 0x65631e
// 006562f4  8d4e04               lea ecx, [esi + 4]
// 006562f7  83caff               or edx, 0xffffffff
// 006562fa  f00fc111             lock xadd dword ptr [ecx], edx
// 006562fe  751e                 jne 0x65631e
// 00656300  8b06                 mov eax, dword ptr [esi]
// 00656302  8b5004               mov edx, dword ptr [eax + 4]
// 00656305  8bce                 mov ecx, esi
// 00656307  ffd2                 call edx
// 00656309  8d4608               lea eax, [esi + 8]
// 0065630c  83c9ff               or ecx, 0xffffffff
// 0065630f  f00fc108             lock xadd dword ptr [eax], ecx
// 00656313  7509                 jne 0x65631e
// 00656315  8b16                 mov edx, dword ptr [esi]
// 00656317  8b4208               mov eax, dword ptr [edx + 8]
// 0065631a  8bce                 mov ecx, esi
// 0065631c  ffd0                 call eax
// 0065631e  5f                   pop edi
// 0065631f  5e                   pop esi
// 00656320  83c408               add esp, 8
// 00656323  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
