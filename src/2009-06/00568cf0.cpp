// roc 2009-06 00568cf0  unit: RBX::RbxG3D::RenderScene  size: 437 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00568cf0
//
// 00568cf0  51                   push ecx
// 00568cf1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00568cf5  53                   push ebx
// 00568cf6  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00568cfa  8bc1                 mov eax, ecx
// 00568cfc  2bc3                 sub eax, ebx
// 00568cfe  55                   push ebp
// 00568cff  56                   push esi
// 00568d00  c1f802               sar eax, 2
// 00568d03  57                   push edi
// 00568d04  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00568d08  99                   cdq 
// 00568d09  2bc2                 sub eax, edx
// 00568d0b  57                   push edi
// 00568d0c  d1f8                 sar eax, 1
// 00568d0e  83c1fc               add ecx, -4
// 00568d11  51                   push ecx
// 00568d12  8d3483               lea esi, [ebx + eax*4]
// 00568d15  56                   push esi
// 00568d16  53                   push ebx
// 00568d17  e814feffff           call 0x568b30
// 00568d1c  83c410               add esp, 0x10
// 00568d1f  8d6e04               lea ebp, [esi + 4]
// 00568d22  3bde                 cmp ebx, esi
// 00568d24  7327                 jae 0x568d4d
// 00568d26  8d7efc               lea edi, [esi - 4]
// 00568d29  56                   push esi
// 00568d2a  57                   push edi
// 00568d2b  ff54242c             call dword ptr [esp + 0x2c]
// 00568d2f  83c408               add esp, 8
// 00568d32  84c0                 test al, al
// 00568d34  7513                 jne 0x568d49
// 00568d36  57                   push edi
// 00568d37  56                   push esi
// 00568d38  ff54242c             call dword ptr [esp + 0x2c]
// 00568d3c  83c408               add esp, 8
// 00568d3f  84c0                 test al, al
// 00568d41  7506                 jne 0x568d49
// 00568d43  8bf7                 mov esi, edi
// 00568d45  3bde                 cmp ebx, esi
// 00568d47  72dd                 jb 0x568d26
// 00568d49  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00568d4d  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00568d51  3beb                 cmp ebp, ebx
// 00568d53  731d                 jae 0x568d72
// 00568d55  56                   push esi
// 00568d56  55                   push ebp
// 00568d57  ffd7                 call edi
// 00568d59  83c408               add esp, 8
// 00568d5c  84c0                 test al, al
// 00568d5e  7512                 jne 0x568d72
// 00568d60  55                   push ebp
// 00568d61  56                   push esi
// 00568d62  ffd7                 call edi
// 00568d64  83c408               add esp, 8
// 00568d67  84c0                 test al, al
// 00568d69  7507                 jne 0x568d72
// 00568d6b  83c504               add ebp, 4
// 00568d6e  3beb                 cmp ebp, ebx
// 00568d70  72e3                 jb 0x568d55
// 00568d72  8bde                 mov ebx, esi
// 00568d74  8bfd                 mov edi, ebp
// 00568d76  895c2410             mov dword ptr [esp + 0x10], ebx
// 00568d7a  8d9b00000000         lea ebx, [ebx]
// 00568d80  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00568d84  7334                 jae 0x568dba
// 00568d86  57                   push edi
// 00568d87  56                   push esi
// 00568d88  ff54242c             call dword ptr [esp + 0x2c]
// 00568d8c  83c408               add esp, 8
// 00568d8f  84c0                 test al, al
// 00568d91  751e                 jne 0x568db1
// 00568d93  56                   push esi
// 00568d94  57                   push edi
// 00568d95  ff54242c             call dword ptr [esp + 0x2c]
// 00568d99  83c408               add esp, 8
// 00568d9c  84c0                 test al, al
// 00568d9e  751a                 jne 0x568dba
// 00568da0  8bc5                 mov eax, ebp
// 00568da2  83c504               add ebp, 4
// 00568da5  3bc7                 cmp eax, edi
// 00568da7  7408                 je 0x568db1
// 00568da9  8b17                 mov edx, dword ptr [edi]
// 00568dab  8b08                 mov ecx, dword ptr [eax]
// 00568dad  8910                 mov dword ptr [eax], edx
// 00568daf  890f                 mov dword ptr [edi], ecx
// 00568db1  83c704               add edi, 4
// 00568db4  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00568db8  72cc                 jb 0x568d86
// 00568dba  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 00568dbe  7648                 jbe 0x568e08
// 00568dc0  83c3fc               add ebx, -4
// 00568dc3  56                   push esi
// 00568dc4  53                   push ebx
// 00568dc5  ff54242c             call dword ptr [esp + 0x2c]
// 00568dc9  83c408               add esp, 8
// 00568dcc  84c0                 test al, al
// 00568dce  751c                 jne 0x568dec
// 00568dd0  53                   push ebx
// 00568dd1  56                   push esi
// 00568dd2  ff54242c             call dword ptr [esp + 0x2c]
// 00568dd6  83c408               add esp, 8
// 00568dd9  84c0                 test al, al
// 00568ddb  7523                 jne 0x568e00
// 00568ddd  83ee04               sub esi, 4
// 00568de0  3bf3                 cmp esi, ebx
// 00568de2  7408                 je 0x568dec
// 00568de4  8b0b                 mov ecx, dword ptr [ebx]
// 00568de6  8b06                 mov eax, dword ptr [esi]
// 00568de8  890e                 mov dword ptr [esi], ecx
// 00568dea  8903                 mov dword ptr [ebx], eax
// 00568dec  8b442410             mov eax, dword ptr [esp + 0x10]
// 00568df0  83e804               sub eax, 4
// 00568df3  83eb04               sub ebx, 4
// 00568df6  89442410             mov dword ptr [esp + 0x10], eax
// 00568dfa  3944241c             cmp dword ptr [esp + 0x1c], eax
// 00568dfe  72c3                 jb 0x568dc3
// 00568e00  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00568e04  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 00568e08  7542                 jne 0x568e4c
// 00568e0a  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00568e0e  0f8482000000         je 0x568e96
// 00568e14  3bef                 cmp ebp, edi
// 00568e16  740e                 je 0x568e26
// 00568e18  3bf5                 cmp esi, ebp
// 00568e1a  740a                 je 0x568e26
// 00568e1c  8b5500               mov edx, dword ptr [ebp]
// 00568e1f  8b06                 mov eax, dword ptr [esi]
// 00568e21  8916                 mov dword ptr [esi], edx
// 00568e23  894500               mov dword ptr [ebp], eax
// 00568e26  8bc7                 mov eax, edi
// 00568e28  8bce                 mov ecx, esi
// 00568e2a  83c504               add ebp, 4
// 00568e2d  83c604               add esi, 4
// 00568e30  83c704               add edi, 4
// 00568e33  3bc8                 cmp ecx, eax
// 00568e35  0f8445ffffff         je 0x568d80
// 00568e3b  8b18                 mov ebx, dword ptr [eax]
// 00568e3d  8b11                 mov edx, dword ptr [ecx]
// 00568e3f  8919                 mov dword ptr [ecx], ebx
// 00568e41  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00568e45  8910                 mov dword ptr [eax], edx
// 00568e47  e934ffffff           jmp 0x568d80
// 00568e4c  83eb04               sub ebx, 4
// 00568e4f  895c2410             mov dword ptr [esp + 0x10], ebx
// 00568e53  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00568e57  7529                 jne 0x568e82
// 00568e59  83ee04               sub esi, 4
// 00568e5c  3bde                 cmp ebx, esi
// 00568e5e  7408                 je 0x568e68
// 00568e60  8b0e                 mov ecx, dword ptr [esi]
// 00568e62  8b03                 mov eax, dword ptr [ebx]
// 00568e64  890b                 mov dword ptr [ebx], ecx
// 00568e66  8906                 mov dword ptr [esi], eax
// 00568e68  83ed04               sub ebp, 4
// 00568e6b  3bf5                 cmp esi, ebp
// 00568e6d  0f840dffffff         je 0x568d80
// 00568e73  8b5500               mov edx, dword ptr [ebp]
// 00568e76  8b06                 mov eax, dword ptr [esi]
// 00568e78  8916                 mov dword ptr [esi], edx
// 00568e7a  894500               mov dword ptr [ebp], eax
// 00568e7d  e9fefeffff           jmp 0x568d80
// 00568e82  3bfb                 cmp edi, ebx
// 00568e84  7408                 je 0x568e8e
// 00568e86  8b0b                 mov ecx, dword ptr [ebx]
// 00568e88  8b07                 mov eax, dword ptr [edi]
// 00568e8a  890f                 mov dword ptr [edi], ecx
// 00568e8c  8903                 mov dword ptr [ebx], eax
// 00568e8e  83c704               add edi, 4
// 00568e91  e9eafeffff           jmp 0x568d80
// 00568e96  8b442418             mov eax, dword ptr [esp + 0x18]
// 00568e9a  5f                   pop edi
// 00568e9b  8930                 mov dword ptr [eax], esi
// 00568e9d  5e                   pop esi
// 00568e9e  896804               mov dword ptr [eax + 4], ebp
// 00568ea1  5d                   pop ebp
// 00568ea2  5b                   pop ebx
// 00568ea3  59                   pop ecx
// 00568ea4  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Unguarded_partition@PAPAVRenderSurface@Render@RBX@@P6A_NABQAV123@0@Z@std@@YA?AU?$pair@PAPAVRenderSurface@Render@RBX@@PAPAV123@@0@PAPAVRenderSurface@Render@RBX@@0P6A_NABQAV234@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
