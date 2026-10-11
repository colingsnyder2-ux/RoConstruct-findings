// roc 2011-06 0094eed0  unit: Ogre::RbxMeshPartAdapter  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0094eed0
//
// 0094eed0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0094eed4  83ec0c               sub esp, 0xc
// 0094eed7  85c9                 test ecx, ecx
// 0094eed9  7712                 ja 0x94eeed
// 0094eedb  33c9                 xor ecx, ecx
// 0094eedd  c1e105               shl ecx, 5
// 0094eee0  51                   push ecx
// 0094eee1  e878b1ebff           call 0x80a05e
// 0094eee6  83c404               add esp, 4
// 0094eee9  83c40c               add esp, 0xc
// 0094eeec  c3                   ret 
// 0094eeed  83c8ff               or eax, 0xffffffff
// 0094eef0  33d2                 xor edx, edx
// 0094eef2  f7f1                 div ecx
// 0094eef4  83f820               cmp eax, 0x20
// 0094eef7  73e4                 jae 0x94eedd
// 0094eef9  8d442410             lea eax, [esp + 0x10]
// 0094eefd  50                   push eax
// 0094eefe  8d4c2404             lea ecx, [esp + 4]
// 0094ef02  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0094ef0a  ff156c0aa400         call dword ptr [0xa40a6c]
// 0094ef10  68c472b800           push 0xb872c4
// 0094ef15  8d4c2404             lea ecx, [esp + 4]
// 0094ef19  51                   push ecx
// 0094ef1a  c7442408b4b5a500     mov dword ptr [esp + 8], 0xa5b5b4
// 0094ef22  e885c1ebff           call 0x80b0ac
// library openrbx-client/App\v8world\Block.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
