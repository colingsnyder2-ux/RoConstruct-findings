// roc 2010-06 008eea30  unit: Ogre::RbxMeshPartAdapter  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008eea30
//
// 008eea30  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008eea34  83ec0c               sub esp, 0xc
// 008eea37  85c9                 test ecx, ecx
// 008eea39  7712                 ja 0x8eea4d
// 008eea3b  33c9                 xor ecx, ecx
// 008eea3d  c1e105               shl ecx, 5
// 008eea40  51                   push ecx
// 008eea41  e85a8febff           call 0x7a79a0
// 008eea46  83c404               add esp, 4
// 008eea49  83c40c               add esp, 0xc
// 008eea4c  c3                   ret 
// 008eea4d  83c8ff               or eax, 0xffffffff
// 008eea50  33d2                 xor edx, edx
// 008eea52  f7f1                 div ecx
// 008eea54  83f820               cmp eax, 0x20
// 008eea57  73e4                 jae 0x8eea3d
// 008eea59  8d442410             lea eax, [esp + 0x10]
// 008eea5d  50                   push eax
// 008eea5e  8d4c2404             lea ecx, [esp + 4]
// 008eea62  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008eea6a  ff1524a99e00         call dword ptr [0x9ea924]
// 008eea70  68b41ab000           push 0xb01ab4
// 008eea75  8d4c2404             lea ecx, [esp + 4]
// 008eea79  51                   push ecx
// 008eea7a  c74424082000a000     mov dword ptr [esp + 8], 0xa00020
// 008eea82  e82b9febff           call 0x7a89b2
// library openrbx-client/App\v8world\Block.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
