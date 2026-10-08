// from server: 100% by auto
// roc 2010-06 009c4e90  unit: seg_009c0000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4e90
//
// 009c4e90  6a44                 push 0x44
// 009c4e92  e8092bdeff           call 0x7a79a0
// 009c4e97  33c9                 xor ecx, ecx
// 009c4e99  83c404               add esp, 4
// 009c4e9c  3bc1                 cmp eax, ecx
// 009c4e9e  7458                 je 0x9c4ef8
// 009c4ea0  ba08000000           mov edx, 8
// 009c4ea5  884804               mov byte ptr [eax + 4], cl
// 009c4ea8  894808               mov dword ptr [eax + 8], ecx
// 009c4eab  89480c               mov dword ptr [eax + 0xc], ecx
// 009c4eae  894810               mov dword ptr [eax + 0x10], ecx
// 009c4eb1  89501c               mov dword ptr [eax + 0x1c], edx
// 009c4eb4  894820               mov dword ptr [eax + 0x20], ecx
// 009c4eb7  894824               mov dword ptr [eax + 0x24], ecx
// 009c4eba  894828               mov dword ptr [eax + 0x28], ecx
// 009c4ebd  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c4ec0  894830               mov dword ptr [eax + 0x30], ecx
// 009c4ec3  894834               mov dword ptr [eax + 0x34], ecx
// 009c4ec6  8a0dd171b800         mov cl, byte ptr [0xb871d1]
// 009c4ecc  895038               mov dword ptr [eax + 0x38], edx
// 009c4ecf  89503c               mov dword ptr [eax + 0x3c], edx
// 009c4ed2  8a15d43bc000         mov dl, byte ptr [0xc03bd4]
// 009c4ed8  c70001000000         mov dword ptr [eax], 1
// 009c4ede  c7401440800000       mov dword ptr [eax + 0x14], 0x8040
// 009c4ee5  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 009c4eec  884840               mov byte ptr [eax + 0x40], cl
// 009c4eef  885041               mov byte ptr [eax + 0x41], dl
// 009c4ef2  a3243cc000           mov dword ptr [0xc03c24], eax
// 009c4ef7  c3                   ret 
// 009c4ef8  890d243cc000         mov dword ptr [0xc03c24], ecx
// 009c4efe  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
