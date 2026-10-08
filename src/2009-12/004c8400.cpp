// roc 2009-12 004c8400  unit: G3D::Texture  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c8400
//
// 004c8400  56                   push esi
// 004c8401  57                   push edi
// 004c8402  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004c8406  8b4704               mov eax, dword ptr [edi + 4]
// 004c8409  8bf1                 mov esi, ecx
// 004c840b  c7460400000000       mov dword ptr [esi + 4], 0
// 004c8412  c7460800000000       mov dword ptr [esi + 8], 0
// 004c8419  c70600000000         mov dword ptr [esi], 0
// 004c841f  85c0                 test eax, eax
// 004c8421  7e0a                 jle 0x4c842d
// 004c8423  6a01                 push 1
// 004c8425  50                   push eax
// 004c8426  e8c5f8ffff           call 0x4c7cf0
// 004c842b  eb06                 jmp 0x4c8433
// 004c842d  c70600000000         mov dword ptr [esi], 0
// 004c8433  33c0                 xor eax, eax
// 004c8435  394604               cmp dword ptr [esi + 4], eax
// 004c8438  7e16                 jle 0x4c8450
// 004c843a  8d9b00000000         lea ebx, [ebx]
// 004c8440  8b0f                 mov ecx, dword ptr [edi]
// 004c8442  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 004c8445  8b16                 mov edx, dword ptr [esi]
// 004c8447  890c82               mov dword ptr [edx + eax*4], ecx
// 004c844a  40                   inc eax
// 004c844b  3b4604               cmp eax, dword ptr [esi + 4]
// 004c844e  7cf0                 jl 0x4c8440
// 004c8450  5f                   pop edi
// 004c8451  5e                   pop esi
// 004c8452  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ?_copy@?$Array@H@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
