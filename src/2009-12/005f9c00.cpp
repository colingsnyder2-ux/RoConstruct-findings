// roc 2009-12 005f9c00  unit: G3D::LineSegment  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f9c00
//
// 005f9c00  ff414c               inc dword ptr [ecx + 0x4c]
// 005f9c03  8b4140               mov eax, dword ptr [ecx + 0x40]
// 005f9c06  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 005f9c09  56                   push esi
// 005f9c0a  8b714c               mov esi, dword ptr [ecx + 0x4c]
// 005f9c0d  0fafc6               imul eax, esi
// 005f9c10  4a                   dec edx
// 005f9c11  5e                   pop esi
// 005f9c12  85c0                 test eax, eax
// 005f9c14  7f06                 jg 0x5f9c1c
// 005f9c16  33c0                 xor eax, eax
// 005f9c18  894150               mov dword ptr [ecx + 0x50], eax
// 005f9c1b  c3                   ret 
// 005f9c1c  3bc2                 cmp eax, edx
// 005f9c1e  7cf8                 jl 0x5f9c18
// 005f9c20  895150               mov dword ptr [ecx + 0x50], edx
// 005f9c23  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?pushIndent@TextOutput@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
