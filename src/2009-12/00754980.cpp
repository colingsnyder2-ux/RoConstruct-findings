// roc 2009-12 00754980  unit: RBX::VPartInstance::?$SeatImpl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00754980
//
// 00754980  8bc1                 mov eax, ecx
// 00754982  8d4c24f8             lea ecx, [esp - 8]
// 00754986  83ec08               sub esp, 8
// 00754989  3bc8                 cmp ecx, eax
// 0075498b  7406                 je 0x754993
// 0075498d  c70000000000         mov dword ptr [eax], 0
// 00754993  8b4804               mov ecx, dword ptr [eax + 4]
// 00754996  c7400400000000       mov dword ptr [eax + 4], 0
// 0075499d  85c9                 test ecx, ecx
// 0075499f  7416                 je 0x7549b7
// 007549a1  8d5108               lea edx, [ecx + 8]
// 007549a4  83c8ff               or eax, 0xffffffff
// 007549a7  f00fc102             lock xadd dword ptr [edx], eax
// 007549ab  750a                 jne 0x7549b7
// 007549ad  8b11                 mov edx, dword ptr [ecx]
// 007549af  8b4208               mov eax, dword ptr [edx + 8]
// 007549b2  83c408               add esp, 8
// 007549b5  ffe0                 jmp eax
// 007549b7  83c408               add esp, 8
// 007549ba  c3                   ret 
// library rbxgs-net/ClientPhysics.cpp (function ?reset@?$weak_ptr@VRunService@RBX@@@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net ClientPhysics.cpp
