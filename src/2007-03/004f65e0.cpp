// roc 2007-03 004f65e0  unit: seg_004f0000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f65e0
//
// 004f65e0  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 004f65e3  8b5134               mov edx, dword ptr [ecx + 0x34]
// 004f65e6  56                   push esi
// 004f65e7  8b742408             mov esi, dword ptr [esp + 8]
// 004f65eb  03c6                 add eax, esi
// 004f65ed  3bd0                 cmp edx, eax
// 004f65ef  7c02                 jl 0x4f65f3
// 004f65f1  8bc2                 mov eax, edx
// 004f65f3  3b4138               cmp eax, dword ptr [ecx + 0x38]
// 004f65f6  894134               mov dword ptr [ecx + 0x34], eax
// 004f65f9  7e07                 jle 0x4f6602
// 004f65fb  52                   push edx
// 004f65fc  56                   push esi
// 004f65fd  e88e720000           call 0x4fd890
// 004f6602  5e                   pop esi
// 004f6603  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\BinaryOutput.cpp (function ?reserveBytes@BinaryOutput@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryOutput.cpp
