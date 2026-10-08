// from server: 100% by auto
// roc 2009-06 0045a030  unit: G3D::Hashable  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045a030
//
// 0045a030  d9e8                 fld1 
// 0045a032  56                   push esi
// 0045a033  8bf1                 mov esi, ecx
// 0045a035  dd5e30               fstp qword ptr [esi + 0x30]
// 0045a038  33c9                 xor ecx, ecx
// 0045a03a  b801000000           mov eax, 1
// 0045a03f  ba08000000           mov edx, 8
// 0045a044  894e08               mov dword ptr [esi + 8], ecx
// 0045a047  894e0c               mov dword ptr [esi + 0xc], ecx
// 0045a04a  894e18               mov dword ptr [esi + 0x18], ecx
// 0045a04d  884e29               mov byte ptr [esi + 0x29], cl
// 0045a050  884e2b               mov byte ptr [esi + 0x2b], cl
// 0045a053  884e3c               mov byte ptr [esi + 0x3c], cl
// 0045a056  6818a18b00           push 0x8ba118
// 0045a05b  8d4e40               lea ecx, [esi + 0x40]
// 0045a05e  c70620030000         mov dword ptr [esi], 0x320
// 0045a064  c7460458020000       mov dword ptr [esi + 4], 0x258
// 0045a06b  884610               mov byte ptr [esi + 0x10], al
// 0045a06e  895614               mov dword ptr [esi + 0x14], edx
// 0045a071  c7461c18000000       mov dword ptr [esi + 0x1c], 0x18
// 0045a078  895620               mov dword ptr [esi + 0x20], edx
// 0045a07b  894624               mov dword ptr [esi + 0x24], eax
// 0045a07e  884628               mov byte ptr [esi + 0x28], al
// 0045a081  88462a               mov byte ptr [esi + 0x2a], al
// 0045a084  c7463855000000       mov dword ptr [esi + 0x38], 0x55
// 0045a08b  88463d               mov byte ptr [esi + 0x3d], al
// 0045a08e  88463e               mov byte ptr [esi + 0x3e], al
// 0045a091  ff15b4e48900         call dword ptr [0x89e4b4]
// 0045a097  8bc6                 mov eax, esi
// 0045a099  5e                   pop esi
// 0045a09a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0Settings@GWindow@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
