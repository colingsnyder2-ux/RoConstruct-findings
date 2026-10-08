// roc 2009-12 004dc250  unit: G3D::Shader  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dc250
//
// 004dc250  8b442404             mov eax, dword ptr [esp + 4]
// 004dc254  3d538b0000           cmp eax, 0x8b53
// 004dc259  770f                 ja 0x4dc26a
// 004dc25b  7426                 je 0x4dc283
// 004dc25d  3d04140000           cmp eax, 0x1404
// 004dc262  7542                 jne 0x4dc2a6
// 004dc264  b806140000           mov eax, 0x1406
// 004dc269  c3                   ret 
// 004dc26a  8d88ac74ffff         lea ecx, [eax - 0x8b54]
// 004dc270  83f910               cmp ecx, 0x10
// 004dc273  7731                 ja 0x4dc2a6
// 004dc275  0fb689c8c24d00       movzx ecx, byte ptr [ecx + 0x4dc2c8]
// 004dc27c  ff248da8c24d00       jmp dword ptr [ecx*4 + 0x4dc2a8]
// 004dc283  b8508b0000           mov eax, 0x8b50
// 004dc288  c3                   ret 
// 004dc289  b8518b0000           mov eax, 0x8b51
// 004dc28e  c3                   ret 
// 004dc28f  b8528b0000           mov eax, 0x8b52
// 004dc294  c3                   ret 
// 004dc295  b8e10d0000           mov eax, 0xde1
// 004dc29a  c3                   ret 
// 004dc29b  b813850000           mov eax, 0x8513
// 004dc2a0  c3                   ret 
// 004dc2a1  b8f5840000           mov eax, 0x84f5
// 004dc2a6  c3                   ret 
// 004dc2a7  90                   nop 
// 004dc2a8  89c2                 mov edx, eax
// 004dc2aa  4d                   dec ebp
// 004dc2ab  008fc24d0064         add byte ptr [edi + 0x64004dc2], cl
// 004dc2b1  c24d00               ret 0x4d
// 004dc2b4  83c24d               add edx, 0x4d
// 004dc2b7  0095c24d009b         add byte ptr [ebp - 0x64ffb23e], dl
// 004dc2bd  c24d00               ret 0x4d
// 004dc2c0  a1c24d00a6           mov eax, dword ptr [0xa6004dc2]
// 004dc2c5  c24d00               ret 0x4d
// 004dc2c8  0001                 add byte ptr [ecx], al
// 004dc2ca  0203                 add al, byte ptr [ebx]
// 004dc2cc  0001                 add byte ptr [ecx], al
// 004dc2ce  07                   pop es
// 004dc2cf  07                   pop es
// 004dc2d0  07                   pop es
// 004dc2d1  07                   pop es
// 004dc2d2  0407                 add al, 7
// 004dc2d4  0507040606           add eax, 0x6060407
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?canonicalType@VertexAndPixelShader@G3D@@KAII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
