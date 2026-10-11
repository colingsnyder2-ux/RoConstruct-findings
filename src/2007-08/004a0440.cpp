// roc 2007-08 004a0440  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a0440
//
// 004a0440  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a0444  83ec0c               sub esp, 0xc
// 004a0447  85c9                 test ecx, ecx
// 004a0449  7716                 ja 0x4a0461
// 004a044b  33c9                 xor ecx, ecx
// 004a044d  8d1449               lea edx, [ecx + ecx*2]
// 004a0450  03d2                 add edx, edx
// 004a0452  03d2                 add edx, edx
// 004a0454  52                   push edx
// 004a0455  e89cfa1800           call 0x62fef6
// 004a045a  83c404               add esp, 4
// 004a045d  83c40c               add esp, 0xc
// 004a0460  c3                   ret 
// 004a0461  83c8ff               or eax, 0xffffffff
// 004a0464  33d2                 xor edx, edx
// 004a0466  f7f1                 div ecx
// 004a0468  83f80c               cmp eax, 0xc
// 004a046b  73e0                 jae 0x4a044d
// 004a046d  8d442410             lea eax, [esp + 0x10]
// 004a0471  50                   push eax
// 004a0472  8d4c2404             lea ecx, [esp + 4]
// 004a0476  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004a047e  ff15ece67700         call dword ptr [0x77e6ec]
// 004a0484  687cf18300           push 0x83f17c
// 004a0489  8d4c2404             lea ecx, [esp + 4]
// 004a048d  51                   push ecx
// 004a048e  c7442408544e7800     mov dword ptr [esp + 8], 0x784e54
// 004a0496  e803071900           call 0x630b9e
// library openrbx-client/App\v8world\SimJobStage.cpp (function ??$_Allocate@U_Node@?$_List_nod@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@std@@@std@@YAPAU_Node@?$_List_nod@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8world/SimJobStage.cpp
