// from server: 100% by auto
// roc 2010-06 009c5980  unit: seg_009c0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5980
//
// 009c5980  6a44                 push 0x44
// 009c5982  e81920deff           call 0x7a79a0
// 009c5987  33c9                 xor ecx, ecx
// 009c5989  83c404               add esp, 4
// 009c598c  3bc1                 cmp eax, ecx
// 009c598e  745f                 je 0x9c59ef
// 009c5990  ba20000000           mov edx, 0x20
// 009c5995  884804               mov byte ptr [eax + 4], cl
// 009c5998  894810               mov dword ptr [eax + 0x10], ecx
// 009c599b  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c599e  895020               mov dword ptr [eax + 0x20], edx
// 009c59a1  895024               mov dword ptr [eax + 0x24], edx
// 009c59a4  895028               mov dword ptr [eax + 0x28], edx
// 009c59a7  89502c               mov dword ptr [eax + 0x2c], edx
// 009c59aa  894830               mov dword ptr [eax + 0x30], ecx
// 009c59ad  894834               mov dword ptr [eax + 0x34], ecx
// 009c59b0  884840               mov byte ptr [eax + 0x40], cl
// 009c59b3  8a0dd071b800         mov cl, byte ptr [0xb871d0]
// 009c59b9  ba80000000           mov edx, 0x80
// 009c59be  c70004000000         mov dword ptr [eax], 4
// 009c59c4  c7400818000000       mov dword ptr [eax + 8], 0x18
// 009c59cb  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 009c59d2  c7401414880000       mov dword ptr [eax + 0x14], 0x8814
// 009c59d9  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 009c59e0  895038               mov dword ptr [eax + 0x38], edx
// 009c59e3  89503c               mov dword ptr [eax + 0x3c], edx
// 009c59e6  884841               mov byte ptr [eax + 0x41], cl
// 009c59e9  a3fc3bc000           mov dword ptr [0xc03bfc], eax
// 009c59ee  c3                   ret 
// 009c59ef  890dfc3bc000         mov dword ptr [0xc03bfc], ecx
// 009c59f5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
