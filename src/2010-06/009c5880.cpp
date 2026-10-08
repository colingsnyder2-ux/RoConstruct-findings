// from server: 100% by auto
// roc 2010-06 009c5880  unit: seg_009c0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5880
//
// 009c5880  6a44                 push 0x44
// 009c5882  e81921deff           call 0x7a79a0
// 009c5887  33c9                 xor ecx, ecx
// 009c5889  83c404               add esp, 4
// 009c588c  3bc1                 cmp eax, ecx
// 009c588e  745f                 je 0x9c58ef
// 009c5890  ba10000000           mov edx, 0x10
// 009c5895  884804               mov byte ptr [eax + 4], cl
// 009c5898  894810               mov dword ptr [eax + 0x10], ecx
// 009c589b  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c589e  895020               mov dword ptr [eax + 0x20], edx
// 009c58a1  895024               mov dword ptr [eax + 0x24], edx
// 009c58a4  895028               mov dword ptr [eax + 0x28], edx
// 009c58a7  89502c               mov dword ptr [eax + 0x2c], edx
// 009c58aa  894830               mov dword ptr [eax + 0x30], ecx
// 009c58ad  894834               mov dword ptr [eax + 0x34], ecx
// 009c58b0  884840               mov byte ptr [eax + 0x40], cl
// 009c58b3  8a0dd43bc000         mov cl, byte ptr [0xc03bd4]
// 009c58b9  ba40000000           mov edx, 0x40
// 009c58be  c70004000000         mov dword ptr [eax], 4
// 009c58c4  c7400816000000       mov dword ptr [eax + 8], 0x16
// 009c58cb  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 009c58d2  c740145b800000       mov dword ptr [eax + 0x14], 0x805b
// 009c58d9  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 009c58e0  895038               mov dword ptr [eax + 0x38], edx
// 009c58e3  89503c               mov dword ptr [eax + 0x3c], edx
// 009c58e6  884841               mov byte ptr [eax + 0x41], cl
// 009c58e9  a3443cc000           mov dword ptr [0xc03c44], eax
// 009c58ee  c3                   ret 
// 009c58ef  890d443cc000         mov dword ptr [0xc03c44], ecx
// 009c58f5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
