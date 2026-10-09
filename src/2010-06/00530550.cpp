// roc 2010-06 00530550  unit: RBX::PartChunk  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00530550
//
// 00530550  51                   push ecx
// 00530551  55                   push ebp
// 00530552  57                   push edi
// 00530553  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00530557  807f2900             cmp byte ptr [edi + 0x29], 0
// 0053055b  894c2408             mov dword ptr [esp + 8], ecx
// 0053055f  8bef                 mov ebp, edi
// 00530561  7573                 jne 0x5305d6
// 00530563  56                   push esi
// 00530564  8b4508               mov eax, dword ptr [ebp + 8]
// 00530567  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053056b  50                   push eax
// 0053056c  e8dfffffff           call 0x530550
// 00530571  8b4724               mov eax, dword ptr [edi + 0x24]
// 00530574  8b6d00               mov ebp, dword ptr [ebp]
// 00530577  85c0                 test eax, eax
// 00530579  7449                 je 0x5305c4
// 0053057b  83c004               add eax, 4
// 0053057e  50                   push eax
// 0053057f  ff157ca39e00         call dword ptr [0x9ea37c]
// 00530585  85c0                 test eax, eax
// 00530587  7534                 jne 0x5305bd
// 00530589  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0053058c  8b7108               mov esi, dword ptr [ecx + 8]
// 0053058f  85f6                 test esi, esi
// 00530591  741b                 je 0x5305ae
// 00530593  8b0e                 mov ecx, dword ptr [esi]
// 00530595  8b11                 mov edx, dword ptr [ecx]
// 00530597  8b4204               mov eax, dword ptr [edx + 4]
// 0053059a  ffd0                 call eax
// 0053059c  8bc6                 mov eax, esi
// 0053059e  8b7604               mov esi, dword ptr [esi + 4]
// 005305a1  50                   push eax
// 005305a2  e8f3732700           call 0x7a799a
// 005305a7  83c404               add esp, 4
// 005305aa  85f6                 test esi, esi
// 005305ac  75e5                 jne 0x530593
// 005305ae  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 005305b1  85c9                 test ecx, ecx
// 005305b3  7408                 je 0x5305bd
// 005305b5  8b11                 mov edx, dword ptr [ecx]
// 005305b7  8b02                 mov eax, dword ptr [edx]
// 005305b9  6a01                 push 1
// 005305bb  ffd0                 call eax
// 005305bd  c7472400000000       mov dword ptr [edi + 0x24], 0
// 005305c4  57                   push edi
// 005305c5  e8d0732700           call 0x7a799a
// 005305ca  83c404               add esp, 4
// 005305cd  807d2900             cmp byte ptr [ebp + 0x29], 0
// 005305d1  8bfd                 mov edi, ebp
// 005305d3  748f                 je 0x530564
// 005305d5  5e                   pop esi
// 005305d6  5f                   pop edi
// 005305d7  5d                   pop ebp
// 005305d8  59                   pop ecx
// 005305d9  c20400               ret 4
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
