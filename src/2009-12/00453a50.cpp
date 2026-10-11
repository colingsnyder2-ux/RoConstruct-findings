// roc 2009-12 00453a50  unit: CRobloxControlMaterialSelector  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00453a50
//
// 00453a50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00453a54  83ec0c               sub esp, 0xc
// 00453a57  85c9                 test ecx, ecx
// 00453a59  7716                 ja 0x453a71
// 00453a5b  33c9                 xor ecx, ecx
// 00453a5d  8d1449               lea edx, [ecx + ecx*2]
// 00453a60  03d2                 add edx, edx
// 00453a62  03d2                 add edx, edx
// 00453a64  52                   push edx
// 00453a65  e8f6fd3900           call 0x7f3860
// 00453a6a  83c404               add esp, 4
// 00453a6d  83c40c               add esp, 0xc
// 00453a70  c3                   ret 
// 00453a71  83c8ff               or eax, 0xffffffff
// 00453a74  33d2                 xor edx, edx
// 00453a76  f7f1                 div ecx
// 00453a78  83f80c               cmp eax, 0xc
// 00453a7b  73e0                 jae 0x453a5d
// 00453a7d  8d442410             lea eax, [esp + 0x10]
// 00453a81  50                   push eax
// 00453a82  8d4c2404             lea ecx, [esp + 4]
// 00453a86  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00453a8e  ff1548b79800         call dword ptr [0x98b748]
// 00453a94  6838efa800           push 0xa8ef38
// 00453a99  8d4c2404             lea ecx, [esp + 4]
// 00453a9d  51                   push ecx
// 00453a9e  c744240878f49900     mov dword ptr [esp + 8], 0x99f478
// 00453aa6  e8cd0d3a00           call 0x7f4878
// library openrbx-client/App\v8world\SimJobStage.cpp (function ??$_Allocate@U_Node@?$_List_nod@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@std@@@std@@YAPAU_Node@?$_List_nod@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
