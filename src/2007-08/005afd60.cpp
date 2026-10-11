// roc 2007-08 005afd60  unit: RBX::AssemblyStage  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005afd60
//
// 005afd60  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005afd64  83ec0c               sub esp, 0xc
// 005afd67  85c9                 test ecx, ecx
// 005afd69  7716                 ja 0x5afd81
// 005afd6b  33c9                 xor ecx, ecx
// 005afd6d  8d148d00000000       lea edx, [ecx*4]
// 005afd74  52                   push edx
// 005afd75  e87c010800           call 0x62fef6
// 005afd7a  83c404               add esp, 4
// 005afd7d  83c40c               add esp, 0xc
// 005afd80  c3                   ret 
// 005afd81  83c8ff               or eax, 0xffffffff
// 005afd84  33d2                 xor edx, edx
// 005afd86  f7f1                 div ecx
// 005afd88  83f804               cmp eax, 4
// 005afd8b  73e0                 jae 0x5afd6d
// 005afd8d  8d442410             lea eax, [esp + 0x10]
// 005afd91  50                   push eax
// 005afd92  8d4c2404             lea ecx, [esp + 4]
// 005afd96  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005afd9e  ff15ece67700         call dword ptr [0x77e6ec]
// 005afda4  687cf18300           push 0x83f17c
// 005afda9  8d4c2404             lea ecx, [esp + 4]
// 005afdad  51                   push ecx
// 005afdae  c7442408544e7800     mov dword ptr [esp + 8], 0x784e54
// 005afdb6  e8e30d0800           call 0x630b9e
// library openrbx-client/App\reflection\type.cpp (function ??$_Allocate@V_Aux_cont@std@@@std@@YAPAV_Aux_cont@0@IPAV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/type.cpp
