// roc 2009-12 004cd110  unit: G3D::VARArea  size: 498 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cd110
//
// 004cd110  6aff                 push -1
// 004cd112  68302f9300           push 0x932f30
// 004cd117  64a100000000         mov eax, dword ptr fs:[0]
// 004cd11d  50                   push eax
// 004cd11e  64892500000000       mov dword ptr fs:[0], esp
// 004cd125  83ec0c               sub esp, 0xc
// 004cd128  53                   push ebx
// 004cd129  55                   push ebp
// 004cd12a  56                   push esi
// 004cd12b  57                   push edi
// 004cd12c  8bf1                 mov esi, ecx
// 004cd12e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 004cd132  33ff                 xor edi, edi
// 004cd134  3bae14010000         cmp ebp, dword ptr [esi + 0x114]
// 004cd13a  8bc5                 mov eax, ebp
// 004cd13c  0f9c44242c           setl byte ptr [esp + 0x2c]
// 004cd141  6bc05c               imul eax, eax, 0x5c
// 004cd144  8d1c30               lea ebx, [eax + esi]
// 004cd147  8b83d8040000         mov eax, dword ptr [ebx + 0x4d8]
// 004cd14d  895c2418             mov dword ptr [esp + 0x18], ebx
// 004cd151  81c3d8040000         add ebx, 0x4d8
// 004cd157  897c2424             mov dword ptr [esp + 0x24], edi
// 004cd15b  897c2410             mov dword ptr [esp + 0x10], edi
// 004cd15f  3bc7                 cmp eax, edi
// 004cd161  7410                 je 0x4cd173
// 004cd163  8bf8                 mov edi, eax
// 004cd165  83c004               add eax, 4
// 004cd168  50                   push eax
// 004cd169  897c2414             mov dword ptr [esp + 0x14], edi
// 004cd16d  ff150cb29800         call dword ptr [0x98b20c]
// 004cd173  8b442430             mov eax, dword ptr [esp + 0x30]
// 004cd177  b901000000           mov ecx, 1
// 004cd17c  014e74               add dword ptr [esi + 0x74], ecx
// 004cd17f  c644242401           mov byte ptr [esp + 0x24], 1
// 004cd184  3bf8                 cmp edi, eax
// 004cd186  7546                 jne 0x4cd1ce
// 004cd188  8b3508b29800         mov esi, dword ptr [0x98b208]
// 004cd18e  c644242400           mov byte ptr [esp + 0x24], 0
// 004cd193  85ff                 test edi, edi
// 004cd195  741f                 je 0x4cd1b6
// 004cd197  8d4704               lea eax, [edi + 4]
// 004cd19a  50                   push eax
// 004cd19b  ffd6                 call esi
// 004cd19d  85c0                 test eax, eax
// 004cd19f  7511                 jne 0x4cd1b2
// 004cd1a1  8bcf                 mov ecx, edi
// 004cd1a3  e878def7ff           call 0x44b020
// 004cd1a8  8b17                 mov edx, dword ptr [edi]
// 004cd1aa  8b02                 mov eax, dword ptr [edx]
// 004cd1ac  6a01                 push 1
// 004cd1ae  8bcf                 mov ecx, edi
// 004cd1b0  ffd0                 call eax
// 004cd1b2  8b442430             mov eax, dword ptr [esp + 0x30]
// 004cd1b6  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004cd1be  85c0                 test eax, eax
// 004cd1c0  0f8417010000         je 0x4cd2dd
// 004cd1c6  83c004               add eax, 4
// 004cd1c9  e9ef000000           jmp 0x4cd2bd
// 004cd1ce  014e6c               add dword ptr [esi + 0x6c], ecx
// 004cd1d1  50                   push eax
// 004cd1d2  8bcb                 mov ecx, ebx
// 004cd1d4  e897e9f7ff           call 0x44bb70
// 004cd1d9  8b86c4040000         mov eax, dword ptr [esi + 0x4c4]
// 004cd1df  3bc5                 cmp eax, ebp
// 004cd1e1  7d02                 jge 0x4cd1e5
// 004cd1e3  8bc5                 mov eax, ebp
// 004cd1e5  8986c4040000         mov dword ptr [esi + 0x4c4], eax
// 004cd1eb  803dbed0b70000       cmp byte ptr [0xb7d0be], 0
// 004cd1f2  740d                 je 0x4cd201
// 004cd1f4  8d8dc0840000         lea ecx, [ebp + 0x84c0]
// 004cd1fa  51                   push ecx
// 004cd1fb  ff1514d9b700         call dword ptr [0xb7d914]
// 004cd201  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 004cd206  7405                 je 0x4cd20d
// 004cd208  e843cd0000           call 0x4d9f50
// 004cd20d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004cd211  85c9                 test ecx, ecx
// 004cd213  0f84d9000000         je 0x4cd2f2
// 004cd219  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 004cd21c  e8afa4ffff           call 0x4c76d0
// 004cd221  89442414             mov dword ptr [esp + 0x14], eax
// 004cd225  399caeec000000       cmp dword ptr [esi + ebp*4 + 0xec], ebx
// 004cd22c  7413                 je 0x4cd241
// 004cd22e  53                   push ebx
// 004cd22f  50                   push eax
// 004cd230  ff15e4bb9800         call dword ptr [0x98bbe4]
// 004cd236  8b442414             mov eax, dword ptr [esp + 0x14]
// 004cd23a  899caeec000000       mov dword ptr [esi + ebp*4 + 0xec], ebx
// 004cd241  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 004cd246  7407                 je 0x4cd24f
// 004cd248  50                   push eax
// 004cd249  ff15d0bb9800         call dword ptr [0x98bbd0]
// 004cd24f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004cd253  85ff                 test edi, edi
// 004cd255  740c                 je 0x4cd263
// 004cd257  85c9                 test ecx, ecx
// 004cd259  7408                 je 0x4cd263
// 004cd25b  8a5770               mov dl, byte ptr [edi + 0x70]
// 004cd25e  3a5170               cmp dl, byte ptr [ecx + 0x70]
// 004cd261  741d                 je 0x4cd280
// 004cd263  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 004cd268  7416                 je 0x4cd280
// 004cd26a  8b442418             mov eax, dword ptr [esp + 0x18]
// 004cd26e  05dc040000           add eax, 0x4dc
// 004cd273  50                   push eax
// 004cd274  55                   push ebp
// 004cd275  8bce                 mov ecx, esi
// 004cd277  e844fbffff           call 0x4ccdc0
// 004cd27c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004cd280  8b3508b29800         mov esi, dword ptr [0x98b208]
// 004cd286  c644242400           mov byte ptr [esp + 0x24], 0
// 004cd28b  85ff                 test edi, edi
// 004cd28d  741f                 je 0x4cd2ae
// 004cd28f  8d4704               lea eax, [edi + 4]
// 004cd292  50                   push eax
// 004cd293  ffd6                 call esi
// 004cd295  85c0                 test eax, eax
// 004cd297  7511                 jne 0x4cd2aa
// 004cd299  8bcf                 mov ecx, edi
// 004cd29b  e880ddf7ff           call 0x44b020
// 004cd2a0  8b17                 mov edx, dword ptr [edi]
// 004cd2a2  8b02                 mov eax, dword ptr [edx]
// 004cd2a4  6a01                 push 1
// 004cd2a6  8bcf                 mov ecx, edi
// 004cd2a8  ffd0                 call eax
// 004cd2aa  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004cd2ae  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004cd2b6  85c9                 test ecx, ecx
// 004cd2b8  7423                 je 0x4cd2dd
// 004cd2ba  8d4104               lea eax, [ecx + 4]
// 004cd2bd  50                   push eax
// 004cd2be  ffd6                 call esi
// 004cd2c0  85c0                 test eax, eax
// 004cd2c2  7519                 jne 0x4cd2dd
// 004cd2c4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004cd2c8  e853ddf7ff           call 0x44b020
// 004cd2cd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004cd2d1  85c9                 test ecx, ecx
// 004cd2d3  7408                 je 0x4cd2dd
// 004cd2d5  8b11                 mov edx, dword ptr [ecx]
// 004cd2d7  8b02                 mov eax, dword ptr [edx]
// 004cd2d9  6a01                 push 1
// 004cd2db  ffd0                 call eax
// 004cd2dd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004cd2e1  5f                   pop edi
// 004cd2e2  5e                   pop esi
// 004cd2e3  5d                   pop ebp
// 004cd2e4  5b                   pop ebx
// 004cd2e5  64890d00000000       mov dword ptr fs:[0], ecx
// 004cd2ec  83c418               add esp, 0x18
// 004cd2ef  c20800               ret 8
// 004cd2f2  c784aeec00000000000000 mov dword ptr [esi + ebp*4 + 0xec], 0
// 004cd2fd  e951ffffff           jmp 0x4cd253
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTexture@RenderDevice@G3D@@QAEXIV?$ReferenceCountedPointer@VTexture@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
