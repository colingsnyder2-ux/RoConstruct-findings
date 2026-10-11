// roc 2012-06 004cc7a0  unit: std::D::DU?$char_traits::V?$basic_string::V?$_Tset_traits::?$_Tree_nod::PAU_Node::?$STLAllocator  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004cc7a0
//
// 004cc7a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004cc7a4  83ec0c               sub esp, 0xc
// 004cc7a7  85c9                 test ecx, ecx
// 004cc7a9  7712                 ja 0x4cc7bd
// 004cc7ab  33c9                 xor ecx, ecx
// 004cc7ad  c1e105               shl ecx, 5
// 004cc7b0  51                   push ecx
// 004cc7b1  e864594b00           call 0x98211a
// 004cc7b6  83c404               add esp, 4
// 004cc7b9  83c40c               add esp, 0xc
// 004cc7bc  c3                   ret 
// 004cc7bd  83c8ff               or eax, 0xffffffff
// 004cc7c0  33d2                 xor edx, edx
// 004cc7c2  f7f1                 div ecx
// 004cc7c4  83f820               cmp eax, 0x20
// 004cc7c7  73e4                 jae 0x4cc7ad
// 004cc7c9  8d442410             lea eax, [esp + 0x10]
// 004cc7cd  50                   push eax
// 004cc7ce  8d4c2404             lea ecx, [esp + 4]
// 004cc7d2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004cc7da  ff15d029b200         call dword ptr [0xb229d0]
// 004cc7e0  685861cd00           push 0xcd6158
// 004cc7e5  8d4c2404             lea ecx, [esp + 4]
// 004cc7e9  51                   push ecx
// 004cc7ea  c7442408942eb400     mov dword ptr [esp + 8], 0xb42e94
// 004cc7f2  e84d694b00           call 0x983144
// library openrbx-client/App\v8world\Block.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
