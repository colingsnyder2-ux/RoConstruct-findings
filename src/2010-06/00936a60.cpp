// roc 2010-06 00936a60  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00936a60
//
// 00936a60  83ec08               sub esp, 8
// 00936a63  56                   push esi
// 00936a64  8b742410             mov esi, dword ptr [esp + 0x10]
// 00936a68  57                   push edi
// 00936a69  8bf9                 mov edi, ecx
// 00936a6b  56                   push esi
// 00936a6c  8d4c2410             lea ecx, [esp + 0x10]
// 00936a70  8974240c             mov dword ptr [esp + 0xc], esi
// 00936a74  e8a7f6ffff           call 0x936120
// 00936a79  56                   push esi
// 00936a7a  8d442410             lea eax, [esp + 0x10]
// 00936a7e  56                   push esi
// 00936a7f  50                   push eax
// 00936a80  e82bdbb1ff           call 0x4545b0
// 00936a85  8d4c2414             lea ecx, [esp + 0x14]
// 00936a89  83c40c               add esp, 0xc
// 00936a8c  3bcf                 cmp ecx, edi
// 00936a8e  7406                 je 0x936a96
// 00936a90  8b542408             mov edx, dword ptr [esp + 8]
// 00936a94  8917                 mov dword ptr [edi], edx
// 00936a96  8b7704               mov esi, dword ptr [edi + 4]
// 00936a99  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00936a9d  894704               mov dword ptr [edi + 4], eax
// 00936aa0  85f6                 test esi, esi
// 00936aa2  742a                 je 0x936ace
// 00936aa4  8d4e04               lea ecx, [esi + 4]
// 00936aa7  83caff               or edx, 0xffffffff
// 00936aaa  f00fc111             lock xadd dword ptr [ecx], edx
// 00936aae  751e                 jne 0x936ace
// 00936ab0  8b06                 mov eax, dword ptr [esi]
// 00936ab2  8b5004               mov edx, dword ptr [eax + 4]
// 00936ab5  8bce                 mov ecx, esi
// 00936ab7  ffd2                 call edx
// 00936ab9  8d4608               lea eax, [esi + 8]
// 00936abc  83c9ff               or ecx, 0xffffffff
// 00936abf  f00fc108             lock xadd dword ptr [eax], ecx
// 00936ac3  7509                 jne 0x936ace
// 00936ac5  8b16                 mov edx, dword ptr [esi]
// 00936ac7  8b4208               mov eax, dword ptr [edx + 8]
// 00936aca  8bce                 mov ecx, esi
// 00936acc  ffd0                 call eax
// 00936ace  5f                   pop edi
// 00936acf  5e                   pop esi
// 00936ad0  83c408               add esp, 8
// 00936ad3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
