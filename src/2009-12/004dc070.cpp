// roc 2009-12 004dc070  unit: G3D::Shader  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dc070
//
// 004dc070  6aff                 push -1
// 004dc072  68213f9300           push 0x933f21
// 004dc077  64a100000000         mov eax, dword ptr fs:[0]
// 004dc07d  50                   push eax
// 004dc07e  64892500000000       mov dword ptr fs:[0], esp
// 004dc085  51                   push ecx
// 004dc086  56                   push esi
// 004dc087  8bf1                 mov esi, ecx
// 004dc089  89742404             mov dword ptr [esp + 4], esi
// 004dc08d  ff15e8b69800         call dword ptr [0x98b6e8]
// 004dc093  8d4e1c               lea ecx, [esi + 0x1c]
// 004dc096  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004dc09e  ff15e8b69800         call dword ptr [0x98b6e8]
// 004dc0a4  8d4e44               lea ecx, [esi + 0x44]
// 004dc0a7  c644241001           mov byte ptr [esp + 0x10], 1
// 004dc0ac  ff15e8b69800         call dword ptr [0x98b6e8]
// 004dc0b2  8d4e68               lea ecx, [esi + 0x68]
// 004dc0b5  c644241002           mov byte ptr [esp + 0x10], 2
// 004dc0ba  ff15e8b69800         call dword ptr [0x98b6e8]
// 004dc0c0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004dc0c4  8bc6                 mov eax, esi
// 004dc0c6  5e                   pop esi
// 004dc0c7  64890d00000000       mov dword ptr fs:[0], ecx
// 004dc0ce  83c410               add esp, 0x10
// 004dc0d1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??0GPUShader@VertexAndPixelShader@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
