// roc 2009-12 005fc8c0  unit: G3D::TextInput::WrongSymbol  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fc8c0
//
// 005fc8c0  53                   push ebx
// 005fc8c1  56                   push esi
// 005fc8c2  57                   push edi
// 005fc8c3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005fc8c7  8b7704               mov esi, dword ptr [edi + 4]
// 005fc8ca  c1e610               shl esi, 0x10
// 005fc8cd  0337                 add esi, dword ptr [edi]
// 005fc8cf  33d2                 xor edx, edx
// 005fc8d1  8bc6                 mov eax, esi
// 005fc8d3  f7710c               div dword ptr [ecx + 0xc]
// 005fc8d6  8b4108               mov eax, dword ptr [ecx + 8]
// 005fc8d9  8b1490               mov edx, dword ptr [eax + edx*4]
// 005fc8dc  85d2                 test edx, edx
// 005fc8de  7430                 je 0x5fc910
// 005fc8e0  3932                 cmp dword ptr [edx], esi
// 005fc8e2  7525                 jne 0x5fc909
// 005fc8e4  33c0                 xor eax, eax
// 005fc8e6  8d4a04               lea ecx, [edx + 4]
// 005fc8e9  8da42400000000       lea esp, [esp]
// 005fc8f0  8b19                 mov ebx, dword ptr [ecx]
// 005fc8f2  3b1c87               cmp ebx, dword ptr [edi + eax*4]
// 005fc8f5  7512                 jne 0x5fc909
// 005fc8f7  40                   inc eax
// 005fc8f8  83c104               add ecx, 4
// 005fc8fb  83f802               cmp eax, 2
// 005fc8fe  7cf0                 jl 0x5fc8f0
// 005fc900  5f                   pop edi
// 005fc901  5e                   pop esi
// 005fc902  8d420c               lea eax, [edx + 0xc]
// 005fc905  5b                   pop ebx
// 005fc906  c20400               ret 4
// 005fc909  8b5218               mov edx, dword ptr [edx + 0x18]
// 005fc90c  85d2                 test edx, edx
// 005fc90e  75d0                 jne 0x5fc8e0
// 005fc910  5f                   pop edi
// 005fc911  5e                   pop esi
// 005fc912  8d420c               lea eax, [edx + 0xc]
// 005fc915  5b                   pop ebx
// 005fc916  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?get@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QBEAAV?$Array@H@2@ABVMeshDirectedEdgeKey@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
