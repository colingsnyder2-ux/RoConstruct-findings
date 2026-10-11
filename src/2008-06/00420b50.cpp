// roc 2008-06 00420b50  unit: CInstanceRecord::CNameItem  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420b50
//
// 00420b50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00420b54  83ec0c               sub esp, 0xc
// 00420b57  85c9                 test ecx, ecx
// 00420b59  7716                 ja 0x420b71
// 00420b5b  33c9                 xor ecx, ecx
// 00420b5d  8d148d00000000       lea edx, [ecx*4]
// 00420b64  52                   push edx
// 00420b65  e8b6fd2700           call 0x6a0920
// 00420b6a  83c404               add esp, 4
// 00420b6d  83c40c               add esp, 0xc
// 00420b70  c3                   ret 
// 00420b71  83c8ff               or eax, 0xffffffff
// 00420b74  33d2                 xor edx, edx
// 00420b76  f7f1                 div ecx
// 00420b78  83f804               cmp eax, 4
// 00420b7b  73e0                 jae 0x420b5d
// 00420b7d  8d442410             lea eax, [esp + 0x10]
// 00420b81  50                   push eax
// 00420b82  8d4c2404             lea ecx, [esp + 4]
// 00420b86  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00420b8e  ff15a4288000         call dword ptr [0x8028a4]
// 00420b94  68d8078d00           push 0x8d07d8
// 00420b99  8d4c2404             lea ecx, [esp + 4]
// 00420b9d  51                   push ecx
// 00420b9e  c744240804b18000     mov dword ptr [esp + 8], 0x80b104
// 00420ba6  e8e1092800           call 0x6a158c
// library openrbx-client/App\reflection\type.cpp (function ??$_Allocate@V_Aux_cont@std@@@std@@YAPAV_Aux_cont@0@IPAV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/type.cpp
