// roc 2009-12 00485080  unit: G3D::GCamera  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00485080
//
// 00485080  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00485084  83ec0c               sub esp, 0xc
// 00485087  85c9                 test ecx, ecx
// 00485089  7712                 ja 0x48509d
// 0048508b  33c9                 xor ecx, ecx
// 0048508d  c1e105               shl ecx, 5
// 00485090  51                   push ecx
// 00485091  e8cae73600           call 0x7f3860
// 00485096  83c404               add esp, 4
// 00485099  83c40c               add esp, 0xc
// 0048509c  c3                   ret 
// 0048509d  83c8ff               or eax, 0xffffffff
// 004850a0  33d2                 xor edx, edx
// 004850a2  f7f1                 div ecx
// 004850a4  83f820               cmp eax, 0x20
// 004850a7  73e4                 jae 0x48508d
// 004850a9  8d442410             lea eax, [esp + 0x10]
// 004850ad  50                   push eax
// 004850ae  8d4c2404             lea ecx, [esp + 4]
// 004850b2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004850ba  ff1548b79800         call dword ptr [0x98b748]
// 004850c0  6838efa800           push 0xa8ef38
// 004850c5  8d4c2404             lea ecx, [esp + 4]
// 004850c9  51                   push ecx
// 004850ca  c744240878f49900     mov dword ptr [esp + 8], 0x99f478
// 004850d2  e8a1f73600           call 0x7f4878
// library openrbx-client/App\v8world\Block.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
