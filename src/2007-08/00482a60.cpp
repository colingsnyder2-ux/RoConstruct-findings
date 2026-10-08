// from server: 100% by auto
// roc 2007-08 00482a60  unit: G3D::Shader  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00482a60
//
// 00482a60  56                   push esi
// 00482a61  57                   push edi
// 00482a62  8bf1                 mov esi, ecx
// 00482a64  33ff                 xor edi, edi
// 00482a66  397e04               cmp dword ptr [esi + 4], edi
// 00482a69  7e1d                 jle 0x482a88
// 00482a6b  53                   push ebx
// 00482a6c  33db                 xor ebx, ebx
// 00482a6e  8bff                 mov edi, edi
// 00482a70  8b06                 mov eax, dword ptr [esi]
// 00482a72  8d4c0308             lea ecx, [ebx + eax + 8]
// 00482a76  ff15ace67700         call dword ptr [0x77e6ac]
// 00482a7c  83c701               add edi, 1
// 00482a7f  83c330               add ebx, 0x30
// 00482a82  3b7e04               cmp edi, dword ptr [esi + 4]
// 00482a85  7ce9                 jl 0x482a70
// 00482a87  5b                   pop ebx
// 00482a88  8b0e                 mov ecx, dword ptr [esi]
// 00482a8a  51                   push ecx
// 00482a8b  e880cd0700           call 0x4ff810
// 00482a90  83c404               add esp, 4
// 00482a93  5f                   pop edi
// 00482a94  c70600000000         mov dword ptr [esi], 0
// 00482a9a  c7460400000000       mov dword ptr [esi + 4], 0
// 00482aa1  c7460800000000       mov dword ptr [esi + 8], 0
// 00482aa8  5e                   pop esi
// 00482aa9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??1?$Array@VUniformDeclaration@VertexAndPixelShader@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
