// roc 2007-08 004181b0  unit: boost::signals::detail::slot_base::Udata_t::?$sp_counted_impl_p  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004181b0
//
// 004181b0  83ec08               sub esp, 8
// 004181b3  56                   push esi
// 004181b4  8b742410             mov esi, dword ptr [esp + 0x10]
// 004181b8  57                   push edi
// 004181b9  8bf9                 mov edi, ecx
// 004181bb  56                   push esi
// 004181bc  8d4c2410             lea ecx, [esp + 0x10]
// 004181c0  8974240c             mov dword ptr [esp + 0xc], esi
// 004181c4  e817fcffff           call 0x417de0
// 004181c9  56                   push esi
// 004181ca  8d442410             lea eax, [esp + 0x10]
// 004181ce  56                   push esi
// 004181cf  50                   push eax
// 004181d0  e84b4affff           call 0x40cc20
// 004181d5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004181d9  8b542418             mov edx, dword ptr [esp + 0x18]
// 004181dd  890f                 mov dword ptr [edi], ecx
// 004181df  8b7704               mov esi, dword ptr [edi + 4]
// 004181e2  83c40c               add esp, 0xc
// 004181e5  85f6                 test esi, esi
// 004181e7  895704               mov dword ptr [edi + 4], edx
// 004181ea  742a                 je 0x418216
// 004181ec  8d4604               lea eax, [esi + 4]
// 004181ef  83c9ff               or ecx, 0xffffffff
// 004181f2  f00fc108             lock xadd dword ptr [eax], ecx
// 004181f6  751e                 jne 0x418216
// 004181f8  8b16                 mov edx, dword ptr [esi]
// 004181fa  8b4204               mov eax, dword ptr [edx + 4]
// 004181fd  8bce                 mov ecx, esi
// 004181ff  ffd0                 call eax
// 00418201  8d4e08               lea ecx, [esi + 8]
// 00418204  83caff               or edx, 0xffffffff
// 00418207  f00fc111             lock xadd dword ptr [ecx], edx
// 0041820b  7509                 jne 0x418216
// 0041820d  8b06                 mov eax, dword ptr [esi]
// 0041820f  8b5008               mov edx, dword ptr [eax + 8]
// 00418212  8bce                 mov ecx, esi
// 00418214  ffd2                 call edx
// 00418216  5f                   pop edi
// 00418217  5e                   pop esi
// 00418218  83c408               add esp, 8
// 0041821b  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
