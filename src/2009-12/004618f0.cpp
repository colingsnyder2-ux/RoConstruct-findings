// roc 2009-12 004618f0  unit: G3D::Hashable  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004618f0
//
// 004618f0  d9e8                 fld1 
// 004618f2  56                   push esi
// 004618f3  8bf1                 mov esi, ecx
// 004618f5  dd5e30               fstp qword ptr [esi + 0x30]
// 004618f8  33c9                 xor ecx, ecx
// 004618fa  b801000000           mov eax, 1
// 004618ff  ba08000000           mov edx, 8
// 00461904  894e08               mov dword ptr [esi + 8], ecx
// 00461907  894e0c               mov dword ptr [esi + 0xc], ecx
// 0046190a  894e18               mov dword ptr [esi + 0x18], ecx
// 0046190d  884e29               mov byte ptr [esi + 0x29], cl
// 00461910  884e2b               mov byte ptr [esi + 0x2b], cl
// 00461913  884e3c               mov byte ptr [esi + 0x3c], cl
// 00461916  6810e69a00           push 0x9ae610
// 0046191b  8d4e40               lea ecx, [esi + 0x40]
// 0046191e  c70620030000         mov dword ptr [esi], 0x320
// 00461924  c7460458020000       mov dword ptr [esi + 4], 0x258
// 0046192b  884610               mov byte ptr [esi + 0x10], al
// 0046192e  895614               mov dword ptr [esi + 0x14], edx
// 00461931  c7461c18000000       mov dword ptr [esi + 0x1c], 0x18
// 00461938  895620               mov dword ptr [esi + 0x20], edx
// 0046193b  894624               mov dword ptr [esi + 0x24], eax
// 0046193e  884628               mov byte ptr [esi + 0x28], al
// 00461941  88462a               mov byte ptr [esi + 0x2a], al
// 00461944  c7463855000000       mov dword ptr [esi + 0x38], 0x55
// 0046194b  88463d               mov byte ptr [esi + 0x3d], al
// 0046194e  88463e               mov byte ptr [esi + 0x3e], al
// 00461951  ff15f4b69800         call dword ptr [0x98b6f4]
// 00461957  8bc6                 mov eax, esi
// 00461959  5e                   pop esi
// 0046195a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0Settings@GWindow@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
