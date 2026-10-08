// roc 2011-06 0060b670  unit: RBX::ModelInstance  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0060b670
//
// 0060b670  8bc1                 mov eax, ecx
// 0060b672  8d4c24f8             lea ecx, [esp - 8]
// 0060b676  83ec08               sub esp, 8
// 0060b679  3bc8                 cmp ecx, eax
// 0060b67b  7406                 je 0x60b683
// 0060b67d  c70000000000         mov dword ptr [eax], 0
// 0060b683  8b4804               mov ecx, dword ptr [eax + 4]
// 0060b686  c7400400000000       mov dword ptr [eax + 4], 0
// 0060b68d  85c9                 test ecx, ecx
// 0060b68f  7416                 je 0x60b6a7
// 0060b691  8d5108               lea edx, [ecx + 8]
// 0060b694  83c8ff               or eax, 0xffffffff
// 0060b697  f00fc102             lock xadd dword ptr [edx], eax
// 0060b69b  750a                 jne 0x60b6a7
// 0060b69d  8b11                 mov edx, dword ptr [ecx]
// 0060b69f  8b4208               mov eax, dword ptr [edx + 8]
// 0060b6a2  83c408               add esp, 8
// 0060b6a5  ffe0                 jmp eax
// 0060b6a7  83c408               add esp, 8
// 0060b6aa  c3                   ret 
// library rbxgs-net/ClientPhysics.cpp (function ?reset@?$weak_ptr@VRunService@RBX@@@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net ClientPhysics.cpp
