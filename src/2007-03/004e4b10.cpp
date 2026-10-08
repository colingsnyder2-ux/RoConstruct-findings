// roc 2007-03 004e4b10  unit: seg_004e0000  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e4b10
//
// 004e4b10  83ec0c               sub esp, 0xc
// 004e4b13  56                   push esi
// 004e4b14  8bf1                 mov esi, ecx
// 004e4b16  837e0800             cmp dword ptr [esi + 8], 0
// 004e4b1a  57                   push edi
// 004e4b1b  7521                 jne 0x4e4b3e
// 004e4b1d  8b442424             mov eax, dword ptr [esp + 0x24]
// 004e4b21  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e4b24  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004e4b28  50                   push eax
// 004e4b29  51                   push ecx
// 004e4b2a  6a01                 push 1
// 004e4b2c  57                   push edi
// 004e4b2d  8bce                 mov ecx, esi
// 004e4b2f  e81cf2ffff           call 0x4e3d50
// 004e4b34  8bc7                 mov eax, edi
// 004e4b36  5f                   pop edi
// 004e4b37  5e                   pop esi
// 004e4b38  83c40c               add esp, 0xc
// 004e4b3b  c21000               ret 0x10
// 004e4b3e  8b5604               mov edx, dword ptr [esi + 4]
// 004e4b41  8b3a                 mov edi, dword ptr [edx]
// 004e4b43  55                   push ebp
// 004e4b44  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004e4b48  85ed                 test ebp, ebp
// 004e4b4a  7404                 je 0x4e4b50
// 004e4b4c  3bee                 cmp ebp, esi
// 004e4b4e  7406                 je 0x4e4b56
// 004e4b50  ff1544e97700         call dword ptr [0x77e944]
// 004e4b56  53                   push ebx
// 004e4b57  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004e4b5b  3bdf                 cmp ebx, edi
// 004e4b5d  7533                 jne 0x4e4b92
// 004e4b5f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004e4b63  8d430c               lea eax, [ebx + 0xc]
// 004e4b66  50                   push eax
// 004e4b67  8bcf                 mov ecx, edi
// 004e4b69  e822e3ffff           call 0x4e2e90
// 004e4b6e  84c0                 test al, al
// 004e4b70  0f845f010000         je 0x4e4cd5
// 004e4b76  57                   push edi
// 004e4b77  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004e4b7b  53                   push ebx
// 004e4b7c  6a01                 push 1
// 004e4b7e  57                   push edi
// 004e4b7f  8bce                 mov ecx, esi
// 004e4b81  e8caf1ffff           call 0x4e3d50
// 004e4b86  5b                   pop ebx
// 004e4b87  5d                   pop ebp
// 004e4b88  8bc7                 mov eax, edi
// 004e4b8a  5f                   pop edi
// 004e4b8b  5e                   pop esi
// 004e4b8c  83c40c               add esp, 0xc
// 004e4b8f  c21000               ret 0x10
// 004e4b92  85ed                 test ebp, ebp
// 004e4b94  8b7e04               mov edi, dword ptr [esi + 4]
// 004e4b97  7404                 je 0x4e4b9d
// 004e4b99  3bee                 cmp ebp, esi
// 004e4b9b  7406                 je 0x4e4ba3
// 004e4b9d  ff1544e97700         call dword ptr [0x77e944]
// 004e4ba3  3bdf                 cmp ebx, edi
// 004e4ba5  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004e4ba9  7533                 jne 0x4e4bde
// 004e4bab  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e4bae  8b5908               mov ebx, dword ptr [ecx + 8]
// 004e4bb1  57                   push edi
// 004e4bb2  8d4b0c               lea ecx, [ebx + 0xc]
// 004e4bb5  e8d6e2ffff           call 0x4e2e90
// 004e4bba  84c0                 test al, al
// 004e4bbc  0f8413010000         je 0x4e4cd5
// 004e4bc2  57                   push edi
// 004e4bc3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004e4bc7  53                   push ebx
// 004e4bc8  6a00                 push 0
// 004e4bca  57                   push edi
// 004e4bcb  8bce                 mov ecx, esi
// 004e4bcd  e87ef1ffff           call 0x4e3d50
// 004e4bd2  5b                   pop ebx
// 004e4bd3  5d                   pop ebp
// 004e4bd4  8bc7                 mov eax, edi
// 004e4bd6  5f                   pop edi
// 004e4bd7  5e                   pop esi
// 004e4bd8  83c40c               add esp, 0xc
// 004e4bdb  c21000               ret 0x10
// 004e4bde  8d430c               lea eax, [ebx + 0xc]
// 004e4be1  50                   push eax
// 004e4be2  8bcf                 mov ecx, edi
// 004e4be4  e8a7e2ffff           call 0x4e2e90
// 004e4be9  84c0                 test al, al
// 004e4beb  7460                 je 0x4e4c4d
// 004e4bed  8d4c2424             lea ecx, [esp + 0x24]
// 004e4bf1  896c2424             mov dword ptr [esp + 0x24], ebp
// 004e4bf5  895c2428             mov dword ptr [esp + 0x28], ebx
// 004e4bf9  e8720c1100           call 0x5f5870
// 004e4bfe  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004e4c02  57                   push edi
// 004e4c03  83c10c               add ecx, 0xc
// 004e4c06  e885e2ffff           call 0x4e2e90
// 004e4c0b  84c0                 test al, al
// 004e4c0d  743e                 je 0x4e4c4d
// 004e4c0f  8b442428             mov eax, dword ptr [esp + 0x28]
// 004e4c13  8b5008               mov edx, dword ptr [eax + 8]
// 004e4c16  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 004e4c1a  57                   push edi
// 004e4c1b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004e4c1f  8bce                 mov ecx, esi
// 004e4c21  7415                 je 0x4e4c38
// 004e4c23  50                   push eax
// 004e4c24  6a00                 push 0
// 004e4c26  57                   push edi
// 004e4c27  e824f1ffff           call 0x4e3d50
// 004e4c2c  5b                   pop ebx
// 004e4c2d  5d                   pop ebp
// 004e4c2e  8bc7                 mov eax, edi
// 004e4c30  5f                   pop edi
// 004e4c31  5e                   pop esi
// 004e4c32  83c40c               add esp, 0xc
// 004e4c35  c21000               ret 0x10
// 004e4c38  53                   push ebx
// 004e4c39  6a01                 push 1
// 004e4c3b  57                   push edi
// 004e4c3c  e80ff1ffff           call 0x4e3d50
// 004e4c41  5b                   pop ebx
// 004e4c42  5d                   pop ebp
// 004e4c43  8bc7                 mov eax, edi
// 004e4c45  5f                   pop edi
// 004e4c46  5e                   pop esi
// 004e4c47  83c40c               add esp, 0xc
// 004e4c4a  c21000               ret 0x10
// 004e4c4d  57                   push edi
// 004e4c4e  8d4b0c               lea ecx, [ebx + 0xc]
// 004e4c51  e83ae2ffff           call 0x4e2e90
// 004e4c56  84c0                 test al, al
// 004e4c58  747b                 je 0x4e4cd5
// 004e4c5a  8b4604               mov eax, dword ptr [esi + 4]
// 004e4c5d  8d4c2424             lea ecx, [esp + 0x24]
// 004e4c61  896c2424             mov dword ptr [esp + 0x24], ebp
// 004e4c65  895c2428             mov dword ptr [esp + 0x28], ebx
// 004e4c69  89442414             mov dword ptr [esp + 0x14], eax
// 004e4c6d  89742410             mov dword ptr [esp + 0x10], esi
// 004e4c71  e8eae2ffff           call 0x4e2f60
// 004e4c76  8d4c2410             lea ecx, [esp + 0x10]
// 004e4c7a  51                   push ecx
// 004e4c7b  8d4c2428             lea ecx, [esp + 0x28]
// 004e4c7f  e8dc6ff6ff           call 0x44bc60
// 004e4c84  84c0                 test al, al
// 004e4c86  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 004e4c8a  750f                 jne 0x4e4c9b
// 004e4c8c  8d550c               lea edx, [ebp + 0xc]
// 004e4c8f  52                   push edx
// 004e4c90  8bcf                 mov ecx, edi
// 004e4c92  e8f9e1ffff           call 0x4e2e90
// 004e4c97  84c0                 test al, al
// 004e4c99  743a                 je 0x4e4cd5
// 004e4c9b  8b4308               mov eax, dword ptr [ebx + 8]
// 004e4c9e  80781d00             cmp byte ptr [eax + 0x1d], 0
// 004e4ca2  57                   push edi
// 004e4ca3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004e4ca7  8bce                 mov ecx, esi
// 004e4ca9  7415                 je 0x4e4cc0
// 004e4cab  53                   push ebx
// 004e4cac  6a00                 push 0
// 004e4cae  57                   push edi
// 004e4caf  e89cf0ffff           call 0x4e3d50
// 004e4cb4  5b                   pop ebx
// 004e4cb5  5d                   pop ebp
// 004e4cb6  8bc7                 mov eax, edi
// 004e4cb8  5f                   pop edi
// 004e4cb9  5e                   pop esi
// 004e4cba  83c40c               add esp, 0xc
// 004e4cbd  c21000               ret 0x10
// 004e4cc0  55                   push ebp
// 004e4cc1  6a01                 push 1
// 004e4cc3  57                   push edi
// 004e4cc4  e887f0ffff           call 0x4e3d50
// 004e4cc9  5b                   pop ebx
// 004e4cca  5d                   pop ebp
// 004e4ccb  8bc7                 mov eax, edi
// 004e4ccd  5f                   pop edi
// 004e4cce  5e                   pop esi
// 004e4ccf  83c40c               add esp, 0xc
// 004e4cd2  c21000               ret 0x10
// 004e4cd5  57                   push edi
// 004e4cd6  8d4c2414             lea ecx, [esp + 0x14]
// 004e4cda  51                   push ecx
// 004e4cdb  8bce                 mov ecx, esi
// 004e4cdd  e8def4ffff           call 0x4e41c0
// 004e4ce2  8b10                 mov edx, dword ptr [eax]
// 004e4ce4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004e4ce8  5b                   pop ebx
// 004e4ce9  5d                   pop ebp
// 004e4cea  8911                 mov dword ptr [ecx], edx
// 004e4cec  8b4004               mov eax, dword ptr [eax + 4]
// 004e4cef  5f                   pop edi
// 004e4cf0  894104               mov dword ptr [ecx + 4], eax
// 004e4cf3  8bc1                 mov eax, ecx
// 004e4cf5  5e                   pop esi
// 004e4cf6  83c40c               add esp, 0xc
// 004e4cf9  c21000               ret 0x10
// library rbxgs-render/AggregatingSceneManager.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@V312@ABU?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
