// from server: 100% by auto
// roc 2008-06 00489100  unit: G3D::VertexAndPixelShader  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489100
//
// 00489100  53                   push ebx
// 00489101  56                   push esi
// 00489102  8bf1                 mov esi, ecx
// 00489104  33db                 xor ebx, ebx
// 00489106  395e04               cmp dword ptr [esi + 4], ebx
// 00489109  7e32                 jle 0x48913d
// 0048910b  57                   push edi
// 0048910c  33ff                 xor edi, edi
// 0048910e  8bff                 mov edi, edi
// 00489110  8b06                 mov eax, dword ptr [esi]
// 00489112  03c7                 add eax, edi
// 00489114  83782401             cmp dword ptr [eax + 0x24], 1
// 00489118  7519                 jne 0x489133
// 0048911a  83782003             cmp dword ptr [eax + 0x20], 3
// 0048911e  7513                 jne 0x489133
// 00489120  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00489123  8d4828               lea ecx, [eax + 0x28]
// 00489126  8b442410             mov eax, dword ptr [esp + 0x10]
// 0048912a  51                   push ecx
// 0048912b  52                   push edx
// 0048912c  50                   push eax
// 0048912d  ff157cf89600         call dword ptr [0x96f87c]
// 00489133  43                   inc ebx
// 00489134  83c738               add edi, 0x38
// 00489137  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0048913a  7cd4                 jl 0x489110
// 0048913c  5f                   pop edi
// 0048913d  5e                   pop esi
// 0048913e  5b                   pop ebx
// 0048913f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?nvBind@BindingTable@GPUProgram@G3D@@QBEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
