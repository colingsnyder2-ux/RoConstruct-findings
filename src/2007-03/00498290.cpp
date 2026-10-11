// roc 2007-03 00498290  unit: seg_00490000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00498290
//
// 00498290  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00498294  83ec0c               sub esp, 0xc
// 00498297  85c9                 test ecx, ecx
// 00498299  7716                 ja 0x4982b1
// 0049829b  33c9                 xor ecx, ecx
// 0049829d  8d1449               lea edx, [ecx + ecx*2]
// 004982a0  03d2                 add edx, edx
// 004982a2  03d2                 add edx, edx
// 004982a4  52                   push edx
// 004982a5  e85e5e1800           call 0x61e108
// 004982aa  83c404               add esp, 4
// 004982ad  83c40c               add esp, 0xc
// 004982b0  c3                   ret 
// 004982b1  83c8ff               or eax, 0xffffffff
// 004982b4  33d2                 xor edx, edx
// 004982b6  f7f1                 div ecx
// 004982b8  83f80c               cmp eax, 0xc
// 004982bb  73e0                 jae 0x49829d
// 004982bd  8d442410             lea eax, [esp + 0x10]
// 004982c1  50                   push eax
// 004982c2  8d4c2404             lea ecx, [esp + 4]
// 004982c6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004982ce  ff1554e97700         call dword ptr [0x77e954]
// 004982d4  68e0f18300           push 0x83f1e0
// 004982d9  8d4c2404             lea ecx, [esp + 4]
// 004982dd  51                   push ecx
// 004982de  c74424082c3e7800     mov dword ptr [esp + 8], 0x783e2c
// 004982e6  e8436d1800           call 0x61f02e
// library openrbx-client/App\v8world\SimJobStage.cpp (function ??$_Allocate@U_Node@?$_List_nod@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@std@@@std@@YAPAU_Node@?$_List_nod@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8world/SimJobStage.cpp
