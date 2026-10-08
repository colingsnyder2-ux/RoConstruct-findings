// roc 2009-12 004dbff0  unit: G3D::Shader  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dbff0
//
// 004dbff0  6aff                 push -1
// 004dbff2  68ed3e9300           push 0x933eed
// 004dbff7  64a100000000         mov eax, dword ptr fs:[0]
// 004dbffd  50                   push eax
// 004dbffe  64892500000000       mov dword ptr fs:[0], esp
// 004dc005  51                   push ecx
// 004dc006  56                   push esi
// 004dc007  8bf1                 mov esi, ecx
// 004dc009  89742404             mov dword ptr [esp + 4], esi
// 004dc00d  807e6000             cmp byte ptr [esi + 0x60], 0
// 004dc011  c744241003000000     mov dword ptr [esp + 0x10], 3
// 004dc019  750a                 jne 0x4dc025
// 004dc01b  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004dc01e  50                   push eax
// 004dc01f  ff1524dab700         call dword ptr [0xb7da24]
// 004dc025  8d4e68               lea ecx, [esi + 0x68]
// 004dc028  c644241002           mov byte ptr [esp + 0x10], 2
// 004dc02d  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dc033  8d4e44               lea ecx, [esi + 0x44]
// 004dc036  c644241001           mov byte ptr [esp + 0x10], 1
// 004dc03b  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dc041  8d4e1c               lea ecx, [esi + 0x1c]
// 004dc044  c644241000           mov byte ptr [esp + 0x10], 0
// 004dc049  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dc04f  8bce                 mov ecx, esi
// 004dc051  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004dc059  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dc05f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004dc063  5e                   pop esi
// 004dc064  64890d00000000       mov dword ptr fs:[0], ecx
// 004dc06b  83c410               add esp, 0x10
// 004dc06e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??1GPUShader@VertexAndPixelShader@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
