// roc 2009-06 0051c1c0  unit: G3D::VVector3::?$Table  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051c1c0
//
// 0051c1c0  51                   push ecx
// 0051c1c1  55                   push ebp
// 0051c1c2  57                   push edi
// 0051c1c3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0051c1c7  807f2100             cmp byte ptr [edi + 0x21], 0
// 0051c1cb  894c2408             mov dword ptr [esp + 8], ecx
// 0051c1cf  8bef                 mov ebp, edi
// 0051c1d1  7573                 jne 0x51c246
// 0051c1d3  56                   push esi
// 0051c1d4  8b4508               mov eax, dword ptr [ebp + 8]
// 0051c1d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051c1db  50                   push eax
// 0051c1dc  e8dfffffff           call 0x51c1c0
// 0051c1e1  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0051c1e4  8b6d00               mov ebp, dword ptr [ebp]
// 0051c1e7  85c0                 test eax, eax
// 0051c1e9  7449                 je 0x51c234
// 0051c1eb  83c004               add eax, 4
// 0051c1ee  50                   push eax
// 0051c1ef  ff15a4e18900         call dword ptr [0x89e1a4]
// 0051c1f5  85c0                 test eax, eax
// 0051c1f7  7534                 jne 0x51c22d
// 0051c1f9  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 0051c1fc  8b7108               mov esi, dword ptr [ecx + 8]
// 0051c1ff  85f6                 test esi, esi
// 0051c201  741b                 je 0x51c21e
// 0051c203  8b0e                 mov ecx, dword ptr [esi]
// 0051c205  8b11                 mov edx, dword ptr [ecx]
// 0051c207  8b4204               mov eax, dword ptr [edx + 4]
// 0051c20a  ffd0                 call eax
// 0051c20c  8bc6                 mov eax, esi
// 0051c20e  8b7604               mov esi, dword ptr [esi + 4]
// 0051c211  50                   push eax
// 0051c212  e81bc81f00           call 0x718a32
// 0051c217  83c404               add esp, 4
// 0051c21a  85f6                 test esi, esi
// 0051c21c  75e5                 jne 0x51c203
// 0051c21e  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 0051c221  85c9                 test ecx, ecx
// 0051c223  7408                 je 0x51c22d
// 0051c225  8b11                 mov edx, dword ptr [ecx]
// 0051c227  8b02                 mov eax, dword ptr [edx]
// 0051c229  6a01                 push 1
// 0051c22b  ffd0                 call eax
// 0051c22d  c7471c00000000       mov dword ptr [edi + 0x1c], 0
// 0051c234  57                   push edi
// 0051c235  e8f8c71f00           call 0x718a32
// 0051c23a  83c404               add esp, 4
// 0051c23d  807d2100             cmp byte ptr [ebp + 0x21], 0
// 0051c241  8bfd                 mov edi, ebp
// 0051c243  748f                 je 0x51c1d4
// 0051c245  5e                   pop esi
// 0051c246  5f                   pop edi
// 0051c247  5d                   pop ebp
// 0051c248  59                   pop ecx
// 0051c249  c20400               ret 4
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
