// from server: 100% by auto
// roc 2010-06 009c5400  unit: seg_009c0000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5400
//
// 009c5400  6a44                 push 0x44
// 009c5402  e89925deff           call 0x7a79a0
// 009c5407  33c9                 xor ecx, ecx
// 009c5409  83c404               add esp, 4
// 009c540c  3bc1                 cmp eax, ecx
// 009c540e  7464                 je 0x9c5474
// 009c5410  380dd171b800         cmp byte ptr [0xb871d1], cl
// 009c5416  ba10000000           mov edx, 0x10
// 009c541b  89501c               mov dword ptr [eax + 0x1c], edx
// 009c541e  895020               mov dword ptr [eax + 0x20], edx
// 009c5421  ba20000000           mov edx, 0x20
// 009c5426  884804               mov byte ptr [eax + 4], cl
// 009c5429  89480c               mov dword ptr [eax + 0xc], ecx
// 009c542c  894810               mov dword ptr [eax + 0x10], ecx
// 009c542f  894824               mov dword ptr [eax + 0x24], ecx
// 009c5432  894828               mov dword ptr [eax + 0x28], ecx
// 009c5435  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c5438  894830               mov dword ptr [eax + 0x30], ecx
// 009c543b  894834               mov dword ptr [eax + 0x34], ecx
// 009c543e  895038               mov dword ptr [eax + 0x38], edx
// 009c5441  89503c               mov dword ptr [eax + 0x3c], edx
// 009c5444  8a15d071b800         mov dl, byte ptr [0xb871d0]
// 009c544a  0f94c1               sete cl
// 009c544d  c70002000000         mov dword ptr [eax], 2
// 009c5453  c740080b000000       mov dword ptr [eax + 8], 0xb
// 009c545a  c740141f880000       mov dword ptr [eax + 0x14], 0x881f
// 009c5461  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 009c5468  884840               mov byte ptr [eax + 0x40], cl
// 009c546b  885041               mov byte ptr [eax + 0x41], dl
// 009c546e  a3103cc000           mov dword ptr [0xc03c10], eax
// 009c5473  c3                   ret 
// 009c5474  890d103cc000         mov dword ptr [0xc03c10], ecx
// 009c547a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
