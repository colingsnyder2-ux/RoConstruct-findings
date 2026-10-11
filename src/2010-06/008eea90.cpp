// roc 2010-06 008eea90  unit: Ogre::RbxMeshPartAdapter  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008eea90
//
// 008eea90  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008eea94  83ec0c               sub esp, 0xc
// 008eea97  85c9                 test ecx, ecx
// 008eea99  7716                 ja 0x8eeab1
// 008eea9b  33c9                 xor ecx, ecx
// 008eea9d  8d1449               lea edx, [ecx + ecx*2]
// 008eeaa0  03d2                 add edx, edx
// 008eeaa2  03d2                 add edx, edx
// 008eeaa4  52                   push edx
// 008eeaa5  e8f68eebff           call 0x7a79a0
// 008eeaaa  83c404               add esp, 4
// 008eeaad  83c40c               add esp, 0xc
// 008eeab0  c3                   ret 
// 008eeab1  83c8ff               or eax, 0xffffffff
// 008eeab4  33d2                 xor edx, edx
// 008eeab6  f7f1                 div ecx
// 008eeab8  83f80c               cmp eax, 0xc
// 008eeabb  73e0                 jae 0x8eea9d
// 008eeabd  8d442410             lea eax, [esp + 0x10]
// 008eeac1  50                   push eax
// 008eeac2  8d4c2404             lea ecx, [esp + 4]
// 008eeac6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008eeace  ff1524a99e00         call dword ptr [0x9ea924]
// 008eead4  68b41ab000           push 0xb01ab4
// 008eead9  8d4c2404             lea ecx, [esp + 4]
// 008eeadd  51                   push ecx
// 008eeade  c74424082000a000     mov dword ptr [esp + 8], 0xa00020
// 008eeae6  e8c79eebff           call 0x7a89b2
// library openrbx-client/App\v8world\SimJobStage.cpp (function ??$_Allocate@U_Node@?$_List_nod@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@std@@@std@@YAPAU_Node@?$_List_nod@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
