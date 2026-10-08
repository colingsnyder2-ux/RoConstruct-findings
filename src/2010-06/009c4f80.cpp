// from server: 100% by auto
// roc 2010-06 009c4f80  unit: seg_009c0000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4f80
//
// 009c4f80  6a44                 push 0x44
// 009c4f82  e8192adeff           call 0x7a79a0
// 009c4f87  33c9                 xor ecx, ecx
// 009c4f89  83c404               add esp, 4
// 009c4f8c  3bc1                 cmp eax, ecx
// 009c4f8e  745c                 je 0x9c4fec
// 009c4f90  ba10000000           mov edx, 0x10
// 009c4f95  884804               mov byte ptr [eax + 4], cl
// 009c4f98  89480c               mov dword ptr [eax + 0xc], ecx
// 009c4f9b  894810               mov dword ptr [eax + 0x10], ecx
// 009c4f9e  89501c               mov dword ptr [eax + 0x1c], edx
// 009c4fa1  894820               mov dword ptr [eax + 0x20], ecx
// 009c4fa4  894824               mov dword ptr [eax + 0x24], ecx
// 009c4fa7  894828               mov dword ptr [eax + 0x28], ecx
// 009c4faa  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c4fad  894830               mov dword ptr [eax + 0x30], ecx
// 009c4fb0  894834               mov dword ptr [eax + 0x34], ecx
// 009c4fb3  8a0dd171b800         mov cl, byte ptr [0xb871d1]
// 009c4fb9  895038               mov dword ptr [eax + 0x38], edx
// 009c4fbc  89503c               mov dword ptr [eax + 0x3c], edx
// 009c4fbf  8a15d071b800         mov dl, byte ptr [0xb871d0]
// 009c4fc5  c70001000000         mov dword ptr [eax], 1
// 009c4fcb  c7400802000000       mov dword ptr [eax + 8], 2
// 009c4fd2  c740141e880000       mov dword ptr [eax + 0x14], 0x881e
// 009c4fd9  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 009c4fe0  884840               mov byte ptr [eax + 0x40], cl
// 009c4fe3  885041               mov byte ptr [eax + 0x41], dl
// 009c4fe6  a3543cc000           mov dword ptr [0xc03c54], eax
// 009c4feb  c3                   ret 
// 009c4fec  890d543cc000         mov dword ptr [0xc03c54], ecx
// 009c4ff2  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
