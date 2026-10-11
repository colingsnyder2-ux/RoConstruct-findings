// roc 2009-12 0049b4c0  unit: Ogre::RbxMeshPartAdapter  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049b4c0
//
// 0049b4c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049b4c4  83ec0c               sub esp, 0xc
// 0049b4c7  85c9                 test ecx, ecx
// 0049b4c9  7716                 ja 0x49b4e1
// 0049b4cb  33c9                 xor ecx, ecx
// 0049b4cd  8d14c9               lea edx, [ecx + ecx*8]
// 0049b4d0  03d2                 add edx, edx
// 0049b4d2  03d2                 add edx, edx
// 0049b4d4  52                   push edx
// 0049b4d5  e886833500           call 0x7f3860
// 0049b4da  83c404               add esp, 4
// 0049b4dd  83c40c               add esp, 0xc
// 0049b4e0  c3                   ret 
// 0049b4e1  83c8ff               or eax, 0xffffffff
// 0049b4e4  33d2                 xor edx, edx
// 0049b4e6  f7f1                 div ecx
// 0049b4e8  83f824               cmp eax, 0x24
// 0049b4eb  73e0                 jae 0x49b4cd
// 0049b4ed  8d442410             lea eax, [esp + 0x10]
// 0049b4f1  50                   push eax
// 0049b4f2  8d4c2404             lea ecx, [esp + 4]
// 0049b4f6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0049b4fe  ff1548b79800         call dword ptr [0x98b748]
// 0049b504  6838efa800           push 0xa8ef38
// 0049b509  8d4c2404             lea ecx, [esp + 4]
// 0049b50d  51                   push ecx
// 0049b50e  c744240878f49900     mov dword ptr [esp + 8], 0x99f478
// 0049b516  e85d933500           call 0x7f4878
// library openrbx-client/RbxView\PBBMesh.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
