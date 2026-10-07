// roc 2009-06 004af710  unit: G3D::Shader  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004af710
//
// 004af710  8b442404             mov eax, dword ptr [esp + 4]
// 004af714  3d538b0000           cmp eax, 0x8b53
// 004af719  770f                 ja 0x4af72a
// 004af71b  7426                 je 0x4af743
// 004af71d  3d04140000           cmp eax, 0x1404
// 004af722  7542                 jne 0x4af766
// 004af724  b806140000           mov eax, 0x1406
// 004af729  c3                   ret 
// 004af72a  8d88ac74ffff         lea ecx, [eax - 0x8b54]
// 004af730  83f910               cmp ecx, 0x10
// 004af733  7731                 ja 0x4af766
// 004af735  0fb68988f74a00       movzx ecx, byte ptr [ecx + 0x4af788]
// 004af73c  ff248d68f74a00       jmp dword ptr [ecx*4 + 0x4af768]
// 004af743  b8508b0000           mov eax, 0x8b50
// 004af748  c3                   ret 
// 004af749  b8518b0000           mov eax, 0x8b51
// 004af74e  c3                   ret 
// 004af74f  b8528b0000           mov eax, 0x8b52
// 004af754  c3                   ret 
// 004af755  b8e10d0000           mov eax, 0xde1
// 004af75a  c3                   ret 
// 004af75b  b813850000           mov eax, 0x8513
// 004af760  c3                   ret 
// 004af761  b8f5840000           mov eax, 0x84f5
// 004af766  c3                   ret 
// 004af767  90                   nop 
// 004af768  49                   dec ecx
// 004af769  f74a004ff74a00       test dword ptr [edx], 0x4af74f
// 004af770  24f7                 and al, 0xf7
// 004af772  4a                   dec edx
// 004af773  0043f7               add byte ptr [ebx - 9], al
// 004af776  4a                   dec edx
// 004af777  0055f7               add byte ptr [ebp - 9], dl
// 004af77a  4a                   dec edx
// 004af77b  005bf7               add byte ptr [ebx - 9], bl
// 004af77e  4a                   dec edx
// 004af77f  0061f7               add byte ptr [ecx - 9], ah
// 004af782  4a                   dec edx
// 004af783  0066f7               add byte ptr [esi - 9], ah
// 004af786  4a                   dec edx
// 004af787  0000                 add byte ptr [eax], al
// 004af789  0102                 add dword ptr [edx], eax
// 004af78b  0300                 add eax, dword ptr [eax]
// 004af78d  0107                 add dword ptr [edi], eax
// 004af78f  07                   pop es
// 004af790  07                   pop es
// 004af791  07                   pop es
// 004af792  0407                 add al, 7
// 004af794  0507040606           add eax, 0x6060407
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?canonicalType@VertexAndPixelShader@G3D@@KAII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
