// roc 2007-08 004d3b60  unit: RBX::Render::Chunk  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d3b60
//
// 004d3b60  51                   push ecx
// 004d3b61  55                   push ebp
// 004d3b62  57                   push edi
// 004d3b63  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d3b67  807f2900             cmp byte ptr [edi + 0x29], 0
// 004d3b6b  894c2408             mov dword ptr [esp + 8], ecx
// 004d3b6f  8bef                 mov ebp, edi
// 004d3b71  7573                 jne 0x4d3be6
// 004d3b73  56                   push esi
// 004d3b74  8b4508               mov eax, dword ptr [ebp + 8]
// 004d3b77  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d3b7b  50                   push eax
// 004d3b7c  e8dfffffff           call 0x4d3b60
// 004d3b81  8b4724               mov eax, dword ptr [edi + 0x24]
// 004d3b84  85c0                 test eax, eax
// 004d3b86  8b6d00               mov ebp, dword ptr [ebp]
// 004d3b89  7449                 je 0x4d3bd4
// 004d3b8b  83c004               add eax, 4
// 004d3b8e  50                   push eax
// 004d3b8f  ff15e8d27700         call dword ptr [0x77d2e8]
// 004d3b95  85c0                 test eax, eax
// 004d3b97  7534                 jne 0x4d3bcd
// 004d3b99  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 004d3b9c  8b7108               mov esi, dword ptr [ecx + 8]
// 004d3b9f  85f6                 test esi, esi
// 004d3ba1  741b                 je 0x4d3bbe
// 004d3ba3  8b0e                 mov ecx, dword ptr [esi]
// 004d3ba5  8b11                 mov edx, dword ptr [ecx]
// 004d3ba7  8b4204               mov eax, dword ptr [edx + 4]
// 004d3baa  ffd0                 call eax
// 004d3bac  8bc6                 mov eax, esi
// 004d3bae  8b7604               mov esi, dword ptr [esi + 4]
// 004d3bb1  50                   push eax
// 004d3bb2  e8abc01500           call 0x62fc62
// 004d3bb7  83c404               add esp, 4
// 004d3bba  85f6                 test esi, esi
// 004d3bbc  75e5                 jne 0x4d3ba3
// 004d3bbe  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 004d3bc1  85c9                 test ecx, ecx
// 004d3bc3  7408                 je 0x4d3bcd
// 004d3bc5  8b11                 mov edx, dword ptr [ecx]
// 004d3bc7  8b02                 mov eax, dword ptr [edx]
// 004d3bc9  6a01                 push 1
// 004d3bcb  ffd0                 call eax
// 004d3bcd  c7472400000000       mov dword ptr [edi + 0x24], 0
// 004d3bd4  57                   push edi
// 004d3bd5  e888c01500           call 0x62fc62
// 004d3bda  83c404               add esp, 4
// 004d3bdd  807d2900             cmp byte ptr [ebp + 0x29], 0
// 004d3be1  8bfd                 mov edi, ebp
// 004d3be3  748f                 je 0x4d3b74
// 004d3be5  5e                   pop esi
// 004d3be6  5f                   pop edi
// 004d3be7  5d                   pop ebp
// 004d3be8  59                   pop ecx
// 004d3be9  c20400               ret 4
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
