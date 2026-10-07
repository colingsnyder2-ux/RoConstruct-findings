// roc 2009-06 00579640  unit: G3D::LineSegment  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00579640
//
// 00579640  ff494c               dec dword ptr [ecx + 0x4c]
// 00579643  8b4140               mov eax, dword ptr [ecx + 0x40]
// 00579646  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 00579649  56                   push esi
// 0057964a  8b714c               mov esi, dword ptr [ecx + 0x4c]
// 0057964d  0fafc6               imul eax, esi
// 00579650  4a                   dec edx
// 00579651  5e                   pop esi
// 00579652  85c0                 test eax, eax
// 00579654  7f06                 jg 0x57965c
// 00579656  33c0                 xor eax, eax
// 00579658  894150               mov dword ptr [ecx + 0x50], eax
// 0057965b  c3                   ret 
// 0057965c  3bc2                 cmp eax, edx
// 0057965e  7cf8                 jl 0x579658
// 00579660  895150               mov dword ptr [ecx + 0x50], edx
// 00579663  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?popIndent@TextOutput@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
