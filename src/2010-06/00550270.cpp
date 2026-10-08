// from server: 100% by auto
// roc 2010-06 00550270  unit: G3D::Log  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00550270
//
// 00550270  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 00550273  8b5134               mov edx, dword ptr [ecx + 0x34]
// 00550276  56                   push esi
// 00550277  8b742408             mov esi, dword ptr [esp + 8]
// 0055027b  03c6                 add eax, esi
// 0055027d  3bd0                 cmp edx, eax
// 0055027f  7c02                 jl 0x550283
// 00550281  8bc2                 mov eax, edx
// 00550283  3b4138               cmp eax, dword ptr [ecx + 0x38]
// 00550286  894134               mov dword ptr [ecx + 0x34], eax
// 00550289  7e07                 jle 0x550292
// 0055028b  52                   push edx
// 0055028c  56                   push esi
// 0055028d  e88e060100           call 0x560920
// 00550292  5e                   pop esi
// 00550293  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?reserveBytes@BinaryOutput@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
