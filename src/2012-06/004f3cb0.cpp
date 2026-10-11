// roc 2012-06 004f3cb0  unit: Ogre::RbxMeshPartAdapter  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004f3cb0
//
// 004f3cb0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f3cb4  83ec0c               sub esp, 0xc
// 004f3cb7  85c9                 test ecx, ecx
// 004f3cb9  7716                 ja 0x4f3cd1
// 004f3cbb  33c9                 xor ecx, ecx
// 004f3cbd  8d14c9               lea edx, [ecx + ecx*8]
// 004f3cc0  03d2                 add edx, edx
// 004f3cc2  03d2                 add edx, edx
// 004f3cc4  52                   push edx
// 004f3cc5  e850e44800           call 0x98211a
// 004f3cca  83c404               add esp, 4
// 004f3ccd  83c40c               add esp, 0xc
// 004f3cd0  c3                   ret 
// 004f3cd1  83c8ff               or eax, 0xffffffff
// 004f3cd4  33d2                 xor edx, edx
// 004f3cd6  f7f1                 div ecx
// 004f3cd8  83f824               cmp eax, 0x24
// 004f3cdb  73e0                 jae 0x4f3cbd
// 004f3cdd  8d442410             lea eax, [esp + 0x10]
// 004f3ce1  50                   push eax
// 004f3ce2  8d4c2404             lea ecx, [esp + 4]
// 004f3ce6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004f3cee  ff15d029b200         call dword ptr [0xb229d0]
// 004f3cf4  685861cd00           push 0xcd6158
// 004f3cf9  8d4c2404             lea ecx, [esp + 4]
// 004f3cfd  51                   push ecx
// 004f3cfe  c7442408942eb400     mov dword ptr [esp + 8], 0xb42e94
// 004f3d06  e839f44800           call 0x983144
// library openrbx-client/RbxView\PBBMesh.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
