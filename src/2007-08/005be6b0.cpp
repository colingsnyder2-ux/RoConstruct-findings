// roc 2007-08 005be6b0  unit: boost::detail::H::?$sp_counted_impl_p  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005be6b0
//
// 005be6b0  83ec08               sub esp, 8
// 005be6b3  56                   push esi
// 005be6b4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005be6b8  57                   push edi
// 005be6b9  8bf9                 mov edi, ecx
// 005be6bb  56                   push esi
// 005be6bc  8d4c2410             lea ecx, [esp + 0x10]
// 005be6c0  8974240c             mov dword ptr [esp + 0xc], esi
// 005be6c4  e847ffffff           call 0x5be610
// 005be6c9  56                   push esi
// 005be6ca  8d442410             lea eax, [esp + 0x10]
// 005be6ce  56                   push esi
// 005be6cf  50                   push eax
// 005be6d0  e84be5e4ff           call 0x40cc20
// 005be6d5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005be6d9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005be6dd  890f                 mov dword ptr [edi], ecx
// 005be6df  8b7704               mov esi, dword ptr [edi + 4]
// 005be6e2  83c40c               add esp, 0xc
// 005be6e5  85f6                 test esi, esi
// 005be6e7  895704               mov dword ptr [edi + 4], edx
// 005be6ea  742a                 je 0x5be716
// 005be6ec  8d4604               lea eax, [esi + 4]
// 005be6ef  83c9ff               or ecx, 0xffffffff
// 005be6f2  f00fc108             lock xadd dword ptr [eax], ecx
// 005be6f6  751e                 jne 0x5be716
// 005be6f8  8b16                 mov edx, dword ptr [esi]
// 005be6fa  8b4204               mov eax, dword ptr [edx + 4]
// 005be6fd  8bce                 mov ecx, esi
// 005be6ff  ffd0                 call eax
// 005be701  8d4e08               lea ecx, [esi + 8]
// 005be704  83caff               or edx, 0xffffffff
// 005be707  f00fc111             lock xadd dword ptr [ecx], edx
// 005be70b  7509                 jne 0x5be716
// 005be70d  8b06                 mov eax, dword ptr [esi]
// 005be70f  8b5008               mov edx, dword ptr [eax + 8]
// 005be712  8bce                 mov ecx, esi
// 005be714  ffd2                 call edx
// 005be716  5f                   pop edi
// 005be717  5e                   pop esi
// 005be718  83c408               add esp, 8
// 005be71b  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
