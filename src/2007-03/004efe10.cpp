// roc 2007-03 004efe10  unit: seg_004e0000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004efe10
//
// 004efe10  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004efe14  83ec0c               sub esp, 0xc
// 004efe17  85c9                 test ecx, ecx
// 004efe19  7712                 ja 0x4efe2d
// 004efe1b  33c9                 xor ecx, ecx
// 004efe1d  c1e105               shl ecx, 5
// 004efe20  51                   push ecx
// 004efe21  e8e2e21200           call 0x61e108
// 004efe26  83c404               add esp, 4
// 004efe29  83c40c               add esp, 0xc
// 004efe2c  c3                   ret 
// 004efe2d  83c8ff               or eax, 0xffffffff
// 004efe30  33d2                 xor edx, edx
// 004efe32  f7f1                 div ecx
// 004efe34  83f820               cmp eax, 0x20
// 004efe37  73e4                 jae 0x4efe1d
// 004efe39  8d442410             lea eax, [esp + 0x10]
// 004efe3d  50                   push eax
// 004efe3e  8d4c2404             lea ecx, [esp + 4]
// 004efe42  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004efe4a  ff1554e97700         call dword ptr [0x77e954]
// 004efe50  68e0f18300           push 0x83f1e0
// 004efe55  8d4c2404             lea ecx, [esp + 4]
// 004efe59  51                   push ecx
// 004efe5a  c74424082c3e7800     mov dword ptr [esp + 8], 0x783e2c
// 004efe62  e8c7f11200           call 0x61f02e
// library openrbx-client/App\v8world\Block.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
