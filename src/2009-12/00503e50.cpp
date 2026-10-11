// roc 2009-12 00503e50  unit: RBX::Network::Player::W4BuildPermission::?$EnumDesc  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00503e50
//
// 00503e50  6aff                 push -1
// 00503e52  6818859400           push 0x948518
// 00503e57  64a100000000         mov eax, dword ptr fs:[0]
// 00503e5d  50                   push eax
// 00503e5e  64892500000000       mov dword ptr fs:[0], esp
// 00503e65  51                   push ecx
// 00503e66  56                   push esi
// 00503e67  57                   push edi
// 00503e68  8bf9                 mov edi, ecx
// 00503e6a  897c2408             mov dword ptr [esp + 8], edi
// 00503e6e  8b7720               mov esi, dword ptr [edi + 0x20]
// 00503e71  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00503e79  85f6                 test esi, esi
// 00503e7b  742a                 je 0x503ea7
// 00503e7d  8d4604               lea eax, [esi + 4]
// 00503e80  83c9ff               or ecx, 0xffffffff
// 00503e83  f00fc108             lock xadd dword ptr [eax], ecx
// 00503e87  751e                 jne 0x503ea7
// 00503e89  8b16                 mov edx, dword ptr [esi]
// 00503e8b  8b4204               mov eax, dword ptr [edx + 4]
// 00503e8e  8bce                 mov ecx, esi
// 00503e90  ffd0                 call eax
// 00503e92  8d4e08               lea ecx, [esi + 8]
// 00503e95  83caff               or edx, 0xffffffff
// 00503e98  f00fc111             lock xadd dword ptr [ecx], edx
// 00503e9c  7509                 jne 0x503ea7
// 00503e9e  8b06                 mov eax, dword ptr [esi]
// 00503ea0  8b5008               mov edx, dword ptr [eax + 8]
// 00503ea3  8bce                 mov ecx, esi
// 00503ea5  ffd2                 call edx
// 00503ea7  8bcf                 mov ecx, edi
// 00503ea9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00503eb1  ff15e4b69800         call dword ptr [0x98b6e4]
// 00503eb7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00503ebb  5f                   pop edi
// 00503ebc  5e                   pop esi
// 00503ebd  64890d00000000       mov dword ptr fs:[0], ecx
// 00503ec4  83c410               add esp, 0x10
// 00503ec7  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
