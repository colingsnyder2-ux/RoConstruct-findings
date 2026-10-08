// from server: 100% by auto
// roc 2008-06 007b9370  unit: RBX::Render::MegaTextureProxy  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b9370
//
// 007b9370  53                   push ebx
// 007b9371  56                   push esi
// 007b9372  57                   push edi
// 007b9373  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007b9377  8b7704               mov esi, dword ptr [edi + 4]
// 007b937a  c1e610               shl esi, 0x10
// 007b937d  0337                 add esi, dword ptr [edi]
// 007b937f  33d2                 xor edx, edx
// 007b9381  8bc6                 mov eax, esi
// 007b9383  f7710c               div dword ptr [ecx + 0xc]
// 007b9386  8b4108               mov eax, dword ptr [ecx + 8]
// 007b9389  8b1490               mov edx, dword ptr [eax + edx*4]
// 007b938c  85d2                 test edx, edx
// 007b938e  7430                 je 0x7b93c0
// 007b9390  3932                 cmp dword ptr [edx], esi
// 007b9392  7524                 jne 0x7b93b8
// 007b9394  33c0                 xor eax, eax
// 007b9396  8d4a04               lea ecx, [edx + 4]
// 007b9399  8da42400000000       lea esp, [esp]
// 007b93a0  8b19                 mov ebx, dword ptr [ecx]
// 007b93a2  3b1c87               cmp ebx, dword ptr [edi + eax*4]
// 007b93a5  7511                 jne 0x7b93b8
// 007b93a7  40                   inc eax
// 007b93a8  83c104               add ecx, 4
// 007b93ab  83f802               cmp eax, 2
// 007b93ae  7cf0                 jl 0x7b93a0
// 007b93b0  5f                   pop edi
// 007b93b1  5e                   pop esi
// 007b93b2  b001                 mov al, 1
// 007b93b4  5b                   pop ebx
// 007b93b5  c20400               ret 4
// 007b93b8  8b5218               mov edx, dword ptr [edx + 0x18]
// 007b93bb  85d2                 test edx, edx
// 007b93bd  75d1                 jne 0x7b9390
// 007b93bf  90                   nop 
// 007b93c0  5f                   pop edi
// 007b93c1  5e                   pop esi
// 007b93c2  32c0                 xor al, al
// 007b93c4  5b                   pop ebx
// 007b93c5  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?containsKey@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QBE_NABVMeshDirectedEdgeKey@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
