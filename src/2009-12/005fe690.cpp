// roc 2009-12 005fe690  unit: G3D::H::PAV?$Array::?$Set  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fe690
//
// 005fe690  53                   push ebx
// 005fe691  56                   push esi
// 005fe692  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fe696  57                   push edi
// 005fe697  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005fe69b  6a01                 push 1
// 005fe69d  56                   push esi
// 005fe69e  8bcf                 mov ecx, edi
// 005fe6a0  e83b85edff           call 0x4d6be0
// 005fe6a5  33c0                 xor eax, eax
// 005fe6a7  39442420             cmp dword ptr [esp + 0x20], eax
// 005fe6ab  7519                 jne 0x5fe6c6
// 005fe6ad  85f6                 test esi, esi
// 005fe6af  7e3c                 jle 0x5fe6ed
// 005fe6b1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005fe6b5  8b1f                 mov ebx, dword ptr [edi]
// 005fe6b7  8d1408               lea edx, [eax + ecx]
// 005fe6ba  891483               mov dword ptr [ebx + eax*4], edx
// 005fe6bd  40                   inc eax
// 005fe6be  3bc6                 cmp eax, esi
// 005fe6c0  7cf3                 jl 0x5fe6b5
// 005fe6c2  5f                   pop edi
// 005fe6c3  5e                   pop esi
// 005fe6c4  5b                   pop ebx
// 005fe6c5  c3                   ret 
// 005fe6c6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005fe6ca  33d2                 xor edx, edx
// 005fe6cc  85f6                 test esi, esi
// 005fe6ce  7e1d                 jle 0x5fe6ed
// 005fe6d0  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005fe6d4  55                   push ebp
// 005fe6d5  8b2f                 mov ebp, dword ptr [edi]
// 005fe6d7  894c9500             mov dword ptr [ebp + edx*4], ecx
// 005fe6db  40                   inc eax
// 005fe6dc  41                   inc ecx
// 005fe6dd  3bc3                 cmp eax, ebx
// 005fe6df  7506                 jne 0x5fe6e7
// 005fe6e1  33c0                 xor eax, eax
// 005fe6e3  034c2424             add ecx, dword ptr [esp + 0x24]
// 005fe6e7  42                   inc edx
// 005fe6e8  3bd6                 cmp edx, esi
// 005fe6ea  7ce9                 jl 0x5fe6d5
// 005fe6ec  5d                   pop ebp
// 005fe6ed  5f                   pop edi
// 005fe6ee  5e                   pop esi
// 005fe6ef  5b                   pop ebx
// 005fe6f0  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ?createIndexArray@MeshAlg@G3D@@SAXHAAV?$Array@H@2@HHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
