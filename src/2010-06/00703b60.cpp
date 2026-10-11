// roc 2010-06 00703b60  unit: RBX::Animator  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00703b60
//
// 00703b60  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00703b64  83ec0c               sub esp, 0xc
// 00703b67  85c9                 test ecx, ecx
// 00703b69  7716                 ja 0x703b81
// 00703b6b  33c9                 xor ecx, ecx
// 00703b6d  8d14c9               lea edx, [ecx + ecx*8]
// 00703b70  03d2                 add edx, edx
// 00703b72  03d2                 add edx, edx
// 00703b74  52                   push edx
// 00703b75  e8263e0a00           call 0x7a79a0
// 00703b7a  83c404               add esp, 4
// 00703b7d  83c40c               add esp, 0xc
// 00703b80  c3                   ret 
// 00703b81  83c8ff               or eax, 0xffffffff
// 00703b84  33d2                 xor edx, edx
// 00703b86  f7f1                 div ecx
// 00703b88  83f824               cmp eax, 0x24
// 00703b8b  73e0                 jae 0x703b6d
// 00703b8d  8d442410             lea eax, [esp + 0x10]
// 00703b91  50                   push eax
// 00703b92  8d4c2404             lea ecx, [esp + 4]
// 00703b96  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00703b9e  ff1524a99e00         call dword ptr [0x9ea924]
// 00703ba4  68b41ab000           push 0xb01ab4
// 00703ba9  8d4c2404             lea ecx, [esp + 4]
// 00703bad  51                   push ecx
// 00703bae  c74424082000a000     mov dword ptr [esp + 8], 0xa00020
// 00703bb6  e8f74d0a00           call 0x7a89b2
// library openrbx-client/RbxView\PBBMesh.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
