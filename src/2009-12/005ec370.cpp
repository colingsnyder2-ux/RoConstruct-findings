// roc 2009-12 005ec370  unit: G3D::Log  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ec370
//
// 005ec370  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 005ec373  8b5134               mov edx, dword ptr [ecx + 0x34]
// 005ec376  56                   push esi
// 005ec377  8b742408             mov esi, dword ptr [esp + 8]
// 005ec37b  03c6                 add eax, esi
// 005ec37d  3bd0                 cmp edx, eax
// 005ec37f  7c02                 jl 0x5ec383
// 005ec381  8bc2                 mov eax, edx
// 005ec383  3b4138               cmp eax, dword ptr [ecx + 0x38]
// 005ec386  894134               mov dword ptr [ecx + 0x34], eax
// 005ec389  7e07                 jle 0x5ec392
// 005ec38b  52                   push edx
// 005ec38c  56                   push esi
// 005ec38d  e81e2c0100           call 0x5fefb0
// 005ec392  5e                   pop esi
// 005ec393  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?reserveBytes@BinaryOutput@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
