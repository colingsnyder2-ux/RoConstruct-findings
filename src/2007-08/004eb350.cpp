// roc 2007-08 004eb350  unit: CylinderBuilder  size: 435 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eb350
//
// 004eb350  6aff                 push -1
// 004eb352  68bbd17400           push 0x74d1bb
// 004eb357  64a100000000         mov eax, dword ptr fs:[0]
// 004eb35d  50                   push eax
// 004eb35e  64892500000000       mov dword ptr fs:[0], esp
// 004eb365  83ec48               sub esp, 0x48
// 004eb368  55                   push ebp
// 004eb369  56                   push esi
// 004eb36a  8be9                 mov ebp, ecx
// 004eb36c  57                   push edi
// 004eb36d  896c2414             mov dword ptr [esp + 0x14], ebp
// 004eb371  e80aae0000           call 0x4f6180
// 004eb376  33f6                 xor esi, esi
// 004eb378  6a1c                 push 0x1c
// 004eb37a  89742460             mov dword ptr [esp + 0x60], esi
// 004eb37e  c745006cf47900       mov dword ptr [ebp], 0x79f46c
// 004eb385  e86c4b1400           call 0x62fef6
// 004eb38a  83c404               add esp, 4
// 004eb38d  3bc6                 cmp eax, esi
// 004eb38f  7424                 je 0x4eb3b5
// 004eb391  c70084797900         mov dword ptr [eax], 0x797984
// 004eb397  897004               mov dword ptr [eax + 4], esi
// 004eb39a  897008               mov dword ptr [eax + 8], esi
// 004eb39d  c70004f37900         mov dword ptr [eax], 0x79f304
// 004eb3a3  897010               mov dword ptr [eax + 0x10], esi
// 004eb3a6  897014               mov dword ptr [eax + 0x14], esi
// 004eb3a9  89700c               mov dword ptr [eax + 0xc], esi
// 004eb3ac  c7401805000000       mov dword ptr [eax + 0x18], 5
// 004eb3b3  eb02                 jmp 0x4eb3b7
// 004eb3b5  33c0                 xor eax, eax
// 004eb3b7  3bc6                 cmp eax, esi
// 004eb3b9  89742410             mov dword ptr [esp + 0x10], esi
// 004eb3bd  740e                 je 0x4eb3cd
// 004eb3bf  89442410             mov dword ptr [esp + 0x10], eax
// 004eb3c3  83c004               add eax, 4
// 004eb3c6  50                   push eax
// 004eb3c7  ff15ecd27700         call dword ptr [0x77d2ec]
// 004eb3cd  8d442410             lea eax, [esp + 0x10]
// 004eb3d1  50                   push eax
// 004eb3d2  8d4d0c               lea ecx, [ebp + 0xc]
// 004eb3d5  c644246003           mov byte ptr [esp + 0x60], 3
// 004eb3da  e8711effff           call 0x4dd250
// 004eb3df  8b742464             mov esi, dword ptr [esp + 0x64]
// 004eb3e3  d906                 fld dword ptr [esi]
// 004eb3e5  6a0c                 push 0xc
// 004eb3e7  33c0                 xor eax, eax
// 004eb3e9  50                   push eax
// 004eb3ea  83ec0c               sub esp, 0xc
// 004eb3ed  8bc4                 mov eax, esp
// 004eb3ef  d918                 fstp dword ptr [eax]
// 004eb3f1  8d4c2424             lea ecx, [esp + 0x24]
// 004eb3f5  d94604               fld dword ptr [esi + 4]
// 004eb3f8  8964242c             mov dword ptr [esp + 0x2c], esp
// 004eb3fc  d95804               fstp dword ptr [eax + 4]
// 004eb3ff  51                   push ecx
// 004eb400  d94608               fld dword ptr [esi + 8]
// 004eb403  8d4c2448             lea ecx, [esp + 0x48]
// 004eb407  d95808               fstp dword ptr [eax + 8]
// 004eb40a  e871f9ffff           call 0x4ead80
// 004eb40f  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 004eb413  8d54241c             lea edx, [esp + 0x1c]
// 004eb417  52                   push edx
// 004eb418  57                   push edi
// 004eb419  8d44242c             lea eax, [esp + 0x2c]
// 004eb41d  56                   push esi
// 004eb41e  50                   push eax
// 004eb41f  c644246c04           mov byte ptr [esp + 0x6c], 4
// 004eb424  e897ed0c00           call 0x5ba1c0
// 004eb429  83c40c               add esp, 0xc
// 004eb42c  8bc8                 mov ecx, eax
// 004eb42e  e8ddfb0100           call 0x50b010
// 004eb433  d900                 fld dword ptr [eax]
// 004eb435  dd05085c7900         fld qword ptr [0x795c08]
// 004eb43b  6a01                 push 1
// 004eb43d  dcc9                 fmul st(1), st(0)
// 004eb43f  57                   push edi
// 004eb440  d9c9                 fxch st(1)
// 004eb442  8d4c2438             lea ecx, [esp + 0x38]
// 004eb446  d95c246c             fstp dword ptr [esp + 0x6c]
// 004eb44a  d84804               fmul dword ptr [eax + 4]
// 004eb44d  8b442474             mov eax, dword ptr [esp + 0x74]
// 004eb451  d95c2470             fstp dword ptr [esp + 0x70]
// 004eb455  d944246c             fld dword ptr [esp + 0x6c]
// 004eb459  d830                 fdiv dword ptr [eax]
// 004eb45b  d95c246c             fstp dword ptr [esp + 0x6c]
// 004eb45f  d9442470             fld dword ptr [esp + 0x70]
// 004eb463  d87004               fdiv dword ptr [eax + 4]
// 004eb466  d95c2470             fstp dword ptr [esp + 0x70]
// 004eb46a  d944246c             fld dword ptr [esp + 0x6c]
// 004eb46e  d95c2450             fstp dword ptr [esp + 0x50]
// 004eb472  d9442470             fld dword ptr [esp + 0x70]
// 004eb476  d95c2454             fstp dword ptr [esp + 0x54]
// 004eb47a  e8a1370000           call 0x4eec20
// 004eb47f  8b442444             mov eax, dword ptr [esp + 0x44]
// 004eb483  85c0                 test eax, eax
// 004eb485  8b35e8d27700         mov esi, dword ptr [0x77d2e8]
// 004eb48b  c644245c03           mov byte ptr [esp + 0x5c], 3
// 004eb490  742b                 je 0x4eb4bd
// 004eb492  83c004               add eax, 4
// 004eb495  50                   push eax
// 004eb496  ffd6                 call esi
// 004eb498  85c0                 test eax, eax
// 004eb49a  7519                 jne 0x4eb4b5
// 004eb49c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004eb4a0  e82bc9f6ff           call 0x457dd0
// 004eb4a5  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004eb4a9  85c9                 test ecx, ecx
// 004eb4ab  7408                 je 0x4eb4b5
// 004eb4ad  8b11                 mov edx, dword ptr [ecx]
// 004eb4af  8b02                 mov eax, dword ptr [edx]
// 004eb4b1  6a01                 push 1
// 004eb4b3  ffd0                 call eax
// 004eb4b5  c744244400000000     mov dword ptr [esp + 0x44], 0
// 004eb4bd  8b442410             mov eax, dword ptr [esp + 0x10]
// 004eb4c1  85c0                 test eax, eax
// 004eb4c3  c644245c00           mov byte ptr [esp + 0x5c], 0
// 004eb4c8  7423                 je 0x4eb4ed
// 004eb4ca  83c004               add eax, 4
// 004eb4cd  50                   push eax
// 004eb4ce  ffd6                 call esi
// 004eb4d0  85c0                 test eax, eax
// 004eb4d2  7519                 jne 0x4eb4ed
// 004eb4d4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004eb4d8  e8f3c8f6ff           call 0x457dd0
// 004eb4dd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004eb4e1  85c9                 test ecx, ecx
// 004eb4e3  7408                 je 0x4eb4ed
// 004eb4e5  8b11                 mov edx, dword ptr [ecx]
// 004eb4e7  8b02                 mov eax, dword ptr [edx]
// 004eb4e9  6a01                 push 1
// 004eb4eb  ffd0                 call eax
// 004eb4ed  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004eb4f1  5f                   pop edi
// 004eb4f2  5e                   pop esi
// 004eb4f3  8bc5                 mov eax, ebp
// 004eb4f5  64890d00000000       mov dword ptr fs:[0], ecx
// 004eb4fc  5d                   pop ebp
// 004eb4fd  83c454               add esp, 0x54
// 004eb500  c20c00               ret 0xc
// library rbxgs-view/CylinderMesh.cpp (function ??0CylinderAlongXMesh@View@RBX@@AAE@ABVVector3@G3D@@W4NormalId@2@ABVVector2@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
