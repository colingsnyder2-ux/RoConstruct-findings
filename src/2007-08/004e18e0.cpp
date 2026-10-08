// roc 2007-08 004e18e0  unit: PBBBuilder  size: 433 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e18e0
//
// 004e18e0  6aff                 push -1
// 004e18e2  683bce7400           push 0x74ce3b
// 004e18e7  64a100000000         mov eax, dword ptr fs:[0]
// 004e18ed  50                   push eax
// 004e18ee  64892500000000       mov dword ptr fs:[0], esp
// 004e18f5  83ec4c               sub esp, 0x4c
// 004e18f8  55                   push ebp
// 004e18f9  56                   push esi
// 004e18fa  8be9                 mov ebp, ecx
// 004e18fc  57                   push edi
// 004e18fd  896c2414             mov dword ptr [esp + 0x14], ebp
// 004e1901  e87a480100           call 0x4f6180
// 004e1906  33f6                 xor esi, esi
// 004e1908  6a1c                 push 0x1c
// 004e190a  89742464             mov dword ptr [esp + 0x64], esi
// 004e190e  c7450054f37900       mov dword ptr [ebp], 0x79f354
// 004e1915  e8dce51400           call 0x62fef6
// 004e191a  83c404               add esp, 4
// 004e191d  3bc6                 cmp eax, esi
// 004e191f  7424                 je 0x4e1945
// 004e1921  c70084797900         mov dword ptr [eax], 0x797984
// 004e1927  897004               mov dword ptr [eax + 4], esi
// 004e192a  897008               mov dword ptr [eax + 8], esi
// 004e192d  c70004f37900         mov dword ptr [eax], 0x79f304
// 004e1933  897010               mov dword ptr [eax + 0x10], esi
// 004e1936  897014               mov dword ptr [eax + 0x14], esi
// 004e1939  89700c               mov dword ptr [eax + 0xc], esi
// 004e193c  c7401805000000       mov dword ptr [eax + 0x18], 5
// 004e1943  eb02                 jmp 0x4e1947
// 004e1945  33c0                 xor eax, eax
// 004e1947  3bc6                 cmp eax, esi
// 004e1949  89742410             mov dword ptr [esp + 0x10], esi
// 004e194d  740e                 je 0x4e195d
// 004e194f  89442410             mov dword ptr [esp + 0x10], eax
// 004e1953  83c004               add eax, 4
// 004e1956  50                   push eax
// 004e1957  ff15ecd27700         call dword ptr [0x77d2ec]
// 004e195d  8d442410             lea eax, [esp + 0x10]
// 004e1961  50                   push eax
// 004e1962  8d4d0c               lea ecx, [ebp + 0xc]
// 004e1965  c644246403           mov byte ptr [esp + 0x64], 3
// 004e196a  e8e1b8ffff           call 0x4dd250
// 004e196f  8b742468             mov esi, dword ptr [esp + 0x68]
// 004e1973  d906                 fld dword ptr [esi]
// 004e1975  33c0                 xor eax, eax
// 004e1977  50                   push eax
// 004e1978  83ec0c               sub esp, 0xc
// 004e197b  8bc4                 mov eax, esp
// 004e197d  d918                 fstp dword ptr [eax]
// 004e197f  8d4c2420             lea ecx, [esp + 0x20]
// 004e1983  d94604               fld dword ptr [esi + 4]
// 004e1986  89642428             mov dword ptr [esp + 0x28], esp
// 004e198a  d95804               fstp dword ptr [eax + 4]
// 004e198d  51                   push ecx
// 004e198e  d94608               fld dword ptr [esi + 8]
// 004e1991  8d4c2444             lea ecx, [esp + 0x44]
// 004e1995  d95808               fstp dword ptr [eax + 8]
// 004e1998  e8a3ceffff           call 0x4de840
// 004e199d  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 004e19a1  8d54241c             lea edx, [esp + 0x1c]
// 004e19a5  52                   push edx
// 004e19a6  57                   push edi
// 004e19a7  8d44242c             lea eax, [esp + 0x2c]
// 004e19ab  56                   push esi
// 004e19ac  50                   push eax
// 004e19ad  c644247004           mov byte ptr [esp + 0x70], 4
// 004e19b2  e809880d00           call 0x5ba1c0
// 004e19b7  83c40c               add esp, 0xc
// 004e19ba  8bc8                 mov ecx, eax
// 004e19bc  e84f960200           call 0x50b010
// 004e19c1  d900                 fld dword ptr [eax]
// 004e19c3  dd05085c7900         fld qword ptr [0x795c08]
// 004e19c9  6a01                 push 1
// 004e19cb  dcc9                 fmul st(1), st(0)
// 004e19cd  57                   push edi
// 004e19ce  d9c9                 fxch st(1)
// 004e19d0  8d4c2438             lea ecx, [esp + 0x38]
// 004e19d4  d95c2470             fstp dword ptr [esp + 0x70]
// 004e19d8  d84804               fmul dword ptr [eax + 4]
// 004e19db  8b442478             mov eax, dword ptr [esp + 0x78]
// 004e19df  d95c2474             fstp dword ptr [esp + 0x74]
// 004e19e3  d9442470             fld dword ptr [esp + 0x70]
// 004e19e7  d830                 fdiv dword ptr [eax]
// 004e19e9  d95c2470             fstp dword ptr [esp + 0x70]
// 004e19ed  d9442474             fld dword ptr [esp + 0x74]
// 004e19f1  d87004               fdiv dword ptr [eax + 4]
// 004e19f4  d95c2474             fstp dword ptr [esp + 0x74]
// 004e19f8  d9442470             fld dword ptr [esp + 0x70]
// 004e19fc  d95c2450             fstp dword ptr [esp + 0x50]
// 004e1a00  d9442474             fld dword ptr [esp + 0x74]
// 004e1a04  d95c2454             fstp dword ptr [esp + 0x54]
// 004e1a08  e813d20000           call 0x4eec20
// 004e1a0d  8b442444             mov eax, dword ptr [esp + 0x44]
// 004e1a11  85c0                 test eax, eax
// 004e1a13  8b35e8d27700         mov esi, dword ptr [0x77d2e8]
// 004e1a19  c644246003           mov byte ptr [esp + 0x60], 3
// 004e1a1e  742b                 je 0x4e1a4b
// 004e1a20  83c004               add eax, 4
// 004e1a23  50                   push eax
// 004e1a24  ffd6                 call esi
// 004e1a26  85c0                 test eax, eax
// 004e1a28  7519                 jne 0x4e1a43
// 004e1a2a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004e1a2e  e89d63f7ff           call 0x457dd0
// 004e1a33  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004e1a37  85c9                 test ecx, ecx
// 004e1a39  7408                 je 0x4e1a43
// 004e1a3b  8b11                 mov edx, dword ptr [ecx]
// 004e1a3d  8b02                 mov eax, dword ptr [edx]
// 004e1a3f  6a01                 push 1
// 004e1a41  ffd0                 call eax
// 004e1a43  c744244400000000     mov dword ptr [esp + 0x44], 0
// 004e1a4b  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e1a4f  85c0                 test eax, eax
// 004e1a51  c644246000           mov byte ptr [esp + 0x60], 0
// 004e1a56  7423                 je 0x4e1a7b
// 004e1a58  83c004               add eax, 4
// 004e1a5b  50                   push eax
// 004e1a5c  ffd6                 call esi
// 004e1a5e  85c0                 test eax, eax
// 004e1a60  7519                 jne 0x4e1a7b
// 004e1a62  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e1a66  e86563f7ff           call 0x457dd0
// 004e1a6b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e1a6f  85c9                 test ecx, ecx
// 004e1a71  7408                 je 0x4e1a7b
// 004e1a73  8b11                 mov edx, dword ptr [ecx]
// 004e1a75  8b02                 mov eax, dword ptr [edx]
// 004e1a77  6a01                 push 1
// 004e1a79  ffd0                 call eax
// 004e1a7b  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 004e1a7f  5f                   pop edi
// 004e1a80  5e                   pop esi
// 004e1a81  8bc5                 mov eax, ebp
// 004e1a83  64890d00000000       mov dword ptr fs:[0], ecx
// 004e1a8a  5d                   pop ebp
// 004e1a8b  83c458               add esp, 0x58
// 004e1a8e  c20c00               ret 0xc
// library rbxgs-view/PBBMesh.cpp (function ??0PBBMesh@View@RBX@@AAE@ABVVector3@G3D@@W4NormalId@2@ABVVector2@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
