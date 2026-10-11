// roc 2012-06 004f3d10  unit: Ogre::RbxMeshPartAdapter  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004f3d10
//
// 004f3d10  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f3d14  83ec0c               sub esp, 0xc
// 004f3d17  85c9                 test ecx, ecx
// 004f3d19  7712                 ja 0x4f3d2d
// 004f3d1b  33c9                 xor ecx, ecx
// 004f3d1d  6bc92c               imul ecx, ecx, 0x2c
// 004f3d20  51                   push ecx
// 004f3d21  e8f4e34800           call 0x98211a
// 004f3d26  83c404               add esp, 4
// 004f3d29  83c40c               add esp, 0xc
// 004f3d2c  c3                   ret 
// 004f3d2d  83c8ff               or eax, 0xffffffff
// 004f3d30  33d2                 xor edx, edx
// 004f3d32  f7f1                 div ecx
// 004f3d34  83f82c               cmp eax, 0x2c
// 004f3d37  73e4                 jae 0x4f3d1d
// 004f3d39  8d442410             lea eax, [esp + 0x10]
// 004f3d3d  50                   push eax
// 004f3d3e  8d4c2404             lea ecx, [esp + 4]
// 004f3d42  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004f3d4a  ff15d029b200         call dword ptr [0xb229d0]
// 004f3d50  685861cd00           push 0xcd6158
// 004f3d55  8d4c2404             lea ecx, [esp + 4]
// 004f3d59  51                   push ecx
// 004f3d5a  c7442408942eb400     mov dword ptr [esp + 8], 0xb42e94
// 004f3d62  e8ddf34800           call 0x983144
// library openrbx-client/RbxView\PBBMesh.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
