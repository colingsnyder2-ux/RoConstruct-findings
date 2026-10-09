// roc 2009-12 005d09c0  unit: RBX::PartChunk  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005d09c0
//
// 005d09c0  51                   push ecx
// 005d09c1  55                   push ebp
// 005d09c2  57                   push edi
// 005d09c3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005d09c7  807f2100             cmp byte ptr [edi + 0x21], 0
// 005d09cb  894c2408             mov dword ptr [esp + 8], ecx
// 005d09cf  8bef                 mov ebp, edi
// 005d09d1  7573                 jne 0x5d0a46
// 005d09d3  56                   push esi
// 005d09d4  8b4508               mov eax, dword ptr [ebp + 8]
// 005d09d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d09db  50                   push eax
// 005d09dc  e8dfffffff           call 0x5d09c0
// 005d09e1  8b471c               mov eax, dword ptr [edi + 0x1c]
// 005d09e4  8b6d00               mov ebp, dword ptr [ebp]
// 005d09e7  85c0                 test eax, eax
// 005d09e9  7449                 je 0x5d0a34
// 005d09eb  83c004               add eax, 4
// 005d09ee  50                   push eax
// 005d09ef  ff1508b29800         call dword ptr [0x98b208]
// 005d09f5  85c0                 test eax, eax
// 005d09f7  7534                 jne 0x5d0a2d
// 005d09f9  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 005d09fc  8b7108               mov esi, dword ptr [ecx + 8]
// 005d09ff  85f6                 test esi, esi
// 005d0a01  741b                 je 0x5d0a1e
// 005d0a03  8b0e                 mov ecx, dword ptr [esi]
// 005d0a05  8b11                 mov edx, dword ptr [ecx]
// 005d0a07  8b4204               mov eax, dword ptr [edx + 4]
// 005d0a0a  ffd0                 call eax
// 005d0a0c  8bc6                 mov eax, esi
// 005d0a0e  8b7604               mov esi, dword ptr [esi + 4]
// 005d0a11  50                   push eax
// 005d0a12  e8432e2200           call 0x7f385a
// 005d0a17  83c404               add esp, 4
// 005d0a1a  85f6                 test esi, esi
// 005d0a1c  75e5                 jne 0x5d0a03
// 005d0a1e  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 005d0a21  85c9                 test ecx, ecx
// 005d0a23  7408                 je 0x5d0a2d
// 005d0a25  8b11                 mov edx, dword ptr [ecx]
// 005d0a27  8b02                 mov eax, dword ptr [edx]
// 005d0a29  6a01                 push 1
// 005d0a2b  ffd0                 call eax
// 005d0a2d  c7471c00000000       mov dword ptr [edi + 0x1c], 0
// 005d0a34  57                   push edi
// 005d0a35  e8202e2200           call 0x7f385a
// 005d0a3a  83c404               add esp, 4
// 005d0a3d  807d2100             cmp byte ptr [ebp + 0x21], 0
// 005d0a41  8bfd                 mov edi, ebp
// 005d0a43  748f                 je 0x5d09d4
// 005d0a45  5e                   pop esi
// 005d0a46  5f                   pop edi
// 005d0a47  5d                   pop ebp
// 005d0a48  59                   pop ecx
// 005d0a49  c20400               ret 4
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
