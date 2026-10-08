// from server: 100% by auto
// roc 2007-08 00457d30  unit: G3D::GImage  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00457d30
//
// 00457d30  d9e8                 fld1 
// 00457d32  56                   push esi
// 00457d33  8bf1                 mov esi, ecx
// 00457d35  dd5e30               fstp qword ptr [esi + 0x30]
// 00457d38  33c9                 xor ecx, ecx
// 00457d3a  b801000000           mov eax, 1
// 00457d3f  ba08000000           mov edx, 8
// 00457d44  894e08               mov dword ptr [esi + 8], ecx
// 00457d47  894e0c               mov dword ptr [esi + 0xc], ecx
// 00457d4a  894e18               mov dword ptr [esi + 0x18], ecx
// 00457d4d  884e29               mov byte ptr [esi + 0x29], cl
// 00457d50  884e2b               mov byte ptr [esi + 0x2b], cl
// 00457d53  884e3c               mov byte ptr [esi + 0x3c], cl
// 00457d56  6888317900           push 0x793188
// 00457d5b  8d4e40               lea ecx, [esi + 0x40]
// 00457d5e  c70620030000         mov dword ptr [esi], 0x320
// 00457d64  c7460458020000       mov dword ptr [esi + 4], 0x258
// 00457d6b  884610               mov byte ptr [esi + 0x10], al
// 00457d6e  895614               mov dword ptr [esi + 0x14], edx
// 00457d71  c7461c18000000       mov dword ptr [esi + 0x1c], 0x18
// 00457d78  895620               mov dword ptr [esi + 0x20], edx
// 00457d7b  894624               mov dword ptr [esi + 0x24], eax
// 00457d7e  884628               mov byte ptr [esi + 0x28], al
// 00457d81  88462a               mov byte ptr [esi + 0x2a], al
// 00457d84  c7463855000000       mov dword ptr [esi + 0x38], 0x55
// 00457d8b  88463d               mov byte ptr [esi + 0x3d], al
// 00457d8e  88463e               mov byte ptr [esi + 0x3e], al
// 00457d91  ff1598e67700         call dword ptr [0x77e698]
// 00457d97  8bc6                 mov eax, esi
// 00457d99  5e                   pop esi
// 00457d9a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0Settings@GWindow@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
