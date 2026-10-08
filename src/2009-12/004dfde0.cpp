// roc 2009-12 004dfde0  unit: G3D::VertexAndPixelShader  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dfde0
//
// 004dfde0  53                   push ebx
// 004dfde1  56                   push esi
// 004dfde2  8bf1                 mov esi, ecx
// 004dfde4  33db                 xor ebx, ebx
// 004dfde6  395e04               cmp dword ptr [esi + 4], ebx
// 004dfde9  7e32                 jle 0x4dfe1d
// 004dfdeb  57                   push edi
// 004dfdec  33ff                 xor edi, edi
// 004dfdee  8bff                 mov edi, edi
// 004dfdf0  8b06                 mov eax, dword ptr [esi]
// 004dfdf2  03c7                 add eax, edi
// 004dfdf4  83782401             cmp dword ptr [eax + 0x24], 1
// 004dfdf8  7519                 jne 0x4dfe13
// 004dfdfa  83782003             cmp dword ptr [eax + 0x20], 3
// 004dfdfe  7513                 jne 0x4dfe13
// 004dfe00  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004dfe03  8d4828               lea ecx, [eax + 0x28]
// 004dfe06  8b442410             mov eax, dword ptr [esp + 0x10]
// 004dfe0a  51                   push ecx
// 004dfe0b  52                   push edx
// 004dfe0c  50                   push eax
// 004dfe0d  ff158cd9b700         call dword ptr [0xb7d98c]
// 004dfe13  43                   inc ebx
// 004dfe14  83c738               add edi, 0x38
// 004dfe17  3b5e04               cmp ebx, dword ptr [esi + 4]
// 004dfe1a  7cd4                 jl 0x4dfdf0
// 004dfe1c  5f                   pop edi
// 004dfe1d  5e                   pop esi
// 004dfe1e  5b                   pop ebx
// 004dfe1f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?nvBind@BindingTable@GPUProgram@G3D@@QBEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
