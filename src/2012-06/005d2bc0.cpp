// roc 2012-06 005d2bc0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005d2bc0
//
// 005d2bc0  83ec08               sub esp, 8
// 005d2bc3  56                   push esi
// 005d2bc4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005d2bc8  57                   push edi
// 005d2bc9  8bf9                 mov edi, ecx
// 005d2bcb  56                   push esi
// 005d2bcc  8d4c2410             lea ecx, [esp + 0x10]
// 005d2bd0  8974240c             mov dword ptr [esp + 0xc], esi
// 005d2bd4  e887f4ffff           call 0x5d2060
// 005d2bd9  56                   push esi
// 005d2bda  8d442410             lea eax, [esp + 0x10]
// 005d2bde  56                   push esi
// 005d2bdf  50                   push eax
// 005d2be0  e8ab7bfcff           call 0x59a790
// 005d2be5  8d4c2414             lea ecx, [esp + 0x14]
// 005d2be9  83c40c               add esp, 0xc
// 005d2bec  3bcf                 cmp ecx, edi
// 005d2bee  7406                 je 0x5d2bf6
// 005d2bf0  8b542408             mov edx, dword ptr [esp + 8]
// 005d2bf4  8917                 mov dword ptr [edi], edx
// 005d2bf6  8b7704               mov esi, dword ptr [edi + 4]
// 005d2bf9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005d2bfd  894704               mov dword ptr [edi + 4], eax
// 005d2c00  85f6                 test esi, esi
// 005d2c02  742a                 je 0x5d2c2e
// 005d2c04  8d4e04               lea ecx, [esi + 4]
// 005d2c07  83caff               or edx, 0xffffffff
// 005d2c0a  f00fc111             lock xadd dword ptr [ecx], edx
// 005d2c0e  751e                 jne 0x5d2c2e
// 005d2c10  8b06                 mov eax, dword ptr [esi]
// 005d2c12  8b5004               mov edx, dword ptr [eax + 4]
// 005d2c15  8bce                 mov ecx, esi
// 005d2c17  ffd2                 call edx
// 005d2c19  8d4608               lea eax, [esi + 8]
// 005d2c1c  83c9ff               or ecx, 0xffffffff
// 005d2c1f  f00fc108             lock xadd dword ptr [eax], ecx
// 005d2c23  7509                 jne 0x5d2c2e
// 005d2c25  8b16                 mov edx, dword ptr [esi]
// 005d2c27  8b4208               mov eax, dword ptr [edx + 8]
// 005d2c2a  8bce                 mov ecx, esi
// 005d2c2c  ffd0                 call eax
// 005d2c2e  5f                   pop edi
// 005d2c2f  5e                   pop esi
// 005d2c30  83c408               add esp, 8
// 005d2c33  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
