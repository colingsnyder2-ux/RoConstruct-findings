// roc 2010-06 009c5f00  unit: seg_009c0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5f00
//
// 009c5f00  6a44                 push 0x44
// 009c5f02  e8991adeff           call 0x7a79a0
// 009c5f07  33c9                 xor ecx, ecx
// 009c5f09  83c404               add esp, 4
// 009c5f0c  3bc1                 cmp eax, ecx
// 009c5f0e  745f                 je 0x9c5f6f
// 009c5f10  380dd171b800         cmp byte ptr [0xb871d1], cl
// 009c5f16  ba10000000           mov edx, 0x10
// 009c5f1b  884804               mov byte ptr [eax + 4], cl
// 009c5f1e  89480c               mov dword ptr [eax + 0xc], ecx
// 009c5f21  894810               mov dword ptr [eax + 0x10], ecx
// 009c5f24  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c5f27  894820               mov dword ptr [eax + 0x20], ecx
// 009c5f2a  894824               mov dword ptr [eax + 0x24], ecx
// 009c5f2d  894828               mov dword ptr [eax + 0x28], ecx
// 009c5f30  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c5f33  895030               mov dword ptr [eax + 0x30], edx
// 009c5f36  894834               mov dword ptr [eax + 0x34], ecx
// 009c5f39  895038               mov dword ptr [eax + 0x38], edx
// 009c5f3c  89503c               mov dword ptr [eax + 0x3c], edx
// 009c5f3f  8a15d43bc000         mov dl, byte ptr [0xc03bd4]
// 009c5f45  0f94c1               sete cl
// 009c5f48  c70001000000         mov dword ptr [eax], 1
// 009c5f4e  c740082f000000       mov dword ptr [eax + 8], 0x2f
// 009c5f55  c74014498d0000       mov dword ptr [eax + 0x14], 0x8d49
// 009c5f5c  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 009c5f63  884840               mov byte ptr [eax + 0x40], cl
// 009c5f66  885041               mov byte ptr [eax + 0x41], dl
// 009c5f69  a3143cc000           mov dword ptr [0xc03c14], eax
// 009c5f6e  c3                   ret 
// 009c5f6f  890d143cc000         mov dword ptr [0xc03c14], ecx
// 009c5f75  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
