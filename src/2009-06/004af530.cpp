// from server: 100% by auto
// roc 2009-06 004af530  unit: G3D::Shader  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004af530
//
// 004af530  6aff                 push -1
// 004af532  6821808500           push 0x858021
// 004af537  64a100000000         mov eax, dword ptr fs:[0]
// 004af53d  50                   push eax
// 004af53e  64892500000000       mov dword ptr fs:[0], esp
// 004af545  51                   push ecx
// 004af546  56                   push esi
// 004af547  8bf1                 mov esi, ecx
// 004af549  89742404             mov dword ptr [esp + 4], esi
// 004af54d  ff15c0e48900         call dword ptr [0x89e4c0]
// 004af553  8d4e1c               lea ecx, [esi + 0x1c]
// 004af556  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004af55e  ff15c0e48900         call dword ptr [0x89e4c0]
// 004af564  8d4e44               lea ecx, [esi + 0x44]
// 004af567  c644241001           mov byte ptr [esp + 0x10], 1
// 004af56c  ff15c0e48900         call dword ptr [0x89e4c0]
// 004af572  8d4e68               lea ecx, [esi + 0x68]
// 004af575  c644241002           mov byte ptr [esp + 0x10], 2
// 004af57a  ff15c0e48900         call dword ptr [0x89e4c0]
// 004af580  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004af584  8bc6                 mov eax, esi
// 004af586  5e                   pop esi
// 004af587  64890d00000000       mov dword ptr fs:[0], ecx
// 004af58e  83c410               add esp, 0x10
// 004af591  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??0GPUShader@VertexAndPixelShader@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
