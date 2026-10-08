// roc 2010-06 00493c80  unit: seg_00490000  size: 498 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00493c80
//
// 00493c80  6aff                 push -1
// 00493c82  68c0689800           push 0x9868c0
// 00493c87  64a100000000         mov eax, dword ptr fs:[0]
// 00493c8d  50                   push eax
// 00493c8e  64892500000000       mov dword ptr fs:[0], esp
// 00493c95  83ec0c               sub esp, 0xc
// 00493c98  53                   push ebx
// 00493c99  55                   push ebp
// 00493c9a  56                   push esi
// 00493c9b  57                   push edi
// 00493c9c  8bf1                 mov esi, ecx
// 00493c9e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00493ca2  33ff                 xor edi, edi
// 00493ca4  3bae14010000         cmp ebp, dword ptr [esi + 0x114]
// 00493caa  8bc5                 mov eax, ebp
// 00493cac  0f9c44242c           setl byte ptr [esp + 0x2c]
// 00493cb1  6bc05c               imul eax, eax, 0x5c
// 00493cb4  8d1c30               lea ebx, [eax + esi]
// 00493cb7  8b83d8040000         mov eax, dword ptr [ebx + 0x4d8]
// 00493cbd  895c2418             mov dword ptr [esp + 0x18], ebx
// 00493cc1  81c3d8040000         add ebx, 0x4d8
// 00493cc7  897c2424             mov dword ptr [esp + 0x24], edi
// 00493ccb  897c2410             mov dword ptr [esp + 0x10], edi
// 00493ccf  3bc7                 cmp eax, edi
// 00493cd1  7410                 je 0x493ce3
// 00493cd3  8bf8                 mov edi, eax
// 00493cd5  83c004               add eax, 4
// 00493cd8  50                   push eax
// 00493cd9  897c2414             mov dword ptr [esp + 0x14], edi
// 00493cdd  ff1580a39e00         call dword ptr [0x9ea380]
// 00493ce3  8b442430             mov eax, dword ptr [esp + 0x30]
// 00493ce7  b901000000           mov ecx, 1
// 00493cec  014e74               add dword ptr [esi + 0x74], ecx
// 00493cef  c644242401           mov byte ptr [esp + 0x24], 1
// 00493cf4  3bf8                 cmp edi, eax
// 00493cf6  7546                 jne 0x493d3e
// 00493cf8  8b357ca39e00         mov esi, dword ptr [0x9ea37c]
// 00493cfe  c644242400           mov byte ptr [esp + 0x24], 0
// 00493d03  85ff                 test edi, edi
// 00493d05  741f                 je 0x493d26
// 00493d07  8d4704               lea eax, [edi + 4]
// 00493d0a  50                   push eax
// 00493d0b  ffd6                 call esi
// 00493d0d  85c0                 test eax, eax
// 00493d0f  7511                 jne 0x493d22
// 00493d11  8bcf                 mov ecx, edi
// 00493d13  e808fefeff           call 0x483b20
// 00493d18  8b17                 mov edx, dword ptr [edi]
// 00493d1a  8b02                 mov eax, dword ptr [edx]
// 00493d1c  6a01                 push 1
// 00493d1e  8bcf                 mov ecx, edi
// 00493d20  ffd0                 call eax
// 00493d22  8b442430             mov eax, dword ptr [esp + 0x30]
// 00493d26  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00493d2e  85c0                 test eax, eax
// 00493d30  0f8417010000         je 0x493e4d
// 00493d36  83c004               add eax, 4
// 00493d39  e9ef000000           jmp 0x493e2d
// 00493d3e  014e6c               add dword ptr [esi + 0x6c], ecx
// 00493d41  50                   push eax
// 00493d42  8bcb                 mov ecx, ebx
// 00493d44  e8d72fffff           call 0x486d20
// 00493d49  8b86c4040000         mov eax, dword ptr [esi + 0x4c4]
// 00493d4f  3bc5                 cmp eax, ebp
// 00493d51  7d02                 jge 0x493d55
// 00493d53  8bc5                 mov eax, ebp
// 00493d55  8986c4040000         mov dword ptr [esi + 0x4c4], eax
// 00493d5b  803dba38c00000       cmp byte ptr [0xc038ba], 0
// 00493d62  740d                 je 0x493d71
// 00493d64  8d8dc0840000         lea ecx, [ebp + 0x84c0]
// 00493d6a  51                   push ecx
// 00493d6b  ff15a439c000         call dword ptr [0xc039a4]
// 00493d71  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 00493d76  7405                 je 0x493d7d
// 00493d78  e8c3afffff           call 0x48ed40
// 00493d7d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00493d81  85c9                 test ecx, ecx
// 00493d83  0f84d9000000         je 0x493e62
// 00493d89  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 00493d8c  e82f0bffff           call 0x4848c0
// 00493d91  89442414             mov dword ptr [esp + 0x14], eax
// 00493d95  399caeec000000       cmp dword ptr [esi + ebp*4 + 0xec], ebx
// 00493d9c  7413                 je 0x493db1
// 00493d9e  53                   push ebx
// 00493d9f  50                   push eax
// 00493da0  ff15d4aa9e00         call dword ptr [0x9eaad4]
// 00493da6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00493daa  899caeec000000       mov dword ptr [esi + ebp*4 + 0xec], ebx
// 00493db1  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 00493db6  7407                 je 0x493dbf
// 00493db8  50                   push eax
// 00493db9  ff15ecaa9e00         call dword ptr [0x9eaaec]
// 00493dbf  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00493dc3  85ff                 test edi, edi
// 00493dc5  740c                 je 0x493dd3
// 00493dc7  85c9                 test ecx, ecx
// 00493dc9  7408                 je 0x493dd3
// 00493dcb  8a5770               mov dl, byte ptr [edi + 0x70]
// 00493dce  3a5170               cmp dl, byte ptr [ecx + 0x70]
// 00493dd1  741d                 je 0x493df0
// 00493dd3  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 00493dd8  7416                 je 0x493df0
// 00493dda  8b442418             mov eax, dword ptr [esp + 0x18]
// 00493dde  05dc040000           add eax, 0x4dc
// 00493de3  50                   push eax
// 00493de4  55                   push ebp
// 00493de5  8bce                 mov ecx, esi
// 00493de7  e844fbffff           call 0x493930
// 00493dec  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00493df0  8b357ca39e00         mov esi, dword ptr [0x9ea37c]
// 00493df6  c644242400           mov byte ptr [esp + 0x24], 0
// 00493dfb  85ff                 test edi, edi
// 00493dfd  741f                 je 0x493e1e
// 00493dff  8d4704               lea eax, [edi + 4]
// 00493e02  50                   push eax
// 00493e03  ffd6                 call esi
// 00493e05  85c0                 test eax, eax
// 00493e07  7511                 jne 0x493e1a
// 00493e09  8bcf                 mov ecx, edi
// 00493e0b  e810fdfeff           call 0x483b20
// 00493e10  8b17                 mov edx, dword ptr [edi]
// 00493e12  8b02                 mov eax, dword ptr [edx]
// 00493e14  6a01                 push 1
// 00493e16  8bcf                 mov ecx, edi
// 00493e18  ffd0                 call eax
// 00493e1a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00493e1e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00493e26  85c9                 test ecx, ecx
// 00493e28  7423                 je 0x493e4d
// 00493e2a  8d4104               lea eax, [ecx + 4]
// 00493e2d  50                   push eax
// 00493e2e  ffd6                 call esi
// 00493e30  85c0                 test eax, eax
// 00493e32  7519                 jne 0x493e4d
// 00493e34  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00493e38  e8e3fcfeff           call 0x483b20
// 00493e3d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00493e41  85c9                 test ecx, ecx
// 00493e43  7408                 je 0x493e4d
// 00493e45  8b11                 mov edx, dword ptr [ecx]
// 00493e47  8b02                 mov eax, dword ptr [edx]
// 00493e49  6a01                 push 1
// 00493e4b  ffd0                 call eax
// 00493e4d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00493e51  5f                   pop edi
// 00493e52  5e                   pop esi
// 00493e53  5d                   pop ebp
// 00493e54  5b                   pop ebx
// 00493e55  64890d00000000       mov dword ptr fs:[0], ecx
// 00493e5c  83c418               add esp, 0x18
// 00493e5f  c20800               ret 8
// 00493e62  c784aeec00000000000000 mov dword ptr [esi + ebp*4 + 0xec], 0
// 00493e6d  e951ffffff           jmp 0x493dc3
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTexture@RenderDevice@G3D@@QAEXIV?$ReferenceCountedPointer@VTexture@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
