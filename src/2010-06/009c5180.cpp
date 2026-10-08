// from server: 100% by auto
// roc 2010-06 009c5180  unit: seg_009c0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5180
//
// 009c5180  6a44                 push 0x44
// 009c5182  e81928deff           call 0x7a79a0
// 009c5187  33c9                 xor ecx, ecx
// 009c5189  83c404               add esp, 4
// 009c518c  3bc1                 cmp eax, ecx
// 009c518e  745f                 je 0x9c51ef
// 009c5190  380dd171b800         cmp byte ptr [0xb871d1], cl
// 009c5196  ba10000000           mov edx, 0x10
// 009c519b  884804               mov byte ptr [eax + 4], cl
// 009c519e  89480c               mov dword ptr [eax + 0xc], ecx
// 009c51a1  894810               mov dword ptr [eax + 0x10], ecx
// 009c51a4  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c51a7  895020               mov dword ptr [eax + 0x20], edx
// 009c51aa  894824               mov dword ptr [eax + 0x24], ecx
// 009c51ad  894828               mov dword ptr [eax + 0x28], ecx
// 009c51b0  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c51b3  894830               mov dword ptr [eax + 0x30], ecx
// 009c51b6  894834               mov dword ptr [eax + 0x34], ecx
// 009c51b9  895038               mov dword ptr [eax + 0x38], edx
// 009c51bc  89503c               mov dword ptr [eax + 0x3c], edx
// 009c51bf  8a15d071b800         mov dl, byte ptr [0xb871d0]
// 009c51c5  0f94c1               sete cl
// 009c51c8  c70001000000         mov dword ptr [eax], 1
// 009c51ce  c7400806000000       mov dword ptr [eax + 8], 6
// 009c51d5  c740141c880000       mov dword ptr [eax + 0x14], 0x881c
// 009c51dc  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 009c51e3  884840               mov byte ptr [eax + 0x40], cl
// 009c51e6  885041               mov byte ptr [eax + 0x41], dl
// 009c51e9  a3e83bc000           mov dword ptr [0xc03be8], eax
// 009c51ee  c3                   ret 
// 009c51ef  890de83bc000         mov dword ptr [0xc03be8], ecx
// 009c51f5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
