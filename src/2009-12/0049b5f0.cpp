// roc 2009-12 0049b5f0  unit: Ogre::RbxMeshPartAdapter  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049b5f0
//
// 0049b5f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049b5f4  83ec0c               sub esp, 0xc
// 0049b5f7  85c9                 test ecx, ecx
// 0049b5f9  7715                 ja 0x49b610
// 0049b5fb  33c9                 xor ecx, ecx
// 0049b5fd  8d1449               lea edx, [ecx + ecx*2]
// 0049b600  c1e204               shl edx, 4
// 0049b603  52                   push edx
// 0049b604  e857823500           call 0x7f3860
// 0049b609  83c404               add esp, 4
// 0049b60c  83c40c               add esp, 0xc
// 0049b60f  c3                   ret 
// 0049b610  83c8ff               or eax, 0xffffffff
// 0049b613  33d2                 xor edx, edx
// 0049b615  f7f1                 div ecx
// 0049b617  83f830               cmp eax, 0x30
// 0049b61a  73e1                 jae 0x49b5fd
// 0049b61c  8d442410             lea eax, [esp + 0x10]
// 0049b620  50                   push eax
// 0049b621  8d4c2404             lea ecx, [esp + 4]
// 0049b625  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0049b62d  ff1548b79800         call dword ptr [0x98b748]
// 0049b633  6838efa800           push 0xa8ef38
// 0049b638  8d4c2404             lea ecx, [esp + 4]
// 0049b63c  51                   push ecx
// 0049b63d  c744240878f49900     mov dword ptr [esp + 8], 0x99f478
// 0049b645  e82e923500           call 0x7f4878
// library openrbx-client/App\util\Name.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp
