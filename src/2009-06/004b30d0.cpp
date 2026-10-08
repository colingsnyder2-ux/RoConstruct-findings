// from server: 100% by auto
// roc 2009-06 004b30d0  unit: G3D::VertexAndPixelShader  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b30d0
//
// 004b30d0  53                   push ebx
// 004b30d1  56                   push esi
// 004b30d2  8bf1                 mov esi, ecx
// 004b30d4  33db                 xor ebx, ebx
// 004b30d6  395e04               cmp dword ptr [esi + 4], ebx
// 004b30d9  7e32                 jle 0x4b310d
// 004b30db  57                   push edi
// 004b30dc  33ff                 xor edi, edi
// 004b30de  8bff                 mov edi, edi
// 004b30e0  8b06                 mov eax, dword ptr [esi]
// 004b30e2  03c7                 add eax, edi
// 004b30e4  83782401             cmp dword ptr [eax + 0x24], 1
// 004b30e8  7519                 jne 0x4b3103
// 004b30ea  83782003             cmp dword ptr [eax + 0x20], 3
// 004b30ee  7513                 jne 0x4b3103
// 004b30f0  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004b30f3  8d4828               lea ecx, [eax + 0x28]
// 004b30f6  8b442410             mov eax, dword ptr [esp + 0x10]
// 004b30fa  51                   push ecx
// 004b30fb  52                   push edx
// 004b30fc  50                   push eax
// 004b30fd  ff15bcd1a300         call dword ptr [0xa3d1bc]
// 004b3103  43                   inc ebx
// 004b3104  83c738               add edi, 0x38
// 004b3107  3b5e04               cmp ebx, dword ptr [esi + 4]
// 004b310a  7cd4                 jl 0x4b30e0
// 004b310c  5f                   pop edi
// 004b310d  5e                   pop esi
// 004b310e  5b                   pop ebx
// 004b310f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?nvBind@BindingTable@GPUProgram@G3D@@QBEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
