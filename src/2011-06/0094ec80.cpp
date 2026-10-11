// roc 2011-06 0094ec80  unit: Ogre::RbxMeshPartAdapter  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0094ec80
//
// 0094ec80  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0094ec84  83ec0c               sub esp, 0xc
// 0094ec87  85c9                 test ecx, ecx
// 0094ec89  7712                 ja 0x94ec9d
// 0094ec8b  33c9                 xor ecx, ecx
// 0094ec8d  6bc92c               imul ecx, ecx, 0x2c
// 0094ec90  51                   push ecx
// 0094ec91  e8c8b3ebff           call 0x80a05e
// 0094ec96  83c404               add esp, 4
// 0094ec99  83c40c               add esp, 0xc
// 0094ec9c  c3                   ret 
// 0094ec9d  83c8ff               or eax, 0xffffffff
// 0094eca0  33d2                 xor edx, edx
// 0094eca2  f7f1                 div ecx
// 0094eca4  83f82c               cmp eax, 0x2c
// 0094eca7  73e4                 jae 0x94ec8d
// 0094eca9  8d442410             lea eax, [esp + 0x10]
// 0094ecad  50                   push eax
// 0094ecae  8d4c2404             lea ecx, [esp + 4]
// 0094ecb2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0094ecba  ff156c0aa400         call dword ptr [0xa40a6c]
// 0094ecc0  68c472b800           push 0xb872c4
// 0094ecc5  8d4c2404             lea ecx, [esp + 4]
// 0094ecc9  51                   push ecx
// 0094ecca  c7442408b4b5a500     mov dword ptr [esp + 8], 0xa5b5b4
// 0094ecd2  e8d5c3ebff           call 0x80b0ac
// library openrbx-client/RbxView\PBBMesh.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
