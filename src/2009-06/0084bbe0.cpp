// from server: 100% by auto
// roc 2009-06 0084bbe0  unit: G3D::H::PAV?$Array::?$Set  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084bbe0
//
// 0084bbe0  53                   push ebx
// 0084bbe1  56                   push esi
// 0084bbe2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0084bbe6  57                   push edi
// 0084bbe7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0084bbeb  6a01                 push 1
// 0084bbed  56                   push esi
// 0084bbee  8bcf                 mov ecx, edi
// 0084bbf0  e8cbe4c5ff           call 0x4aa0c0
// 0084bbf5  33c0                 xor eax, eax
// 0084bbf7  39442420             cmp dword ptr [esp + 0x20], eax
// 0084bbfb  7519                 jne 0x84bc16
// 0084bbfd  85f6                 test esi, esi
// 0084bbff  7e3c                 jle 0x84bc3d
// 0084bc01  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0084bc05  8b1f                 mov ebx, dword ptr [edi]
// 0084bc07  8d1408               lea edx, [eax + ecx]
// 0084bc0a  891483               mov dword ptr [ebx + eax*4], edx
// 0084bc0d  40                   inc eax
// 0084bc0e  3bc6                 cmp eax, esi
// 0084bc10  7cf3                 jl 0x84bc05
// 0084bc12  5f                   pop edi
// 0084bc13  5e                   pop esi
// 0084bc14  5b                   pop ebx
// 0084bc15  c3                   ret 
// 0084bc16  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0084bc1a  33d2                 xor edx, edx
// 0084bc1c  85f6                 test esi, esi
// 0084bc1e  7e1d                 jle 0x84bc3d
// 0084bc20  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0084bc24  55                   push ebp
// 0084bc25  8b2f                 mov ebp, dword ptr [edi]
// 0084bc27  894c9500             mov dword ptr [ebp + edx*4], ecx
// 0084bc2b  40                   inc eax
// 0084bc2c  41                   inc ecx
// 0084bc2d  3bc3                 cmp eax, ebx
// 0084bc2f  7506                 jne 0x84bc37
// 0084bc31  33c0                 xor eax, eax
// 0084bc33  034c2424             add ecx, dword ptr [esp + 0x24]
// 0084bc37  42                   inc edx
// 0084bc38  3bd6                 cmp edx, esi
// 0084bc3a  7ce9                 jl 0x84bc25
// 0084bc3c  5d                   pop ebp
// 0084bc3d  5f                   pop edi
// 0084bc3e  5e                   pop esi
// 0084bc3f  5b                   pop ebx
// 0084bc40  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ?createIndexArray@MeshAlg@G3D@@SAXHAAV?$Array@H@2@HHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
