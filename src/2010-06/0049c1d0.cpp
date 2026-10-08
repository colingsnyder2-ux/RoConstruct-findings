// from server: 100% by auto
// roc 2010-06 0049c1d0  unit: G3D::VertexAndPixelShader  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0049c1d0
//
// 0049c1d0  53                   push ebx
// 0049c1d1  56                   push esi
// 0049c1d2  8bf1                 mov esi, ecx
// 0049c1d4  33db                 xor ebx, ebx
// 0049c1d6  395e04               cmp dword ptr [esi + 4], ebx
// 0049c1d9  7e32                 jle 0x49c20d
// 0049c1db  57                   push edi
// 0049c1dc  33ff                 xor edi, edi
// 0049c1de  8bff                 mov edi, edi
// 0049c1e0  8b06                 mov eax, dword ptr [esi]
// 0049c1e2  03c7                 add eax, edi
// 0049c1e4  83782401             cmp dword ptr [eax + 0x24], 1
// 0049c1e8  7519                 jne 0x49c203
// 0049c1ea  83782003             cmp dword ptr [eax + 0x20], 3
// 0049c1ee  7513                 jne 0x49c203
// 0049c1f0  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0049c1f3  8d4828               lea ecx, [eax + 0x28]
// 0049c1f6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0049c1fa  51                   push ecx
// 0049c1fb  52                   push edx
// 0049c1fc  50                   push eax
// 0049c1fd  ff15fc39c000         call dword ptr [0xc039fc]
// 0049c203  43                   inc ebx
// 0049c204  83c738               add edi, 0x38
// 0049c207  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0049c20a  7cd4                 jl 0x49c1e0
// 0049c20c  5f                   pop edi
// 0049c20d  5e                   pop esi
// 0049c20e  5b                   pop ebx
// 0049c20f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?nvBind@BindingTable@GPUProgram@G3D@@QBEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
