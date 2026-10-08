// roc 2009-06 006a23d0  unit: RBX::VPartInstance::?$SeatImpl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a23d0
//
// 006a23d0  8bc1                 mov eax, ecx
// 006a23d2  8d4c24f8             lea ecx, [esp - 8]
// 006a23d6  83ec08               sub esp, 8
// 006a23d9  3bc8                 cmp ecx, eax
// 006a23db  7406                 je 0x6a23e3
// 006a23dd  c70000000000         mov dword ptr [eax], 0
// 006a23e3  8b4804               mov ecx, dword ptr [eax + 4]
// 006a23e6  c7400400000000       mov dword ptr [eax + 4], 0
// 006a23ed  85c9                 test ecx, ecx
// 006a23ef  7416                 je 0x6a2407
// 006a23f1  8d5108               lea edx, [ecx + 8]
// 006a23f4  83c8ff               or eax, 0xffffffff
// 006a23f7  f00fc102             lock xadd dword ptr [edx], eax
// 006a23fb  750a                 jne 0x6a2407
// 006a23fd  8b11                 mov edx, dword ptr [ecx]
// 006a23ff  8b4208               mov eax, dword ptr [edx + 8]
// 006a2402  83c408               add esp, 8
// 006a2405  ffe0                 jmp eax
// 006a2407  83c408               add esp, 8
// 006a240a  c3                   ret 
// library rbxgs-net/ClientPhysics.cpp (function ?reset@?$weak_ptr@VRunService@RBX@@@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net ClientPhysics.cpp
