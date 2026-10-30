// roc 2010-06 0081b400  unit: CPropertyGridItemBrickColor  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081b400
//
// 0081b400  6aff                 push -1
// 0081b402  6840519b00           push 0x9b5140
// 0081b407  64a100000000         mov eax, dword ptr fs:[0]
// 0081b40d  50                   push eax
// 0081b40e  83ec48               sub esp, 0x48
// 0081b411  53                   push ebx
// 0081b412  55                   push ebp
// 0081b413  56                   push esi
// 0081b414  57                   push edi
// 0081b415  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0081b41a  33c4                 xor eax, esp
// 0081b41c  50                   push eax
// 0081b41d  8d44245c             lea eax, [esp + 0x5c]
// 0081b421  64a300000000         mov dword ptr fs:[0], eax
// 0081b427  8bf9                 mov edi, ecx
// 0081b429  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0081b42d  8b4608               mov eax, dword ptr [esi + 8]
// 0081b430  50                   push eax
// 0081b431  ff156ca19e00         call dword ptr [0x9ea16c]
// 0081b437  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0081b43b  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 0081b43f  8d69fe               lea ebp, [ecx - 2]
// 0081b442  83c112               add ecx, 0x12
// 0081b445  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0081b449  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0081b44d  49                   dec ecx
// 0081b44e  894c2430             mov dword ptr [esp + 0x30], ecx
// 0081b452  8b4e04               mov ecx, dword ptr [esi + 4]
// 0081b455  50                   push eax
// 0081b456  51                   push ecx
// 0081b457  8d4c2450             lea ecx, [esp + 0x50]
// 0081b45b  43                   inc ebx
// 0081b45c  e8df42feff           call 0x7ff740
// 0081b461  8b970c010000         mov edx, dword ptr [edi + 0x10c]
// 0081b467  8b4604               mov eax, dword ptr [esi + 4]
// 0081b46a  52                   push edx
// 0081b46b  50                   push eax
// 0081b46c  8d4c243c             lea ecx, [esp + 0x3c]
// 0081b470  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 0081b478  e88343feff           call 0x7ff800
// 0081b47d  8b442430             mov eax, dword ptr [esp + 0x30]
// 0081b481  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0081b485  8b5604               mov edx, dword ptr [esi + 4]
// 0081b488  50                   push eax
// 0081b489  51                   push ecx
// 0081b48a  53                   push ebx
// 0081b48b  55                   push ebp
// 0081b48c  52                   push edx
// 0081b48d  c644247801           mov byte ptr [esp + 0x78], 1
// 0081b492  ff1508a19e00         call dword ptr [0x9ea108]
// 0081b498  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0081b49c  8b542478             mov edx, dword ptr [esp + 0x78]
// 0081b4a0  8b442470             mov eax, dword ptr [esp + 0x70]
// 0081b4a4  8b1e                 mov ebx, dword ptr [esi]
// 0081b4a6  894c2418             mov dword ptr [esp + 0x18], ecx
// 0081b4aa  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0081b4ae  89442414             mov dword ptr [esp + 0x14], eax
// 0081b4b2  8954241c             mov dword ptr [esp + 0x1c], edx
// 0081b4b6  6a24                 push 0x24
// 0081b4b8  8d542418             lea edx, [esp + 0x18]
// 0081b4bc  894c2424             mov dword ptr [esp + 0x24], ecx
// 0081b4c0  83c019               add eax, 0x19
// 0081b4c3  81c7a4000000         add edi, 0xa4
// 0081b4c9  52                   push edx
// 0081b4ca  8bcf                 mov ecx, edi
// 0081b4cc  8944241c             mov dword ptr [esp + 0x1c], eax
// 0081b4d0  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0081b4d6  50                   push eax
// 0081b4d7  8bcf                 mov ecx, edi
// 0081b4d9  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0081b4df  50                   push eax
// 0081b4e0  8b4370               mov eax, dword ptr [ebx + 0x70]
// 0081b4e3  8bce                 mov ecx, esi
// 0081b4e5  ffd0                 call eax
// 0081b4e7  8d4c2434             lea ecx, [esp + 0x34]
// 0081b4eb  c644246400           mov byte ptr [esp + 0x64], 0
// 0081b4f0  e89b43feff           call 0x7ff890
// 0081b4f5  8d4c2448             lea ecx, [esp + 0x48]
// 0081b4f9  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 0081b501  e8ca42feff           call 0x7ff7d0
// 0081b506  b801000000           mov eax, 1
// 0081b50b  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0081b50f  64890d00000000       mov dword ptr fs:[0], ecx
// 0081b516  59                   pop ecx
// 0081b517  5f                   pop edi
// 0081b518  5e                   pop esi
// 0081b519  5d                   pop ebp
// 0081b51a  5b                   pop ebx
// 0081b51b  83c454               add esp, 0x54
// 0081b51e  c21400               ret 0x14
// copied from an identical function in another client (function ?OnDrawItemValue@CXTPPropertyGridItemColor@@MAEHAAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItemColor.cpp