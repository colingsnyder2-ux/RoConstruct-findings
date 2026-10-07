// roc 2008-06 0045ace0  unit: G3D::GImage  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ace0
//
// 0045ace0  d9e8                 fld1 
// 0045ace2  56                   push esi
// 0045ace3  8bf1                 mov esi, ecx
// 0045ace5  dd5e30               fstp qword ptr [esi + 0x30]
// 0045ace8  33c9                 xor ecx, ecx
// 0045acea  b801000000           mov eax, 1
// 0045acef  ba08000000           mov edx, 8
// 0045acf4  894e08               mov dword ptr [esi + 8], ecx
// 0045acf7  894e0c               mov dword ptr [esi + 0xc], ecx
// 0045acfa  894e18               mov dword ptr [esi + 0x18], ecx
// 0045acfd  884e29               mov byte ptr [esi + 0x29], cl
// 0045ad00  884e2b               mov byte ptr [esi + 0x2b], cl
// 0045ad03  884e3c               mov byte ptr [esi + 0x3c], cl
// 0045ad06  6860978100           push 0x819760
// 0045ad0b  8d4e40               lea ecx, [esi + 0x40]
// 0045ad0e  c70620030000         mov dword ptr [esi], 0x320
// 0045ad14  c7460458020000       mov dword ptr [esi + 4], 0x258
// 0045ad1b  884610               mov byte ptr [esi + 0x10], al
// 0045ad1e  895614               mov dword ptr [esi + 0x14], edx
// 0045ad21  c7461c18000000       mov dword ptr [esi + 0x1c], 0x18
// 0045ad28  895620               mov dword ptr [esi + 0x20], edx
// 0045ad2b  894624               mov dword ptr [esi + 0x24], eax
// 0045ad2e  884628               mov byte ptr [esi + 0x28], al
// 0045ad31  88462a               mov byte ptr [esi + 0x2a], al
// 0045ad34  c7463855000000       mov dword ptr [esi + 0x38], 0x55
// 0045ad3b  88463d               mov byte ptr [esi + 0x3d], al
// 0045ad3e  88463e               mov byte ptr [esi + 0x3e], al
// 0045ad41  ff1558248000         call dword ptr [0x802458]
// 0045ad47  8bc6                 mov eax, esi
// 0045ad49  5e                   pop esi
// 0045ad4a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0Settings@GWindow@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
