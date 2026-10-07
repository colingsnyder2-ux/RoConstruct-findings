// roc 2008-06 00507a50  unit: G3D::Shader  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00507a50
//
// 00507a50  53                   push ebx
// 00507a51  56                   push esi
// 00507a52  57                   push edi
// 00507a53  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00507a57  8b07                 mov eax, dword ptr [edi]
// 00507a59  8d70ff               lea esi, [eax - 1]
// 00507a5c  8bce                 mov ecx, esi
// 00507a5e  85c9                 test ecx, ecx
// 00507a60  7c1a                 jl 0x507a7c
// 00507a62  8b542410             mov edx, dword ptr [esp + 0x10]
// 00507a66  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00507a6a  8d44ca04             lea eax, [edx + ecx*8 + 4]
// 00507a6e  8bff                 mov edi, edi
// 00507a70  3918                 cmp dword ptr [eax], ebx
// 00507a72  7310                 jae 0x507a84
// 00507a74  49                   dec ecx
// 00507a75  83e808               sub eax, 8
// 00507a78  85c9                 test ecx, ecx
// 00507a7a  7df4                 jge 0x507a70
// 00507a7c  5f                   pop edi
// 00507a7d  5e                   pop esi
// 00507a7e  33c0                 xor eax, eax
// 00507a80  5b                   pop ebx
// 00507a81  c20c00               ret 0xc
// 00507a84  8b04ca               mov eax, dword ptr [edx + ecx*8]
// 00507a87  8937                 mov dword ptr [edi], esi
// 00507a89  8b3cf2               mov edi, dword ptr [edx + esi*8]
// 00507a8c  893cca               mov dword ptr [edx + ecx*8], edi
// 00507a8f  8b74f204             mov esi, dword ptr [edx + esi*8 + 4]
// 00507a93  5f                   pop edi
// 00507a94  8974ca04             mov dword ptr [edx + ecx*8 + 4], esi
// 00507a98  5e                   pop esi
// 00507a99  5b                   pop ebx
// 00507a9a  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\System.cpp (function ?malloc@BufferPool@G3D@@AAEPAXPAVMemBlock@12@AAHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
