// roc 2010-06 005fe670  unit: RBX::VLocalScript::?$FactoryProduct  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005fe670
//
// 005fe670  83ec08               sub esp, 8
// 005fe673  56                   push esi
// 005fe674  8b742410             mov esi, dword ptr [esp + 0x10]
// 005fe678  57                   push edi
// 005fe679  8bf9                 mov edi, ecx
// 005fe67b  56                   push esi
// 005fe67c  8d4c2410             lea ecx, [esp + 0x10]
// 005fe680  8974240c             mov dword ptr [esp + 0xc], esi
// 005fe684  e8d7f7ffff           call 0x5fde60
// 005fe689  56                   push esi
// 005fe68a  8d442410             lea eax, [esp + 0x10]
// 005fe68e  56                   push esi
// 005fe68f  50                   push eax
// 005fe690  e81b5fe5ff           call 0x4545b0
// 005fe695  8d4c2414             lea ecx, [esp + 0x14]
// 005fe699  83c40c               add esp, 0xc
// 005fe69c  3bcf                 cmp ecx, edi
// 005fe69e  7406                 je 0x5fe6a6
// 005fe6a0  8b542408             mov edx, dword ptr [esp + 8]
// 005fe6a4  8917                 mov dword ptr [edi], edx
// 005fe6a6  8b7704               mov esi, dword ptr [edi + 4]
// 005fe6a9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005fe6ad  894704               mov dword ptr [edi + 4], eax
// 005fe6b0  85f6                 test esi, esi
// 005fe6b2  742a                 je 0x5fe6de
// 005fe6b4  8d4e04               lea ecx, [esi + 4]
// 005fe6b7  83caff               or edx, 0xffffffff
// 005fe6ba  f00fc111             lock xadd dword ptr [ecx], edx
// 005fe6be  751e                 jne 0x5fe6de
// 005fe6c0  8b06                 mov eax, dword ptr [esi]
// 005fe6c2  8b5004               mov edx, dword ptr [eax + 4]
// 005fe6c5  8bce                 mov ecx, esi
// 005fe6c7  ffd2                 call edx
// 005fe6c9  8d4608               lea eax, [esi + 8]
// 005fe6cc  83c9ff               or ecx, 0xffffffff
// 005fe6cf  f00fc108             lock xadd dword ptr [eax], ecx
// 005fe6d3  7509                 jne 0x5fe6de
// 005fe6d5  8b16                 mov edx, dword ptr [esi]
// 005fe6d7  8b4208               mov eax, dword ptr [edx + 8]
// 005fe6da  8bce                 mov ecx, esi
// 005fe6dc  ffd0                 call eax
// 005fe6de  5f                   pop edi
// 005fe6df  5e                   pop esi
// 005fe6e0  83c408               add esp, 8
// 005fe6e3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
