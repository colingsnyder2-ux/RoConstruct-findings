// roc 2008-06 004d83e0  unit: RBX::RenderBase::SimpleSceneManager  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d83e0
//
// 004d83e0  51                   push ecx
// 004d83e1  55                   push ebp
// 004d83e2  57                   push edi
// 004d83e3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d83e7  807f2100             cmp byte ptr [edi + 0x21], 0
// 004d83eb  894c2408             mov dword ptr [esp + 8], ecx
// 004d83ef  8bef                 mov ebp, edi
// 004d83f1  7573                 jne 0x4d8466
// 004d83f3  56                   push esi
// 004d83f4  8b4508               mov eax, dword ptr [ebp + 8]
// 004d83f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d83fb  50                   push eax
// 004d83fc  e8dfffffff           call 0x4d83e0
// 004d8401  8b471c               mov eax, dword ptr [edi + 0x1c]
// 004d8404  8b6d00               mov ebp, dword ptr [ebp]
// 004d8407  85c0                 test eax, eax
// 004d8409  7449                 je 0x4d8454
// 004d840b  83c004               add eax, 4
// 004d840e  50                   push eax
// 004d840f  ff15ac218000         call dword ptr [0x8021ac]
// 004d8415  85c0                 test eax, eax
// 004d8417  7534                 jne 0x4d844d
// 004d8419  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 004d841c  8b7108               mov esi, dword ptr [ecx + 8]
// 004d841f  85f6                 test esi, esi
// 004d8421  741b                 je 0x4d843e
// 004d8423  8b0e                 mov ecx, dword ptr [esi]
// 004d8425  8b11                 mov edx, dword ptr [ecx]
// 004d8427  8b4204               mov eax, dword ptr [edx + 4]
// 004d842a  ffd0                 call eax
// 004d842c  8bc6                 mov eax, esi
// 004d842e  8b7604               mov esi, dword ptr [esi + 4]
// 004d8431  50                   push eax
// 004d8432  e843821c00           call 0x6a067a
// 004d8437  83c404               add esp, 4
// 004d843a  85f6                 test esi, esi
// 004d843c  75e5                 jne 0x4d8423
// 004d843e  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 004d8441  85c9                 test ecx, ecx
// 004d8443  7408                 je 0x4d844d
// 004d8445  8b11                 mov edx, dword ptr [ecx]
// 004d8447  8b02                 mov eax, dword ptr [edx]
// 004d8449  6a01                 push 1
// 004d844b  ffd0                 call eax
// 004d844d  c7471c00000000       mov dword ptr [edi + 0x1c], 0
// 004d8454  57                   push edi
// 004d8455  e820821c00           call 0x6a067a
// 004d845a  83c404               add esp, 4
// 004d845d  807d2100             cmp byte ptr [ebp + 0x21], 0
// 004d8461  8bfd                 mov edi, ebp
// 004d8463  748f                 je 0x4d83f4
// 004d8465  5e                   pop esi
// 004d8466  5f                   pop edi
// 004d8467  5d                   pop ebp
// 004d8468  59                   pop ecx
// 004d8469  c20400               ret 4
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
