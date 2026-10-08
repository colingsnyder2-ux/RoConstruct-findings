// from server: 100% by auto
// roc 2010-06 009c5d00  unit: seg_009c0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5d00
//
// 009c5d00  6a44                 push 0x44
// 009c5d02  e8991cdeff           call 0x7a79a0
// 009c5d07  33c9                 xor ecx, ecx
// 009c5d09  83c404               add esp, 4
// 009c5d0c  3bc1                 cmp eax, ecx
// 009c5d0e  745f                 je 0x9c5d6f
// 009c5d10  380dd171b800         cmp byte ptr [0xb871d1], cl
// 009c5d16  ba20000000           mov edx, 0x20
// 009c5d1b  884804               mov byte ptr [eax + 4], cl
// 009c5d1e  89480c               mov dword ptr [eax + 0xc], ecx
// 009c5d21  894810               mov dword ptr [eax + 0x10], ecx
// 009c5d24  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c5d27  894820               mov dword ptr [eax + 0x20], ecx
// 009c5d2a  894824               mov dword ptr [eax + 0x24], ecx
// 009c5d2d  894828               mov dword ptr [eax + 0x28], ecx
// 009c5d30  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c5d33  895030               mov dword ptr [eax + 0x30], edx
// 009c5d36  894834               mov dword ptr [eax + 0x34], ecx
// 009c5d39  895038               mov dword ptr [eax + 0x38], edx
// 009c5d3c  89503c               mov dword ptr [eax + 0x3c], edx
// 009c5d3f  8a15d43bc000         mov dl, byte ptr [0xc03bd4]
// 009c5d45  0f94c1               sete cl
// 009c5d48  c70001000000         mov dword ptr [eax], 1
// 009c5d4e  c740082b000000       mov dword ptr [eax + 8], 0x2b
// 009c5d55  c74014a7810000       mov dword ptr [eax + 0x14], 0x81a7
// 009c5d5c  c7401802190000       mov dword ptr [eax + 0x18], 0x1902
// 009c5d63  884840               mov byte ptr [eax + 0x40], cl
// 009c5d66  885041               mov byte ptr [eax + 0x41], dl
// 009c5d69  a3643cc000           mov dword ptr [0xc03c64], eax
// 009c5d6e  c3                   ret 
// 009c5d6f  890d643cc000         mov dword ptr [0xc03c64], ecx
// 009c5d75  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?DEPTH32@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
