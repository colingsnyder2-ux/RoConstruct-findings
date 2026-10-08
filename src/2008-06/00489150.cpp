// from server: 100% by auto
// roc 2008-06 00489150  unit: G3D::VertexAndPixelShader  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489150
//
// 00489150  53                   push ebx
// 00489151  56                   push esi
// 00489152  8bf1                 mov esi, ecx
// 00489154  33db                 xor ebx, ebx
// 00489156  395e04               cmp dword ptr [esi + 4], ebx
// 00489159  7e32                 jle 0x48918d
// 0048915b  57                   push edi
// 0048915c  33ff                 xor edi, edi
// 0048915e  8bff                 mov edi, edi
// 00489160  8b06                 mov eax, dword ptr [esi]
// 00489162  03c7                 add eax, edi
// 00489164  83782401             cmp dword ptr [eax + 0x24], 1
// 00489168  7519                 jne 0x489183
// 0048916a  83782003             cmp dword ptr [eax + 0x20], 3
// 0048916e  7513                 jne 0x489183
// 00489170  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00489173  8d4828               lea ecx, [eax + 0x28]
// 00489176  8b442410             mov eax, dword ptr [esp + 0x10]
// 0048917a  51                   push ecx
// 0048917b  52                   push edx
// 0048917c  50                   push eax
// 0048917d  ff155cf89600         call dword ptr [0x96f85c]
// 00489183  43                   inc ebx
// 00489184  83c738               add edi, 0x38
// 00489187  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0048918a  7cd4                 jl 0x489160
// 0048918c  5f                   pop edi
// 0048918d  5e                   pop esi
// 0048918e  5b                   pop ebx
// 0048918f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?nvBind@BindingTable@GPUProgram@G3D@@QBEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
