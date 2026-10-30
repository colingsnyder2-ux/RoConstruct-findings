// roc 2009-12 0080a3d0  unit: CXTPImageManagerResource::CBitmapDC  size: 376 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080a3d0
//
// 0080a3d0  6aff                 push -1
// 0080a3d2  68183f9600           push 0x963f18
// 0080a3d7  64a100000000         mov eax, dword ptr fs:[0]
// 0080a3dd  50                   push eax
// 0080a3de  83ec1c               sub esp, 0x1c
// 0080a3e1  53                   push ebx
// 0080a3e2  55                   push ebp
// 0080a3e3  56                   push esi
// 0080a3e4  57                   push edi
// 0080a3e5  a10052b600           mov eax, dword ptr [0xb65200]
// 0080a3ea  33c4                 xor eax, esp
// 0080a3ec  50                   push eax
// 0080a3ed  8d442430             lea eax, [esp + 0x30]
// 0080a3f1  64a300000000         mov dword ptr fs:[0], eax
// 0080a3f7  8b442444             mov eax, dword ptr [esp + 0x44]
// 0080a3fb  8b742440             mov esi, dword ptr [esp + 0x40]
// 0080a3ff  6a02                 push 2
// 0080a401  50                   push eax
// 0080a402  56                   push esi
// 0080a403  ff15ecb19800         call dword ptr [0x98b1ec]
// 0080a409  8be8                 mov ebp, eax
// 0080a40b  85ed                 test ebp, ebp
// 0080a40d  0f849a000000         je 0x80a4ad
// 0080a413  55                   push ebp
// 0080a414  56                   push esi
// 0080a415  ff15f0b19800         call dword ptr [0x98b1f0]
// 0080a41b  8bd8                 mov ebx, eax
// 0080a41d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0080a421  85db                 test ebx, ebx
// 0080a423  0f8484000000         je 0x80a4ad
// 0080a429  53                   push ebx
// 0080a42a  ff157cb29800         call dword ptr [0x98b27c]
// 0080a430  8bf8                 mov edi, eax
// 0080a432  85ff                 test edi, edi
// 0080a434  7477                 je 0x80a4ad
// 0080a436  8b7708               mov esi, dword ptr [edi + 8]
// 0080a439  0faf7704             imul esi, dword ptr [edi + 4]
// 0080a43d  03f6                 add esi, esi
// 0080a43f  03f6                 add esi, esi
// 0080a441  66837f0e20           cmp word ptr [edi + 0xe], 0x20
// 0080a446  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0080a44e  0f85d5000000         jne 0x80a529
// 0080a454  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0080a458  55                   push ebp
// 0080a459  51                   push ecx
// 0080a45a  ff15f4b19800         call dword ptr [0x98b1f4]
// 0080a460  8d5628               lea edx, [esi + 0x28]
// 0080a463  3bc2                 cmp eax, edx
// 0080a465  0f82be000000         jb 0x80a529
// 0080a46b  8d4c2420             lea ecx, [esp + 0x20]
// 0080a46f  e83ac01100           call 0x9264ae
// 0080a474  33ed                 xor ebp, ebp
// 0080a476  55                   push ebp
// 0080a477  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0080a47b  ff1554b19800         call dword ptr [0x98b154]
// 0080a481  50                   push eax
// 0080a482  8d4c2424             lea ecx, [esp + 0x24]
// 0080a486  e811c01100           call 0x92649c
// 0080a48b  6a34                 push 0x34
// 0080a48d  ff1578b79800         call dword ptr [0x98b778]
// 0080a493  8bd8                 mov ebx, eax
// 0080a495  83c404               add esp, 4
// 0080a498  3bdd                 cmp ebx, ebp
// 0080a49a  7527                 jne 0x80a4c3
// 0080a49c  8d4c2420             lea ecx, [esp + 0x20]
// 0080a4a0  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0080a4a8  e8fbbf1100           call 0x9264a8
// 0080a4ad  33c0                 xor eax, eax
// 0080a4af  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0080a4b3  64890d00000000       mov dword ptr fs:[0], ecx
// 0080a4ba  59                   pop ecx
// 0080a4bb  5f                   pop edi
// 0080a4bc  5e                   pop esi
// 0080a4bd  5d                   pop ebp
// 0080a4be  5b                   pop ebx
// 0080a4bf  83c428               add esp, 0x28
// 0080a4c2  c3                   ret 
// 0080a4c3  6a28                 push 0x28
// 0080a4c5  57                   push edi
// 0080a4c6  53                   push ebx
// 0080a4c7  e844e1ffff           call 0x808610
// 0080a4cc  83c40c               add esp, 0xc
// 0080a4cf  55                   push ebp
// 0080a4d0  55                   push ebp
// 0080a4d1  8d44241c             lea eax, [esp + 0x1c]
// 0080a4d5  50                   push eax
// 0080a4d6  55                   push ebp
// 0080a4d7  897314               mov dword ptr [ebx + 0x14], esi
// 0080a4da  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0080a4de  53                   push ebx
// 0080a4df  51                   push ecx
// 0080a4e0  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0080a4e4  ff1560b19800         call dword ptr [0x98b160]
// 0080a4ea  8be8                 mov ebp, eax
// 0080a4ec  85ed                 test ebp, ebp
// 0080a4ee  741a                 je 0x80a50a
// 0080a4f0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080a4f4  85c0                 test eax, eax
// 0080a4f6  7412                 je 0x80a50a
// 0080a4f8  56                   push esi
// 0080a4f9  83c728               add edi, 0x28
// 0080a4fc  57                   push edi
// 0080a4fd  50                   push eax
// 0080a4fe  e80de1ffff           call 0x808610
// 0080a503  83c40c               add esp, 0xc
// 0080a506  896c2418             mov dword ptr [esp + 0x18], ebp
// 0080a50a  53                   push ebx
// 0080a50b  ff1540b79800         call dword ptr [0x98b740]
// 0080a511  83c404               add esp, 4
// 0080a514  8d4c2420             lea ecx, [esp + 0x20]
// 0080a518  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0080a520  e883bf1100           call 0x9264a8
// 0080a525  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0080a529  53                   push ebx
// 0080a52a  ff1578b29800         call dword ptr [0x98b278]
// 0080a530  8b442418             mov eax, dword ptr [esp + 0x18]
// 0080a534  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0080a538  64890d00000000       mov dword ptr fs:[0], ecx
// 0080a53f  59                   pop ecx
// 0080a540  5f                   pop edi
// 0080a541  5e                   pop esi
// 0080a542  5d                   pop ebp
// 0080a543  5b                   pop ebx
// 0080a544  83c428               add esp, 0x28
// 0080a547  c3                   ret 
// copied from an identical function in another client (function ?LoadAlphaBitmap@CXTPImageManagerIcon@@SAPAUHBITMAP__@@PAUHINSTANCE__@@PBD@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports Source\Common\XTPImageManager.cpp