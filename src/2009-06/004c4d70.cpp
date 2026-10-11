// roc 2009-06 004c4d70  unit: RBX::Network::Players::Plugin  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c4d70
//
// 004c4d70  6aff                 push -1
// 004c4d72  68083a8600           push 0x863a08
// 004c4d77  64a100000000         mov eax, dword ptr fs:[0]
// 004c4d7d  50                   push eax
// 004c4d7e  64892500000000       mov dword ptr fs:[0], esp
// 004c4d85  51                   push ecx
// 004c4d86  56                   push esi
// 004c4d87  57                   push edi
// 004c4d88  8bf9                 mov edi, ecx
// 004c4d8a  897c2408             mov dword ptr [esp + 8], edi
// 004c4d8e  8b7720               mov esi, dword ptr [edi + 0x20]
// 004c4d91  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004c4d99  85f6                 test esi, esi
// 004c4d9b  742a                 je 0x4c4dc7
// 004c4d9d  8d4604               lea eax, [esi + 4]
// 004c4da0  83c9ff               or ecx, 0xffffffff
// 004c4da3  f00fc108             lock xadd dword ptr [eax], ecx
// 004c4da7  751e                 jne 0x4c4dc7
// 004c4da9  8b16                 mov edx, dword ptr [esi]
// 004c4dab  8b4204               mov eax, dword ptr [edx + 4]
// 004c4dae  8bce                 mov ecx, esi
// 004c4db0  ffd0                 call eax
// 004c4db2  8d4e08               lea ecx, [esi + 8]
// 004c4db5  83caff               or edx, 0xffffffff
// 004c4db8  f00fc111             lock xadd dword ptr [ecx], edx
// 004c4dbc  7509                 jne 0x4c4dc7
// 004c4dbe  8b06                 mov eax, dword ptr [esi]
// 004c4dc0  8b5008               mov edx, dword ptr [eax + 8]
// 004c4dc3  8bce                 mov ecx, esi
// 004c4dc5  ffd2                 call edx
// 004c4dc7  8bcf                 mov ecx, edi
// 004c4dc9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004c4dd1  ff15c4e48900         call dword ptr [0x89e4c4]
// 004c4dd7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c4ddb  5f                   pop edi
// 004c4ddc  5e                   pop esi
// 004c4ddd  64890d00000000       mov dword ptr fs:[0], ecx
// 004c4de4  83c410               add esp, 0x10
// 004c4de7  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
