// roc 2007-08 00728790  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00728790
//
// 00728790  83ec08               sub esp, 8
// 00728793  56                   push esi
// 00728794  8b742410             mov esi, dword ptr [esp + 0x10]
// 00728798  57                   push edi
// 00728799  8bf9                 mov edi, ecx
// 0072879b  56                   push esi
// 0072879c  8d4c2410             lea ecx, [esp + 0x10]
// 007287a0  8974240c             mov dword ptr [esp + 0xc], esi
// 007287a4  e837ffffff           call 0x7286e0
// 007287a9  56                   push esi
// 007287aa  8d442410             lea eax, [esp + 0x10]
// 007287ae  56                   push esi
// 007287af  50                   push eax
// 007287b0  e86b44ceff           call 0x40cc20
// 007287b5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007287b9  8b542418             mov edx, dword ptr [esp + 0x18]
// 007287bd  890f                 mov dword ptr [edi], ecx
// 007287bf  8b7704               mov esi, dword ptr [edi + 4]
// 007287c2  83c40c               add esp, 0xc
// 007287c5  85f6                 test esi, esi
// 007287c7  895704               mov dword ptr [edi + 4], edx
// 007287ca  742a                 je 0x7287f6
// 007287cc  8d4604               lea eax, [esi + 4]
// 007287cf  83c9ff               or ecx, 0xffffffff
// 007287d2  f00fc108             lock xadd dword ptr [eax], ecx
// 007287d6  751e                 jne 0x7287f6
// 007287d8  8b16                 mov edx, dword ptr [esi]
// 007287da  8b4204               mov eax, dword ptr [edx + 4]
// 007287dd  8bce                 mov ecx, esi
// 007287df  ffd0                 call eax
// 007287e1  8d4e08               lea ecx, [esi + 8]
// 007287e4  83caff               or edx, 0xffffffff
// 007287e7  f00fc111             lock xadd dword ptr [ecx], edx
// 007287eb  7509                 jne 0x7287f6
// 007287ed  8b06                 mov eax, dword ptr [esi]
// 007287ef  8b5008               mov edx, dword ptr [eax + 8]
// 007287f2  8bce                 mov ecx, esi
// 007287f4  ffd2                 call edx
// 007287f6  5f                   pop edi
// 007287f7  5e                   pop esi
// 007287f8  83c408               add esp, 8
// 007287fb  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
