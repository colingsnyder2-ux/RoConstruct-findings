// roc 2009-12 005e7cb0  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 437 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e7cb0
//
// 005e7cb0  51                   push ecx
// 005e7cb1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e7cb5  53                   push ebx
// 005e7cb6  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005e7cba  8bc1                 mov eax, ecx
// 005e7cbc  2bc3                 sub eax, ebx
// 005e7cbe  55                   push ebp
// 005e7cbf  56                   push esi
// 005e7cc0  c1f802               sar eax, 2
// 005e7cc3  57                   push edi
// 005e7cc4  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005e7cc8  99                   cdq 
// 005e7cc9  2bc2                 sub eax, edx
// 005e7ccb  57                   push edi
// 005e7ccc  d1f8                 sar eax, 1
// 005e7cce  83c1fc               add ecx, -4
// 005e7cd1  51                   push ecx
// 005e7cd2  8d3483               lea esi, [ebx + eax*4]
// 005e7cd5  56                   push esi
// 005e7cd6  53                   push ebx
// 005e7cd7  e814feffff           call 0x5e7af0
// 005e7cdc  83c410               add esp, 0x10
// 005e7cdf  8d6e04               lea ebp, [esi + 4]
// 005e7ce2  3bde                 cmp ebx, esi
// 005e7ce4  7327                 jae 0x5e7d0d
// 005e7ce6  8d7efc               lea edi, [esi - 4]
// 005e7ce9  56                   push esi
// 005e7cea  57                   push edi
// 005e7ceb  ff54242c             call dword ptr [esp + 0x2c]
// 005e7cef  83c408               add esp, 8
// 005e7cf2  84c0                 test al, al
// 005e7cf4  7513                 jne 0x5e7d09
// 005e7cf6  57                   push edi
// 005e7cf7  56                   push esi
// 005e7cf8  ff54242c             call dword ptr [esp + 0x2c]
// 005e7cfc  83c408               add esp, 8
// 005e7cff  84c0                 test al, al
// 005e7d01  7506                 jne 0x5e7d09
// 005e7d03  8bf7                 mov esi, edi
// 005e7d05  3bde                 cmp ebx, esi
// 005e7d07  72dd                 jb 0x5e7ce6
// 005e7d09  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005e7d0d  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005e7d11  3beb                 cmp ebp, ebx
// 005e7d13  731d                 jae 0x5e7d32
// 005e7d15  56                   push esi
// 005e7d16  55                   push ebp
// 005e7d17  ffd7                 call edi
// 005e7d19  83c408               add esp, 8
// 005e7d1c  84c0                 test al, al
// 005e7d1e  7512                 jne 0x5e7d32
// 005e7d20  55                   push ebp
// 005e7d21  56                   push esi
// 005e7d22  ffd7                 call edi
// 005e7d24  83c408               add esp, 8
// 005e7d27  84c0                 test al, al
// 005e7d29  7507                 jne 0x5e7d32
// 005e7d2b  83c504               add ebp, 4
// 005e7d2e  3beb                 cmp ebp, ebx
// 005e7d30  72e3                 jb 0x5e7d15
// 005e7d32  8bde                 mov ebx, esi
// 005e7d34  8bfd                 mov edi, ebp
// 005e7d36  895c2410             mov dword ptr [esp + 0x10], ebx
// 005e7d3a  8d9b00000000         lea ebx, [ebx]
// 005e7d40  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005e7d44  7334                 jae 0x5e7d7a
// 005e7d46  57                   push edi
// 005e7d47  56                   push esi
// 005e7d48  ff54242c             call dword ptr [esp + 0x2c]
// 005e7d4c  83c408               add esp, 8
// 005e7d4f  84c0                 test al, al
// 005e7d51  751e                 jne 0x5e7d71
// 005e7d53  56                   push esi
// 005e7d54  57                   push edi
// 005e7d55  ff54242c             call dword ptr [esp + 0x2c]
// 005e7d59  83c408               add esp, 8
// 005e7d5c  84c0                 test al, al
// 005e7d5e  751a                 jne 0x5e7d7a
// 005e7d60  8bc5                 mov eax, ebp
// 005e7d62  83c504               add ebp, 4
// 005e7d65  3bc7                 cmp eax, edi
// 005e7d67  7408                 je 0x5e7d71
// 005e7d69  8b17                 mov edx, dword ptr [edi]
// 005e7d6b  8b08                 mov ecx, dword ptr [eax]
// 005e7d6d  8910                 mov dword ptr [eax], edx
// 005e7d6f  890f                 mov dword ptr [edi], ecx
// 005e7d71  83c704               add edi, 4
// 005e7d74  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005e7d78  72cc                 jb 0x5e7d46
// 005e7d7a  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 005e7d7e  7648                 jbe 0x5e7dc8
// 005e7d80  83c3fc               add ebx, -4
// 005e7d83  56                   push esi
// 005e7d84  53                   push ebx
// 005e7d85  ff54242c             call dword ptr [esp + 0x2c]
// 005e7d89  83c408               add esp, 8
// 005e7d8c  84c0                 test al, al
// 005e7d8e  751c                 jne 0x5e7dac
// 005e7d90  53                   push ebx
// 005e7d91  56                   push esi
// 005e7d92  ff54242c             call dword ptr [esp + 0x2c]
// 005e7d96  83c408               add esp, 8
// 005e7d99  84c0                 test al, al
// 005e7d9b  7523                 jne 0x5e7dc0
// 005e7d9d  83ee04               sub esi, 4
// 005e7da0  3bf3                 cmp esi, ebx
// 005e7da2  7408                 je 0x5e7dac
// 005e7da4  8b0b                 mov ecx, dword ptr [ebx]
// 005e7da6  8b06                 mov eax, dword ptr [esi]
// 005e7da8  890e                 mov dword ptr [esi], ecx
// 005e7daa  8903                 mov dword ptr [ebx], eax
// 005e7dac  8b442410             mov eax, dword ptr [esp + 0x10]
// 005e7db0  83e804               sub eax, 4
// 005e7db3  83eb04               sub ebx, 4
// 005e7db6  89442410             mov dword ptr [esp + 0x10], eax
// 005e7dba  3944241c             cmp dword ptr [esp + 0x1c], eax
// 005e7dbe  72c3                 jb 0x5e7d83
// 005e7dc0  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005e7dc4  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 005e7dc8  7542                 jne 0x5e7e0c
// 005e7dca  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005e7dce  0f8482000000         je 0x5e7e56
// 005e7dd4  3bef                 cmp ebp, edi
// 005e7dd6  740e                 je 0x5e7de6
// 005e7dd8  3bf5                 cmp esi, ebp
// 005e7dda  740a                 je 0x5e7de6
// 005e7ddc  8b5500               mov edx, dword ptr [ebp]
// 005e7ddf  8b06                 mov eax, dword ptr [esi]
// 005e7de1  8916                 mov dword ptr [esi], edx
// 005e7de3  894500               mov dword ptr [ebp], eax
// 005e7de6  8bc7                 mov eax, edi
// 005e7de8  8bce                 mov ecx, esi
// 005e7dea  83c504               add ebp, 4
// 005e7ded  83c604               add esi, 4
// 005e7df0  83c704               add edi, 4
// 005e7df3  3bc8                 cmp ecx, eax
// 005e7df5  0f8445ffffff         je 0x5e7d40
// 005e7dfb  8b18                 mov ebx, dword ptr [eax]
// 005e7dfd  8b11                 mov edx, dword ptr [ecx]
// 005e7dff  8919                 mov dword ptr [ecx], ebx
// 005e7e01  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005e7e05  8910                 mov dword ptr [eax], edx
// 005e7e07  e934ffffff           jmp 0x5e7d40
// 005e7e0c  83eb04               sub ebx, 4
// 005e7e0f  895c2410             mov dword ptr [esp + 0x10], ebx
// 005e7e13  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005e7e17  7529                 jne 0x5e7e42
// 005e7e19  83ee04               sub esi, 4
// 005e7e1c  3bde                 cmp ebx, esi
// 005e7e1e  7408                 je 0x5e7e28
// 005e7e20  8b0e                 mov ecx, dword ptr [esi]
// 005e7e22  8b03                 mov eax, dword ptr [ebx]
// 005e7e24  890b                 mov dword ptr [ebx], ecx
// 005e7e26  8906                 mov dword ptr [esi], eax
// 005e7e28  83ed04               sub ebp, 4
// 005e7e2b  3bf5                 cmp esi, ebp
// 005e7e2d  0f840dffffff         je 0x5e7d40
// 005e7e33  8b5500               mov edx, dword ptr [ebp]
// 005e7e36  8b06                 mov eax, dword ptr [esi]
// 005e7e38  8916                 mov dword ptr [esi], edx
// 005e7e3a  894500               mov dword ptr [ebp], eax
// 005e7e3d  e9fefeffff           jmp 0x5e7d40
// 005e7e42  3bfb                 cmp edi, ebx
// 005e7e44  7408                 je 0x5e7e4e
// 005e7e46  8b0b                 mov ecx, dword ptr [ebx]
// 005e7e48  8b07                 mov eax, dword ptr [edi]
// 005e7e4a  890f                 mov dword ptr [edi], ecx
// 005e7e4c  8903                 mov dword ptr [ebx], eax
// 005e7e4e  83c704               add edi, 4
// 005e7e51  e9eafeffff           jmp 0x5e7d40
// 005e7e56  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e7e5a  5f                   pop edi
// 005e7e5b  8930                 mov dword ptr [eax], esi
// 005e7e5d  5e                   pop esi
// 005e7e5e  896804               mov dword ptr [eax + 4], ebp
// 005e7e61  5d                   pop ebp
// 005e7e62  5b                   pop ebx
// 005e7e63  59                   pop ecx
// 005e7e64  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Unguarded_partition@PAPAVRenderSurface@Render@RBX@@P6A_NABQAV123@0@Z@std@@YA?AU?$pair@PAPAVRenderSurface@Render@RBX@@PAPAV123@@0@PAPAVRenderSurface@Render@RBX@@0P6A_NABQAV234@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
