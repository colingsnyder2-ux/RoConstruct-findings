// from server: 100% by auto
// roc 2010-06 00498680  unit: G3D::Shader  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00498680
//
// 00498680  8b442404             mov eax, dword ptr [esp + 4]
// 00498684  3d538b0000           cmp eax, 0x8b53
// 00498689  770f                 ja 0x49869a
// 0049868b  7426                 je 0x4986b3
// 0049868d  3d04140000           cmp eax, 0x1404
// 00498692  7542                 jne 0x4986d6
// 00498694  b806140000           mov eax, 0x1406
// 00498699  c3                   ret 
// 0049869a  8d88ac74ffff         lea ecx, [eax - 0x8b54]
// 004986a0  83f910               cmp ecx, 0x10
// 004986a3  7731                 ja 0x4986d6
// 004986a5  0fb689f8864900       movzx ecx, byte ptr [ecx + 0x4986f8]
// 004986ac  ff248dd8864900       jmp dword ptr [ecx*4 + 0x4986d8]
// 004986b3  b8508b0000           mov eax, 0x8b50
// 004986b8  c3                   ret 
// 004986b9  b8518b0000           mov eax, 0x8b51
// 004986be  c3                   ret 
// 004986bf  b8528b0000           mov eax, 0x8b52
// 004986c4  c3                   ret 
// 004986c5  b8e10d0000           mov eax, 0xde1
// 004986ca  c3                   ret 
// 004986cb  b813850000           mov eax, 0x8513
// 004986d0  c3                   ret 
// 004986d1  b8f5840000           mov eax, 0x84f5
// 004986d6  c3                   ret 
// 004986d7  90                   nop 
// 004986d8  b9864900bf           mov ecx, 0xbf004986
// 004986dd  864900               xchg byte ptr [ecx], cl
// 004986e0  94                   xchg esp, eax
// 004986e1  864900               xchg byte ptr [ecx], cl
// 004986e4  b386                 mov bl, 0x86
// 004986e6  49                   dec ecx
// 004986e7  00c5                 add ch, al
// 004986e9  864900               xchg byte ptr [ecx], cl
// 004986ec  cb                   retf 
// 004986ed  864900               xchg byte ptr [ecx], cl
// 004986f0  d1864900d686         rol dword ptr [esi - 0x7929ffb7], 1
// 004986f6  49                   dec ecx
// 004986f7  0000                 add byte ptr [eax], al
// 004986f9  0102                 add dword ptr [edx], eax
// 004986fb  0300                 add eax, dword ptr [eax]
// 004986fd  0107                 add dword ptr [edi], eax
// 004986ff  07                   pop es
// 00498700  07                   pop es
// 00498701  07                   pop es
// 00498702  0407                 add al, 7
// 00498704  0507040606           add eax, 0x6060407
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?canonicalType@VertexAndPixelShader@G3D@@KAII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
