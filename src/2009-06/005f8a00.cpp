// roc 2009-06 005f8a00  unit: RBX::Reflection::EnumDescriptor  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f8a00
//
// 005f8a00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f8a04  83ec0c               sub esp, 0xc
// 005f8a07  85c9                 test ecx, ecx
// 005f8a09  7716                 ja 0x5f8a21
// 005f8a0b  33c9                 xor ecx, ecx
// 005f8a0d  8d148d00000000       lea edx, [ecx*4]
// 005f8a14  52                   push edx
// 005f8a15  e81e001200           call 0x718a38
// 005f8a1a  83c404               add esp, 4
// 005f8a1d  83c40c               add esp, 0xc
// 005f8a20  c3                   ret 
// 005f8a21  83c8ff               or eax, 0xffffffff
// 005f8a24  33d2                 xor edx, edx
// 005f8a26  f7f1                 div ecx
// 005f8a28  83f804               cmp eax, 4
// 005f8a2b  73e0                 jae 0x5f8a0d
// 005f8a2d  8d442410             lea eax, [esp + 0x10]
// 005f8a31  50                   push eax
// 005f8a32  8d4c2404             lea ecx, [esp + 4]
// 005f8a36  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005f8a3e  ff15c4e98900         call dword ptr [0x89e9c4]
// 005f8a44  6888919700           push 0x979188
// 005f8a49  8d4c2404             lea ecx, [esp + 4]
// 005f8a4d  51                   push ecx
// 005f8a4e  c744240838c98a00     mov dword ptr [esp + 8], 0x8ac938
// 005f8a56  e8ef0f1200           call 0x719a4a
// library openrbx-client/App\reflection\type.cpp (function ??$_Allocate@V_Aux_cont@std@@@std@@YAPAV_Aux_cont@0@IPAV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/type.cpp
