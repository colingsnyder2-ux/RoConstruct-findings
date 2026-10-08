// roc 2009-06 004a0930  unit: G3D::VARArea  size: 498 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a0930
//
// 004a0930  6aff                 push -1
// 004a0932  6840708500           push 0x857040
// 004a0937  64a100000000         mov eax, dword ptr fs:[0]
// 004a093d  50                   push eax
// 004a093e  64892500000000       mov dword ptr fs:[0], esp
// 004a0945  83ec0c               sub esp, 0xc
// 004a0948  53                   push ebx
// 004a0949  55                   push ebp
// 004a094a  56                   push esi
// 004a094b  57                   push edi
// 004a094c  8bf1                 mov esi, ecx
// 004a094e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 004a0952  33ff                 xor edi, edi
// 004a0954  3bae14010000         cmp ebp, dword ptr [esi + 0x114]
// 004a095a  8bc5                 mov eax, ebp
// 004a095c  0f9c44242c           setl byte ptr [esp + 0x2c]
// 004a0961  6bc05c               imul eax, eax, 0x5c
// 004a0964  8d1c30               lea ebx, [eax + esi]
// 004a0967  8b83d8040000         mov eax, dword ptr [ebx + 0x4d8]
// 004a096d  895c2418             mov dword ptr [esp + 0x18], ebx
// 004a0971  81c3d8040000         add ebx, 0x4d8
// 004a0977  897c2424             mov dword ptr [esp + 0x24], edi
// 004a097b  897c2410             mov dword ptr [esp + 0x10], edi
// 004a097f  3bc7                 cmp eax, edi
// 004a0981  7410                 je 0x4a0993
// 004a0983  8bf8                 mov edi, eax
// 004a0985  83c004               add eax, 4
// 004a0988  50                   push eax
// 004a0989  897c2414             mov dword ptr [esp + 0x14], edi
// 004a098d  ff15d0e18900         call dword ptr [0x89e1d0]
// 004a0993  8b442430             mov eax, dword ptr [esp + 0x30]
// 004a0997  b901000000           mov ecx, 1
// 004a099c  014e74               add dword ptr [esi + 0x74], ecx
// 004a099f  c644242401           mov byte ptr [esp + 0x24], 1
// 004a09a4  3bf8                 cmp edi, eax
// 004a09a6  7546                 jne 0x4a09ee
// 004a09a8  8b35a4e18900         mov esi, dword ptr [0x89e1a4]
// 004a09ae  c644242400           mov byte ptr [esp + 0x24], 0
// 004a09b3  85ff                 test edi, edi
// 004a09b5  741f                 je 0x4a09d6
// 004a09b7  8d4704               lea eax, [edi + 4]
// 004a09ba  50                   push eax
// 004a09bb  ffd6                 call esi
// 004a09bd  85c0                 test eax, eax
// 004a09bf  7511                 jne 0x4a09d2
// 004a09c1  8bcf                 mov ecx, edi
// 004a09c3  e8b843faff           call 0x444d80
// 004a09c8  8b17                 mov edx, dword ptr [edi]
// 004a09ca  8b02                 mov eax, dword ptr [edx]
// 004a09cc  6a01                 push 1
// 004a09ce  8bcf                 mov ecx, edi
// 004a09d0  ffd0                 call eax
// 004a09d2  8b442430             mov eax, dword ptr [esp + 0x30]
// 004a09d6  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004a09de  85c0                 test eax, eax
// 004a09e0  0f8417010000         je 0x4a0afd
// 004a09e6  83c004               add eax, 4
// 004a09e9  e9ef000000           jmp 0x4a0add
// 004a09ee  014e6c               add dword ptr [esi + 0x6c], ecx
// 004a09f1  50                   push eax
// 004a09f2  8bcb                 mov ecx, ebx
// 004a09f4  e867eeffff           call 0x49f860
// 004a09f9  8b86c4040000         mov eax, dword ptr [esi + 0x4c4]
// 004a09ff  3bc5                 cmp eax, ebp
// 004a0a01  7d02                 jge 0x4a0a05
// 004a0a03  8bc5                 mov eax, ebp
// 004a0a05  8986c4040000         mov dword ptr [esi + 0x4c4], eax
// 004a0a0b  803d0ec9a30000       cmp byte ptr [0xa3c90e], 0
// 004a0a12  740d                 je 0x4a0a21
// 004a0a14  8d8dc0840000         lea ecx, [ebp + 0x84c0]
// 004a0a1a  51                   push ecx
// 004a0a1b  ff1564d1a300         call dword ptr [0xa3d164]
// 004a0a21  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 004a0a26  7405                 je 0x4a0a2d
// 004a0a28  e8e3c90000           call 0x4ad410
// 004a0a2d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004a0a31  85c9                 test ecx, ecx
// 004a0a33  0f84d9000000         je 0x4a0b12
// 004a0a39  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 004a0a3c  e8ffa3ffff           call 0x49ae40
// 004a0a41  89442414             mov dword ptr [esp + 0x14], eax
// 004a0a45  399caeec000000       cmp dword ptr [esi + ebp*4 + 0xec], ebx
// 004a0a4c  7413                 je 0x4a0a61
// 004a0a4e  53                   push ebx
// 004a0a4f  50                   push eax
// 004a0a50  ff15c0eb8900         call dword ptr [0x89ebc0]
// 004a0a56  8b442414             mov eax, dword ptr [esp + 0x14]
// 004a0a5a  899caeec000000       mov dword ptr [esi + ebp*4 + 0xec], ebx
// 004a0a61  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 004a0a66  7407                 je 0x4a0a6f
// 004a0a68  50                   push eax
// 004a0a69  ff15aceb8900         call dword ptr [0x89ebac]
// 004a0a6f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004a0a73  85ff                 test edi, edi
// 004a0a75  740c                 je 0x4a0a83
// 004a0a77  85c9                 test ecx, ecx
// 004a0a79  7408                 je 0x4a0a83
// 004a0a7b  8a5770               mov dl, byte ptr [edi + 0x70]
// 004a0a7e  3a5170               cmp dl, byte ptr [ecx + 0x70]
// 004a0a81  741d                 je 0x4a0aa0
// 004a0a83  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 004a0a88  7416                 je 0x4a0aa0
// 004a0a8a  8b442418             mov eax, dword ptr [esp + 0x18]
// 004a0a8e  05dc040000           add eax, 0x4dc
// 004a0a93  50                   push eax
// 004a0a94  55                   push ebp
// 004a0a95  8bce                 mov ecx, esi
// 004a0a97  e894fbffff           call 0x4a0630
// 004a0a9c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004a0aa0  8b35a4e18900         mov esi, dword ptr [0x89e1a4]
// 004a0aa6  c644242400           mov byte ptr [esp + 0x24], 0
// 004a0aab  85ff                 test edi, edi
// 004a0aad  741f                 je 0x4a0ace
// 004a0aaf  8d4704               lea eax, [edi + 4]
// 004a0ab2  50                   push eax
// 004a0ab3  ffd6                 call esi
// 004a0ab5  85c0                 test eax, eax
// 004a0ab7  7511                 jne 0x4a0aca
// 004a0ab9  8bcf                 mov ecx, edi
// 004a0abb  e8c042faff           call 0x444d80
// 004a0ac0  8b17                 mov edx, dword ptr [edi]
// 004a0ac2  8b02                 mov eax, dword ptr [edx]
// 004a0ac4  6a01                 push 1
// 004a0ac6  8bcf                 mov ecx, edi
// 004a0ac8  ffd0                 call eax
// 004a0aca  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004a0ace  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004a0ad6  85c9                 test ecx, ecx
// 004a0ad8  7423                 je 0x4a0afd
// 004a0ada  8d4104               lea eax, [ecx + 4]
// 004a0add  50                   push eax
// 004a0ade  ffd6                 call esi
// 004a0ae0  85c0                 test eax, eax
// 004a0ae2  7519                 jne 0x4a0afd
// 004a0ae4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004a0ae8  e89342faff           call 0x444d80
// 004a0aed  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004a0af1  85c9                 test ecx, ecx
// 004a0af3  7408                 je 0x4a0afd
// 004a0af5  8b11                 mov edx, dword ptr [ecx]
// 004a0af7  8b02                 mov eax, dword ptr [edx]
// 004a0af9  6a01                 push 1
// 004a0afb  ffd0                 call eax
// 004a0afd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004a0b01  5f                   pop edi
// 004a0b02  5e                   pop esi
// 004a0b03  5d                   pop ebp
// 004a0b04  5b                   pop ebx
// 004a0b05  64890d00000000       mov dword ptr fs:[0], ecx
// 004a0b0c  83c418               add esp, 0x18
// 004a0b0f  c20800               ret 8
// 004a0b12  c784aeec00000000000000 mov dword ptr [esi + ebp*4 + 0xec], 0
// 004a0b1d  e951ffffff           jmp 0x4a0a73
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTexture@RenderDevice@G3D@@QAEXIV?$ReferenceCountedPointer@VTexture@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
