// roc 2012-06 008c46d0  unit: RBX::VClickDetector::?$EventDesc  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c46d0
//
// 008c46d0  8bc1                 mov eax, ecx
// 008c46d2  8d4c24f8             lea ecx, [esp - 8]
// 008c46d6  83ec08               sub esp, 8
// 008c46d9  3bc8                 cmp ecx, eax
// 008c46db  7406                 je 0x8c46e3
// 008c46dd  c70000000000         mov dword ptr [eax], 0
// 008c46e3  8b4804               mov ecx, dword ptr [eax + 4]
// 008c46e6  c7400400000000       mov dword ptr [eax + 4], 0
// 008c46ed  85c9                 test ecx, ecx
// 008c46ef  7416                 je 0x8c4707
// 008c46f1  8d5108               lea edx, [ecx + 8]
// 008c46f4  83c8ff               or eax, 0xffffffff
// 008c46f7  f00fc102             lock xadd dword ptr [edx], eax
// 008c46fb  750a                 jne 0x8c4707
// 008c46fd  8b11                 mov edx, dword ptr [ecx]
// 008c46ff  8b4208               mov eax, dword ptr [edx + 8]
// 008c4702  83c408               add esp, 8
// 008c4705  ffe0                 jmp eax
// 008c4707  83c408               add esp, 8
// 008c470a  c3                   ret 
// library rbxgs-net/ClientPhysics.cpp (function ?reset@?$weak_ptr@VRunService@RBX@@@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net ClientPhysics.cpp
