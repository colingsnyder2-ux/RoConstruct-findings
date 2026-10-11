// roc 2012-06 004f3d70  unit: Ogre::RbxMeshPartAdapter  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004f3d70
//
// 004f3d70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f3d74  83ec0c               sub esp, 0xc
// 004f3d77  85c9                 test ecx, ecx
// 004f3d79  7715                 ja 0x4f3d90
// 004f3d7b  33c9                 xor ecx, ecx
// 004f3d7d  8d1449               lea edx, [ecx + ecx*2]
// 004f3d80  c1e204               shl edx, 4
// 004f3d83  52                   push edx
// 004f3d84  e891e34800           call 0x98211a
// 004f3d89  83c404               add esp, 4
// 004f3d8c  83c40c               add esp, 0xc
// 004f3d8f  c3                   ret 
// 004f3d90  83c8ff               or eax, 0xffffffff
// 004f3d93  33d2                 xor edx, edx
// 004f3d95  f7f1                 div ecx
// 004f3d97  83f830               cmp eax, 0x30
// 004f3d9a  73e1                 jae 0x4f3d7d
// 004f3d9c  8d442410             lea eax, [esp + 0x10]
// 004f3da0  50                   push eax
// 004f3da1  8d4c2404             lea ecx, [esp + 4]
// 004f3da5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004f3dad  ff15d029b200         call dword ptr [0xb229d0]
// 004f3db3  685861cd00           push 0xcd6158
// 004f3db8  8d4c2404             lea ecx, [esp + 4]
// 004f3dbc  51                   push ecx
// 004f3dbd  c7442408942eb400     mov dword ptr [esp + 8], 0xb42e94
// 004f3dc5  e87af34800           call 0x983144
// library openrbx-client/App\util\Name.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp
