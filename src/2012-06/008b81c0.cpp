// roc 2012-06 008b81c0  unit: seg_008b0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008b81c0
//
// 008b81c0  83ec08               sub esp, 8
// 008b81c3  56                   push esi
// 008b81c4  8b742410             mov esi, dword ptr [esp + 0x10]
// 008b81c8  57                   push edi
// 008b81c9  8bf9                 mov edi, ecx
// 008b81cb  56                   push esi
// 008b81cc  8d4c2410             lea ecx, [esp + 0x10]
// 008b81d0  8974240c             mov dword ptr [esp + 0xc], esi
// 008b81d4  e82713e9ff           call 0x749500
// 008b81d9  56                   push esi
// 008b81da  8d442410             lea eax, [esp + 0x10]
// 008b81de  56                   push esi
// 008b81df  50                   push eax
// 008b81e0  e8ab25ceff           call 0x59a790
// 008b81e5  8d4c2414             lea ecx, [esp + 0x14]
// 008b81e9  83c40c               add esp, 0xc
// 008b81ec  3bcf                 cmp ecx, edi
// 008b81ee  7406                 je 0x8b81f6
// 008b81f0  8b542408             mov edx, dword ptr [esp + 8]
// 008b81f4  8917                 mov dword ptr [edi], edx
// 008b81f6  8b7704               mov esi, dword ptr [edi + 4]
// 008b81f9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008b81fd  894704               mov dword ptr [edi + 4], eax
// 008b8200  85f6                 test esi, esi
// 008b8202  742a                 je 0x8b822e
// 008b8204  8d4e04               lea ecx, [esi + 4]
// 008b8207  83caff               or edx, 0xffffffff
// 008b820a  f00fc111             lock xadd dword ptr [ecx], edx
// 008b820e  751e                 jne 0x8b822e
// 008b8210  8b06                 mov eax, dword ptr [esi]
// 008b8212  8b5004               mov edx, dword ptr [eax + 4]
// 008b8215  8bce                 mov ecx, esi
// 008b8217  ffd2                 call edx
// 008b8219  8d4608               lea eax, [esi + 8]
// 008b821c  83c9ff               or ecx, 0xffffffff
// 008b821f  f00fc108             lock xadd dword ptr [eax], ecx
// 008b8223  7509                 jne 0x8b822e
// 008b8225  8b16                 mov edx, dword ptr [esi]
// 008b8227  8b4208               mov eax, dword ptr [edx + 8]
// 008b822a  8bce                 mov ecx, esi
// 008b822c  ffd0                 call eax
// 008b822e  5f                   pop edi
// 008b822f  5e                   pop esi
// 008b8230  83c408               add esp, 8
// 008b8233  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
