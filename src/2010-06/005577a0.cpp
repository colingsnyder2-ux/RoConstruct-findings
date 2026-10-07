// roc 2010-06 005577a0  unit: seg_00550000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005577a0
//
// 005577a0  ff414c               inc dword ptr [ecx + 0x4c]
// 005577a3  8b4140               mov eax, dword ptr [ecx + 0x40]
// 005577a6  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 005577a9  56                   push esi
// 005577aa  8b714c               mov esi, dword ptr [ecx + 0x4c]
// 005577ad  0fafc6               imul eax, esi
// 005577b0  4a                   dec edx
// 005577b1  5e                   pop esi
// 005577b2  85c0                 test eax, eax
// 005577b4  7f06                 jg 0x5577bc
// 005577b6  33c0                 xor eax, eax
// 005577b8  894150               mov dword ptr [ecx + 0x50], eax
// 005577bb  c3                   ret 
// 005577bc  3bc2                 cmp eax, edx
// 005577be  7cf8                 jl 0x5577b8
// 005577c0  895150               mov dword ptr [ecx + 0x50], edx
// 005577c3  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?pushIndent@TextOutput@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
