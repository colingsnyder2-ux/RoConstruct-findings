// roc 2012-06 005d31c0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005d31c0
//
// 005d31c0  83ec08               sub esp, 8
// 005d31c3  56                   push esi
// 005d31c4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005d31c8  57                   push edi
// 005d31c9  8bf9                 mov edi, ecx
// 005d31cb  56                   push esi
// 005d31cc  8d4c2410             lea ecx, [esp + 0x10]
// 005d31d0  8974240c             mov dword ptr [esp + 0xc], esi
// 005d31d4  e8b7f4ffff           call 0x5d2690
// 005d31d9  56                   push esi
// 005d31da  8d442410             lea eax, [esp + 0x10]
// 005d31de  56                   push esi
// 005d31df  50                   push eax
// 005d31e0  e8ab75fcff           call 0x59a790
// 005d31e5  8d4c2414             lea ecx, [esp + 0x14]
// 005d31e9  83c40c               add esp, 0xc
// 005d31ec  3bcf                 cmp ecx, edi
// 005d31ee  7406                 je 0x5d31f6
// 005d31f0  8b542408             mov edx, dword ptr [esp + 8]
// 005d31f4  8917                 mov dword ptr [edi], edx
// 005d31f6  8b7704               mov esi, dword ptr [edi + 4]
// 005d31f9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005d31fd  894704               mov dword ptr [edi + 4], eax
// 005d3200  85f6                 test esi, esi
// 005d3202  742a                 je 0x5d322e
// 005d3204  8d4e04               lea ecx, [esi + 4]
// 005d3207  83caff               or edx, 0xffffffff
// 005d320a  f00fc111             lock xadd dword ptr [ecx], edx
// 005d320e  751e                 jne 0x5d322e
// 005d3210  8b06                 mov eax, dword ptr [esi]
// 005d3212  8b5004               mov edx, dword ptr [eax + 4]
// 005d3215  8bce                 mov ecx, esi
// 005d3217  ffd2                 call edx
// 005d3219  8d4608               lea eax, [esi + 8]
// 005d321c  83c9ff               or ecx, 0xffffffff
// 005d321f  f00fc108             lock xadd dword ptr [eax], ecx
// 005d3223  7509                 jne 0x5d322e
// 005d3225  8b16                 mov edx, dword ptr [esi]
// 005d3227  8b4208               mov eax, dword ptr [edx + 8]
// 005d322a  8bce                 mov ecx, esi
// 005d322c  ffd0                 call eax
// 005d322e  5f                   pop edi
// 005d322f  5e                   pop esi
// 005d3230  83c408               add esp, 8
// 005d3233  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
