// roc 2011-06 0094ed50  unit: Ogre::RbxMeshPartAdapter  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0094ed50
//
// 0094ed50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0094ed54  83ec0c               sub esp, 0xc
// 0094ed57  85c9                 test ecx, ecx
// 0094ed59  7715                 ja 0x94ed70
// 0094ed5b  33c9                 xor ecx, ecx
// 0094ed5d  8d1449               lea edx, [ecx + ecx*2]
// 0094ed60  c1e204               shl edx, 4
// 0094ed63  52                   push edx
// 0094ed64  e8f5b2ebff           call 0x80a05e
// 0094ed69  83c404               add esp, 4
// 0094ed6c  83c40c               add esp, 0xc
// 0094ed6f  c3                   ret 
// 0094ed70  83c8ff               or eax, 0xffffffff
// 0094ed73  33d2                 xor edx, edx
// 0094ed75  f7f1                 div ecx
// 0094ed77  83f830               cmp eax, 0x30
// 0094ed7a  73e1                 jae 0x94ed5d
// 0094ed7c  8d442410             lea eax, [esp + 0x10]
// 0094ed80  50                   push eax
// 0094ed81  8d4c2404             lea ecx, [esp + 4]
// 0094ed85  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0094ed8d  ff156c0aa400         call dword ptr [0xa40a6c]
// 0094ed93  68c472b800           push 0xb872c4
// 0094ed98  8d4c2404             lea ecx, [esp + 4]
// 0094ed9c  51                   push ecx
// 0094ed9d  c7442408b4b5a500     mov dword ptr [esp + 8], 0xa5b5b4
// 0094eda5  e802c3ebff           call 0x80b0ac
// library openrbx-client/App\util\Name.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
