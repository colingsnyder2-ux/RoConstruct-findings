// from server: 100% by auto
// roc 2010-06 009c5c00  unit: seg_009c0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5c00
//
// 009c5c00  6a44                 push 0x44
// 009c5c02  e8991ddeff           call 0x7a79a0
// 009c5c07  33c9                 xor ecx, ecx
// 009c5c09  83c404               add esp, 4
// 009c5c0c  3bc1                 cmp eax, ecx
// 009c5c0e  745f                 je 0x9c5c6f
// 009c5c10  380dd171b800         cmp byte ptr [0xb871d1], cl
// 009c5c16  ba10000000           mov edx, 0x10
// 009c5c1b  884804               mov byte ptr [eax + 4], cl
// 009c5c1e  89480c               mov dword ptr [eax + 0xc], ecx
// 009c5c21  894810               mov dword ptr [eax + 0x10], ecx
// 009c5c24  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c5c27  894820               mov dword ptr [eax + 0x20], ecx
// 009c5c2a  894824               mov dword ptr [eax + 0x24], ecx
// 009c5c2d  894828               mov dword ptr [eax + 0x28], ecx
// 009c5c30  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c5c33  895030               mov dword ptr [eax + 0x30], edx
// 009c5c36  894834               mov dword ptr [eax + 0x34], ecx
// 009c5c39  895038               mov dword ptr [eax + 0x38], edx
// 009c5c3c  89503c               mov dword ptr [eax + 0x3c], edx
// 009c5c3f  8a15d43bc000         mov dl, byte ptr [0xc03bd4]
// 009c5c45  0f94c1               sete cl
// 009c5c48  c70001000000         mov dword ptr [eax], 1
// 009c5c4e  c7400829000000       mov dword ptr [eax + 8], 0x29
// 009c5c55  c74014a5810000       mov dword ptr [eax + 0x14], 0x81a5
// 009c5c5c  c7401802190000       mov dword ptr [eax + 0x18], 0x1902
// 009c5c63  884840               mov byte ptr [eax + 0x40], cl
// 009c5c66  885041               mov byte ptr [eax + 0x41], dl
// 009c5c69  a3203cc000           mov dword ptr [0xc03c20], eax
// 009c5c6e  c3                   ret 
// 009c5c6f  890d203cc000         mov dword ptr [0xc03c20], ecx
// 009c5c75  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?DEPTH16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
