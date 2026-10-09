// roc 2009-12 005d0930  unit: RBX::PartChunk  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005d0930
//
// 005d0930  51                   push ecx
// 005d0931  55                   push ebp
// 005d0932  57                   push edi
// 005d0933  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005d0937  807f2900             cmp byte ptr [edi + 0x29], 0
// 005d093b  894c2408             mov dword ptr [esp + 8], ecx
// 005d093f  8bef                 mov ebp, edi
// 005d0941  7573                 jne 0x5d09b6
// 005d0943  56                   push esi
// 005d0944  8b4508               mov eax, dword ptr [ebp + 8]
// 005d0947  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d094b  50                   push eax
// 005d094c  e8dfffffff           call 0x5d0930
// 005d0951  8b4724               mov eax, dword ptr [edi + 0x24]
// 005d0954  8b6d00               mov ebp, dword ptr [ebp]
// 005d0957  85c0                 test eax, eax
// 005d0959  7449                 je 0x5d09a4
// 005d095b  83c004               add eax, 4
// 005d095e  50                   push eax
// 005d095f  ff1508b29800         call dword ptr [0x98b208]
// 005d0965  85c0                 test eax, eax
// 005d0967  7534                 jne 0x5d099d
// 005d0969  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 005d096c  8b7108               mov esi, dword ptr [ecx + 8]
// 005d096f  85f6                 test esi, esi
// 005d0971  741b                 je 0x5d098e
// 005d0973  8b0e                 mov ecx, dword ptr [esi]
// 005d0975  8b11                 mov edx, dword ptr [ecx]
// 005d0977  8b4204               mov eax, dword ptr [edx + 4]
// 005d097a  ffd0                 call eax
// 005d097c  8bc6                 mov eax, esi
// 005d097e  8b7604               mov esi, dword ptr [esi + 4]
// 005d0981  50                   push eax
// 005d0982  e8d32e2200           call 0x7f385a
// 005d0987  83c404               add esp, 4
// 005d098a  85f6                 test esi, esi
// 005d098c  75e5                 jne 0x5d0973
// 005d098e  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 005d0991  85c9                 test ecx, ecx
// 005d0993  7408                 je 0x5d099d
// 005d0995  8b11                 mov edx, dword ptr [ecx]
// 005d0997  8b02                 mov eax, dword ptr [edx]
// 005d0999  6a01                 push 1
// 005d099b  ffd0                 call eax
// 005d099d  c7472400000000       mov dword ptr [edi + 0x24], 0
// 005d09a4  57                   push edi
// 005d09a5  e8b02e2200           call 0x7f385a
// 005d09aa  83c404               add esp, 4
// 005d09ad  807d2900             cmp byte ptr [ebp + 0x29], 0
// 005d09b1  8bfd                 mov edi, ebp
// 005d09b3  748f                 je 0x5d0944
// 005d09b5  5e                   pop esi
// 005d09b6  5f                   pop edi
// 005d09b7  5d                   pop ebp
// 005d09b8  59                   pop ecx
// 005d09b9  c20400               ret 4
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
