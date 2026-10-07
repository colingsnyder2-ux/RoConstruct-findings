// roc 2011-06 00972b40  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00972b40
//
// 00972b40  83ec08               sub esp, 8
// 00972b43  56                   push esi
// 00972b44  8b742410             mov esi, dword ptr [esp + 0x10]
// 00972b48  57                   push edi
// 00972b49  8bf9                 mov edi, ecx
// 00972b4b  56                   push esi
// 00972b4c  8d4c2410             lea ecx, [esp + 0x10]
// 00972b50  8974240c             mov dword ptr [esp + 0xc], esi
// 00972b54  e8c7f5ffff           call 0x972120
// 00972b59  56                   push esi
// 00972b5a  8d442410             lea eax, [esp + 0x10]
// 00972b5e  56                   push esi
// 00972b5f  50                   push eax
// 00972b60  e8db8aefff           call 0x86b640
// 00972b65  8d4c2414             lea ecx, [esp + 0x14]
// 00972b69  83c40c               add esp, 0xc
// 00972b6c  3bcf                 cmp ecx, edi
// 00972b6e  7406                 je 0x972b76
// 00972b70  8b542408             mov edx, dword ptr [esp + 8]
// 00972b74  8917                 mov dword ptr [edi], edx
// 00972b76  8b7704               mov esi, dword ptr [edi + 4]
// 00972b79  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00972b7d  894704               mov dword ptr [edi + 4], eax
// 00972b80  85f6                 test esi, esi
// 00972b82  742a                 je 0x972bae
// 00972b84  8d4e04               lea ecx, [esi + 4]
// 00972b87  83caff               or edx, 0xffffffff
// 00972b8a  f00fc111             lock xadd dword ptr [ecx], edx
// 00972b8e  751e                 jne 0x972bae
// 00972b90  8b06                 mov eax, dword ptr [esi]
// 00972b92  8b5004               mov edx, dword ptr [eax + 4]
// 00972b95  8bce                 mov ecx, esi
// 00972b97  ffd2                 call edx
// 00972b99  8d4608               lea eax, [esi + 8]
// 00972b9c  83c9ff               or ecx, 0xffffffff
// 00972b9f  f00fc108             lock xadd dword ptr [eax], ecx
// 00972ba3  7509                 jne 0x972bae
// 00972ba5  8b16                 mov edx, dword ptr [esi]
// 00972ba7  8b4208               mov eax, dword ptr [edx + 8]
// 00972baa  8bce                 mov ecx, esi
// 00972bac  ffd0                 call eax
// 00972bae  5f                   pop edi
// 00972baf  5e                   pop esi
// 00972bb0  83c408               add esp, 8
// 00972bb3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
