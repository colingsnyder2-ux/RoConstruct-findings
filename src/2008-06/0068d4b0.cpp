// roc 2008-06 0068d4b0  unit: Ogre::VShadowCameraSetup::?$SharedPtr  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068d4b0
//
// 0068d4b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0068d4b4  83ec0c               sub esp, 0xc
// 0068d4b7  85c9                 test ecx, ecx
// 0068d4b9  7716                 ja 0x68d4d1
// 0068d4bb  33c9                 xor ecx, ecx
// 0068d4bd  8d1449               lea edx, [ecx + ecx*2]
// 0068d4c0  03d2                 add edx, edx
// 0068d4c2  03d2                 add edx, edx
// 0068d4c4  52                   push edx
// 0068d4c5  e856340100           call 0x6a0920
// 0068d4ca  83c404               add esp, 4
// 0068d4cd  83c40c               add esp, 0xc
// 0068d4d0  c3                   ret 
// 0068d4d1  83c8ff               or eax, 0xffffffff
// 0068d4d4  33d2                 xor edx, edx
// 0068d4d6  f7f1                 div ecx
// 0068d4d8  83f80c               cmp eax, 0xc
// 0068d4db  73e0                 jae 0x68d4bd
// 0068d4dd  8d442410             lea eax, [esp + 0x10]
// 0068d4e1  50                   push eax
// 0068d4e2  8d4c2404             lea ecx, [esp + 4]
// 0068d4e6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0068d4ee  ff15a4288000         call dword ptr [0x8028a4]
// 0068d4f4  68d8078d00           push 0x8d07d8
// 0068d4f9  8d4c2404             lea ecx, [esp + 4]
// 0068d4fd  51                   push ecx
// 0068d4fe  c744240804b18000     mov dword ptr [esp + 8], 0x80b104
// 0068d506  e881400100           call 0x6a158c
// library openrbx-client/App\v8world\SimJobStage.cpp (function ??$_Allocate@U_Node@?$_List_nod@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@std@@@std@@YAPAU_Node@?$_List_nod@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
