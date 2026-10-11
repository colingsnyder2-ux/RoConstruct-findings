// roc 2007-03 00410790  unit: seg_00410000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00410790
//
// 00410790  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00410794  83ec0c               sub esp, 0xc
// 00410797  85c9                 test ecx, ecx
// 00410799  7716                 ja 0x4107b1
// 0041079b  33c9                 xor ecx, ecx
// 0041079d  8d14c9               lea edx, [ecx + ecx*8]
// 004107a0  03d2                 add edx, edx
// 004107a2  03d2                 add edx, edx
// 004107a4  52                   push edx
// 004107a5  e85ed92000           call 0x61e108
// 004107aa  83c404               add esp, 4
// 004107ad  83c40c               add esp, 0xc
// 004107b0  c3                   ret 
// 004107b1  83c8ff               or eax, 0xffffffff
// 004107b4  33d2                 xor edx, edx
// 004107b6  f7f1                 div ecx
// 004107b8  83f824               cmp eax, 0x24
// 004107bb  73e0                 jae 0x41079d
// 004107bd  8d442410             lea eax, [esp + 0x10]
// 004107c1  50                   push eax
// 004107c2  8d4c2404             lea ecx, [esp + 4]
// 004107c6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004107ce  ff1554e97700         call dword ptr [0x77e954]
// 004107d4  68e0f18300           push 0x83f1e0
// 004107d9  8d4c2404             lea ecx, [esp + 4]
// 004107dd  51                   push ecx
// 004107de  c74424082c3e7800     mov dword ptr [esp + 8], 0x783e2c
// 004107e6  e843e82000           call 0x61f02e
// library openrbx-client/RbxView\PBBMesh.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
