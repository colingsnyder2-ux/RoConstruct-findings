// roc 2008-06 00485ca0  unit: G3D::Shader  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00485ca0
//
// 00485ca0  56                   push esi
// 00485ca1  57                   push edi
// 00485ca2  8bf1                 mov esi, ecx
// 00485ca4  33ff                 xor edi, edi
// 00485ca6  397e04               cmp dword ptr [esi + 4], edi
// 00485ca9  7e1b                 jle 0x485cc6
// 00485cab  53                   push ebx
// 00485cac  33db                 xor ebx, ebx
// 00485cae  8bff                 mov edi, edi
// 00485cb0  8b06                 mov eax, dword ptr [esi]
// 00485cb2  8d4c0308             lea ecx, [ebx + eax + 8]
// 00485cb6  ff1568248000         call dword ptr [0x802468]
// 00485cbc  47                   inc edi
// 00485cbd  83c330               add ebx, 0x30
// 00485cc0  3b7e04               cmp edi, dword ptr [esi + 4]
// 00485cc3  7ceb                 jl 0x485cb0
// 00485cc5  5b                   pop ebx
// 00485cc6  8b0e                 mov ecx, dword ptr [esi]
// 00485cc8  51                   push ecx
// 00485cc9  e852200800           call 0x507d20
// 00485cce  83c404               add esp, 4
// 00485cd1  5f                   pop edi
// 00485cd2  c70600000000         mov dword ptr [esi], 0
// 00485cd8  c7460400000000       mov dword ptr [esi + 4], 0
// 00485cdf  c7460800000000       mov dword ptr [esi + 8], 0
// 00485ce6  5e                   pop esi
// 00485ce7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??1?$Array@VUniformDeclaration@VertexAndPixelShader@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
