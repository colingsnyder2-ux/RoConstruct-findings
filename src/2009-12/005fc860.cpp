// roc 2009-12 005fc860  unit: G3D::TextInput::WrongSymbol  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fc860
//
// 005fc860  53                   push ebx
// 005fc861  56                   push esi
// 005fc862  57                   push edi
// 005fc863  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005fc867  8b7704               mov esi, dword ptr [edi + 4]
// 005fc86a  c1e610               shl esi, 0x10
// 005fc86d  0337                 add esi, dword ptr [edi]
// 005fc86f  33d2                 xor edx, edx
// 005fc871  8bc6                 mov eax, esi
// 005fc873  f7710c               div dword ptr [ecx + 0xc]
// 005fc876  8b4108               mov eax, dword ptr [ecx + 8]
// 005fc879  8b1490               mov edx, dword ptr [eax + edx*4]
// 005fc87c  85d2                 test edx, edx
// 005fc87e  7430                 je 0x5fc8b0
// 005fc880  3932                 cmp dword ptr [edx], esi
// 005fc882  7524                 jne 0x5fc8a8
// 005fc884  33c0                 xor eax, eax
// 005fc886  8d4a04               lea ecx, [edx + 4]
// 005fc889  8da42400000000       lea esp, [esp]
// 005fc890  8b19                 mov ebx, dword ptr [ecx]
// 005fc892  3b1c87               cmp ebx, dword ptr [edi + eax*4]
// 005fc895  7511                 jne 0x5fc8a8
// 005fc897  40                   inc eax
// 005fc898  83c104               add ecx, 4
// 005fc89b  83f802               cmp eax, 2
// 005fc89e  7cf0                 jl 0x5fc890
// 005fc8a0  5f                   pop edi
// 005fc8a1  5e                   pop esi
// 005fc8a2  b001                 mov al, 1
// 005fc8a4  5b                   pop ebx
// 005fc8a5  c20400               ret 4
// 005fc8a8  8b5218               mov edx, dword ptr [edx + 0x18]
// 005fc8ab  85d2                 test edx, edx
// 005fc8ad  75d1                 jne 0x5fc880
// 005fc8af  90                   nop 
// 005fc8b0  5f                   pop edi
// 005fc8b1  5e                   pop esi
// 005fc8b2  32c0                 xor al, al
// 005fc8b4  5b                   pop ebx
// 005fc8b5  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?containsKey@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QBE_NABVMeshDirectedEdgeKey@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
