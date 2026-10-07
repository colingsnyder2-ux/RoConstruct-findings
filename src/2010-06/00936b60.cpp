// roc 2010-06 00936b60  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00936b60
//
// 00936b60  83ec08               sub esp, 8
// 00936b63  56                   push esi
// 00936b64  8b742410             mov esi, dword ptr [esp + 0x10]
// 00936b68  57                   push edi
// 00936b69  8bf9                 mov edi, ecx
// 00936b6b  56                   push esi
// 00936b6c  8d4c2410             lea ecx, [esp + 0x10]
// 00936b70  8974240c             mov dword ptr [esp + 0xc], esi
// 00936b74  e837f6ffff           call 0x9361b0
// 00936b79  56                   push esi
// 00936b7a  8d442410             lea eax, [esp + 0x10]
// 00936b7e  56                   push esi
// 00936b7f  50                   push eax
// 00936b80  e82bdab1ff           call 0x4545b0
// 00936b85  8d4c2414             lea ecx, [esp + 0x14]
// 00936b89  83c40c               add esp, 0xc
// 00936b8c  3bcf                 cmp ecx, edi
// 00936b8e  7406                 je 0x936b96
// 00936b90  8b542408             mov edx, dword ptr [esp + 8]
// 00936b94  8917                 mov dword ptr [edi], edx
// 00936b96  8b7704               mov esi, dword ptr [edi + 4]
// 00936b99  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00936b9d  894704               mov dword ptr [edi + 4], eax
// 00936ba0  85f6                 test esi, esi
// 00936ba2  742a                 je 0x936bce
// 00936ba4  8d4e04               lea ecx, [esi + 4]
// 00936ba7  83caff               or edx, 0xffffffff
// 00936baa  f00fc111             lock xadd dword ptr [ecx], edx
// 00936bae  751e                 jne 0x936bce
// 00936bb0  8b06                 mov eax, dword ptr [esi]
// 00936bb2  8b5004               mov edx, dword ptr [eax + 4]
// 00936bb5  8bce                 mov ecx, esi
// 00936bb7  ffd2                 call edx
// 00936bb9  8d4608               lea eax, [esi + 8]
// 00936bbc  83c9ff               or ecx, 0xffffffff
// 00936bbf  f00fc108             lock xadd dword ptr [eax], ecx
// 00936bc3  7509                 jne 0x936bce
// 00936bc5  8b16                 mov edx, dword ptr [esi]
// 00936bc7  8b4208               mov eax, dword ptr [edx + 8]
// 00936bca  8bce                 mov ecx, esi
// 00936bcc  ffd0                 call eax
// 00936bce  5f                   pop edi
// 00936bcf  5e                   pop esi
// 00936bd0  83c408               add esp, 8
// 00936bd3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
