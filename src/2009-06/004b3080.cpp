// roc 2009-06 004b3080  unit: G3D::VertexAndPixelShader  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b3080
//
// 004b3080  53                   push ebx
// 004b3081  56                   push esi
// 004b3082  8bf1                 mov esi, ecx
// 004b3084  33db                 xor ebx, ebx
// 004b3086  395e04               cmp dword ptr [esi + 4], ebx
// 004b3089  7e32                 jle 0x4b30bd
// 004b308b  57                   push edi
// 004b308c  33ff                 xor edi, edi
// 004b308e  8bff                 mov edi, edi
// 004b3090  8b06                 mov eax, dword ptr [esi]
// 004b3092  03c7                 add eax, edi
// 004b3094  83782401             cmp dword ptr [eax + 0x24], 1
// 004b3098  7519                 jne 0x4b30b3
// 004b309a  83782003             cmp dword ptr [eax + 0x20], 3
// 004b309e  7513                 jne 0x4b30b3
// 004b30a0  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004b30a3  8d4828               lea ecx, [eax + 0x28]
// 004b30a6  8b442410             mov eax, dword ptr [esp + 0x10]
// 004b30aa  51                   push ecx
// 004b30ab  52                   push edx
// 004b30ac  50                   push eax
// 004b30ad  ff15dcd1a300         call dword ptr [0xa3d1dc]
// 004b30b3  43                   inc ebx
// 004b30b4  83c738               add edi, 0x38
// 004b30b7  3b5e04               cmp ebx, dword ptr [esi + 4]
// 004b30ba  7cd4                 jl 0x4b3090
// 004b30bc  5f                   pop edi
// 004b30bd  5e                   pop esi
// 004b30be  5b                   pop ebx
// 004b30bf  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?nvBind@BindingTable@GPUProgram@G3D@@QBEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
