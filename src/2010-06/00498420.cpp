// roc 2010-06 00498420  unit: G3D::Shader  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00498420
//
// 00498420  6aff                 push -1
// 00498422  684d6d9800           push 0x986d4d
// 00498427  64a100000000         mov eax, dword ptr fs:[0]
// 0049842d  50                   push eax
// 0049842e  64892500000000       mov dword ptr fs:[0], esp
// 00498435  51                   push ecx
// 00498436  56                   push esi
// 00498437  8bf1                 mov esi, ecx
// 00498439  89742404             mov dword ptr [esp + 4], esi
// 0049843d  807e6000             cmp byte ptr [esi + 0x60], 0
// 00498441  c744241003000000     mov dword ptr [esp + 0x10], 3
// 00498449  750a                 jne 0x498455
// 0049844b  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0049844e  50                   push eax
// 0049844f  ff15b43ac000         call dword ptr [0xc03ab4]
// 00498455  8d4e68               lea ecx, [esi + 0x68]
// 00498458  c644241002           mov byte ptr [esp + 0x10], 2
// 0049845d  ff1500a49e00         call dword ptr [0x9ea400]
// 00498463  8d4e44               lea ecx, [esi + 0x44]
// 00498466  c644241001           mov byte ptr [esp + 0x10], 1
// 0049846b  ff1500a49e00         call dword ptr [0x9ea400]
// 00498471  8d4e1c               lea ecx, [esi + 0x1c]
// 00498474  c644241000           mov byte ptr [esp + 0x10], 0
// 00498479  ff1500a49e00         call dword ptr [0x9ea400]
// 0049847f  8bce                 mov ecx, esi
// 00498481  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00498489  ff1500a49e00         call dword ptr [0x9ea400]
// 0049848f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00498493  5e                   pop esi
// 00498494  64890d00000000       mov dword ptr fs:[0], ecx
// 0049849b  83c410               add esp, 0x10
// 0049849e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??1GPUShader@VertexAndPixelShader@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
