// from server: 100% by auto
// roc 2010-06 005577d0  unit: seg_00550000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005577d0
//
// 005577d0  ff494c               dec dword ptr [ecx + 0x4c]
// 005577d3  8b4140               mov eax, dword ptr [ecx + 0x40]
// 005577d6  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 005577d9  56                   push esi
// 005577da  8b714c               mov esi, dword ptr [ecx + 0x4c]
// 005577dd  0fafc6               imul eax, esi
// 005577e0  4a                   dec edx
// 005577e1  5e                   pop esi
// 005577e2  85c0                 test eax, eax
// 005577e4  7f06                 jg 0x5577ec
// 005577e6  33c0                 xor eax, eax
// 005577e8  894150               mov dword ptr [ecx + 0x50], eax
// 005577eb  c3                   ret 
// 005577ec  3bc2                 cmp eax, edx
// 005577ee  7cf8                 jl 0x5577e8
// 005577f0  895150               mov dword ptr [ecx + 0x50], edx
// 005577f3  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?popIndent@TextOutput@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
