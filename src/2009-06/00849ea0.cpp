// roc 2009-06 00849ea0  unit: RBX::RbxG3D::MegaTextureProxy  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00849ea0
//
// 00849ea0  53                   push ebx
// 00849ea1  56                   push esi
// 00849ea2  57                   push edi
// 00849ea3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00849ea7  8b7704               mov esi, dword ptr [edi + 4]
// 00849eaa  c1e610               shl esi, 0x10
// 00849ead  0337                 add esi, dword ptr [edi]
// 00849eaf  33d2                 xor edx, edx
// 00849eb1  8bc6                 mov eax, esi
// 00849eb3  f7710c               div dword ptr [ecx + 0xc]
// 00849eb6  8b4108               mov eax, dword ptr [ecx + 8]
// 00849eb9  8b1490               mov edx, dword ptr [eax + edx*4]
// 00849ebc  85d2                 test edx, edx
// 00849ebe  7430                 je 0x849ef0
// 00849ec0  3932                 cmp dword ptr [edx], esi
// 00849ec2  7524                 jne 0x849ee8
// 00849ec4  33c0                 xor eax, eax
// 00849ec6  8d4a04               lea ecx, [edx + 4]
// 00849ec9  8da42400000000       lea esp, [esp]
// 00849ed0  8b19                 mov ebx, dword ptr [ecx]
// 00849ed2  3b1c87               cmp ebx, dword ptr [edi + eax*4]
// 00849ed5  7511                 jne 0x849ee8
// 00849ed7  40                   inc eax
// 00849ed8  83c104               add ecx, 4
// 00849edb  83f802               cmp eax, 2
// 00849ede  7cf0                 jl 0x849ed0
// 00849ee0  5f                   pop edi
// 00849ee1  5e                   pop esi
// 00849ee2  b001                 mov al, 1
// 00849ee4  5b                   pop ebx
// 00849ee5  c20400               ret 4
// 00849ee8  8b5218               mov edx, dword ptr [edx + 0x18]
// 00849eeb  85d2                 test edx, edx
// 00849eed  75d1                 jne 0x849ec0
// 00849eef  90                   nop 
// 00849ef0  5f                   pop edi
// 00849ef1  5e                   pop esi
// 00849ef2  32c0                 xor al, al
// 00849ef4  5b                   pop ebx
// 00849ef5  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?containsKey@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QBE_NABVMeshDirectedEdgeKey@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
