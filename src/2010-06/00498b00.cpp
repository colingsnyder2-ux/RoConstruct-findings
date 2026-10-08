// from server: 100% by auto
// roc 2010-06 00498b00  unit: G3D::Shader  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00498b00
//
// 00498b00  56                   push esi
// 00498b01  57                   push edi
// 00498b02  8bf1                 mov esi, ecx
// 00498b04  33ff                 xor edi, edi
// 00498b06  397e04               cmp dword ptr [esi + 4], edi
// 00498b09  7e1b                 jle 0x498b26
// 00498b0b  53                   push ebx
// 00498b0c  33db                 xor ebx, ebx
// 00498b0e  8bff                 mov edi, edi
// 00498b10  8b06                 mov eax, dword ptr [esi]
// 00498b12  8d4c0308             lea ecx, [ebx + eax + 8]
// 00498b16  ff1500a49e00         call dword ptr [0x9ea400]
// 00498b1c  47                   inc edi
// 00498b1d  83c330               add ebx, 0x30
// 00498b20  3b7e04               cmp edi, dword ptr [esi + 4]
// 00498b23  7ceb                 jl 0x498b10
// 00498b25  5b                   pop ebx
// 00498b26  8b0e                 mov ecx, dword ptr [esi]
// 00498b28  51                   push ecx
// 00498b29  e8924e0b00           call 0x54d9c0
// 00498b2e  83c404               add esp, 4
// 00498b31  5f                   pop edi
// 00498b32  c70600000000         mov dword ptr [esi], 0
// 00498b38  c7460400000000       mov dword ptr [esi + 4], 0
// 00498b3f  c7460800000000       mov dword ptr [esi + 8], 0
// 00498b46  5e                   pop esi
// 00498b47  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??1?$Array@VUniformDeclaration@VertexAndPixelShader@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
