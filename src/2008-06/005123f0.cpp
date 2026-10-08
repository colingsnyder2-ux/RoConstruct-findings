// from server: 100% by auto
// roc 2008-06 005123f0  unit: G3D::GCamera  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005123f0
//
// 005123f0  ff494c               dec dword ptr [ecx + 0x4c]
// 005123f3  8b4140               mov eax, dword ptr [ecx + 0x40]
// 005123f6  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 005123f9  56                   push esi
// 005123fa  8b714c               mov esi, dword ptr [ecx + 0x4c]
// 005123fd  0fafc6               imul eax, esi
// 00512400  4a                   dec edx
// 00512401  5e                   pop esi
// 00512402  85c0                 test eax, eax
// 00512404  7f06                 jg 0x51240c
// 00512406  33c0                 xor eax, eax
// 00512408  894150               mov dword ptr [ecx + 0x50], eax
// 0051240b  c3                   ret 
// 0051240c  3bc2                 cmp eax, edx
// 0051240e  7cf8                 jl 0x512408
// 00512410  895150               mov dword ptr [ecx + 0x50], edx
// 00512413  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?popIndent@TextOutput@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
