// roc 2010-06 004875f0  unit: G3D::VARArea  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004875f0
//
// 004875f0  d9e8                 fld1 
// 004875f2  56                   push esi
// 004875f3  8bf1                 mov esi, ecx
// 004875f5  dd5e30               fstp qword ptr [esi + 0x30]
// 004875f8  33c9                 xor ecx, ecx
// 004875fa  b801000000           mov eax, 1
// 004875ff  ba08000000           mov edx, 8
// 00487604  894e08               mov dword ptr [esi + 8], ecx
// 00487607  894e0c               mov dword ptr [esi + 0xc], ecx
// 0048760a  894e18               mov dword ptr [esi + 0x18], ecx
// 0048760d  884e29               mov byte ptr [esi + 0x29], cl
// 00487610  884e2b               mov byte ptr [esi + 0x2b], cl
// 00487613  884e3c               mov byte ptr [esi + 0x3c], cl
// 00487616  68a835a100           push 0xa135a8
// 0048761b  8d4e40               lea ecx, [esi + 0x40]
// 0048761e  c70620030000         mov dword ptr [esi], 0x320
// 00487624  c7460458020000       mov dword ptr [esi + 4], 0x258
// 0048762b  884610               mov byte ptr [esi + 0x10], al
// 0048762e  895614               mov dword ptr [esi + 0x14], edx
// 00487631  c7461c18000000       mov dword ptr [esi + 0x1c], 0x18
// 00487638  895620               mov dword ptr [esi + 0x20], edx
// 0048763b  894624               mov dword ptr [esi + 0x24], eax
// 0048763e  884628               mov byte ptr [esi + 0x28], al
// 00487641  88462a               mov byte ptr [esi + 0x2a], al
// 00487644  c7463855000000       mov dword ptr [esi + 0x38], 0x55
// 0048764b  88463d               mov byte ptr [esi + 0x3d], al
// 0048764e  88463e               mov byte ptr [esi + 0x3e], al
// 00487651  ff1510a49e00         call dword ptr [0x9ea410]
// 00487657  8bc6                 mov eax, esi
// 00487659  5e                   pop esi
// 0048765a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0Settings@GWindow@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
