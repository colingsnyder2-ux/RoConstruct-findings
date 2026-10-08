// from server: 100% by auto
// roc 2010-06 004984a0  unit: G3D::Shader  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004984a0
//
// 004984a0  6aff                 push -1
// 004984a2  68816d9800           push 0x986d81
// 004984a7  64a100000000         mov eax, dword ptr fs:[0]
// 004984ad  50                   push eax
// 004984ae  64892500000000       mov dword ptr fs:[0], esp
// 004984b5  51                   push ecx
// 004984b6  56                   push esi
// 004984b7  8bf1                 mov esi, ecx
// 004984b9  89742404             mov dword ptr [esp + 4], esi
// 004984bd  ff1504a49e00         call dword ptr [0x9ea404]
// 004984c3  8d4e1c               lea ecx, [esi + 0x1c]
// 004984c6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004984ce  ff1504a49e00         call dword ptr [0x9ea404]
// 004984d4  8d4e44               lea ecx, [esi + 0x44]
// 004984d7  c644241001           mov byte ptr [esp + 0x10], 1
// 004984dc  ff1504a49e00         call dword ptr [0x9ea404]
// 004984e2  8d4e68               lea ecx, [esi + 0x68]
// 004984e5  c644241002           mov byte ptr [esp + 0x10], 2
// 004984ea  ff1504a49e00         call dword ptr [0x9ea404]
// 004984f0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004984f4  8bc6                 mov eax, esi
// 004984f6  5e                   pop esi
// 004984f7  64890d00000000       mov dword ptr fs:[0], ecx
// 004984fe  83c410               add esp, 0x10
// 00498501  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??0GPUShader@VertexAndPixelShader@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
