// roc 2007-08 004eaba0  unit: SphereBuilder  size: 473 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eaba0
//
// 004eaba0  6aff                 push -1
// 004eaba2  68fbd07400           push 0x74d0fb
// 004eaba7  64a100000000         mov eax, dword ptr fs:[0]
// 004eabad  50                   push eax
// 004eabae  64892500000000       mov dword ptr fs:[0], esp
// 004eabb5  83ec50               sub esp, 0x50
// 004eabb8  55                   push ebp
// 004eabb9  56                   push esi
// 004eabba  8be9                 mov ebp, ecx
// 004eabbc  57                   push edi
// 004eabbd  896c2414             mov dword ptr [esp + 0x14], ebp
// 004eabc1  e8bab50000           call 0x4f6180
// 004eabc6  33ff                 xor edi, edi
// 004eabc8  6a1c                 push 0x1c
// 004eabca  897c2468             mov dword ptr [esp + 0x68], edi
// 004eabce  c745003cf47900       mov dword ptr [ebp], 0x79f43c
// 004eabd5  e81c531400           call 0x62fef6
// 004eabda  83c404               add esp, 4
// 004eabdd  3bc7                 cmp eax, edi
// 004eabdf  7424                 je 0x4eac05
// 004eabe1  c70084797900         mov dword ptr [eax], 0x797984
// 004eabe7  897804               mov dword ptr [eax + 4], edi
// 004eabea  897808               mov dword ptr [eax + 8], edi
// 004eabed  c70004f37900         mov dword ptr [eax], 0x79f304
// 004eabf3  897810               mov dword ptr [eax + 0x10], edi
// 004eabf6  897814               mov dword ptr [eax + 0x14], edi
// 004eabf9  89780c               mov dword ptr [eax + 0xc], edi
// 004eabfc  c7401805000000       mov dword ptr [eax + 0x18], 5
// 004eac03  eb02                 jmp 0x4eac07
// 004eac05  33c0                 xor eax, eax
// 004eac07  3bc7                 cmp eax, edi
// 004eac09  897c2410             mov dword ptr [esp + 0x10], edi
// 004eac0d  740e                 je 0x4eac1d
// 004eac0f  89442410             mov dword ptr [esp + 0x10], eax
// 004eac13  83c004               add eax, 4
// 004eac16  50                   push eax
// 004eac17  ff15ecd27700         call dword ptr [0x77d2ec]
// 004eac1d  8d442410             lea eax, [esp + 0x10]
// 004eac21  50                   push eax
// 004eac22  8d4d0c               lea ecx, [ebp + 0xc]
// 004eac25  c644246803           mov byte ptr [esp + 0x68], 3
// 004eac2a  e82126ffff           call 0x4dd250
// 004eac2f  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 004eac33  d906                 fld dword ptr [esi]
// 004eac35  33c0                 xor eax, eax
// 004eac37  d95c2420             fstp dword ptr [esp + 0x20]
// 004eac3b  50                   push eax
// 004eac3c  d94604               fld dword ptr [esi + 4]
// 004eac3f  83ec0c               sub esp, 0xc
// 004eac42  d95c2434             fstp dword ptr [esp + 0x34]
// 004eac46  8bc4                 mov eax, esp
// 004eac48  d94608               fld dword ptr [esi + 8]
// 004eac4b  8d4c2420             lea ecx, [esp + 0x20]
// 004eac4f  d95c2438             fstp dword ptr [esp + 0x38]
// 004eac53  8964247c             mov dword ptr [esp + 0x7c], esp
// 004eac57  d9442430             fld dword ptr [esp + 0x30]
// 004eac5b  51                   push ecx
// 004eac5c  d918                 fstp dword ptr [eax]
// 004eac5e  8d4c244c             lea ecx, [esp + 0x4c]
// 004eac62  d9442438             fld dword ptr [esp + 0x38]
// 004eac66  d95804               fstp dword ptr [eax + 4]
// 004eac69  d944243c             fld dword ptr [esp + 0x3c]
// 004eac6d  d95808               fstp dword ptr [eax + 8]
// 004eac70  e88b400000           call 0x4eed00
// 004eac75  c74424381cf47900     mov dword ptr [esp + 0x38], 0x79f41c
// 004eac7d  c744245806000000     mov dword ptr [esp + 0x58], 6
// 004eac85  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 004eac89  8d542418             lea edx, [esp + 0x18]
// 004eac8d  52                   push edx
// 004eac8e  57                   push edi
// 004eac8f  8d442434             lea eax, [esp + 0x34]
// 004eac93  56                   push esi
// 004eac94  50                   push eax
// 004eac95  c644247404           mov byte ptr [esp + 0x74], 4
// 004eac9a  e821f50c00           call 0x5ba1c0
// 004eac9f  83c40c               add esp, 0xc
// 004eaca2  8bc8                 mov ecx, eax
// 004eaca4  e867030200           call 0x50b010
// 004eaca9  d900                 fld dword ptr [eax]
// 004eacab  dd05085c7900         fld qword ptr [0x795c08]
// 004eacb1  6a01                 push 1
// 004eacb3  dcc9                 fmul st(1), st(0)
// 004eacb5  57                   push edi
// 004eacb6  d9c9                 fxch st(1)
// 004eacb8  8d4c2440             lea ecx, [esp + 0x40]
// 004eacbc  d95c2474             fstp dword ptr [esp + 0x74]
// 004eacc0  d84804               fmul dword ptr [eax + 4]
// 004eacc3  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 004eacc7  d95c2478             fstp dword ptr [esp + 0x78]
// 004eaccb  d9442474             fld dword ptr [esp + 0x74]
// 004eaccf  d830                 fdiv dword ptr [eax]
// 004eacd1  d95c2474             fstp dword ptr [esp + 0x74]
// 004eacd5  d9442478             fld dword ptr [esp + 0x78]
// 004eacd9  d87004               fdiv dword ptr [eax + 4]
// 004eacdc  d95c2478             fstp dword ptr [esp + 0x78]
// 004eace0  d9442474             fld dword ptr [esp + 0x74]
// 004eace4  d95c2458             fstp dword ptr [esp + 0x58]
// 004eace8  d9442478             fld dword ptr [esp + 0x78]
// 004eacec  d95c245c             fstp dword ptr [esp + 0x5c]
// 004eacf0  e82b3f0000           call 0x4eec20
// 004eacf5  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004eacf9  85c0                 test eax, eax
// 004eacfb  8b35e8d27700         mov esi, dword ptr [0x77d2e8]
// 004ead01  c644246403           mov byte ptr [esp + 0x64], 3
// 004ead06  742b                 je 0x4ead33
// 004ead08  83c004               add eax, 4
// 004ead0b  50                   push eax
// 004ead0c  ffd6                 call esi
// 004ead0e  85c0                 test eax, eax
// 004ead10  7519                 jne 0x4ead2b
// 004ead12  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004ead16  e8b5d0f6ff           call 0x457dd0
// 004ead1b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004ead1f  85c9                 test ecx, ecx
// 004ead21  7408                 je 0x4ead2b
// 004ead23  8b11                 mov edx, dword ptr [ecx]
// 004ead25  8b02                 mov eax, dword ptr [edx]
// 004ead27  6a01                 push 1
// 004ead29  ffd0                 call eax
// 004ead2b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004ead33  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ead37  85c0                 test eax, eax
// 004ead39  c644246400           mov byte ptr [esp + 0x64], 0
// 004ead3e  7423                 je 0x4ead63
// 004ead40  83c004               add eax, 4
// 004ead43  50                   push eax
// 004ead44  ffd6                 call esi
// 004ead46  85c0                 test eax, eax
// 004ead48  7519                 jne 0x4ead63
// 004ead4a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ead4e  e87dd0f6ff           call 0x457dd0
// 004ead53  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ead57  85c9                 test ecx, ecx
// 004ead59  7408                 je 0x4ead63
// 004ead5b  8b11                 mov edx, dword ptr [ecx]
// 004ead5d  8b02                 mov eax, dword ptr [edx]
// 004ead5f  6a01                 push 1
// 004ead61  ffd0                 call eax
// 004ead63  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004ead67  5f                   pop edi
// 004ead68  5e                   pop esi
// 004ead69  8bc5                 mov eax, ebp
// 004ead6b  64890d00000000       mov dword ptr fs:[0], ecx
// 004ead72  5d                   pop ebp
// 004ead73  83c45c               add esp, 0x5c
// 004ead76  c20c00               ret 0xc
// library rbxgs-view/SphereMesh.cpp (function ??0SphereMesh@View@RBX@@AAE@ABVVector3@G3D@@W4NormalId@2@ABVVector2@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view SphereMesh.cpp
