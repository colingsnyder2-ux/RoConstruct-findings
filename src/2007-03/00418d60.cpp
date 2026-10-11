// roc 2007-03 00418d60  unit: seg_00410000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00418d60
//
// 00418d60  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00418d64  83ec0c               sub esp, 0xc
// 00418d67  85c9                 test ecx, ecx
// 00418d69  7716                 ja 0x418d81
// 00418d6b  33c9                 xor ecx, ecx
// 00418d6d  8d148d00000000       lea edx, [ecx*4]
// 00418d74  52                   push edx
// 00418d75  e88e532000           call 0x61e108
// 00418d7a  83c404               add esp, 4
// 00418d7d  83c40c               add esp, 0xc
// 00418d80  c3                   ret 
// 00418d81  83c8ff               or eax, 0xffffffff
// 00418d84  33d2                 xor edx, edx
// 00418d86  f7f1                 div ecx
// 00418d88  83f804               cmp eax, 4
// 00418d8b  73e0                 jae 0x418d6d
// 00418d8d  8d442410             lea eax, [esp + 0x10]
// 00418d91  50                   push eax
// 00418d92  8d4c2404             lea ecx, [esp + 4]
// 00418d96  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00418d9e  ff1554e97700         call dword ptr [0x77e954]
// 00418da4  68e0f18300           push 0x83f1e0
// 00418da9  8d4c2404             lea ecx, [esp + 4]
// 00418dad  51                   push ecx
// 00418dae  c74424082c3e7800     mov dword ptr [esp + 8], 0x783e2c
// 00418db6  e873622000           call 0x61f02e
// library openrbx-client/App\reflection\type.cpp (function ??$_Allocate@V_Aux_cont@std@@@std@@YAPAV_Aux_cont@0@IPAV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/type.cpp
