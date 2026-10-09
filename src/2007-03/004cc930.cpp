// roc 2007-03 004cc930  unit: seg_004c0000  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cc930
//
// 004cc930  83ec0c               sub esp, 0xc
// 004cc933  56                   push esi
// 004cc934  8bf1                 mov esi, ecx
// 004cc936  837e0800             cmp dword ptr [esi + 8], 0
// 004cc93a  57                   push edi
// 004cc93b  7521                 jne 0x4cc95e
// 004cc93d  8b442424             mov eax, dword ptr [esp + 0x24]
// 004cc941  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cc944  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004cc948  50                   push eax
// 004cc949  51                   push ecx
// 004cc94a  6a01                 push 1
// 004cc94c  57                   push edi
// 004cc94d  8bce                 mov ecx, esi
// 004cc94f  e8acfcffff           call 0x4cc600
// 004cc954  8bc7                 mov eax, edi
// 004cc956  5f                   pop edi
// 004cc957  5e                   pop esi
// 004cc958  83c40c               add esp, 0xc
// 004cc95b  c21000               ret 0x10
// 004cc95e  8b5604               mov edx, dword ptr [esi + 4]
// 004cc961  8b3a                 mov edi, dword ptr [edx]
// 004cc963  55                   push ebp
// 004cc964  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004cc968  85ed                 test ebp, ebp
// 004cc96a  7404                 je 0x4cc970
// 004cc96c  3bee                 cmp ebp, esi
// 004cc96e  7406                 je 0x4cc976
// 004cc970  ff1544e97700         call dword ptr [0x77e944]
// 004cc976  53                   push ebx
// 004cc977  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004cc97b  3bdf                 cmp ebx, edi
// 004cc97d  7533                 jne 0x4cc9b2
// 004cc97f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004cc983  8d430c               lea eax, [ebx + 0xc]
// 004cc986  50                   push eax
// 004cc987  8bcf                 mov ecx, edi
// 004cc989  e802f5ffff           call 0x4cbe90
// 004cc98e  84c0                 test al, al
// 004cc990  0f845f010000         je 0x4ccaf5
// 004cc996  57                   push edi
// 004cc997  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004cc99b  53                   push ebx
// 004cc99c  6a01                 push 1
// 004cc99e  57                   push edi
// 004cc99f  8bce                 mov ecx, esi
// 004cc9a1  e85afcffff           call 0x4cc600
// 004cc9a6  5b                   pop ebx
// 004cc9a7  5d                   pop ebp
// 004cc9a8  8bc7                 mov eax, edi
// 004cc9aa  5f                   pop edi
// 004cc9ab  5e                   pop esi
// 004cc9ac  83c40c               add esp, 0xc
// 004cc9af  c21000               ret 0x10
// 004cc9b2  85ed                 test ebp, ebp
// 004cc9b4  8b7e04               mov edi, dword ptr [esi + 4]
// 004cc9b7  7404                 je 0x4cc9bd
// 004cc9b9  3bee                 cmp ebp, esi
// 004cc9bb  7406                 je 0x4cc9c3
// 004cc9bd  ff1544e97700         call dword ptr [0x77e944]
// 004cc9c3  3bdf                 cmp ebx, edi
// 004cc9c5  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004cc9c9  7533                 jne 0x4cc9fe
// 004cc9cb  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cc9ce  8b5908               mov ebx, dword ptr [ecx + 8]
// 004cc9d1  57                   push edi
// 004cc9d2  8d4b0c               lea ecx, [ebx + 0xc]
// 004cc9d5  e8b6f4ffff           call 0x4cbe90
// 004cc9da  84c0                 test al, al
// 004cc9dc  0f8413010000         je 0x4ccaf5
// 004cc9e2  57                   push edi
// 004cc9e3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004cc9e7  53                   push ebx
// 004cc9e8  6a00                 push 0
// 004cc9ea  57                   push edi
// 004cc9eb  8bce                 mov ecx, esi
// 004cc9ed  e80efcffff           call 0x4cc600
// 004cc9f2  5b                   pop ebx
// 004cc9f3  5d                   pop ebp
// 004cc9f4  8bc7                 mov eax, edi
// 004cc9f6  5f                   pop edi
// 004cc9f7  5e                   pop esi
// 004cc9f8  83c40c               add esp, 0xc
// 004cc9fb  c21000               ret 0x10
// 004cc9fe  8d430c               lea eax, [ebx + 0xc]
// 004cca01  50                   push eax
// 004cca02  8bcf                 mov ecx, edi
// 004cca04  e887f4ffff           call 0x4cbe90
// 004cca09  84c0                 test al, al
// 004cca0b  7460                 je 0x4cca6d
// 004cca0d  8d4c2424             lea ecx, [esp + 0x24]
// 004cca11  896c2424             mov dword ptr [esp + 0x24], ebp
// 004cca15  895c2428             mov dword ptr [esp + 0x28], ebx
// 004cca19  e89282ffff           call 0x4c4cb0
// 004cca1e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004cca22  57                   push edi
// 004cca23  83c10c               add ecx, 0xc
// 004cca26  e865f4ffff           call 0x4cbe90
// 004cca2b  84c0                 test al, al
// 004cca2d  743e                 je 0x4cca6d
// 004cca2f  8b442428             mov eax, dword ptr [esp + 0x28]
// 004cca33  8b5008               mov edx, dword ptr [eax + 8]
// 004cca36  807a2100             cmp byte ptr [edx + 0x21], 0
// 004cca3a  57                   push edi
// 004cca3b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004cca3f  8bce                 mov ecx, esi
// 004cca41  7415                 je 0x4cca58
// 004cca43  50                   push eax
// 004cca44  6a00                 push 0
// 004cca46  57                   push edi
// 004cca47  e8b4fbffff           call 0x4cc600
// 004cca4c  5b                   pop ebx
// 004cca4d  5d                   pop ebp
// 004cca4e  8bc7                 mov eax, edi
// 004cca50  5f                   pop edi
// 004cca51  5e                   pop esi
// 004cca52  83c40c               add esp, 0xc
// 004cca55  c21000               ret 0x10
// 004cca58  53                   push ebx
// 004cca59  6a01                 push 1
// 004cca5b  57                   push edi
// 004cca5c  e89ffbffff           call 0x4cc600
// 004cca61  5b                   pop ebx
// 004cca62  5d                   pop ebp
// 004cca63  8bc7                 mov eax, edi
// 004cca65  5f                   pop edi
// 004cca66  5e                   pop esi
// 004cca67  83c40c               add esp, 0xc
// 004cca6a  c21000               ret 0x10
// 004cca6d  57                   push edi
// 004cca6e  8d4b0c               lea ecx, [ebx + 0xc]
// 004cca71  e81af4ffff           call 0x4cbe90
// 004cca76  84c0                 test al, al
// 004cca78  747b                 je 0x4ccaf5
// 004cca7a  8b4604               mov eax, dword ptr [esi + 4]
// 004cca7d  8d4c2424             lea ecx, [esp + 0x24]
// 004cca81  896c2424             mov dword ptr [esp + 0x24], ebp
// 004cca85  895c2428             mov dword ptr [esp + 0x28], ebx
// 004cca89  89442414             mov dword ptr [esp + 0x14], eax
// 004cca8d  89742410             mov dword ptr [esp + 0x10], esi
// 004cca91  e88ab7fcff           call 0x498220
// 004cca96  8d4c2410             lea ecx, [esp + 0x10]
// 004cca9a  51                   push ecx
// 004cca9b  8d4c2428             lea ecx, [esp + 0x28]
// 004cca9f  e8bcf1f7ff           call 0x44bc60
// 004ccaa4  84c0                 test al, al
// 004ccaa6  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 004ccaaa  750f                 jne 0x4ccabb
// 004ccaac  8d550c               lea edx, [ebp + 0xc]
// 004ccaaf  52                   push edx
// 004ccab0  8bcf                 mov ecx, edi
// 004ccab2  e8d9f3ffff           call 0x4cbe90
// 004ccab7  84c0                 test al, al
// 004ccab9  743a                 je 0x4ccaf5
// 004ccabb  8b4308               mov eax, dword ptr [ebx + 8]
// 004ccabe  80782100             cmp byte ptr [eax + 0x21], 0
// 004ccac2  57                   push edi
// 004ccac3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004ccac7  8bce                 mov ecx, esi
// 004ccac9  7415                 je 0x4ccae0
// 004ccacb  53                   push ebx
// 004ccacc  6a00                 push 0
// 004ccace  57                   push edi
// 004ccacf  e82cfbffff           call 0x4cc600
// 004ccad4  5b                   pop ebx
// 004ccad5  5d                   pop ebp
// 004ccad6  8bc7                 mov eax, edi
// 004ccad8  5f                   pop edi
// 004ccad9  5e                   pop esi
// 004ccada  83c40c               add esp, 0xc
// 004ccadd  c21000               ret 0x10
// 004ccae0  55                   push ebp
// 004ccae1  6a01                 push 1
// 004ccae3  57                   push edi
// 004ccae4  e817fbffff           call 0x4cc600
// 004ccae9  5b                   pop ebx
// 004ccaea  5d                   pop ebp
// 004ccaeb  8bc7                 mov eax, edi
// 004ccaed  5f                   pop edi
// 004ccaee  5e                   pop esi
// 004ccaef  83c40c               add esp, 0xc
// 004ccaf2  c21000               ret 0x10
// 004ccaf5  57                   push edi
// 004ccaf6  8d4c2414             lea ecx, [esp + 0x14]
// 004ccafa  51                   push ecx
// 004ccafb  8bce                 mov ecx, esi
// 004ccafd  e8fefcffff           call 0x4cc800
// 004ccb02  8b10                 mov edx, dword ptr [eax]
// 004ccb04  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004ccb08  5b                   pop ebx
// 004ccb09  5d                   pop ebp
// 004ccb0a  8911                 mov dword ptr [ecx], edx
// 004ccb0c  8b4004               mov eax, dword ptr [eax + 4]
// 004ccb0f  5f                   pop edi
// 004ccb10  894104               mov dword ptr [ecx + 4], eax
// 004ccb13  8bc1                 mov eax, ecx
// 004ccb15  5e                   pop esi
// 004ccb16  83c40c               add esp, 0xc
// 004ccb19  c21000               ret 0x10
// library openrbx-client/RbxView\PBBMesh.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@V312@ABU?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
