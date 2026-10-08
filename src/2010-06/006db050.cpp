// roc 2010-06 006db050  unit: RBX::VehicleSeat  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006db050
//
// 006db050  8bc1                 mov eax, ecx
// 006db052  8d4c24f8             lea ecx, [esp - 8]
// 006db056  83ec08               sub esp, 8
// 006db059  3bc8                 cmp ecx, eax
// 006db05b  7406                 je 0x6db063
// 006db05d  c70000000000         mov dword ptr [eax], 0
// 006db063  8b4804               mov ecx, dword ptr [eax + 4]
// 006db066  c7400400000000       mov dword ptr [eax + 4], 0
// 006db06d  85c9                 test ecx, ecx
// 006db06f  7416                 je 0x6db087
// 006db071  8d5108               lea edx, [ecx + 8]
// 006db074  83c8ff               or eax, 0xffffffff
// 006db077  f00fc102             lock xadd dword ptr [edx], eax
// 006db07b  750a                 jne 0x6db087
// 006db07d  8b11                 mov edx, dword ptr [ecx]
// 006db07f  8b4208               mov eax, dword ptr [edx + 8]
// 006db082  83c408               add esp, 8
// 006db085  ffe0                 jmp eax
// 006db087  83c408               add esp, 8
// 006db08a  c3                   ret 
// library rbxgs-net/ClientPhysics.cpp (function ?reset@?$weak_ptr@VRunService@RBX@@@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net ClientPhysics.cpp
