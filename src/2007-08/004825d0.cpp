// from server: 100% by auto
// roc 2007-08 004825d0  unit: G3D::Shader  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004825d0
//
// 004825d0  8b442404             mov eax, dword ptr [esp + 4]
// 004825d4  3d538b0000           cmp eax, 0x8b53
// 004825d9  770f                 ja 0x4825ea
// 004825db  7426                 je 0x482603
// 004825dd  3d04140000           cmp eax, 0x1404
// 004825e2  7542                 jne 0x482626
// 004825e4  b806140000           mov eax, 0x1406
// 004825e9  c3                   ret 
// 004825ea  8d88ac74ffff         lea ecx, [eax - 0x8b54]
// 004825f0  83f910               cmp ecx, 0x10
// 004825f3  7731                 ja 0x482626
// 004825f5  0fb68948264800       movzx ecx, byte ptr [ecx + 0x482648]
// 004825fc  ff248d28264800       jmp dword ptr [ecx*4 + 0x482628]
// 00482603  b8508b0000           mov eax, 0x8b50
// 00482608  c3                   ret 
// 00482609  b8518b0000           mov eax, 0x8b51
// 0048260e  c3                   ret 
// 0048260f  b8528b0000           mov eax, 0x8b52
// 00482614  c3                   ret 
// 00482615  b8e10d0000           mov eax, 0xde1
// 0048261a  c3                   ret 
// 0048261b  b813850000           mov eax, 0x8513
// 00482620  c3                   ret 
// 00482621  b8f5840000           mov eax, 0x84f5
// 00482626  c3                   ret 
// 00482627  90                   nop 
// 00482628  0926                 or dword ptr [esi], esp
// 0048262a  48                   dec eax
// 0048262b  000f                 add byte ptr [edi], cl
// 0048262d  2648                 dec eax
// 0048262f  00e4                 add ah, ah
// 00482631  2548000326           and eax, 0x26030048
// 00482636  48                   dec eax
// 00482637  00152648001b         add byte ptr [0x1b004826], dl
// 0048263d  2648                 dec eax
// 0048263f  0021                 add byte ptr [ecx], ah
// 00482641  2648                 dec eax
// 00482643  0026                 add byte ptr [esi], ah
// 00482645  2648                 dec eax
// 00482647  0000                 add byte ptr [eax], al
// 00482649  0102                 add dword ptr [edx], eax
// 0048264b  0300                 add eax, dword ptr [eax]
// 0048264d  0107                 add dword ptr [edi], eax
// 0048264f  07                   pop es
// 00482650  07                   pop es
// 00482651  07                   pop es
// 00482652  0407                 add al, 7
// 00482654  0507040606           add eax, 0x6060407
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?canonicalType@VertexAndPixelShader@G3D@@KAII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
