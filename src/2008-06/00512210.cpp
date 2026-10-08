// from server: 100% by auto
// roc 2008-06 00512210  unit: G3D::GCamera  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00512210
//
// 00512210  6aff                 push -1
// 00512212  687ac47c00           push 0x7cc47a
// 00512217  64a100000000         mov eax, dword ptr fs:[0]
// 0051221d  50                   push eax
// 0051221e  64892500000000       mov dword ptr fs:[0], esp
// 00512225  83ec24               sub esp, 0x24
// 00512228  8b442438             mov eax, dword ptr [esp + 0x38]
// 0051222c  53                   push ebx
// 0051222d  55                   push ebp
// 0051222e  56                   push esi
// 0051222f  57                   push edi
// 00512230  33ff                 xor edi, edi
// 00512232  897c2410             mov dword ptr [esp + 0x10], edi
// 00512236  8b742444             mov esi, dword ptr [esp + 0x44]
// 0051223a  50                   push eax
// 0051223b  8bce                 mov ecx, esi
// 0051223d  897c2440             mov dword ptr [esp + 0x40], edi
// 00512241  ff155c248000         call dword ptr [0x80245c]
// 00512247  8d4c241c             lea ecx, [esp + 0x1c]
// 0051224b  51                   push ecx
// 0051224c  8bce                 mov ecx, esi
// 0051224e  897c2440             mov dword ptr [esp + 0x40], edi
// 00512252  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0051225a  ff156c248000         call dword ptr [0x80246c]
// 00512260  8b38                 mov edi, dword ptr [eax]
// 00512262  8b6804               mov ebp, dword ptr [eax + 4]
// 00512265  8d542424             lea edx, [esp + 0x24]
// 00512269  52                   push edx
// 0051226a  8bce                 mov ecx, esi
// 0051226c  ff1554238000         call dword ptr [0x802354]
// 00512272  8b08                 mov ecx, dword ptr [eax]
// 00512274  8b5804               mov ebx, dword ptr [eax + 4]
// 00512277  8d54242c             lea edx, [esp + 0x2c]
// 0051227b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0051227f  52                   push edx
// 00512280  8bce                 mov ecx, esi
// 00512282  ff156c248000         call dword ptr [0x80246c]
// 00512288  8b08                 mov ecx, dword ptr [eax]
// 0051228a  8b4004               mov eax, dword ptr [eax + 4]
// 0051228d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00512291  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00512295  c644241400           mov byte ptr [esp + 0x14], 0
// 0051229a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051229e  52                   push edx
// 0051229f  8b15f8278000         mov edx, dword ptr [0x8027f8]
// 005122a5  51                   push ecx
// 005122a6  52                   push edx
// 005122a7  55                   push ebp
// 005122a8  57                   push edi
// 005122a9  53                   push ebx
// 005122aa  50                   push eax
// 005122ab  8d442430             lea eax, [esp + 0x30]
// 005122af  50                   push eax
// 005122b0  e8ebacf5ff           call 0x46cfa0
// 005122b5  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005122b9  83c420               add esp, 0x20
// 005122bc  5f                   pop edi
// 005122bd  8bc6                 mov eax, esi
// 005122bf  5e                   pop esi
// 005122c0  5d                   pop ebp
// 005122c1  5b                   pop ebx
// 005122c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005122c9  83c430               add esp, 0x30
// 005122cc  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ?toUpper@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
