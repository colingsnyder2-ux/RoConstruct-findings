// roc 2012-06 00837390  unit: VYieldFunctionStateObject::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00837390
//
// 00837390  83ec08               sub esp, 8
// 00837393  56                   push esi
// 00837394  8b742410             mov esi, dword ptr [esp + 0x10]
// 00837398  57                   push edi
// 00837399  8bf9                 mov edi, ecx
// 0083739b  56                   push esi
// 0083739c  8d4c2410             lea ecx, [esp + 0x10]
// 008373a0  8974240c             mov dword ptr [esp + 0xc], esi
// 008373a4  e837d1d5ff           call 0x5944e0
// 008373a9  56                   push esi
// 008373aa  8d442410             lea eax, [esp + 0x10]
// 008373ae  56                   push esi
// 008373af  50                   push eax
// 008373b0  e8db33d6ff           call 0x59a790
// 008373b5  8d4c2414             lea ecx, [esp + 0x14]
// 008373b9  83c40c               add esp, 0xc
// 008373bc  3bcf                 cmp ecx, edi
// 008373be  7406                 je 0x8373c6
// 008373c0  8b542408             mov edx, dword ptr [esp + 8]
// 008373c4  8917                 mov dword ptr [edi], edx
// 008373c6  8b7704               mov esi, dword ptr [edi + 4]
// 008373c9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008373cd  894704               mov dword ptr [edi + 4], eax
// 008373d0  85f6                 test esi, esi
// 008373d2  742a                 je 0x8373fe
// 008373d4  8d4e04               lea ecx, [esi + 4]
// 008373d7  83caff               or edx, 0xffffffff
// 008373da  f00fc111             lock xadd dword ptr [ecx], edx
// 008373de  751e                 jne 0x8373fe
// 008373e0  8b06                 mov eax, dword ptr [esi]
// 008373e2  8b5004               mov edx, dword ptr [eax + 4]
// 008373e5  8bce                 mov ecx, esi
// 008373e7  ffd2                 call edx
// 008373e9  8d4608               lea eax, [esi + 8]
// 008373ec  83c9ff               or ecx, 0xffffffff
// 008373ef  f00fc108             lock xadd dword ptr [eax], ecx
// 008373f3  7509                 jne 0x8373fe
// 008373f5  8b16                 mov edx, dword ptr [esi]
// 008373f7  8b4208               mov eax, dword ptr [edx + 8]
// 008373fa  8bce                 mov ecx, esi
// 008373fc  ffd0                 call eax
// 008373fe  5f                   pop edi
// 008373ff  5e                   pop esi
// 00837400  83c408               add esp, 8
// 00837403  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
