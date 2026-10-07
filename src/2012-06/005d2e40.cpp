// roc 2012-06 005d2e40  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005d2e40
//
// 005d2e40  83ec08               sub esp, 8
// 005d2e43  56                   push esi
// 005d2e44  8b742410             mov esi, dword ptr [esp + 0x10]
// 005d2e48  57                   push edi
// 005d2e49  8bf9                 mov edi, ecx
// 005d2e4b  56                   push esi
// 005d2e4c  8d4c2410             lea ecx, [esp + 0x10]
// 005d2e50  8974240c             mov dword ptr [esp + 0xc], esi
// 005d2e54  e8d7f4ffff           call 0x5d2330
// 005d2e59  56                   push esi
// 005d2e5a  8d442410             lea eax, [esp + 0x10]
// 005d2e5e  56                   push esi
// 005d2e5f  50                   push eax
// 005d2e60  e82b79fcff           call 0x59a790
// 005d2e65  8d4c2414             lea ecx, [esp + 0x14]
// 005d2e69  83c40c               add esp, 0xc
// 005d2e6c  3bcf                 cmp ecx, edi
// 005d2e6e  7406                 je 0x5d2e76
// 005d2e70  8b542408             mov edx, dword ptr [esp + 8]
// 005d2e74  8917                 mov dword ptr [edi], edx
// 005d2e76  8b7704               mov esi, dword ptr [edi + 4]
// 005d2e79  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005d2e7d  894704               mov dword ptr [edi + 4], eax
// 005d2e80  85f6                 test esi, esi
// 005d2e82  742a                 je 0x5d2eae
// 005d2e84  8d4e04               lea ecx, [esi + 4]
// 005d2e87  83caff               or edx, 0xffffffff
// 005d2e8a  f00fc111             lock xadd dword ptr [ecx], edx
// 005d2e8e  751e                 jne 0x5d2eae
// 005d2e90  8b06                 mov eax, dword ptr [esi]
// 005d2e92  8b5004               mov edx, dword ptr [eax + 4]
// 005d2e95  8bce                 mov ecx, esi
// 005d2e97  ffd2                 call edx
// 005d2e99  8d4608               lea eax, [esi + 8]
// 005d2e9c  83c9ff               or ecx, 0xffffffff
// 005d2e9f  f00fc108             lock xadd dword ptr [eax], ecx
// 005d2ea3  7509                 jne 0x5d2eae
// 005d2ea5  8b16                 mov edx, dword ptr [esi]
// 005d2ea7  8b4208               mov eax, dword ptr [edx + 8]
// 005d2eaa  8bce                 mov ecx, esi
// 005d2eac  ffd0                 call eax
// 005d2eae  5f                   pop edi
// 005d2eaf  5e                   pop esi
// 005d2eb0  83c408               add esp, 8
// 005d2eb3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
