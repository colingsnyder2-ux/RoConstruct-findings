// roc 2010-06 00755770  unit: RBX::Block  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00755770
//
// 00755770  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00755774  83ec0c               sub esp, 0xc
// 00755777  85c9                 test ecx, ecx
// 00755779  7716                 ja 0x755791
// 0075577b  33c9                 xor ecx, ecx
// 0075577d  8d1489               lea edx, [ecx + ecx*4]
// 00755780  03d2                 add edx, edx
// 00755782  03d2                 add edx, edx
// 00755784  52                   push edx
// 00755785  e816220500           call 0x7a79a0
// 0075578a  83c404               add esp, 4
// 0075578d  83c40c               add esp, 0xc
// 00755790  c3                   ret 
// 00755791  83c8ff               or eax, 0xffffffff
// 00755794  33d2                 xor edx, edx
// 00755796  f7f1                 div ecx
// 00755798  83f814               cmp eax, 0x14
// 0075579b  73e0                 jae 0x75577d
// 0075579d  8d442410             lea eax, [esp + 0x10]
// 007557a1  50                   push eax
// 007557a2  8d4c2404             lea ecx, [esp + 4]
// 007557a6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007557ae  ff1524a99e00         call dword ptr [0x9ea924]
// 007557b4  68b41ab000           push 0xb01ab4
// 007557b9  8d4c2404             lea ecx, [esp + 4]
// 007557bd  51                   push ecx
// 007557be  c74424082000a000     mov dword ptr [esp + 8], 0xa00020
// 007557c6  e8e7310500           call 0x7a89b2
// library openrbx-client/App\v8world\AssemblyStage2.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tset_traits@PAVAssembly@RBX@@U?$less@PAVAssembly@RBX@@@std@@V?$allocator@PAVAssembly@RBX@@@4@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVAssembly@RBX@@U?$less@PAVAssembly@RBX@@@std@@V?$allocator@PAVAssembly@RBX@@@4@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/AssemblyStage2.cpp
