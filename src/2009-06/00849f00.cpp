// from server: 100% by auto
// roc 2009-06 00849f00  unit: RBX::RbxG3D::MegaTextureProxy  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00849f00
//
// 00849f00  53                   push ebx
// 00849f01  56                   push esi
// 00849f02  57                   push edi
// 00849f03  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00849f07  8b7704               mov esi, dword ptr [edi + 4]
// 00849f0a  c1e610               shl esi, 0x10
// 00849f0d  0337                 add esi, dword ptr [edi]
// 00849f0f  33d2                 xor edx, edx
// 00849f11  8bc6                 mov eax, esi
// 00849f13  f7710c               div dword ptr [ecx + 0xc]
// 00849f16  8b4108               mov eax, dword ptr [ecx + 8]
// 00849f19  8b1490               mov edx, dword ptr [eax + edx*4]
// 00849f1c  85d2                 test edx, edx
// 00849f1e  7430                 je 0x849f50
// 00849f20  3932                 cmp dword ptr [edx], esi
// 00849f22  7525                 jne 0x849f49
// 00849f24  33c0                 xor eax, eax
// 00849f26  8d4a04               lea ecx, [edx + 4]
// 00849f29  8da42400000000       lea esp, [esp]
// 00849f30  8b19                 mov ebx, dword ptr [ecx]
// 00849f32  3b1c87               cmp ebx, dword ptr [edi + eax*4]
// 00849f35  7512                 jne 0x849f49
// 00849f37  40                   inc eax
// 00849f38  83c104               add ecx, 4
// 00849f3b  83f802               cmp eax, 2
// 00849f3e  7cf0                 jl 0x849f30
// 00849f40  5f                   pop edi
// 00849f41  5e                   pop esi
// 00849f42  8d420c               lea eax, [edx + 0xc]
// 00849f45  5b                   pop ebx
// 00849f46  c20400               ret 4
// 00849f49  8b5218               mov edx, dword ptr [edx + 0x18]
// 00849f4c  85d2                 test edx, edx
// 00849f4e  75d0                 jne 0x849f20
// 00849f50  5f                   pop edi
// 00849f51  5e                   pop esi
// 00849f52  8d420c               lea eax, [edx + 0xc]
// 00849f55  5b                   pop ebx
// 00849f56  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?get@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QBEAAV?$Array@H@2@ABVMeshDirectedEdgeKey@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
