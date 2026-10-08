// roc 2007-08 00727e40  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00727e40
//
// 00727e40  83ec08               sub esp, 8
// 00727e43  56                   push esi
// 00727e44  8b742410             mov esi, dword ptr [esp + 0x10]
// 00727e48  57                   push edi
// 00727e49  8bf9                 mov edi, ecx
// 00727e4b  56                   push esi
// 00727e4c  8d4c2410             lea ecx, [esp + 0x10]
// 00727e50  8974240c             mov dword ptr [esp + 0xc], esi
// 00727e54  e837ffffff           call 0x727d90
// 00727e59  56                   push esi
// 00727e5a  8d442410             lea eax, [esp + 0x10]
// 00727e5e  56                   push esi
// 00727e5f  50                   push eax
// 00727e60  e8bb4dceff           call 0x40cc20
// 00727e65  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00727e69  8b542418             mov edx, dword ptr [esp + 0x18]
// 00727e6d  890f                 mov dword ptr [edi], ecx
// 00727e6f  8b7704               mov esi, dword ptr [edi + 4]
// 00727e72  83c40c               add esp, 0xc
// 00727e75  85f6                 test esi, esi
// 00727e77  895704               mov dword ptr [edi + 4], edx
// 00727e7a  742a                 je 0x727ea6
// 00727e7c  8d4604               lea eax, [esi + 4]
// 00727e7f  83c9ff               or ecx, 0xffffffff
// 00727e82  f00fc108             lock xadd dword ptr [eax], ecx
// 00727e86  751e                 jne 0x727ea6
// 00727e88  8b16                 mov edx, dword ptr [esi]
// 00727e8a  8b4204               mov eax, dword ptr [edx + 4]
// 00727e8d  8bce                 mov ecx, esi
// 00727e8f  ffd0                 call eax
// 00727e91  8d4e08               lea ecx, [esi + 8]
// 00727e94  83caff               or edx, 0xffffffff
// 00727e97  f00fc111             lock xadd dword ptr [ecx], edx
// 00727e9b  7509                 jne 0x727ea6
// 00727e9d  8b06                 mov eax, dword ptr [esi]
// 00727e9f  8b5008               mov edx, dword ptr [eax + 8]
// 00727ea2  8bce                 mov ecx, esi
// 00727ea4  ffd2                 call edx
// 00727ea6  5f                   pop edi
// 00727ea7  5e                   pop esi
// 00727ea8  83c408               add esp, 8
// 00727eab  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
