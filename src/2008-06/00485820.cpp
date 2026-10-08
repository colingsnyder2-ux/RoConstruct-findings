// from server: 100% by auto
// roc 2008-06 00485820  unit: G3D::Shader  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00485820
//
// 00485820  8b442404             mov eax, dword ptr [esp + 4]
// 00485824  3d538b0000           cmp eax, 0x8b53
// 00485829  770f                 ja 0x48583a
// 0048582b  7426                 je 0x485853
// 0048582d  3d04140000           cmp eax, 0x1404
// 00485832  7542                 jne 0x485876
// 00485834  b806140000           mov eax, 0x1406
// 00485839  c3                   ret 
// 0048583a  8d88ac74ffff         lea ecx, [eax - 0x8b54]
// 00485840  83f910               cmp ecx, 0x10
// 00485843  7731                 ja 0x485876
// 00485845  0fb68998584800       movzx ecx, byte ptr [ecx + 0x485898]
// 0048584c  ff248d78584800       jmp dword ptr [ecx*4 + 0x485878]
// 00485853  b8508b0000           mov eax, 0x8b50
// 00485858  c3                   ret 
// 00485859  b8518b0000           mov eax, 0x8b51
// 0048585e  c3                   ret 
// 0048585f  b8528b0000           mov eax, 0x8b52
// 00485864  c3                   ret 
// 00485865  b8e10d0000           mov eax, 0xde1
// 0048586a  c3                   ret 
// 0048586b  b813850000           mov eax, 0x8513
// 00485870  c3                   ret 
// 00485871  b8f5840000           mov eax, 0x84f5
// 00485876  c3                   ret 
// 00485877  90                   nop 
// 00485878  59                   pop ecx
// 00485879  58                   pop eax
// 0048587a  48                   dec eax
// 0048587b  005f58               add byte ptr [edi + 0x58], bl
// 0048587e  48                   dec eax
// 0048587f  003458               add byte ptr [eax + ebx*2], dh
// 00485882  48                   dec eax
// 00485883  005358               add byte ptr [ebx + 0x58], dl
// 00485886  48                   dec eax
// 00485887  006558               add byte ptr [ebp + 0x58], ah
// 0048588a  48                   dec eax
// 0048588b  006b58               add byte ptr [ebx + 0x58], ch
// 0048588e  48                   dec eax
// 0048588f  007158               add byte ptr [ecx + 0x58], dh
// 00485892  48                   dec eax
// 00485893  007658               add byte ptr [esi + 0x58], dh
// 00485896  48                   dec eax
// 00485897  0000                 add byte ptr [eax], al
// 00485899  0102                 add dword ptr [edx], eax
// 0048589b  0300                 add eax, dword ptr [eax]
// 0048589d  0107                 add dword ptr [edi], eax
// 0048589f  07                   pop es
// 004858a0  07                   pop es
// 004858a1  07                   pop es
// 004858a2  0407                 add al, 7
// 004858a4  0507040606           add eax, 0x6060407
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?canonicalType@VertexAndPixelShader@G3D@@KAII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
