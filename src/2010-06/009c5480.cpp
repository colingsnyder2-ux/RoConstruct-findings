// roc 2010-06 009c5480  unit: seg_009c0000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5480
//
// 009c5480  6a44                 push 0x44
// 009c5482  e81925deff           call 0x7a79a0
// 009c5487  33c9                 xor ecx, ecx
// 009c5489  83c404               add esp, 4
// 009c548c  3bc1                 cmp eax, ecx
// 009c548e  7464                 je 0x9c54f4
// 009c5490  380dd171b800         cmp byte ptr [0xb871d1], cl
// 009c5496  ba20000000           mov edx, 0x20
// 009c549b  89501c               mov dword ptr [eax + 0x1c], edx
// 009c549e  895020               mov dword ptr [eax + 0x20], edx
// 009c54a1  ba40000000           mov edx, 0x40
// 009c54a6  884804               mov byte ptr [eax + 4], cl
// 009c54a9  89480c               mov dword ptr [eax + 0xc], ecx
// 009c54ac  894810               mov dword ptr [eax + 0x10], ecx
// 009c54af  894824               mov dword ptr [eax + 0x24], ecx
// 009c54b2  894828               mov dword ptr [eax + 0x28], ecx
// 009c54b5  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c54b8  894830               mov dword ptr [eax + 0x30], ecx
// 009c54bb  894834               mov dword ptr [eax + 0x34], ecx
// 009c54be  895038               mov dword ptr [eax + 0x38], edx
// 009c54c1  89503c               mov dword ptr [eax + 0x3c], edx
// 009c54c4  8a15d071b800         mov dl, byte ptr [0xb871d0]
// 009c54ca  0f94c1               sete cl
// 009c54cd  c70002000000         mov dword ptr [eax], 2
// 009c54d3  c740080c000000       mov dword ptr [eax + 8], 0xc
// 009c54da  c7401419880000       mov dword ptr [eax + 0x14], 0x8819
// 009c54e1  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 009c54e8  884840               mov byte ptr [eax + 0x40], cl
// 009c54eb  885041               mov byte ptr [eax + 0x41], dl
// 009c54ee  a3f43bc000           mov dword ptr [0xc03bf4], eax
// 009c54f3  c3                   ret 
// 009c54f4  890df43bc000         mov dword ptr [0xc03bf4], ecx
// 009c54fa  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
