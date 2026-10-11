// roc 2009-06 0047af50  unit: Ogre::VRootManager::?$sp_counted_impl_p  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0047af50
//
// 0047af50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047af54  83ec0c               sub esp, 0xc
// 0047af57  85c9                 test ecx, ecx
// 0047af59  7716                 ja 0x47af71
// 0047af5b  33c9                 xor ecx, ecx
// 0047af5d  8d1449               lea edx, [ecx + ecx*2]
// 0047af60  03d2                 add edx, edx
// 0047af62  03d2                 add edx, edx
// 0047af64  52                   push edx
// 0047af65  e8ceda2900           call 0x718a38
// 0047af6a  83c404               add esp, 4
// 0047af6d  83c40c               add esp, 0xc
// 0047af70  c3                   ret 
// 0047af71  83c8ff               or eax, 0xffffffff
// 0047af74  33d2                 xor edx, edx
// 0047af76  f7f1                 div ecx
// 0047af78  83f80c               cmp eax, 0xc
// 0047af7b  73e0                 jae 0x47af5d
// 0047af7d  8d442410             lea eax, [esp + 0x10]
// 0047af81  50                   push eax
// 0047af82  8d4c2404             lea ecx, [esp + 4]
// 0047af86  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0047af8e  ff15c4e98900         call dword ptr [0x89e9c4]
// 0047af94  6888919700           push 0x979188
// 0047af99  8d4c2404             lea ecx, [esp + 4]
// 0047af9d  51                   push ecx
// 0047af9e  c744240838c98a00     mov dword ptr [esp + 8], 0x8ac938
// 0047afa6  e89fea2900           call 0x719a4a
// library openrbx-client/App\v8world\SimJobStage.cpp (function ??$_Allocate@U_Node@?$_List_nod@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@std@@@std@@YAPAU_Node@?$_List_nod@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
