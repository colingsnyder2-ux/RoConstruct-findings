// roc 2008-06 004d8470  unit: RBX::RenderBase::SimpleSceneManager  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8470
//
// 004d8470  51                   push ecx
// 004d8471  55                   push ebp
// 004d8472  57                   push edi
// 004d8473  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d8477  807f2900             cmp byte ptr [edi + 0x29], 0
// 004d847b  894c2408             mov dword ptr [esp + 8], ecx
// 004d847f  8bef                 mov ebp, edi
// 004d8481  7573                 jne 0x4d84f6
// 004d8483  56                   push esi
// 004d8484  8b4508               mov eax, dword ptr [ebp + 8]
// 004d8487  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d848b  50                   push eax
// 004d848c  e8dfffffff           call 0x4d8470
// 004d8491  8b4724               mov eax, dword ptr [edi + 0x24]
// 004d8494  8b6d00               mov ebp, dword ptr [ebp]
// 004d8497  85c0                 test eax, eax
// 004d8499  7449                 je 0x4d84e4
// 004d849b  83c004               add eax, 4
// 004d849e  50                   push eax
// 004d849f  ff15ac218000         call dword ptr [0x8021ac]
// 004d84a5  85c0                 test eax, eax
// 004d84a7  7534                 jne 0x4d84dd
// 004d84a9  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 004d84ac  8b7108               mov esi, dword ptr [ecx + 8]
// 004d84af  85f6                 test esi, esi
// 004d84b1  741b                 je 0x4d84ce
// 004d84b3  8b0e                 mov ecx, dword ptr [esi]
// 004d84b5  8b11                 mov edx, dword ptr [ecx]
// 004d84b7  8b4204               mov eax, dword ptr [edx + 4]
// 004d84ba  ffd0                 call eax
// 004d84bc  8bc6                 mov eax, esi
// 004d84be  8b7604               mov esi, dword ptr [esi + 4]
// 004d84c1  50                   push eax
// 004d84c2  e8b3811c00           call 0x6a067a
// 004d84c7  83c404               add esp, 4
// 004d84ca  85f6                 test esi, esi
// 004d84cc  75e5                 jne 0x4d84b3
// 004d84ce  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 004d84d1  85c9                 test ecx, ecx
// 004d84d3  7408                 je 0x4d84dd
// 004d84d5  8b11                 mov edx, dword ptr [ecx]
// 004d84d7  8b02                 mov eax, dword ptr [edx]
// 004d84d9  6a01                 push 1
// 004d84db  ffd0                 call eax
// 004d84dd  c7472400000000       mov dword ptr [edi + 0x24], 0
// 004d84e4  57                   push edi
// 004d84e5  e890811c00           call 0x6a067a
// 004d84ea  83c404               add esp, 4
// 004d84ed  807d2900             cmp byte ptr [ebp + 0x29], 0
// 004d84f1  8bfd                 mov edi, ebp
// 004d84f3  748f                 je 0x4d8484
// 004d84f5  5e                   pop esi
// 004d84f6  5f                   pop edi
// 004d84f7  5d                   pop ebp
// 004d84f8  59                   pop ecx
// 004d84f9  c20400               ret 4
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
