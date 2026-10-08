// from server: 100% by auto
// roc 2010-06 0049c180  unit: G3D::VertexAndPixelShader  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0049c180
//
// 0049c180  53                   push ebx
// 0049c181  56                   push esi
// 0049c182  8bf1                 mov esi, ecx
// 0049c184  33db                 xor ebx, ebx
// 0049c186  395e04               cmp dword ptr [esi + 4], ebx
// 0049c189  7e32                 jle 0x49c1bd
// 0049c18b  57                   push edi
// 0049c18c  33ff                 xor edi, edi
// 0049c18e  8bff                 mov edi, edi
// 0049c190  8b06                 mov eax, dword ptr [esi]
// 0049c192  03c7                 add eax, edi
// 0049c194  83782401             cmp dword ptr [eax + 0x24], 1
// 0049c198  7519                 jne 0x49c1b3
// 0049c19a  83782003             cmp dword ptr [eax + 0x20], 3
// 0049c19e  7513                 jne 0x49c1b3
// 0049c1a0  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0049c1a3  8d4828               lea ecx, [eax + 0x28]
// 0049c1a6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0049c1aa  51                   push ecx
// 0049c1ab  52                   push edx
// 0049c1ac  50                   push eax
// 0049c1ad  ff151c3ac000         call dword ptr [0xc03a1c]
// 0049c1b3  43                   inc ebx
// 0049c1b4  83c738               add edi, 0x38
// 0049c1b7  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0049c1ba  7cd4                 jl 0x49c190
// 0049c1bc  5f                   pop edi
// 0049c1bd  5e                   pop esi
// 0049c1be  5b                   pop ebx
// 0049c1bf  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?nvBind@BindingTable@GPUProgram@G3D@@QBEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
