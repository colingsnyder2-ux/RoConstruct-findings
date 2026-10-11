// roc 2009-12 0049b520  unit: Ogre::RbxMeshPartAdapter  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049b520
//
// 0049b520  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049b524  83ec0c               sub esp, 0xc
// 0049b527  85c9                 test ecx, ecx
// 0049b529  7712                 ja 0x49b53d
// 0049b52b  33c9                 xor ecx, ecx
// 0049b52d  6bc92c               imul ecx, ecx, 0x2c
// 0049b530  51                   push ecx
// 0049b531  e82a833500           call 0x7f3860
// 0049b536  83c404               add esp, 4
// 0049b539  83c40c               add esp, 0xc
// 0049b53c  c3                   ret 
// 0049b53d  83c8ff               or eax, 0xffffffff
// 0049b540  33d2                 xor edx, edx
// 0049b542  f7f1                 div ecx
// 0049b544  83f82c               cmp eax, 0x2c
// 0049b547  73e4                 jae 0x49b52d
// 0049b549  8d442410             lea eax, [esp + 0x10]
// 0049b54d  50                   push eax
// 0049b54e  8d4c2404             lea ecx, [esp + 4]
// 0049b552  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0049b55a  ff1548b79800         call dword ptr [0x98b748]
// 0049b560  6838efa800           push 0xa8ef38
// 0049b565  8d4c2404             lea ecx, [esp + 4]
// 0049b569  51                   push ecx
// 0049b56a  c744240878f49900     mov dword ptr [esp + 8], 0x99f478
// 0049b572  e801933500           call 0x7f4878
// library openrbx-client/RbxView\PBBMesh.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
