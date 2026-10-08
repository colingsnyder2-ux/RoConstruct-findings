// roc 2009-12 004dfe30  unit: G3D::VertexAndPixelShader  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dfe30
//
// 004dfe30  53                   push ebx
// 004dfe31  56                   push esi
// 004dfe32  8bf1                 mov esi, ecx
// 004dfe34  33db                 xor ebx, ebx
// 004dfe36  395e04               cmp dword ptr [esi + 4], ebx
// 004dfe39  7e32                 jle 0x4dfe6d
// 004dfe3b  57                   push edi
// 004dfe3c  33ff                 xor edi, edi
// 004dfe3e  8bff                 mov edi, edi
// 004dfe40  8b06                 mov eax, dword ptr [esi]
// 004dfe42  03c7                 add eax, edi
// 004dfe44  83782401             cmp dword ptr [eax + 0x24], 1
// 004dfe48  7519                 jne 0x4dfe63
// 004dfe4a  83782003             cmp dword ptr [eax + 0x20], 3
// 004dfe4e  7513                 jne 0x4dfe63
// 004dfe50  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004dfe53  8d4828               lea ecx, [eax + 0x28]
// 004dfe56  8b442410             mov eax, dword ptr [esp + 0x10]
// 004dfe5a  51                   push ecx
// 004dfe5b  52                   push edx
// 004dfe5c  50                   push eax
// 004dfe5d  ff156cd9b700         call dword ptr [0xb7d96c]
// 004dfe63  43                   inc ebx
// 004dfe64  83c738               add edi, 0x38
// 004dfe67  3b5e04               cmp ebx, dword ptr [esi + 4]
// 004dfe6a  7cd4                 jl 0x4dfe40
// 004dfe6c  5f                   pop edi
// 004dfe6d  5e                   pop esi
// 004dfe6e  5b                   pop ebx
// 004dfe6f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?nvBind@BindingTable@GPUProgram@G3D@@QBEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
