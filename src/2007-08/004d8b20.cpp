// roc 2007-08 004d8b20  unit: RBX::View::MegaTextureProxy  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d8b20
//
// 004d8b20  83ec0c               sub esp, 0xc
// 004d8b23  56                   push esi
// 004d8b24  8bf1                 mov esi, ecx
// 004d8b26  837e0800             cmp dword ptr [esi + 8], 0
// 004d8b2a  57                   push edi
// 004d8b2b  7521                 jne 0x4d8b4e
// 004d8b2d  8b442424             mov eax, dword ptr [esp + 0x24]
// 004d8b31  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d8b34  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004d8b38  50                   push eax
// 004d8b39  51                   push ecx
// 004d8b3a  6a01                 push 1
// 004d8b3c  57                   push edi
// 004d8b3d  8bce                 mov ecx, esi
// 004d8b3f  e8acfcffff           call 0x4d87f0
// 004d8b44  8bc7                 mov eax, edi
// 004d8b46  5f                   pop edi
// 004d8b47  5e                   pop esi
// 004d8b48  83c40c               add esp, 0xc
// 004d8b4b  c21000               ret 0x10
// 004d8b4e  8b5604               mov edx, dword ptr [esi + 4]
// 004d8b51  8b3a                 mov edi, dword ptr [edx]
// 004d8b53  55                   push ebp
// 004d8b54  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004d8b58  85ed                 test ebp, ebp
// 004d8b5a  7404                 je 0x4d8b60
// 004d8b5c  3bee                 cmp ebp, esi
// 004d8b5e  7406                 je 0x4d8b66
// 004d8b60  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d8b66  53                   push ebx
// 004d8b67  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004d8b6b  3bdf                 cmp ebx, edi
// 004d8b6d  7533                 jne 0x4d8ba2
// 004d8b6f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004d8b73  8d430c               lea eax, [ebx + 0xc]
// 004d8b76  50                   push eax
// 004d8b77  8bcf                 mov ecx, edi
// 004d8b79  e802f5ffff           call 0x4d8080
// 004d8b7e  84c0                 test al, al
// 004d8b80  0f845f010000         je 0x4d8ce5
// 004d8b86  57                   push edi
// 004d8b87  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004d8b8b  53                   push ebx
// 004d8b8c  6a01                 push 1
// 004d8b8e  57                   push edi
// 004d8b8f  8bce                 mov ecx, esi
// 004d8b91  e85afcffff           call 0x4d87f0
// 004d8b96  5b                   pop ebx
// 004d8b97  5d                   pop ebp
// 004d8b98  8bc7                 mov eax, edi
// 004d8b9a  5f                   pop edi
// 004d8b9b  5e                   pop esi
// 004d8b9c  83c40c               add esp, 0xc
// 004d8b9f  c21000               ret 0x10
// 004d8ba2  85ed                 test ebp, ebp
// 004d8ba4  8b7e04               mov edi, dword ptr [esi + 4]
// 004d8ba7  7404                 je 0x4d8bad
// 004d8ba9  3bee                 cmp ebp, esi
// 004d8bab  7406                 je 0x4d8bb3
// 004d8bad  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d8bb3  3bdf                 cmp ebx, edi
// 004d8bb5  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004d8bb9  7533                 jne 0x4d8bee
// 004d8bbb  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d8bbe  8b5908               mov ebx, dword ptr [ecx + 8]
// 004d8bc1  57                   push edi
// 004d8bc2  8d4b0c               lea ecx, [ebx + 0xc]
// 004d8bc5  e8b6f4ffff           call 0x4d8080
// 004d8bca  84c0                 test al, al
// 004d8bcc  0f8413010000         je 0x4d8ce5
// 004d8bd2  57                   push edi
// 004d8bd3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004d8bd7  53                   push ebx
// 004d8bd8  6a00                 push 0
// 004d8bda  57                   push edi
// 004d8bdb  8bce                 mov ecx, esi
// 004d8bdd  e80efcffff           call 0x4d87f0
// 004d8be2  5b                   pop ebx
// 004d8be3  5d                   pop ebp
// 004d8be4  8bc7                 mov eax, edi
// 004d8be6  5f                   pop edi
// 004d8be7  5e                   pop esi
// 004d8be8  83c40c               add esp, 0xc
// 004d8beb  c21000               ret 0x10
// 004d8bee  8d430c               lea eax, [ebx + 0xc]
// 004d8bf1  50                   push eax
// 004d8bf2  8bcf                 mov ecx, edi
// 004d8bf4  e887f4ffff           call 0x4d8080
// 004d8bf9  84c0                 test al, al
// 004d8bfb  7460                 je 0x4d8c5d
// 004d8bfd  8d4c2424             lea ecx, [esp + 0x24]
// 004d8c01  896c2424             mov dword ptr [esp + 0x24], ebp
// 004d8c05  895c2428             mov dword ptr [esp + 0x28], ebx
// 004d8c09  e8a277fcff           call 0x4a03b0
// 004d8c0e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d8c12  57                   push edi
// 004d8c13  83c10c               add ecx, 0xc
// 004d8c16  e865f4ffff           call 0x4d8080
// 004d8c1b  84c0                 test al, al
// 004d8c1d  743e                 je 0x4d8c5d
// 004d8c1f  8b442428             mov eax, dword ptr [esp + 0x28]
// 004d8c23  8b5008               mov edx, dword ptr [eax + 8]
// 004d8c26  807a2100             cmp byte ptr [edx + 0x21], 0
// 004d8c2a  57                   push edi
// 004d8c2b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004d8c2f  8bce                 mov ecx, esi
// 004d8c31  7415                 je 0x4d8c48
// 004d8c33  50                   push eax
// 004d8c34  6a00                 push 0
// 004d8c36  57                   push edi
// 004d8c37  e8b4fbffff           call 0x4d87f0
// 004d8c3c  5b                   pop ebx
// 004d8c3d  5d                   pop ebp
// 004d8c3e  8bc7                 mov eax, edi
// 004d8c40  5f                   pop edi
// 004d8c41  5e                   pop esi
// 004d8c42  83c40c               add esp, 0xc
// 004d8c45  c21000               ret 0x10
// 004d8c48  53                   push ebx
// 004d8c49  6a01                 push 1
// 004d8c4b  57                   push edi
// 004d8c4c  e89ffbffff           call 0x4d87f0
// 004d8c51  5b                   pop ebx
// 004d8c52  5d                   pop ebp
// 004d8c53  8bc7                 mov eax, edi
// 004d8c55  5f                   pop edi
// 004d8c56  5e                   pop esi
// 004d8c57  83c40c               add esp, 0xc
// 004d8c5a  c21000               ret 0x10
// 004d8c5d  57                   push edi
// 004d8c5e  8d4b0c               lea ecx, [ebx + 0xc]
// 004d8c61  e81af4ffff           call 0x4d8080
// 004d8c66  84c0                 test al, al
// 004d8c68  747b                 je 0x4d8ce5
// 004d8c6a  8b4604               mov eax, dword ptr [esi + 4]
// 004d8c6d  8d4c2424             lea ecx, [esp + 0x24]
// 004d8c71  896c2424             mov dword ptr [esp + 0x24], ebp
// 004d8c75  895c2428             mov dword ptr [esp + 0x28], ebx
// 004d8c79  89442414             mov dword ptr [esp + 0x14], eax
// 004d8c7d  89742410             mov dword ptr [esp + 0x10], esi
// 004d8c81  e8ea7bffff           call 0x4d0870
// 004d8c86  8d4c2410             lea ecx, [esp + 0x10]
// 004d8c8a  51                   push ecx
// 004d8c8b  8d4c2428             lea ecx, [esp + 0x28]
// 004d8c8f  e81cdef8ff           call 0x466ab0
// 004d8c94  84c0                 test al, al
// 004d8c96  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 004d8c9a  750f                 jne 0x4d8cab
// 004d8c9c  8d550c               lea edx, [ebp + 0xc]
// 004d8c9f  52                   push edx
// 004d8ca0  8bcf                 mov ecx, edi
// 004d8ca2  e8d9f3ffff           call 0x4d8080
// 004d8ca7  84c0                 test al, al
// 004d8ca9  743a                 je 0x4d8ce5
// 004d8cab  8b4308               mov eax, dword ptr [ebx + 8]
// 004d8cae  80782100             cmp byte ptr [eax + 0x21], 0
// 004d8cb2  57                   push edi
// 004d8cb3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004d8cb7  8bce                 mov ecx, esi
// 004d8cb9  7415                 je 0x4d8cd0
// 004d8cbb  53                   push ebx
// 004d8cbc  6a00                 push 0
// 004d8cbe  57                   push edi
// 004d8cbf  e82cfbffff           call 0x4d87f0
// 004d8cc4  5b                   pop ebx
// 004d8cc5  5d                   pop ebp
// 004d8cc6  8bc7                 mov eax, edi
// 004d8cc8  5f                   pop edi
// 004d8cc9  5e                   pop esi
// 004d8cca  83c40c               add esp, 0xc
// 004d8ccd  c21000               ret 0x10
// 004d8cd0  55                   push ebp
// 004d8cd1  6a01                 push 1
// 004d8cd3  57                   push edi
// 004d8cd4  e817fbffff           call 0x4d87f0
// 004d8cd9  5b                   pop ebx
// 004d8cda  5d                   pop ebp
// 004d8cdb  8bc7                 mov eax, edi
// 004d8cdd  5f                   pop edi
// 004d8cde  5e                   pop esi
// 004d8cdf  83c40c               add esp, 0xc
// 004d8ce2  c21000               ret 0x10
// 004d8ce5  57                   push edi
// 004d8ce6  8d4c2414             lea ecx, [esp + 0x14]
// 004d8cea  51                   push ecx
// 004d8ceb  8bce                 mov ecx, esi
// 004d8ced  e8fefcffff           call 0x4d89f0
// 004d8cf2  8b10                 mov edx, dword ptr [eax]
// 004d8cf4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d8cf8  5b                   pop ebx
// 004d8cf9  5d                   pop ebp
// 004d8cfa  8911                 mov dword ptr [ecx], edx
// 004d8cfc  8b4004               mov eax, dword ptr [eax + 4]
// 004d8cff  5f                   pop edi
// 004d8d00  894104               mov dword ptr [ecx + 4], eax
// 004d8d03  8bc1                 mov eax, ecx
// 004d8d05  5e                   pop esi
// 004d8d06  83c40c               add esp, 0xc
// 004d8d09  c21000               ret 0x10
// library openrbx-client/RbxView\PBBMesh.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@V312@ABU?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
