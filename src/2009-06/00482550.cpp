// roc 2009-06 00482550  unit: Ogre::RbxSpatialHashedSceneNode::?1??_findVisibleObjects::NodeVisiter  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00482550
//
// 00482550  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00482554  83ec0c               sub esp, 0xc
// 00482557  85c9                 test ecx, ecx
// 00482559  7712                 ja 0x48256d
// 0048255b  33c9                 xor ecx, ecx
// 0048255d  c1e104               shl ecx, 4
// 00482560  51                   push ecx
// 00482561  e8d2642900           call 0x718a38
// 00482566  83c404               add esp, 4
// 00482569  83c40c               add esp, 0xc
// 0048256c  c3                   ret 
// 0048256d  83c8ff               or eax, 0xffffffff
// 00482570  33d2                 xor edx, edx
// 00482572  f7f1                 div ecx
// 00482574  83f810               cmp eax, 0x10
// 00482577  73e4                 jae 0x48255d
// 00482579  8d442410             lea eax, [esp + 0x10]
// 0048257d  50                   push eax
// 0048257e  8d4c2404             lea ecx, [esp + 4]
// 00482582  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0048258a  ff15c4e98900         call dword ptr [0x89e9c4]
// 00482590  6888919700           push 0x979188
// 00482595  8d4c2404             lea ecx, [esp + 4]
// 00482599  51                   push ecx
// 0048259a  c744240838c98a00     mov dword ptr [esp + 8], 0x8ac938
// 004825a2  e8a3742900           call 0x719a4a
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??$_Allocate@UIDREFItem@MergeBinder@RBX@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@IPAU123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
