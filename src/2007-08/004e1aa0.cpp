// roc 2007-08 004e1aa0  unit: PBBBuilder  size: 612 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e1aa0
//
// 004e1aa0  6aff                 push -1
// 004e1aa2  6896ce7400           push 0x74ce96
// 004e1aa7  64a100000000         mov eax, dword ptr fs:[0]
// 004e1aad  50                   push eax
// 004e1aae  64892500000000       mov dword ptr fs:[0], esp
// 004e1ab5  83ec60               sub esp, 0x60
// 004e1ab8  53                   push ebx
// 004e1ab9  55                   push ebp
// 004e1aba  56                   push esi
// 004e1abb  57                   push edi
// 004e1abc  8bf9                 mov edi, ecx
// 004e1abe  897c241c             mov dword ptr [esp + 0x1c], edi
// 004e1ac2  e8b9460100           call 0x4f6180
// 004e1ac7  33f6                 xor esi, esi
// 004e1ac9  6a1c                 push 0x1c
// 004e1acb  8974247c             mov dword ptr [esp + 0x7c], esi
// 004e1acf  c70754f37900         mov dword ptr [edi], 0x79f354
// 004e1ad5  e81ce41400           call 0x62fef6
// 004e1ada  83c404               add esp, 4
// 004e1add  3bc6                 cmp eax, esi
// 004e1adf  7424                 je 0x4e1b05
// 004e1ae1  c70084797900         mov dword ptr [eax], 0x797984
// 004e1ae7  897004               mov dword ptr [eax + 4], esi
// 004e1aea  897008               mov dword ptr [eax + 8], esi
// 004e1aed  c70004f37900         mov dword ptr [eax], 0x79f304
// 004e1af3  897010               mov dword ptr [eax + 0x10], esi
// 004e1af6  897014               mov dword ptr [eax + 0x14], esi
// 004e1af9  89700c               mov dword ptr [eax + 0xc], esi
// 004e1afc  c7401805000000       mov dword ptr [eax + 0x18], 5
// 004e1b03  eb02                 jmp 0x4e1b07
// 004e1b05  33c0                 xor eax, eax
// 004e1b07  3bc6                 cmp eax, esi
// 004e1b09  89742414             mov dword ptr [esp + 0x14], esi
// 004e1b0d  740e                 je 0x4e1b1d
// 004e1b0f  89442414             mov dword ptr [esp + 0x14], eax
// 004e1b13  83c004               add eax, 4
// 004e1b16  50                   push eax
// 004e1b17  ff15ecd27700         call dword ptr [0x77d2ec]
// 004e1b1d  8d442414             lea eax, [esp + 0x14]
// 004e1b21  b303                 mov bl, 3
// 004e1b23  50                   push eax
// 004e1b24  8d4f0c               lea ecx, [edi + 0xc]
// 004e1b27  885c247c             mov byte ptr [esp + 0x7c], bl
// 004e1b2b  e820b7ffff           call 0x4dd250
// 004e1b30  8bac2484000000       mov ebp, dword ptr [esp + 0x84]
// 004e1b37  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 004e1b3e  d906                 fld dword ptr [esi]
// 004e1b40  55                   push ebp
// 004e1b41  83ec0c               sub esp, 0xc
// 004e1b44  8bc4                 mov eax, esp
// 004e1b46  d918                 fstp dword ptr [eax]
// 004e1b48  8d4c2424             lea ecx, [esp + 0x24]
// 004e1b4c  d94604               fld dword ptr [esi + 4]
// 004e1b4f  89a42494000000       mov dword ptr [esp + 0x94], esp
// 004e1b56  d95804               fstp dword ptr [eax + 4]
// 004e1b59  51                   push ecx
// 004e1b5a  d94608               fld dword ptr [esi + 8]
// 004e1b5d  8d4c2434             lea ecx, [esp + 0x34]
// 004e1b61  d95808               fstp dword ptr [eax + 8]
// 004e1b64  e8d7ccffff           call 0x4de840
// 004e1b69  6a00                 push 0
// 004e1b6b  8d4c2424             lea ecx, [esp + 0x24]
// 004e1b6f  c644247c04           mov byte ptr [esp + 0x7c], 4
// 004e1b74  e837d10000           call 0x4eecb0
// 004e1b79  8b442434             mov eax, dword ptr [esp + 0x34]
// 004e1b7d  885c2478             mov byte ptr [esp + 0x78], bl
// 004e1b81  33db                 xor ebx, ebx
// 004e1b83  3bc3                 cmp eax, ebx
// 004e1b85  742b                 je 0x4e1bb2
// 004e1b87  83c004               add eax, 4
// 004e1b8a  50                   push eax
// 004e1b8b  ff15e8d27700         call dword ptr [0x77d2e8]
// 004e1b91  85c0                 test eax, eax
// 004e1b93  7519                 jne 0x4e1bae
// 004e1b95  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004e1b99  e83262f7ff           call 0x457dd0
// 004e1b9e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004e1ba2  3bcb                 cmp ecx, ebx
// 004e1ba4  7408                 je 0x4e1bae
// 004e1ba6  8b11                 mov edx, dword ptr [ecx]
// 004e1ba8  8b02                 mov eax, dword ptr [edx]
// 004e1baa  6a01                 push 1
// 004e1bac  ffd0                 call eax
// 004e1bae  895c2434             mov dword ptr [esp + 0x34], ebx
// 004e1bb2  8b442414             mov eax, dword ptr [esp + 0x14]
// 004e1bb6  3bc3                 cmp eax, ebx
// 004e1bb8  885c2478             mov byte ptr [esp + 0x78], bl
// 004e1bbc  7427                 je 0x4e1be5
// 004e1bbe  83c004               add eax, 4
// 004e1bc1  50                   push eax
// 004e1bc2  ff15e8d27700         call dword ptr [0x77d2e8]
// 004e1bc8  85c0                 test eax, eax
// 004e1bca  7519                 jne 0x4e1be5
// 004e1bcc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e1bd0  e8fb61f7ff           call 0x457dd0
// 004e1bd5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e1bd9  3bcb                 cmp ecx, ebx
// 004e1bdb  7408                 je 0x4e1be5
// 004e1bdd  8b11                 mov edx, dword ptr [ecx]
// 004e1bdf  8b02                 mov eax, dword ptr [edx]
// 004e1be1  6a01                 push 1
// 004e1be3  ffd0                 call eax
// 004e1be5  381dd4ba8b00         cmp byte ptr [0x8bbad4], bl
// 004e1beb  0f84fc000000         je 0x4e1ced
// 004e1bf1  6a1c                 push 0x1c
// 004e1bf3  e8fee21400           call 0x62fef6
// 004e1bf8  83c404               add esp, 4
// 004e1bfb  89842484000000       mov dword ptr [esp + 0x84], eax
// 004e1c02  3bc3                 cmp eax, ebx
// 004e1c04  c644247805           mov byte ptr [esp + 0x78], 5
// 004e1c09  740b                 je 0x4e1c16
// 004e1c0b  6a02                 push 2
// 004e1c0d  8bc8                 mov ecx, eax
// 004e1c0f  e8ccbcffff           call 0x4dd8e0
// 004e1c14  eb02                 jmp 0x4e1c18
// 004e1c16  33c0                 xor eax, eax
// 004e1c18  3bc3                 cmp eax, ebx
// 004e1c1a  895c2418             mov dword ptr [esp + 0x18], ebx
// 004e1c1e  740e                 je 0x4e1c2e
// 004e1c20  89442418             mov dword ptr [esp + 0x18], eax
// 004e1c24  83c004               add eax, 4
// 004e1c27  50                   push eax
// 004e1c28  ff15ecd27700         call dword ptr [0x77d2ec]
// 004e1c2e  d906                 fld dword ptr [esi]
// 004e1c30  55                   push ebp
// 004e1c31  83ec0c               sub esp, 0xc
// 004e1c34  8bc4                 mov eax, esp
// 004e1c36  d918                 fstp dword ptr [eax]
// 004e1c38  8d4c2428             lea ecx, [esp + 0x28]
// 004e1c3c  d94604               fld dword ptr [esi + 4]
// 004e1c3f  89a42494000000       mov dword ptr [esp + 0x94], esp
// 004e1c46  d95804               fstp dword ptr [eax + 4]
// 004e1c49  51                   push ecx
// 004e1c4a  d94608               fld dword ptr [esi + 8]
// 004e1c4d  b306                 mov bl, 6
// 004e1c4f  8d4c245c             lea ecx, [esp + 0x5c]
// 004e1c53  d95808               fstp dword ptr [eax + 8]
// 004e1c56  889c248c000000       mov byte ptr [esp + 0x8c], bl
// 004e1c5d  e8decbffff           call 0x4de840
// 004e1c62  6a02                 push 2
// 004e1c64  8d4c244c             lea ecx, [esp + 0x4c]
// 004e1c68  c644247c07           mov byte ptr [esp + 0x7c], 7
// 004e1c6d  e83ed00000           call 0x4eecb0
// 004e1c72  8d542418             lea edx, [esp + 0x18]
// 004e1c76  52                   push edx
// 004e1c77  8bcf                 mov ecx, edi
// 004e1c79  e872530100           call 0x4f6ff0
// 004e1c7e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004e1c82  85c0                 test eax, eax
// 004e1c84  885c2478             mov byte ptr [esp + 0x78], bl
// 004e1c88  742f                 je 0x4e1cb9
// 004e1c8a  83c004               add eax, 4
// 004e1c8d  50                   push eax
// 004e1c8e  ff15e8d27700         call dword ptr [0x77d2e8]
// 004e1c94  85c0                 test eax, eax
// 004e1c96  7519                 jne 0x4e1cb1
// 004e1c98  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004e1c9c  e82f61f7ff           call 0x457dd0
// 004e1ca1  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004e1ca5  85c9                 test ecx, ecx
// 004e1ca7  7408                 je 0x4e1cb1
// 004e1ca9  8b01                 mov eax, dword ptr [ecx]
// 004e1cab  8b10                 mov edx, dword ptr [eax]
// 004e1cad  6a01                 push 1
// 004e1caf  ffd2                 call edx
// 004e1cb1  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 004e1cb9  8b442418             mov eax, dword ptr [esp + 0x18]
// 004e1cbd  85c0                 test eax, eax
// 004e1cbf  c644247800           mov byte ptr [esp + 0x78], 0
// 004e1cc4  7427                 je 0x4e1ced
// 004e1cc6  83c004               add eax, 4
// 004e1cc9  50                   push eax
// 004e1cca  ff15e8d27700         call dword ptr [0x77d2e8]
// 004e1cd0  85c0                 test eax, eax
// 004e1cd2  7519                 jne 0x4e1ced
// 004e1cd4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e1cd8  e8f360f7ff           call 0x457dd0
// 004e1cdd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e1ce1  85c9                 test ecx, ecx
// 004e1ce3  7408                 je 0x4e1ced
// 004e1ce5  8b01                 mov eax, dword ptr [ecx]
// 004e1ce7  8b10                 mov edx, dword ptr [eax]
// 004e1ce9  6a01                 push 1
// 004e1ceb  ffd2                 call edx
// 004e1ced  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 004e1cf1  8bc7                 mov eax, edi
// 004e1cf3  5f                   pop edi
// 004e1cf4  5e                   pop esi
// 004e1cf5  5d                   pop ebp
// 004e1cf6  64890d00000000       mov dword ptr fs:[0], ecx
// 004e1cfd  5b                   pop ebx
// 004e1cfe  83c46c               add esp, 0x6c
// 004e1d01  c20800               ret 8
// library rbxgs-view/PBBMesh.cpp (function ??0PBBMesh@View@RBX@@AAE@ABVVector3@G3D@@VRenderSurfaceTypes@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
