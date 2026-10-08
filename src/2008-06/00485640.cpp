// from server: 100% by auto
// roc 2008-06 00485640  unit: G3D::Shader  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00485640
//
// 00485640  6aff                 push -1
// 00485642  6891557c00           push 0x7c5591
// 00485647  64a100000000         mov eax, dword ptr fs:[0]
// 0048564d  50                   push eax
// 0048564e  64892500000000       mov dword ptr fs:[0], esp
// 00485655  51                   push ecx
// 00485656  56                   push esi
// 00485657  8bf1                 mov esi, ecx
// 00485659  89742404             mov dword ptr [esp + 4], esi
// 0048565d  ff1560248000         call dword ptr [0x802460]
// 00485663  8d4e1c               lea ecx, [esi + 0x1c]
// 00485666  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048566e  ff1560248000         call dword ptr [0x802460]
// 00485674  8d4e44               lea ecx, [esi + 0x44]
// 00485677  c644241001           mov byte ptr [esp + 0x10], 1
// 0048567c  ff1560248000         call dword ptr [0x802460]
// 00485682  8d4e68               lea ecx, [esi + 0x68]
// 00485685  c644241002           mov byte ptr [esp + 0x10], 2
// 0048568a  ff1560248000         call dword ptr [0x802460]
// 00485690  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00485694  8bc6                 mov eax, esi
// 00485696  5e                   pop esi
// 00485697  64890d00000000       mov dword ptr fs:[0], ecx
// 0048569e  83c410               add esp, 0x10
// 004856a1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??0GPUShader@VertexAndPixelShader@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
