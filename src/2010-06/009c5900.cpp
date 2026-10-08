// from server: 100% by auto
// roc 2010-06 009c5900  unit: seg_009c0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5900
//
// 009c5900  6a44                 push 0x44
// 009c5902  e89920deff           call 0x7a79a0
// 009c5907  33c9                 xor ecx, ecx
// 009c5909  83c404               add esp, 4
// 009c590c  3bc1                 cmp eax, ecx
// 009c590e  745f                 je 0x9c596f
// 009c5910  ba10000000           mov edx, 0x10
// 009c5915  884804               mov byte ptr [eax + 4], cl
// 009c5918  894810               mov dword ptr [eax + 0x10], ecx
// 009c591b  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c591e  895020               mov dword ptr [eax + 0x20], edx
// 009c5921  895024               mov dword ptr [eax + 0x24], edx
// 009c5924  895028               mov dword ptr [eax + 0x28], edx
// 009c5927  89502c               mov dword ptr [eax + 0x2c], edx
// 009c592a  894830               mov dword ptr [eax + 0x30], ecx
// 009c592d  894834               mov dword ptr [eax + 0x34], ecx
// 009c5930  884840               mov byte ptr [eax + 0x40], cl
// 009c5933  8a0dd071b800         mov cl, byte ptr [0xb871d0]
// 009c5939  ba40000000           mov edx, 0x40
// 009c593e  c70004000000         mov dword ptr [eax], 4
// 009c5944  c7400811000000       mov dword ptr [eax + 8], 0x11
// 009c594b  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 009c5952  c740141a880000       mov dword ptr [eax + 0x14], 0x881a
// 009c5959  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 009c5960  895038               mov dword ptr [eax + 0x38], edx
// 009c5963  89503c               mov dword ptr [eax + 0x3c], edx
// 009c5966  884841               mov byte ptr [eax + 0x41], cl
// 009c5969  a3e03bc000           mov dword ptr [0xc03be0], eax
// 009c596e  c3                   ret 
// 009c596f  890de03bc000         mov dword ptr [0xc03be0], ecx
// 009c5975  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
