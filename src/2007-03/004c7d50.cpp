// roc 2007-03 004c7d50  unit: seg_004c0000  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c7d50
//
// 004c7d50  51                   push ecx
// 004c7d51  55                   push ebp
// 004c7d52  57                   push edi
// 004c7d53  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004c7d57  807f2100             cmp byte ptr [edi + 0x21], 0
// 004c7d5b  894c2408             mov dword ptr [esp + 8], ecx
// 004c7d5f  8bef                 mov ebp, edi
// 004c7d61  7573                 jne 0x4c7dd6
// 004c7d63  56                   push esi
// 004c7d64  8b4508               mov eax, dword ptr [ebp + 8]
// 004c7d67  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c7d6b  50                   push eax
// 004c7d6c  e8dfffffff           call 0x4c7d50
// 004c7d71  8b471c               mov eax, dword ptr [edi + 0x1c]
// 004c7d74  85c0                 test eax, eax
// 004c7d76  8b6d00               mov ebp, dword ptr [ebp]
// 004c7d79  7449                 je 0x4c7dc4
// 004c7d7b  83c004               add eax, 4
// 004c7d7e  50                   push eax
// 004c7d7f  ff15a8d27700         call dword ptr [0x77d2a8]
// 004c7d85  85c0                 test eax, eax
// 004c7d87  7534                 jne 0x4c7dbd
// 004c7d89  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 004c7d8c  8b7108               mov esi, dword ptr [ecx + 8]
// 004c7d8f  85f6                 test esi, esi
// 004c7d91  741b                 je 0x4c7dae
// 004c7d93  8b0e                 mov ecx, dword ptr [esi]
// 004c7d95  8b11                 mov edx, dword ptr [ecx]
// 004c7d97  8b4204               mov eax, dword ptr [edx + 4]
// 004c7d9a  ffd0                 call eax
// 004c7d9c  8bc6                 mov eax, esi
// 004c7d9e  8b7604               mov esi, dword ptr [esi + 4]
// 004c7da1  50                   push eax
// 004c7da2  e849631500           call 0x61e0f0
// 004c7da7  83c404               add esp, 4
// 004c7daa  85f6                 test esi, esi
// 004c7dac  75e5                 jne 0x4c7d93
// 004c7dae  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 004c7db1  85c9                 test ecx, ecx
// 004c7db3  7408                 je 0x4c7dbd
// 004c7db5  8b11                 mov edx, dword ptr [ecx]
// 004c7db7  8b02                 mov eax, dword ptr [edx]
// 004c7db9  6a01                 push 1
// 004c7dbb  ffd0                 call eax
// 004c7dbd  c7471c00000000       mov dword ptr [edi + 0x1c], 0
// 004c7dc4  57                   push edi
// 004c7dc5  e826631500           call 0x61e0f0
// 004c7dca  83c404               add esp, 4
// 004c7dcd  807d2100             cmp byte ptr [ebp + 0x21], 0
// 004c7dd1  8bfd                 mov edi, ebp
// 004c7dd3  748f                 je 0x4c7d64
// 004c7dd5  5e                   pop esi
// 004c7dd6  5f                   pop edi
// 004c7dd7  5d                   pop ebp
// 004c7dd8  59                   pop ecx
// 004c7dd9  c20400               ret 4
// library rbxgs-view/View.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
