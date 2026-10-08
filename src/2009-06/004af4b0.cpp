// from server: 100% by auto
// roc 2009-06 004af4b0  unit: G3D::Shader  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004af4b0
//
// 004af4b0  6aff                 push -1
// 004af4b2  68ed7f8500           push 0x857fed
// 004af4b7  64a100000000         mov eax, dword ptr fs:[0]
// 004af4bd  50                   push eax
// 004af4be  64892500000000       mov dword ptr fs:[0], esp
// 004af4c5  51                   push ecx
// 004af4c6  56                   push esi
// 004af4c7  8bf1                 mov esi, ecx
// 004af4c9  89742404             mov dword ptr [esp + 4], esi
// 004af4cd  807e6000             cmp byte ptr [esi + 0x60], 0
// 004af4d1  c744241003000000     mov dword ptr [esp + 0x10], 3
// 004af4d9  750a                 jne 0x4af4e5
// 004af4db  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004af4de  50                   push eax
// 004af4df  ff1574d2a300         call dword ptr [0xa3d274]
// 004af4e5  8d4e68               lea ecx, [esi + 0x68]
// 004af4e8  c644241002           mov byte ptr [esp + 0x10], 2
// 004af4ed  ff15c4e48900         call dword ptr [0x89e4c4]
// 004af4f3  8d4e44               lea ecx, [esi + 0x44]
// 004af4f6  c644241001           mov byte ptr [esp + 0x10], 1
// 004af4fb  ff15c4e48900         call dword ptr [0x89e4c4]
// 004af501  8d4e1c               lea ecx, [esi + 0x1c]
// 004af504  c644241000           mov byte ptr [esp + 0x10], 0
// 004af509  ff15c4e48900         call dword ptr [0x89e4c4]
// 004af50f  8bce                 mov ecx, esi
// 004af511  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004af519  ff15c4e48900         call dword ptr [0x89e4c4]
// 004af51f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004af523  5e                   pop esi
// 004af524  64890d00000000       mov dword ptr fs:[0], ecx
// 004af52b  83c410               add esp, 0x10
// 004af52e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??1GPUShader@VertexAndPixelShader@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
