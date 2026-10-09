// roc 2007-03 004c7cc0  unit: seg_004c0000  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c7cc0
//
// 004c7cc0  51                   push ecx
// 004c7cc1  55                   push ebp
// 004c7cc2  57                   push edi
// 004c7cc3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004c7cc7  807f2900             cmp byte ptr [edi + 0x29], 0
// 004c7ccb  894c2408             mov dword ptr [esp + 8], ecx
// 004c7ccf  8bef                 mov ebp, edi
// 004c7cd1  7573                 jne 0x4c7d46
// 004c7cd3  56                   push esi
// 004c7cd4  8b4508               mov eax, dword ptr [ebp + 8]
// 004c7cd7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c7cdb  50                   push eax
// 004c7cdc  e8dfffffff           call 0x4c7cc0
// 004c7ce1  8b4724               mov eax, dword ptr [edi + 0x24]
// 004c7ce4  85c0                 test eax, eax
// 004c7ce6  8b6d00               mov ebp, dword ptr [ebp]
// 004c7ce9  7449                 je 0x4c7d34
// 004c7ceb  83c004               add eax, 4
// 004c7cee  50                   push eax
// 004c7cef  ff15a8d27700         call dword ptr [0x77d2a8]
// 004c7cf5  85c0                 test eax, eax
// 004c7cf7  7534                 jne 0x4c7d2d
// 004c7cf9  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 004c7cfc  8b7108               mov esi, dword ptr [ecx + 8]
// 004c7cff  85f6                 test esi, esi
// 004c7d01  741b                 je 0x4c7d1e
// 004c7d03  8b0e                 mov ecx, dword ptr [esi]
// 004c7d05  8b11                 mov edx, dword ptr [ecx]
// 004c7d07  8b4204               mov eax, dword ptr [edx + 4]
// 004c7d0a  ffd0                 call eax
// 004c7d0c  8bc6                 mov eax, esi
// 004c7d0e  8b7604               mov esi, dword ptr [esi + 4]
// 004c7d11  50                   push eax
// 004c7d12  e8d9631500           call 0x61e0f0
// 004c7d17  83c404               add esp, 4
// 004c7d1a  85f6                 test esi, esi
// 004c7d1c  75e5                 jne 0x4c7d03
// 004c7d1e  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 004c7d21  85c9                 test ecx, ecx
// 004c7d23  7408                 je 0x4c7d2d
// 004c7d25  8b11                 mov edx, dword ptr [ecx]
// 004c7d27  8b02                 mov eax, dword ptr [edx]
// 004c7d29  6a01                 push 1
// 004c7d2b  ffd0                 call eax
// 004c7d2d  c7472400000000       mov dword ptr [edi + 0x24], 0
// 004c7d34  57                   push edi
// 004c7d35  e8b6631500           call 0x61e0f0
// 004c7d3a  83c404               add esp, 4
// 004c7d3d  807d2900             cmp byte ptr [ebp + 0x29], 0
// 004c7d41  8bfd                 mov edi, ebp
// 004c7d43  748f                 je 0x4c7cd4
// 004c7d45  5e                   pop esi
// 004c7d46  5f                   pop edi
// 004c7d47  5d                   pop ebp
// 004c7d48  59                   pop ecx
// 004c7d49  c20400               ret 4
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
