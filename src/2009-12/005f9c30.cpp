// roc 2009-12 005f9c30  unit: G3D::LineSegment  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f9c30
//
// 005f9c30  ff494c               dec dword ptr [ecx + 0x4c]
// 005f9c33  8b4140               mov eax, dword ptr [ecx + 0x40]
// 005f9c36  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 005f9c39  56                   push esi
// 005f9c3a  8b714c               mov esi, dword ptr [ecx + 0x4c]
// 005f9c3d  0fafc6               imul eax, esi
// 005f9c40  4a                   dec edx
// 005f9c41  5e                   pop esi
// 005f9c42  85c0                 test eax, eax
// 005f9c44  7f06                 jg 0x5f9c4c
// 005f9c46  33c0                 xor eax, eax
// 005f9c48  894150               mov dword ptr [ecx + 0x50], eax
// 005f9c4b  c3                   ret 
// 005f9c4c  3bc2                 cmp eax, edx
// 005f9c4e  7cf8                 jl 0x5f9c48
// 005f9c50  895150               mov dword ptr [ecx + 0x50], edx
// 005f9c53  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?popIndent@TextOutput@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
