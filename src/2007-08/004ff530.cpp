// roc 2007-08 004ff530  unit: G3D::Shader  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ff530
//
// 004ff530  53                   push ebx
// 004ff531  56                   push esi
// 004ff532  57                   push edi
// 004ff533  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004ff537  8b07                 mov eax, dword ptr [edi]
// 004ff539  8d70ff               lea esi, [eax - 1]
// 004ff53c  8bce                 mov ecx, esi
// 004ff53e  85c9                 test ecx, ecx
// 004ff540  7c1c                 jl 0x4ff55e
// 004ff542  8b542410             mov edx, dword ptr [esp + 0x10]
// 004ff546  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004ff54a  8d44ca04             lea eax, [edx + ecx*8 + 4]
// 004ff54e  8bff                 mov edi, edi
// 004ff550  3918                 cmp dword ptr [eax], ebx
// 004ff552  7312                 jae 0x4ff566
// 004ff554  83e901               sub ecx, 1
// 004ff557  83e808               sub eax, 8
// 004ff55a  85c9                 test ecx, ecx
// 004ff55c  7df2                 jge 0x4ff550
// 004ff55e  5f                   pop edi
// 004ff55f  5e                   pop esi
// 004ff560  33c0                 xor eax, eax
// 004ff562  5b                   pop ebx
// 004ff563  c20c00               ret 0xc
// 004ff566  8b04ca               mov eax, dword ptr [edx + ecx*8]
// 004ff569  8937                 mov dword ptr [edi], esi
// 004ff56b  8b3cf2               mov edi, dword ptr [edx + esi*8]
// 004ff56e  893cca               mov dword ptr [edx + ecx*8], edi
// 004ff571  8b74f204             mov esi, dword ptr [edx + esi*8 + 4]
// 004ff575  5f                   pop edi
// 004ff576  8974ca04             mov dword ptr [edx + ecx*8 + 4], esi
// 004ff57a  5e                   pop esi
// 004ff57b  5b                   pop ebx
// 004ff57c  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\System.cpp (function ?malloc@BufferPool@G3D@@AAEPAXPAVMemBlock@12@AAHI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
