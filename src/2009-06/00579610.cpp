// roc 2009-06 00579610  unit: G3D::LineSegment  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00579610
//
// 00579610  ff414c               inc dword ptr [ecx + 0x4c]
// 00579613  8b4140               mov eax, dword ptr [ecx + 0x40]
// 00579616  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 00579619  56                   push esi
// 0057961a  8b714c               mov esi, dword ptr [ecx + 0x4c]
// 0057961d  0fafc6               imul eax, esi
// 00579620  4a                   dec edx
// 00579621  5e                   pop esi
// 00579622  85c0                 test eax, eax
// 00579624  7f06                 jg 0x57962c
// 00579626  33c0                 xor eax, eax
// 00579628  894150               mov dword ptr [ecx + 0x50], eax
// 0057962b  c3                   ret 
// 0057962c  3bc2                 cmp eax, edx
// 0057962e  7cf8                 jl 0x579628
// 00579630  895150               mov dword ptr [ecx + 0x50], edx
// 00579633  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?pushIndent@TextOutput@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
