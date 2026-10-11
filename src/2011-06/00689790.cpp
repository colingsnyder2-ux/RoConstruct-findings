// roc 2011-06 00689790  unit: RBX::KeyframeSequence  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00689790
//
// 00689790  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00689794  83ec0c               sub esp, 0xc
// 00689797  85c9                 test ecx, ecx
// 00689799  7716                 ja 0x6897b1
// 0068979b  33c9                 xor ecx, ecx
// 0068979d  8d1489               lea edx, [ecx + ecx*4]
// 006897a0  03d2                 add edx, edx
// 006897a2  03d2                 add edx, edx
// 006897a4  52                   push edx
// 006897a5  e8b4081800           call 0x80a05e
// 006897aa  83c404               add esp, 4
// 006897ad  83c40c               add esp, 0xc
// 006897b0  c3                   ret 
// 006897b1  83c8ff               or eax, 0xffffffff
// 006897b4  33d2                 xor edx, edx
// 006897b6  f7f1                 div ecx
// 006897b8  83f814               cmp eax, 0x14
// 006897bb  73e0                 jae 0x68979d
// 006897bd  8d442410             lea eax, [esp + 0x10]
// 006897c1  50                   push eax
// 006897c2  8d4c2404             lea ecx, [esp + 4]
// 006897c6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006897ce  ff156c0aa400         call dword ptr [0xa40a6c]
// 006897d4  68c472b800           push 0xb872c4
// 006897d9  8d4c2404             lea ecx, [esp + 4]
// 006897dd  51                   push ecx
// 006897de  c7442408b4b5a500     mov dword ptr [esp + 8], 0xa5b5b4
// 006897e6  e8c1181800           call 0x80b0ac
// library openrbx-client/App\v8world\AssemblyStage2.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tset_traits@PAVAssembly@RBX@@U?$less@PAVAssembly@RBX@@@std@@V?$allocator@PAVAssembly@RBX@@@4@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVAssembly@RBX@@U?$less@PAVAssembly@RBX@@@std@@V?$allocator@PAVAssembly@RBX@@@4@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/AssemblyStage2.cpp
