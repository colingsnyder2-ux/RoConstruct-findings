// roc 2007-08 00486120  unit: G3D::VertexAndPixelShader  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00486120
//
// 00486120  53                   push ebx
// 00486121  56                   push esi
// 00486122  8bf1                 mov esi, ecx
// 00486124  33db                 xor ebx, ebx
// 00486126  395e04               cmp dword ptr [esi + 4], ebx
// 00486129  7e34                 jle 0x48615f
// 0048612b  57                   push edi
// 0048612c  33ff                 xor edi, edi
// 0048612e  8bff                 mov edi, edi
// 00486130  8b06                 mov eax, dword ptr [esi]
// 00486132  03c7                 add eax, edi
// 00486134  83782401             cmp dword ptr [eax + 0x24], 1
// 00486138  7519                 jne 0x486153
// 0048613a  83782003             cmp dword ptr [eax + 0x20], 3
// 0048613e  7513                 jne 0x486153
// 00486140  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00486143  8d4828               lea ecx, [eax + 0x28]
// 00486146  8b442410             mov eax, dword ptr [esp + 0x10]
// 0048614a  51                   push ecx
// 0048614b  52                   push edx
// 0048614c  50                   push eax
// 0048614d  ff1548d98b00         call dword ptr [0x8bd948]
// 00486153  83c301               add ebx, 1
// 00486156  83c738               add edi, 0x38
// 00486159  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0048615c  7cd2                 jl 0x486130
// 0048615e  5f                   pop edi
// 0048615f  5e                   pop esi
// 00486160  5b                   pop ebx
// 00486161  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?nvBind@BindingTable@GPUProgram@G3D@@QBEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
