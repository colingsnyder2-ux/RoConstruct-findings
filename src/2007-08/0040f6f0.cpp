// roc 2007-08 0040f6f0  unit: CopyVerb  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040f6f0
//
// 0040f6f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040f6f4  83ec0c               sub esp, 0xc
// 0040f6f7  85c9                 test ecx, ecx
// 0040f6f9  7716                 ja 0x40f711
// 0040f6fb  33c9                 xor ecx, ecx
// 0040f6fd  8d14c9               lea edx, [ecx + ecx*8]
// 0040f700  03d2                 add edx, edx
// 0040f702  03d2                 add edx, edx
// 0040f704  52                   push edx
// 0040f705  e8ec072200           call 0x62fef6
// 0040f70a  83c404               add esp, 4
// 0040f70d  83c40c               add esp, 0xc
// 0040f710  c3                   ret 
// 0040f711  83c8ff               or eax, 0xffffffff
// 0040f714  33d2                 xor edx, edx
// 0040f716  f7f1                 div ecx
// 0040f718  83f824               cmp eax, 0x24
// 0040f71b  73e0                 jae 0x40f6fd
// 0040f71d  8d442410             lea eax, [esp + 0x10]
// 0040f721  50                   push eax
// 0040f722  8d4c2404             lea ecx, [esp + 4]
// 0040f726  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0040f72e  ff15ece67700         call dword ptr [0x77e6ec]
// 0040f734  687cf18300           push 0x83f17c
// 0040f739  8d4c2404             lea ecx, [esp + 4]
// 0040f73d  51                   push ecx
// 0040f73e  c7442408544e7800     mov dword ptr [esp + 8], 0x784e54
// 0040f746  e853142200           call 0x630b9e
// library openrbx-client/RbxView\PBBMesh.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
