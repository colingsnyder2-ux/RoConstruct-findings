// roc 2009-12 004dc690  unit: G3D::Shader  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dc690
//
// 004dc690  56                   push esi
// 004dc691  57                   push edi
// 004dc692  8bf1                 mov esi, ecx
// 004dc694  33ff                 xor edi, edi
// 004dc696  397e04               cmp dword ptr [esi + 4], edi
// 004dc699  7e1b                 jle 0x4dc6b6
// 004dc69b  53                   push ebx
// 004dc69c  33db                 xor ebx, ebx
// 004dc69e  8bff                 mov edi, edi
// 004dc6a0  8b06                 mov eax, dword ptr [esi]
// 004dc6a2  8d4c0308             lea ecx, [ebx + eax + 8]
// 004dc6a6  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dc6ac  47                   inc edi
// 004dc6ad  83c330               add ebx, 0x30
// 004dc6b0  3b7e04               cmp edi, dword ptr [esi + 4]
// 004dc6b3  7ceb                 jl 0x4dc6a0
// 004dc6b5  5b                   pop ebx
// 004dc6b6  8b0e                 mov ecx, dword ptr [esi]
// 004dc6b8  51                   push ecx
// 004dc6b9  e822dd1000           call 0x5ea3e0
// 004dc6be  83c404               add esp, 4
// 004dc6c1  5f                   pop edi
// 004dc6c2  c70600000000         mov dword ptr [esi], 0
// 004dc6c8  c7460400000000       mov dword ptr [esi + 4], 0
// 004dc6cf  c7460800000000       mov dword ptr [esi + 8], 0
// 004dc6d6  5e                   pop esi
// 004dc6d7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??1?$Array@VUniformDeclaration@VertexAndPixelShader@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
