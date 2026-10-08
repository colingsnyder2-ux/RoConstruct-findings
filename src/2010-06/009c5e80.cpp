// from server: 100% by auto
// roc 2010-06 009c5e80  unit: seg_009c0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5e80
//
// 009c5e80  6a44                 push 0x44
// 009c5e82  e8191bdeff           call 0x7a79a0
// 009c5e87  33c9                 xor ecx, ecx
// 009c5e89  83c404               add esp, 4
// 009c5e8c  3bc1                 cmp eax, ecx
// 009c5e8e  745f                 je 0x9c5eef
// 009c5e90  380dd171b800         cmp byte ptr [0xb871d1], cl
// 009c5e96  ba08000000           mov edx, 8
// 009c5e9b  884804               mov byte ptr [eax + 4], cl
// 009c5e9e  89480c               mov dword ptr [eax + 0xc], ecx
// 009c5ea1  894810               mov dword ptr [eax + 0x10], ecx
// 009c5ea4  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c5ea7  894820               mov dword ptr [eax + 0x20], ecx
// 009c5eaa  894824               mov dword ptr [eax + 0x24], ecx
// 009c5ead  894828               mov dword ptr [eax + 0x28], ecx
// 009c5eb0  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c5eb3  895030               mov dword ptr [eax + 0x30], edx
// 009c5eb6  894834               mov dword ptr [eax + 0x34], ecx
// 009c5eb9  895038               mov dword ptr [eax + 0x38], edx
// 009c5ebc  89503c               mov dword ptr [eax + 0x3c], edx
// 009c5ebf  8a15d43bc000         mov dl, byte ptr [0xc03bd4]
// 009c5ec5  0f94c1               sete cl
// 009c5ec8  c70001000000         mov dword ptr [eax], 1
// 009c5ece  c740082e000000       mov dword ptr [eax + 8], 0x2e
// 009c5ed5  c74014488d0000       mov dword ptr [eax + 0x14], 0x8d48
// 009c5edc  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 009c5ee3  884840               mov byte ptr [eax + 0x40], cl
// 009c5ee6  885041               mov byte ptr [eax + 0x41], dl
// 009c5ee9  a3283cc000           mov dword ptr [0xc03c28], eax
// 009c5eee  c3                   ret 
// 009c5eef  890d283cc000         mov dword ptr [0xc03c28], ecx
// 009c5ef5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
