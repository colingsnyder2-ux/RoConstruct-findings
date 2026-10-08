// from server: 100% by auto
// roc 2008-06 007b93d0  unit: RBX::Render::MegaTextureProxy  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b93d0
//
// 007b93d0  53                   push ebx
// 007b93d1  56                   push esi
// 007b93d2  57                   push edi
// 007b93d3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007b93d7  8b7704               mov esi, dword ptr [edi + 4]
// 007b93da  c1e610               shl esi, 0x10
// 007b93dd  0337                 add esi, dword ptr [edi]
// 007b93df  33d2                 xor edx, edx
// 007b93e1  8bc6                 mov eax, esi
// 007b93e3  f7710c               div dword ptr [ecx + 0xc]
// 007b93e6  8b4108               mov eax, dword ptr [ecx + 8]
// 007b93e9  8b1490               mov edx, dword ptr [eax + edx*4]
// 007b93ec  85d2                 test edx, edx
// 007b93ee  7430                 je 0x7b9420
// 007b93f0  3932                 cmp dword ptr [edx], esi
// 007b93f2  7525                 jne 0x7b9419
// 007b93f4  33c0                 xor eax, eax
// 007b93f6  8d4a04               lea ecx, [edx + 4]
// 007b93f9  8da42400000000       lea esp, [esp]
// 007b9400  8b19                 mov ebx, dword ptr [ecx]
// 007b9402  3b1c87               cmp ebx, dword ptr [edi + eax*4]
// 007b9405  7512                 jne 0x7b9419
// 007b9407  40                   inc eax
// 007b9408  83c104               add ecx, 4
// 007b940b  83f802               cmp eax, 2
// 007b940e  7cf0                 jl 0x7b9400
// 007b9410  5f                   pop edi
// 007b9411  5e                   pop esi
// 007b9412  8d420c               lea eax, [edx + 0xc]
// 007b9415  5b                   pop ebx
// 007b9416  c20400               ret 4
// 007b9419  8b5218               mov edx, dword ptr [edx + 0x18]
// 007b941c  85d2                 test edx, edx
// 007b941e  75d0                 jne 0x7b93f0
// 007b9420  5f                   pop edi
// 007b9421  5e                   pop esi
// 007b9422  8d420c               lea eax, [edx + 0xc]
// 007b9425  5b                   pop ebx
// 007b9426  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?get@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QBEAAV?$Array@H@2@ABVMeshDirectedEdgeKey@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
