// roc 2010-06 009c5a80  unit: seg_009c0000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5a80
//
// 009c5a80  6a44                 push 0x44
// 009c5a82  e8191fdeff           call 0x7a79a0
// 009c5a87  33c9                 xor ecx, ecx
// 009c5a89  83c404               add esp, 4
// 009c5a8c  3bc1                 cmp eax, ecx
// 009c5a8e  7464                 je 0x9c5af4
// 009c5a90  380dd171b800         cmp byte ptr [0xb871d1], cl
// 009c5a96  ba01000000           mov edx, 1
// 009c5a9b  885004               mov byte ptr [eax + 4], dl
// 009c5a9e  89500c               mov dword ptr [eax + 0xc], edx
// 009c5aa1  ba40000000           mov edx, 0x40
// 009c5aa6  894810               mov dword ptr [eax + 0x10], ecx
// 009c5aa9  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c5aac  894820               mov dword ptr [eax + 0x20], ecx
// 009c5aaf  894824               mov dword ptr [eax + 0x24], ecx
// 009c5ab2  894828               mov dword ptr [eax + 0x28], ecx
// 009c5ab5  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c5ab8  894830               mov dword ptr [eax + 0x30], ecx
// 009c5abb  894834               mov dword ptr [eax + 0x34], ecx
// 009c5abe  895038               mov dword ptr [eax + 0x38], edx
// 009c5ac1  89503c               mov dword ptr [eax + 0x3c], edx
// 009c5ac4  8a15d43bc000         mov dl, byte ptr [0xc03bd4]
// 009c5aca  0f94c1               sete cl
// 009c5acd  c70004000000         mov dword ptr [eax], 4
// 009c5ad3  c7400826000000       mov dword ptr [eax + 8], 0x26
// 009c5ada  c74014f1830000       mov dword ptr [eax + 0x14], 0x83f1
// 009c5ae1  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 009c5ae8  884840               mov byte ptr [eax + 0x40], cl
// 009c5aeb  885041               mov byte ptr [eax + 0x41], dl
// 009c5aee  a3183cc000           mov dword ptr [0xc03c18], eax
// 009c5af3  c3                   ret 
// 009c5af4  890d183cc000         mov dword ptr [0xc03c18], ecx
// 009c5afa  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA_DXT1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
