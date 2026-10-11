// roc 2011-06 0094ec20  unit: Ogre::RbxMeshPartAdapter  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0094ec20
//
// 0094ec20  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0094ec24  83ec0c               sub esp, 0xc
// 0094ec27  85c9                 test ecx, ecx
// 0094ec29  7716                 ja 0x94ec41
// 0094ec2b  33c9                 xor ecx, ecx
// 0094ec2d  8d14c9               lea edx, [ecx + ecx*8]
// 0094ec30  03d2                 add edx, edx
// 0094ec32  03d2                 add edx, edx
// 0094ec34  52                   push edx
// 0094ec35  e824b4ebff           call 0x80a05e
// 0094ec3a  83c404               add esp, 4
// 0094ec3d  83c40c               add esp, 0xc
// 0094ec40  c3                   ret 
// 0094ec41  83c8ff               or eax, 0xffffffff
// 0094ec44  33d2                 xor edx, edx
// 0094ec46  f7f1                 div ecx
// 0094ec48  83f824               cmp eax, 0x24
// 0094ec4b  73e0                 jae 0x94ec2d
// 0094ec4d  8d442410             lea eax, [esp + 0x10]
// 0094ec51  50                   push eax
// 0094ec52  8d4c2404             lea ecx, [esp + 4]
// 0094ec56  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0094ec5e  ff156c0aa400         call dword ptr [0xa40a6c]
// 0094ec64  68c472b800           push 0xb872c4
// 0094ec69  8d4c2404             lea ecx, [esp + 4]
// 0094ec6d  51                   push ecx
// 0094ec6e  c7442408b4b5a500     mov dword ptr [esp + 8], 0xa5b5b4
// 0094ec76  e831c4ebff           call 0x80b0ac
// library openrbx-client/RbxView\PBBMesh.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
