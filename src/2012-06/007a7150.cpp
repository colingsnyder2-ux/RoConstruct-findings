// roc 2012-06 007a7150  unit: RBX::KeyframeSequence  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a7150
//
// 007a7150  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007a7154  83ec0c               sub esp, 0xc
// 007a7157  85c9                 test ecx, ecx
// 007a7159  7716                 ja 0x7a7171
// 007a715b  33c9                 xor ecx, ecx
// 007a715d  8d1489               lea edx, [ecx + ecx*4]
// 007a7160  03d2                 add edx, edx
// 007a7162  03d2                 add edx, edx
// 007a7164  52                   push edx
// 007a7165  e8b0af1d00           call 0x98211a
// 007a716a  83c404               add esp, 4
// 007a716d  83c40c               add esp, 0xc
// 007a7170  c3                   ret 
// 007a7171  83c8ff               or eax, 0xffffffff
// 007a7174  33d2                 xor edx, edx
// 007a7176  f7f1                 div ecx
// 007a7178  83f814               cmp eax, 0x14
// 007a717b  73e0                 jae 0x7a715d
// 007a717d  8d442410             lea eax, [esp + 0x10]
// 007a7181  50                   push eax
// 007a7182  8d4c2404             lea ecx, [esp + 4]
// 007a7186  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007a718e  ff15d029b200         call dword ptr [0xb229d0]
// 007a7194  685861cd00           push 0xcd6158
// 007a7199  8d4c2404             lea ecx, [esp + 4]
// 007a719d  51                   push ecx
// 007a719e  c7442408942eb400     mov dword ptr [esp + 8], 0xb42e94
// 007a71a6  e899bf1d00           call 0x983144
// library openrbx-client/App\v8world\AssemblyStage2.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tset_traits@PAVAssembly@RBX@@U?$less@PAVAssembly@RBX@@@std@@V?$allocator@PAVAssembly@RBX@@@4@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVAssembly@RBX@@U?$less@PAVAssembly@RBX@@@std@@V?$allocator@PAVAssembly@RBX@@@4@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/AssemblyStage2.cpp
