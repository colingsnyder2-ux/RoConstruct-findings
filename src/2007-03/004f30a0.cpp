// roc 2007-03 004f30a0  unit: seg_004f0000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f30a0
//
// 004f30a0  53                   push ebx
// 004f30a1  56                   push esi
// 004f30a2  57                   push edi
// 004f30a3  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004f30a7  8b07                 mov eax, dword ptr [edi]
// 004f30a9  8d70ff               lea esi, [eax - 1]
// 004f30ac  8bce                 mov ecx, esi
// 004f30ae  85c9                 test ecx, ecx
// 004f30b0  7c1c                 jl 0x4f30ce
// 004f30b2  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f30b6  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004f30ba  8d44ca04             lea eax, [edx + ecx*8 + 4]
// 004f30be  8bff                 mov edi, edi
// 004f30c0  3918                 cmp dword ptr [eax], ebx
// 004f30c2  7312                 jae 0x4f30d6
// 004f30c4  83e901               sub ecx, 1
// 004f30c7  83e808               sub eax, 8
// 004f30ca  85c9                 test ecx, ecx
// 004f30cc  7df2                 jge 0x4f30c0
// 004f30ce  5f                   pop edi
// 004f30cf  5e                   pop esi
// 004f30d0  33c0                 xor eax, eax
// 004f30d2  5b                   pop ebx
// 004f30d3  c20c00               ret 0xc
// 004f30d6  8b04ca               mov eax, dword ptr [edx + ecx*8]
// 004f30d9  8937                 mov dword ptr [edi], esi
// 004f30db  8b3cf2               mov edi, dword ptr [edx + esi*8]
// 004f30de  893cca               mov dword ptr [edx + ecx*8], edi
// 004f30e1  8b74f204             mov esi, dword ptr [edx + esi*8 + 4]
// 004f30e5  5f                   pop edi
// 004f30e6  8974ca04             mov dword ptr [edx + ecx*8 + 4], esi
// 004f30ea  5e                   pop esi
// 004f30eb  5b                   pop ebx
// 004f30ec  c20c00               ret 0xc
// library rbxgs-g3d/G3Dcpp\System.cpp (function ?malloc@BufferPool@G3D@@AAEPAXPAVMemBlock@12@AAHI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
