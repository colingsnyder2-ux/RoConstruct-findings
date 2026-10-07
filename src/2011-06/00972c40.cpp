// roc 2011-06 00972c40  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00972c40
//
// 00972c40  83ec08               sub esp, 8
// 00972c43  56                   push esi
// 00972c44  8b742410             mov esi, dword ptr [esp + 0x10]
// 00972c48  57                   push edi
// 00972c49  8bf9                 mov edi, ecx
// 00972c4b  56                   push esi
// 00972c4c  8d4c2410             lea ecx, [esp + 0x10]
// 00972c50  8974240c             mov dword ptr [esp + 0xc], esi
// 00972c54  e8e7f5ffff           call 0x972240
// 00972c59  56                   push esi
// 00972c5a  8d442410             lea eax, [esp + 0x10]
// 00972c5e  56                   push esi
// 00972c5f  50                   push eax
// 00972c60  e8db89efff           call 0x86b640
// 00972c65  8d4c2414             lea ecx, [esp + 0x14]
// 00972c69  83c40c               add esp, 0xc
// 00972c6c  3bcf                 cmp ecx, edi
// 00972c6e  7406                 je 0x972c76
// 00972c70  8b542408             mov edx, dword ptr [esp + 8]
// 00972c74  8917                 mov dword ptr [edi], edx
// 00972c76  8b7704               mov esi, dword ptr [edi + 4]
// 00972c79  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00972c7d  894704               mov dword ptr [edi + 4], eax
// 00972c80  85f6                 test esi, esi
// 00972c82  742a                 je 0x972cae
// 00972c84  8d4e04               lea ecx, [esi + 4]
// 00972c87  83caff               or edx, 0xffffffff
// 00972c8a  f00fc111             lock xadd dword ptr [ecx], edx
// 00972c8e  751e                 jne 0x972cae
// 00972c90  8b06                 mov eax, dword ptr [esi]
// 00972c92  8b5004               mov edx, dword ptr [eax + 4]
// 00972c95  8bce                 mov ecx, esi
// 00972c97  ffd2                 call edx
// 00972c99  8d4608               lea eax, [esi + 8]
// 00972c9c  83c9ff               or ecx, 0xffffffff
// 00972c9f  f00fc108             lock xadd dword ptr [eax], ecx
// 00972ca3  7509                 jne 0x972cae
// 00972ca5  8b16                 mov edx, dword ptr [esi]
// 00972ca7  8b4208               mov eax, dword ptr [edx + 8]
// 00972caa  8bce                 mov ecx, esi
// 00972cac  ffd0                 call eax
// 00972cae  5f                   pop edi
// 00972caf  5e                   pop esi
// 00972cb0  83c408               add esp, 8
// 00972cb3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
