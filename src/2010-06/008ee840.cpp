// roc 2010-06 008ee840  unit: Ogre::RbxMeshPartAdapter  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008ee840
//
// 008ee840  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008ee844  83ec0c               sub esp, 0xc
// 008ee847  85c9                 test ecx, ecx
// 008ee849  7712                 ja 0x8ee85d
// 008ee84b  33c9                 xor ecx, ecx
// 008ee84d  6bc92c               imul ecx, ecx, 0x2c
// 008ee850  51                   push ecx
// 008ee851  e84a91ebff           call 0x7a79a0
// 008ee856  83c404               add esp, 4
// 008ee859  83c40c               add esp, 0xc
// 008ee85c  c3                   ret 
// 008ee85d  83c8ff               or eax, 0xffffffff
// 008ee860  33d2                 xor edx, edx
// 008ee862  f7f1                 div ecx
// 008ee864  83f82c               cmp eax, 0x2c
// 008ee867  73e4                 jae 0x8ee84d
// 008ee869  8d442410             lea eax, [esp + 0x10]
// 008ee86d  50                   push eax
// 008ee86e  8d4c2404             lea ecx, [esp + 4]
// 008ee872  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008ee87a  ff1524a99e00         call dword ptr [0x9ea924]
// 008ee880  68b41ab000           push 0xb01ab4
// 008ee885  8d4c2404             lea ecx, [esp + 4]
// 008ee889  51                   push ecx
// 008ee88a  c74424082000a000     mov dword ptr [esp + 8], 0xa00020
// 008ee892  e81ba1ebff           call 0x7a89b2
// library openrbx-client/RbxView\PBBMesh.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
