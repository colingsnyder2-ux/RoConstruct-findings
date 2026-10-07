// roc 2009-06 004afb50  unit: G3D::Shader  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004afb50
//
// 004afb50  56                   push esi
// 004afb51  57                   push edi
// 004afb52  8bf1                 mov esi, ecx
// 004afb54  33ff                 xor edi, edi
// 004afb56  397e04               cmp dword ptr [esi + 4], edi
// 004afb59  7e1b                 jle 0x4afb76
// 004afb5b  53                   push ebx
// 004afb5c  33db                 xor ebx, ebx
// 004afb5e  8bff                 mov edi, edi
// 004afb60  8b06                 mov eax, dword ptr [esi]
// 004afb62  8d4c0308             lea ecx, [ebx + eax + 8]
// 004afb66  ff15c4e48900         call dword ptr [0x89e4c4]
// 004afb6c  47                   inc edi
// 004afb6d  83c330               add ebx, 0x30
// 004afb70  3b7e04               cmp edi, dword ptr [esi + 4]
// 004afb73  7ceb                 jl 0x4afb60
// 004afb75  5b                   pop ebx
// 004afb76  8b0e                 mov ecx, dword ptr [esi]
// 004afb78  51                   push ecx
// 004afb79  e812b70b00           call 0x56b290
// 004afb7e  83c404               add esp, 4
// 004afb81  5f                   pop edi
// 004afb82  c70600000000         mov dword ptr [esi], 0
// 004afb88  c7460400000000       mov dword ptr [esi + 4], 0
// 004afb8f  c7460800000000       mov dword ptr [esi + 8], 0
// 004afb96  5e                   pop esi
// 004afb97  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??1?$Array@VUniformDeclaration@VertexAndPixelShader@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
