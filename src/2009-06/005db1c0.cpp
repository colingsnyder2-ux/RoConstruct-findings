// roc 2009-06 005db1c0  unit: RBX::VInstance::?$NonFactoryProduct  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005db1c0
//
// 005db1c0  83ec08               sub esp, 8
// 005db1c3  56                   push esi
// 005db1c4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005db1c8  57                   push edi
// 005db1c9  8bf9                 mov edi, ecx
// 005db1cb  56                   push esi
// 005db1cc  8d4c2410             lea ecx, [esp + 0x10]
// 005db1d0  8974240c             mov dword ptr [esp + 0xc], esi
// 005db1d4  e8f7f3ffff           call 0x5da5d0
// 005db1d9  56                   push esi
// 005db1da  8d442410             lea eax, [esp + 0x10]
// 005db1de  56                   push esi
// 005db1df  50                   push eax
// 005db1e0  e8fb970900           call 0x6749e0
// 005db1e5  8d4c2414             lea ecx, [esp + 0x14]
// 005db1e9  83c40c               add esp, 0xc
// 005db1ec  3bcf                 cmp ecx, edi
// 005db1ee  7406                 je 0x5db1f6
// 005db1f0  8b542408             mov edx, dword ptr [esp + 8]
// 005db1f4  8917                 mov dword ptr [edi], edx
// 005db1f6  8b7704               mov esi, dword ptr [edi + 4]
// 005db1f9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005db1fd  894704               mov dword ptr [edi + 4], eax
// 005db200  85f6                 test esi, esi
// 005db202  742a                 je 0x5db22e
// 005db204  8d4e04               lea ecx, [esi + 4]
// 005db207  83caff               or edx, 0xffffffff
// 005db20a  f00fc111             lock xadd dword ptr [ecx], edx
// 005db20e  751e                 jne 0x5db22e
// 005db210  8b06                 mov eax, dword ptr [esi]
// 005db212  8b5004               mov edx, dword ptr [eax + 4]
// 005db215  8bce                 mov ecx, esi
// 005db217  ffd2                 call edx
// 005db219  8d4608               lea eax, [esi + 8]
// 005db21c  83c9ff               or ecx, 0xffffffff
// 005db21f  f00fc108             lock xadd dword ptr [eax], ecx
// 005db223  7509                 jne 0x5db22e
// 005db225  8b16                 mov edx, dword ptr [esi]
// 005db227  8b4208               mov eax, dword ptr [edx + 8]
// 005db22a  8bce                 mov ecx, esi
// 005db22c  ffd0                 call eax
// 005db22e  5f                   pop edi
// 005db22f  5e                   pop esi
// 005db230  83c408               add esp, 8
// 005db233  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
