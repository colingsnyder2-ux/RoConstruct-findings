// roc 2012-06 005d2d40  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005d2d40
//
// 005d2d40  83ec08               sub esp, 8
// 005d2d43  56                   push esi
// 005d2d44  8b742410             mov esi, dword ptr [esp + 0x10]
// 005d2d48  57                   push edi
// 005d2d49  8bf9                 mov edi, ecx
// 005d2d4b  56                   push esi
// 005d2d4c  8d4c2410             lea ecx, [esp + 0x10]
// 005d2d50  8974240c             mov dword ptr [esp + 0xc], esi
// 005d2d54  e8b7f4ffff           call 0x5d2210
// 005d2d59  56                   push esi
// 005d2d5a  8d442410             lea eax, [esp + 0x10]
// 005d2d5e  56                   push esi
// 005d2d5f  50                   push eax
// 005d2d60  e82b7afcff           call 0x59a790
// 005d2d65  8d4c2414             lea ecx, [esp + 0x14]
// 005d2d69  83c40c               add esp, 0xc
// 005d2d6c  3bcf                 cmp ecx, edi
// 005d2d6e  7406                 je 0x5d2d76
// 005d2d70  8b542408             mov edx, dword ptr [esp + 8]
// 005d2d74  8917                 mov dword ptr [edi], edx
// 005d2d76  8b7704               mov esi, dword ptr [edi + 4]
// 005d2d79  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005d2d7d  894704               mov dword ptr [edi + 4], eax
// 005d2d80  85f6                 test esi, esi
// 005d2d82  742a                 je 0x5d2dae
// 005d2d84  8d4e04               lea ecx, [esi + 4]
// 005d2d87  83caff               or edx, 0xffffffff
// 005d2d8a  f00fc111             lock xadd dword ptr [ecx], edx
// 005d2d8e  751e                 jne 0x5d2dae
// 005d2d90  8b06                 mov eax, dword ptr [esi]
// 005d2d92  8b5004               mov edx, dword ptr [eax + 4]
// 005d2d95  8bce                 mov ecx, esi
// 005d2d97  ffd2                 call edx
// 005d2d99  8d4608               lea eax, [esi + 8]
// 005d2d9c  83c9ff               or ecx, 0xffffffff
// 005d2d9f  f00fc108             lock xadd dword ptr [eax], ecx
// 005d2da3  7509                 jne 0x5d2dae
// 005d2da5  8b16                 mov edx, dword ptr [esi]
// 005d2da7  8b4208               mov eax, dword ptr [edx + 8]
// 005d2daa  8bce                 mov ecx, esi
// 005d2dac  ffd0                 call eax
// 005d2dae  5f                   pop edi
// 005d2daf  5e                   pop esi
// 005d2db0  83c408               add esp, 8
// 005d2db3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
