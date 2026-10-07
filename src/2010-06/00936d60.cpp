// roc 2010-06 00936d60  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00936d60
//
// 00936d60  83ec08               sub esp, 8
// 00936d63  56                   push esi
// 00936d64  8b742410             mov esi, dword ptr [esp + 0x10]
// 00936d68  57                   push edi
// 00936d69  8bf9                 mov edi, ecx
// 00936d6b  56                   push esi
// 00936d6c  8d4c2410             lea ecx, [esp + 0x10]
// 00936d70  8974240c             mov dword ptr [esp + 0xc], esi
// 00936d74  e877f6ffff           call 0x9363f0
// 00936d79  56                   push esi
// 00936d7a  8d442410             lea eax, [esp + 0x10]
// 00936d7e  56                   push esi
// 00936d7f  50                   push eax
// 00936d80  e82bd8b1ff           call 0x4545b0
// 00936d85  8d4c2414             lea ecx, [esp + 0x14]
// 00936d89  83c40c               add esp, 0xc
// 00936d8c  3bcf                 cmp ecx, edi
// 00936d8e  7406                 je 0x936d96
// 00936d90  8b542408             mov edx, dword ptr [esp + 8]
// 00936d94  8917                 mov dword ptr [edi], edx
// 00936d96  8b7704               mov esi, dword ptr [edi + 4]
// 00936d99  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00936d9d  894704               mov dword ptr [edi + 4], eax
// 00936da0  85f6                 test esi, esi
// 00936da2  742a                 je 0x936dce
// 00936da4  8d4e04               lea ecx, [esi + 4]
// 00936da7  83caff               or edx, 0xffffffff
// 00936daa  f00fc111             lock xadd dword ptr [ecx], edx
// 00936dae  751e                 jne 0x936dce
// 00936db0  8b06                 mov eax, dword ptr [esi]
// 00936db2  8b5004               mov edx, dword ptr [eax + 4]
// 00936db5  8bce                 mov ecx, esi
// 00936db7  ffd2                 call edx
// 00936db9  8d4608               lea eax, [esi + 8]
// 00936dbc  83c9ff               or ecx, 0xffffffff
// 00936dbf  f00fc108             lock xadd dword ptr [eax], ecx
// 00936dc3  7509                 jne 0x936dce
// 00936dc5  8b16                 mov edx, dword ptr [esi]
// 00936dc7  8b4208               mov eax, dword ptr [edx + 8]
// 00936dca  8bce                 mov ecx, esi
// 00936dcc  ffd0                 call eax
// 00936dce  5f                   pop edi
// 00936dcf  5e                   pop esi
// 00936dd0  83c408               add esp, 8
// 00936dd3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
