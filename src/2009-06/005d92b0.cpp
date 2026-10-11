// roc 2009-06 005d92b0  unit: VAuthoringSettings::?$BoundPropGetSet  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d92b0
//
// 005d92b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d92b4  83ec0c               sub esp, 0xc
// 005d92b7  85c9                 test ecx, ecx
// 005d92b9  7712                 ja 0x5d92cd
// 005d92bb  33c9                 xor ecx, ecx
// 005d92bd  c1e105               shl ecx, 5
// 005d92c0  51                   push ecx
// 005d92c1  e872f71300           call 0x718a38
// 005d92c6  83c404               add esp, 4
// 005d92c9  83c40c               add esp, 0xc
// 005d92cc  c3                   ret 
// 005d92cd  83c8ff               or eax, 0xffffffff
// 005d92d0  33d2                 xor edx, edx
// 005d92d2  f7f1                 div ecx
// 005d92d4  83f820               cmp eax, 0x20
// 005d92d7  73e4                 jae 0x5d92bd
// 005d92d9  8d442410             lea eax, [esp + 0x10]
// 005d92dd  50                   push eax
// 005d92de  8d4c2404             lea ecx, [esp + 4]
// 005d92e2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005d92ea  ff15c4e98900         call dword ptr [0x89e9c4]
// 005d92f0  6888919700           push 0x979188
// 005d92f5  8d4c2404             lea ecx, [esp + 4]
// 005d92f9  51                   push ecx
// 005d92fa  c744240838c98a00     mov dword ptr [esp + 8], 0x8ac938
// 005d9302  e843071400           call 0x719a4a
// library openrbx-client/App\v8world\Block.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
