// from server: 100% by auto
// roc 2009-06 0056d260  unit: G3D::Log  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056d260
//
// 0056d260  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0056d263  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0056d266  56                   push esi
// 0056d267  8b742408             mov esi, dword ptr [esp + 8]
// 0056d26b  03c6                 add eax, esi
// 0056d26d  3bd0                 cmp edx, eax
// 0056d26f  7c02                 jl 0x56d273
// 0056d271  8bc2                 mov eax, edx
// 0056d273  3b4138               cmp eax, dword ptr [ecx + 0x38]
// 0056d276  894134               mov dword ptr [ecx + 0x34], eax
// 0056d279  7e07                 jle 0x56d282
// 0056d27b  52                   push edx
// 0056d27c  56                   push esi
// 0056d27d  e84eff0000           call 0x57d1d0
// 0056d282  5e                   pop esi
// 0056d283  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?reserveBytes@BinaryOutput@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
