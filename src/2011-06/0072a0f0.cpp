// roc 2011-06 0072a0f0  unit: RBX::HandlesBase  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0072a0f0
//
// 0072a0f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0072a0f4  83ec0c               sub esp, 0xc
// 0072a0f7  85c9                 test ecx, ecx
// 0072a0f9  7716                 ja 0x72a111
// 0072a0fb  33c9                 xor ecx, ecx
// 0072a0fd  8d1449               lea edx, [ecx + ecx*2]
// 0072a100  03d2                 add edx, edx
// 0072a102  03d2                 add edx, edx
// 0072a104  52                   push edx
// 0072a105  e854ff0d00           call 0x80a05e
// 0072a10a  83c404               add esp, 4
// 0072a10d  83c40c               add esp, 0xc
// 0072a110  c3                   ret 
// 0072a111  83c8ff               or eax, 0xffffffff
// 0072a114  33d2                 xor edx, edx
// 0072a116  f7f1                 div ecx
// 0072a118  83f80c               cmp eax, 0xc
// 0072a11b  73e0                 jae 0x72a0fd
// 0072a11d  8d442410             lea eax, [esp + 0x10]
// 0072a121  50                   push eax
// 0072a122  8d4c2404             lea ecx, [esp + 4]
// 0072a126  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0072a12e  ff156c0aa400         call dword ptr [0xa40a6c]
// 0072a134  68c472b800           push 0xb872c4
// 0072a139  8d4c2404             lea ecx, [esp + 4]
// 0072a13d  51                   push ecx
// 0072a13e  c7442408b4b5a500     mov dword ptr [esp + 8], 0xa5b5b4
// 0072a146  e8610f0e00           call 0x80b0ac
// library openrbx-client/App\v8world\SimJobStage.cpp (function ??$_Allocate@U_Node@?$_List_nod@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@std@@@std@@YAPAU_Node@?$_List_nod@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
