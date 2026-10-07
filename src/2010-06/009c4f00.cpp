// roc 2010-06 009c4f00  unit: seg_009c0000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4f00
//
// 009c4f00  6a44                 push 0x44
// 009c4f02  e8992adeff           call 0x7a79a0
// 009c4f07  33c9                 xor ecx, ecx
// 009c4f09  83c404               add esp, 4
// 009c4f0c  3bc1                 cmp eax, ecx
// 009c4f0e  745c                 je 0x9c4f6c
// 009c4f10  ba10000000           mov edx, 0x10
// 009c4f15  884804               mov byte ptr [eax + 4], cl
// 009c4f18  89480c               mov dword ptr [eax + 0xc], ecx
// 009c4f1b  894810               mov dword ptr [eax + 0x10], ecx
// 009c4f1e  89501c               mov dword ptr [eax + 0x1c], edx
// 009c4f21  894820               mov dword ptr [eax + 0x20], ecx
// 009c4f24  894824               mov dword ptr [eax + 0x24], ecx
// 009c4f27  894828               mov dword ptr [eax + 0x28], ecx
// 009c4f2a  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c4f2d  894830               mov dword ptr [eax + 0x30], ecx
// 009c4f30  894834               mov dword ptr [eax + 0x34], ecx
// 009c4f33  8a0dd171b800         mov cl, byte ptr [0xb871d1]
// 009c4f39  895038               mov dword ptr [eax + 0x38], edx
// 009c4f3c  89503c               mov dword ptr [eax + 0x3c], edx
// 009c4f3f  8a15d43bc000         mov dl, byte ptr [0xc03bd4]
// 009c4f45  c70001000000         mov dword ptr [eax], 1
// 009c4f4b  c7400801000000       mov dword ptr [eax + 8], 1
// 009c4f52  c7401442800000       mov dword ptr [eax + 0x14], 0x8042
// 009c4f59  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 009c4f60  884840               mov byte ptr [eax + 0x40], cl
// 009c4f63  885041               mov byte ptr [eax + 0x41], dl
// 009c4f66  a3603cc000           mov dword ptr [0xc03c60], eax
// 009c4f6b  c3                   ret 
// 009c4f6c  890d603cc000         mov dword ptr [0xc03c60], ecx
// 009c4f72  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
