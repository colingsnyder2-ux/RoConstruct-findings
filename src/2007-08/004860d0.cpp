// roc 2007-08 004860d0  unit: G3D::VertexAndPixelShader  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004860d0
//
// 004860d0  53                   push ebx
// 004860d1  56                   push esi
// 004860d2  8bf1                 mov esi, ecx
// 004860d4  33db                 xor ebx, ebx
// 004860d6  395e04               cmp dword ptr [esi + 4], ebx
// 004860d9  7e34                 jle 0x48610f
// 004860db  57                   push edi
// 004860dc  33ff                 xor edi, edi
// 004860de  8bff                 mov edi, edi
// 004860e0  8b06                 mov eax, dword ptr [esi]
// 004860e2  03c7                 add eax, edi
// 004860e4  83782401             cmp dword ptr [eax + 0x24], 1
// 004860e8  7519                 jne 0x486103
// 004860ea  83782003             cmp dword ptr [eax + 0x20], 3
// 004860ee  7513                 jne 0x486103
// 004860f0  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004860f3  8d4828               lea ecx, [eax + 0x28]
// 004860f6  8b442410             mov eax, dword ptr [esp + 0x10]
// 004860fa  51                   push ecx
// 004860fb  52                   push edx
// 004860fc  50                   push eax
// 004860fd  ff1568d98b00         call dword ptr [0x8bd968]
// 00486103  83c301               add ebx, 1
// 00486106  83c738               add edi, 0x38
// 00486109  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0048610c  7cd2                 jl 0x4860e0
// 0048610e  5f                   pop edi
// 0048610f  5e                   pop esi
// 00486110  5b                   pop ebx
// 00486111  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?nvBind@BindingTable@GPUProgram@G3D@@QBEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
