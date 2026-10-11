// roc 2012-06 00479080  unit: CRobloxControlMaterialSelector  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00479080
//
// 00479080  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00479084  83ec0c               sub esp, 0xc
// 00479087  85c9                 test ecx, ecx
// 00479089  7716                 ja 0x4790a1
// 0047908b  33c9                 xor ecx, ecx
// 0047908d  8d1449               lea edx, [ecx + ecx*2]
// 00479090  03d2                 add edx, edx
// 00479092  03d2                 add edx, edx
// 00479094  52                   push edx
// 00479095  e880905000           call 0x98211a
// 0047909a  83c404               add esp, 4
// 0047909d  83c40c               add esp, 0xc
// 004790a0  c3                   ret 
// 004790a1  83c8ff               or eax, 0xffffffff
// 004790a4  33d2                 xor edx, edx
// 004790a6  f7f1                 div ecx
// 004790a8  83f80c               cmp eax, 0xc
// 004790ab  73e0                 jae 0x47908d
// 004790ad  8d442410             lea eax, [esp + 0x10]
// 004790b1  50                   push eax
// 004790b2  8d4c2404             lea ecx, [esp + 4]
// 004790b6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004790be  ff15d029b200         call dword ptr [0xb229d0]
// 004790c4  685861cd00           push 0xcd6158
// 004790c9  8d4c2404             lea ecx, [esp + 4]
// 004790cd  51                   push ecx
// 004790ce  c7442408942eb400     mov dword ptr [esp + 8], 0xb42e94
// 004790d6  e869a05000           call 0x983144
// library openrbx-client/App\v8world\SimJobStage.cpp (function ??$_Allocate@U_Node@?$_List_nod@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@std@@@std@@YAPAU_Node@?$_List_nod@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
