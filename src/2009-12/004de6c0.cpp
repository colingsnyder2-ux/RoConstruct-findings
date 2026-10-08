// roc 2009-12 004de6c0  unit: G3D::Shader  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004de6c0
//
// 004de6c0  6aff                 push -1
// 004de6c2  68a9429300           push 0x9342a9
// 004de6c7  64a100000000         mov eax, dword ptr fs:[0]
// 004de6cd  50                   push eax
// 004de6ce  64892500000000       mov dword ptr fs:[0], esp
// 004de6d5  51                   push ecx
// 004de6d6  56                   push esi
// 004de6d7  8bf1                 mov esi, ecx
// 004de6d9  89742404             mov dword ptr [esp + 4], esi
// 004de6dd  c706849a9b00         mov dword ptr [esi], 0x9b9a84
// 004de6e3  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 004de6e9  50                   push eax
// 004de6ea  c744241408000000     mov dword ptr [esp + 0x14], 8
// 004de6f2  ff1524dab700         call dword ptr [0xb7da24]
// 004de6f8  8d8ea0010000         lea ecx, [esi + 0x1a0]
// 004de6fe  c7869c0100009c789b00 mov dword ptr [esi + 0x19c], 0x9b789c
// 004de708  c644241007           mov byte ptr [esp + 0x10], 7
// 004de70d  c701a4659b00         mov dword ptr [ecx], 0x9b65a4
// 004de713  e8f85dffff           call 0x4d4510
// 004de718  8d8e90010000         lea ecx, [esi + 0x190]
// 004de71e  c644241006           mov byte ptr [esp + 0x10], 6
// 004de723  e868dfffff           call 0x4dc690
// 004de728  8d8e70010000         lea ecx, [esi + 0x170]
// 004de72e  c644241005           mov byte ptr [esp + 0x10], 5
// 004de733  ff15e4b69800         call dword ptr [0x98b6e4]
// 004de739  8d8e54010000         lea ecx, [esi + 0x154]
// 004de73f  c644241004           mov byte ptr [esp + 0x10], 4
// 004de744  ff15e4b69800         call dword ptr [0x98b6e4]
// 004de74a  8d8e38010000         lea ecx, [esi + 0x138]
// 004de750  c644241003           mov byte ptr [esp + 0x10], 3
// 004de755  ff15e4b69800         call dword ptr [0x98b6e4]
// 004de75b  8d8e1c010000         lea ecx, [esi + 0x11c]
// 004de761  c644241002           mov byte ptr [esp + 0x10], 2
// 004de766  ff15e4b69800         call dword ptr [0x98b6e4]
// 004de76c  8d8e90000000         lea ecx, [esi + 0x90]
// 004de772  c644241001           mov byte ptr [esp + 0x10], 1
// 004de777  e874d8ffff           call 0x4dbff0
// 004de77c  8d4e0c               lea ecx, [esi + 0xc]
// 004de77f  c644241000           mov byte ptr [esp + 0x10], 0
// 004de784  e867d8ffff           call 0x4dbff0
// 004de789  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004de78d  c706a0559b00         mov dword ptr [esi], 0x9b55a0
// 004de793  5e                   pop esi
// 004de794  64890d00000000       mov dword ptr fs:[0], ecx
// 004de79b  83c410               add esp, 0x10
// 004de79e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??1VertexAndPixelShader@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
