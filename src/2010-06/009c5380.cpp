// roc 2010-06 009c5380  unit: seg_009c0000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5380
//
// 009c5380  6a44                 push 0x44
// 009c5382  e81926deff           call 0x7a79a0
// 009c5387  33c9                 xor ecx, ecx
// 009c5389  83c404               add esp, 4
// 009c538c  3bc1                 cmp eax, ecx
// 009c538e  7464                 je 0x9c53f4
// 009c5390  380dd171b800         cmp byte ptr [0xb871d1], cl
// 009c5396  ba10000000           mov edx, 0x10
// 009c539b  89501c               mov dword ptr [eax + 0x1c], edx
// 009c539e  895020               mov dword ptr [eax + 0x20], edx
// 009c53a1  ba20000000           mov edx, 0x20
// 009c53a6  884804               mov byte ptr [eax + 4], cl
// 009c53a9  89480c               mov dword ptr [eax + 0xc], ecx
// 009c53ac  894810               mov dword ptr [eax + 0x10], ecx
// 009c53af  894824               mov dword ptr [eax + 0x24], ecx
// 009c53b2  894828               mov dword ptr [eax + 0x28], ecx
// 009c53b5  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c53b8  894830               mov dword ptr [eax + 0x30], ecx
// 009c53bb  894834               mov dword ptr [eax + 0x34], ecx
// 009c53be  895038               mov dword ptr [eax + 0x38], edx
// 009c53c1  89503c               mov dword ptr [eax + 0x3c], edx
// 009c53c4  8a15d43bc000         mov dl, byte ptr [0xc03bd4]
// 009c53ca  0f94c1               sete cl
// 009c53cd  c70002000000         mov dword ptr [eax], 2
// 009c53d3  c740080a000000       mov dword ptr [eax + 8], 0xa
// 009c53da  c7401448800000       mov dword ptr [eax + 0x14], 0x8048
// 009c53e1  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 009c53e8  884840               mov byte ptr [eax + 0x40], cl
// 009c53eb  885041               mov byte ptr [eax + 0x41], dl
// 009c53ee  a31c3cc000           mov dword ptr [0xc03c1c], eax
// 009c53f3  c3                   ret 
// 009c53f4  890d1c3cc000         mov dword ptr [0xc03c1c], ecx
// 009c53fa  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
