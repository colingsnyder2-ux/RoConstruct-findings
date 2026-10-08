// roc 2007-08 004e4b00  unit: RBX::View::BrickMesh  size: 475 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e4b00
//
// 004e4b00  6aff                 push -1
// 004e4b02  686bcf7400           push 0x74cf6b
// 004e4b07  64a100000000         mov eax, dword ptr fs:[0]
// 004e4b0d  50                   push eax
// 004e4b0e  64892500000000       mov dword ptr fs:[0], esp
// 004e4b15  83ec50               sub esp, 0x50
// 004e4b18  55                   push ebp
// 004e4b19  56                   push esi
// 004e4b1a  8be9                 mov ebp, ecx
// 004e4b1c  57                   push edi
// 004e4b1d  896c2414             mov dword ptr [esp + 0x14], ebp
// 004e4b21  e85a160100           call 0x4f6180
// 004e4b26  33ff                 xor edi, edi
// 004e4b28  6a1c                 push 0x1c
// 004e4b2a  897c2468             mov dword ptr [esp + 0x68], edi
// 004e4b2e  c74500c8f37900       mov dword ptr [ebp], 0x79f3c8
// 004e4b35  e8bcb31400           call 0x62fef6
// 004e4b3a  83c404               add esp, 4
// 004e4b3d  3bc7                 cmp eax, edi
// 004e4b3f  7424                 je 0x4e4b65
// 004e4b41  c70084797900         mov dword ptr [eax], 0x797984
// 004e4b47  897804               mov dword ptr [eax + 4], edi
// 004e4b4a  897808               mov dword ptr [eax + 8], edi
// 004e4b4d  c70004f37900         mov dword ptr [eax], 0x79f304
// 004e4b53  897810               mov dword ptr [eax + 0x10], edi
// 004e4b56  897814               mov dword ptr [eax + 0x14], edi
// 004e4b59  89780c               mov dword ptr [eax + 0xc], edi
// 004e4b5c  c7401805000000       mov dword ptr [eax + 0x18], 5
// 004e4b63  eb02                 jmp 0x4e4b67
// 004e4b65  33c0                 xor eax, eax
// 004e4b67  3bc7                 cmp eax, edi
// 004e4b69  897c2410             mov dword ptr [esp + 0x10], edi
// 004e4b6d  740e                 je 0x4e4b7d
// 004e4b6f  89442410             mov dword ptr [esp + 0x10], eax
// 004e4b73  83c004               add eax, 4
// 004e4b76  50                   push eax
// 004e4b77  ff15ecd27700         call dword ptr [0x77d2ec]
// 004e4b7d  8d442410             lea eax, [esp + 0x10]
// 004e4b81  50                   push eax
// 004e4b82  8d4d0c               lea ecx, [ebp + 0xc]
// 004e4b85  c644246803           mov byte ptr [esp + 0x68], 3
// 004e4b8a  e8c186ffff           call 0x4dd250
// 004e4b8f  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 004e4b93  d906                 fld dword ptr [esi]
// 004e4b95  33c0                 xor eax, eax
// 004e4b97  d95c2420             fstp dword ptr [esp + 0x20]
// 004e4b9b  50                   push eax
// 004e4b9c  d94604               fld dword ptr [esi + 4]
// 004e4b9f  83ec0c               sub esp, 0xc
// 004e4ba2  d95c2434             fstp dword ptr [esp + 0x34]
// 004e4ba6  8bc4                 mov eax, esp
// 004e4ba8  d94608               fld dword ptr [esi + 8]
// 004e4bab  8d4c2420             lea ecx, [esp + 0x20]
// 004e4baf  d95c2438             fstp dword ptr [esp + 0x38]
// 004e4bb3  8964247c             mov dword ptr [esp + 0x7c], esp
// 004e4bb7  d9442430             fld dword ptr [esp + 0x30]
// 004e4bbb  51                   push ecx
// 004e4bbc  d918                 fstp dword ptr [eax]
// 004e4bbe  8d4c244c             lea ecx, [esp + 0x4c]
// 004e4bc2  d9442438             fld dword ptr [esp + 0x38]
// 004e4bc6  d95804               fstp dword ptr [eax + 4]
// 004e4bc9  d944243c             fld dword ptr [esp + 0x3c]
// 004e4bcd  d95808               fstp dword ptr [eax + 8]
// 004e4bd0  e82ba10000           call 0x4eed00
// 004e4bd5  d90560f37900         fld dword ptr [0x79f360]
// 004e4bdb  c744243888f37900     mov dword ptr [esp + 0x38], 0x79f388
// 004e4be3  d95c2458             fstp dword ptr [esp + 0x58]
// 004e4be7  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 004e4beb  8d542418             lea edx, [esp + 0x18]
// 004e4bef  52                   push edx
// 004e4bf0  57                   push edi
// 004e4bf1  8d442434             lea eax, [esp + 0x34]
// 004e4bf5  56                   push esi
// 004e4bf6  50                   push eax
// 004e4bf7  c644247404           mov byte ptr [esp + 0x74], 4
// 004e4bfc  e8bf550d00           call 0x5ba1c0
// 004e4c01  83c40c               add esp, 0xc
// 004e4c04  8bc8                 mov ecx, eax
// 004e4c06  e805640200           call 0x50b010
// 004e4c0b  d900                 fld dword ptr [eax]
// 004e4c0d  dd05085c7900         fld qword ptr [0x795c08]
// 004e4c13  6a01                 push 1
// 004e4c15  dcc9                 fmul st(1), st(0)
// 004e4c17  57                   push edi
// 004e4c18  d9c9                 fxch st(1)
// 004e4c1a  8d4c2440             lea ecx, [esp + 0x40]
// 004e4c1e  d95c2474             fstp dword ptr [esp + 0x74]
// 004e4c22  d84804               fmul dword ptr [eax + 4]
// 004e4c25  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 004e4c29  d95c2478             fstp dword ptr [esp + 0x78]
// 004e4c2d  d9442474             fld dword ptr [esp + 0x74]
// 004e4c31  d830                 fdiv dword ptr [eax]
// 004e4c33  d95c2474             fstp dword ptr [esp + 0x74]
// 004e4c37  d9442478             fld dword ptr [esp + 0x78]
// 004e4c3b  d87004               fdiv dword ptr [eax + 4]
// 004e4c3e  d95c2478             fstp dword ptr [esp + 0x78]
// 004e4c42  d9442474             fld dword ptr [esp + 0x74]
// 004e4c46  d95c2458             fstp dword ptr [esp + 0x58]
// 004e4c4a  d9442478             fld dword ptr [esp + 0x78]
// 004e4c4e  d95c245c             fstp dword ptr [esp + 0x5c]
// 004e4c52  e8c99f0000           call 0x4eec20
// 004e4c57  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004e4c5b  85c0                 test eax, eax
// 004e4c5d  8b35e8d27700         mov esi, dword ptr [0x77d2e8]
// 004e4c63  c644246403           mov byte ptr [esp + 0x64], 3
// 004e4c68  742b                 je 0x4e4c95
// 004e4c6a  83c004               add eax, 4
// 004e4c6d  50                   push eax
// 004e4c6e  ffd6                 call esi
// 004e4c70  85c0                 test eax, eax
// 004e4c72  7519                 jne 0x4e4c8d
// 004e4c74  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004e4c78  e85331f7ff           call 0x457dd0
// 004e4c7d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004e4c81  85c9                 test ecx, ecx
// 004e4c83  7408                 je 0x4e4c8d
// 004e4c85  8b11                 mov edx, dword ptr [ecx]
// 004e4c87  8b02                 mov eax, dword ptr [edx]
// 004e4c89  6a01                 push 1
// 004e4c8b  ffd0                 call eax
// 004e4c8d  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004e4c95  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e4c99  85c0                 test eax, eax
// 004e4c9b  c644246400           mov byte ptr [esp + 0x64], 0
// 004e4ca0  7423                 je 0x4e4cc5
// 004e4ca2  83c004               add eax, 4
// 004e4ca5  50                   push eax
// 004e4ca6  ffd6                 call esi
// 004e4ca8  85c0                 test eax, eax
// 004e4caa  7519                 jne 0x4e4cc5
// 004e4cac  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e4cb0  e81b31f7ff           call 0x457dd0
// 004e4cb5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e4cb9  85c9                 test ecx, ecx
// 004e4cbb  7408                 je 0x4e4cc5
// 004e4cbd  8b11                 mov edx, dword ptr [ecx]
// 004e4cbf  8b02                 mov eax, dword ptr [edx]
// 004e4cc1  6a01                 push 1
// 004e4cc3  ffd0                 call eax
// 004e4cc5  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004e4cc9  5f                   pop edi
// 004e4cca  5e                   pop esi
// 004e4ccb  8bc5                 mov eax, ebp
// 004e4ccd  64890d00000000       mov dword ptr fs:[0], ecx
// 004e4cd4  5d                   pop ebp
// 004e4cd5  83c45c               add esp, 0x5c
// 004e4cd8  c20c00               ret 0xc
// library rbxgs-view/WedgeMesh.cpp (function ??0WedgeMesh@View@RBX@@AAE@ABVVector3@G3D@@W4NormalId@2@ABVVector2@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp
