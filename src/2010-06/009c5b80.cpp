// roc 2010-06 009c5b80  unit: seg_009c0000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5b80
//
// 009c5b80  6a44                 push 0x44
// 009c5b82  e8191edeff           call 0x7a79a0
// 009c5b87  33c9                 xor ecx, ecx
// 009c5b89  83c404               add esp, 4
// 009c5b8c  3bc1                 cmp eax, ecx
// 009c5b8e  7464                 je 0x9c5bf4
// 009c5b90  380dd171b800         cmp byte ptr [0xb871d1], cl
// 009c5b96  ba01000000           mov edx, 1
// 009c5b9b  885004               mov byte ptr [eax + 4], dl
// 009c5b9e  89500c               mov dword ptr [eax + 0xc], edx
// 009c5ba1  ba80000000           mov edx, 0x80
// 009c5ba6  894810               mov dword ptr [eax + 0x10], ecx
// 009c5ba9  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c5bac  894820               mov dword ptr [eax + 0x20], ecx
// 009c5baf  894824               mov dword ptr [eax + 0x24], ecx
// 009c5bb2  894828               mov dword ptr [eax + 0x28], ecx
// 009c5bb5  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c5bb8  894830               mov dword ptr [eax + 0x30], ecx
// 009c5bbb  894834               mov dword ptr [eax + 0x34], ecx
// 009c5bbe  895038               mov dword ptr [eax + 0x38], edx
// 009c5bc1  89503c               mov dword ptr [eax + 0x3c], edx
// 009c5bc4  8a15d43bc000         mov dl, byte ptr [0xc03bd4]
// 009c5bca  0f94c1               sete cl
// 009c5bcd  c70004000000         mov dword ptr [eax], 4
// 009c5bd3  c7400828000000       mov dword ptr [eax + 8], 0x28
// 009c5bda  c74014f3830000       mov dword ptr [eax + 0x14], 0x83f3
// 009c5be1  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 009c5be8  884840               mov byte ptr [eax + 0x40], cl
// 009c5beb  885041               mov byte ptr [eax + 0x41], dl
// 009c5bee  a35c3cc000           mov dword ptr [0xc03c5c], eax
// 009c5bf3  c3                   ret 
// 009c5bf4  890d5c3cc000         mov dword ptr [0xc03c5c], ecx
// 009c5bfa  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA_DXT5@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
