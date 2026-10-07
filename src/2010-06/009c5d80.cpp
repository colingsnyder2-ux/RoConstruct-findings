// roc 2010-06 009c5d80  unit: seg_009c0000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5d80
//
// 009c5d80  6a44                 push 0x44
// 009c5d82  e8191cdeff           call 0x7a79a0
// 009c5d87  33c9                 xor ecx, ecx
// 009c5d89  83c404               add esp, 4
// 009c5d8c  3bc1                 cmp eax, ecx
// 009c5d8e  745b                 je 0x9c5deb
// 009c5d90  380dd171b800         cmp byte ptr [0xb871d1], cl
// 009c5d96  ba01000000           mov edx, 1
// 009c5d9b  8910                 mov dword ptr [eax], edx
// 009c5d9d  884804               mov byte ptr [eax + 4], cl
// 009c5da0  89480c               mov dword ptr [eax + 0xc], ecx
// 009c5da3  894810               mov dword ptr [eax + 0x10], ecx
// 009c5da6  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c5da9  894820               mov dword ptr [eax + 0x20], ecx
// 009c5dac  894824               mov dword ptr [eax + 0x24], ecx
// 009c5daf  894828               mov dword ptr [eax + 0x28], ecx
// 009c5db2  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c5db5  895030               mov dword ptr [eax + 0x30], edx
// 009c5db8  894834               mov dword ptr [eax + 0x34], ecx
// 009c5dbb  895038               mov dword ptr [eax + 0x38], edx
// 009c5dbe  89503c               mov dword ptr [eax + 0x3c], edx
// 009c5dc1  8a15d43bc000         mov dl, byte ptr [0xc03bd4]
// 009c5dc7  0f94c1               sete cl
// 009c5dca  c740082c000000       mov dword ptr [eax + 8], 0x2c
// 009c5dd1  c74014468d0000       mov dword ptr [eax + 0x14], 0x8d46
// 009c5dd8  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 009c5ddf  884840               mov byte ptr [eax + 0x40], cl
// 009c5de2  885041               mov byte ptr [eax + 0x41], dl
// 009c5de5  a3403cc000           mov dword ptr [0xc03c40], eax
// 009c5dea  c3                   ret 
// 009c5deb  890d403cc000         mov dword ptr [0xc03c40], ecx
// 009c5df1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
