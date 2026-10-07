// roc 2011-06 00972a40  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00972a40
//
// 00972a40  83ec08               sub esp, 8
// 00972a43  56                   push esi
// 00972a44  8b742410             mov esi, dword ptr [esp + 0x10]
// 00972a48  57                   push edi
// 00972a49  8bf9                 mov edi, ecx
// 00972a4b  56                   push esi
// 00972a4c  8d4c2410             lea ecx, [esp + 0x10]
// 00972a50  8974240c             mov dword ptr [esp + 0xc], esi
// 00972a54  e8b7b9fdff           call 0x94e410
// 00972a59  56                   push esi
// 00972a5a  8d442410             lea eax, [esp + 0x10]
// 00972a5e  56                   push esi
// 00972a5f  50                   push eax
// 00972a60  e8db8befff           call 0x86b640
// 00972a65  8d4c2414             lea ecx, [esp + 0x14]
// 00972a69  83c40c               add esp, 0xc
// 00972a6c  3bcf                 cmp ecx, edi
// 00972a6e  7406                 je 0x972a76
// 00972a70  8b542408             mov edx, dword ptr [esp + 8]
// 00972a74  8917                 mov dword ptr [edi], edx
// 00972a76  8b7704               mov esi, dword ptr [edi + 4]
// 00972a79  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00972a7d  894704               mov dword ptr [edi + 4], eax
// 00972a80  85f6                 test esi, esi
// 00972a82  742a                 je 0x972aae
// 00972a84  8d4e04               lea ecx, [esi + 4]
// 00972a87  83caff               or edx, 0xffffffff
// 00972a8a  f00fc111             lock xadd dword ptr [ecx], edx
// 00972a8e  751e                 jne 0x972aae
// 00972a90  8b06                 mov eax, dword ptr [esi]
// 00972a92  8b5004               mov edx, dword ptr [eax + 4]
// 00972a95  8bce                 mov ecx, esi
// 00972a97  ffd2                 call edx
// 00972a99  8d4608               lea eax, [esi + 8]
// 00972a9c  83c9ff               or ecx, 0xffffffff
// 00972a9f  f00fc108             lock xadd dword ptr [eax], ecx
// 00972aa3  7509                 jne 0x972aae
// 00972aa5  8b16                 mov edx, dword ptr [esi]
// 00972aa7  8b4208               mov eax, dword ptr [edx + 8]
// 00972aaa  8bce                 mov ecx, esi
// 00972aac  ffd0                 call eax
// 00972aae  5f                   pop edi
// 00972aaf  5e                   pop esi
// 00972ab0  83c408               add esp, 8
// 00972ab3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
