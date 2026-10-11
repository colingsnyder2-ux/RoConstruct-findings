// roc 2010-06 007557d0  unit: RBX::Block  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007557d0
//
// 007557d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007557d4  83ec0c               sub esp, 0xc
// 007557d7  85c9                 test ecx, ecx
// 007557d9  7715                 ja 0x7557f0
// 007557db  33c9                 xor ecx, ecx
// 007557dd  8d1449               lea edx, [ecx + ecx*2]
// 007557e0  c1e204               shl edx, 4
// 007557e3  52                   push edx
// 007557e4  e8b7210500           call 0x7a79a0
// 007557e9  83c404               add esp, 4
// 007557ec  83c40c               add esp, 0xc
// 007557ef  c3                   ret 
// 007557f0  83c8ff               or eax, 0xffffffff
// 007557f3  33d2                 xor edx, edx
// 007557f5  f7f1                 div ecx
// 007557f7  83f830               cmp eax, 0x30
// 007557fa  73e1                 jae 0x7557dd
// 007557fc  8d442410             lea eax, [esp + 0x10]
// 00755800  50                   push eax
// 00755801  8d4c2404             lea ecx, [esp + 4]
// 00755805  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0075580d  ff1524a99e00         call dword ptr [0x9ea924]
// 00755813  68b41ab000           push 0xb01ab4
// 00755818  8d4c2404             lea ecx, [esp + 4]
// 0075581c  51                   push ecx
// 0075581d  c74424082000a000     mov dword ptr [esp + 8], 0xa00020
// 00755825  e888310500           call 0x7a89b2
// library openrbx-client/App\util\Name.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp
