// from server: 100% by auto
// roc 2010-06 009c5280  unit: seg_009c0000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5280
//
// 009c5280  6a44                 push 0x44
// 009c5282  e81927deff           call 0x7a79a0
// 009c5287  33c9                 xor ecx, ecx
// 009c5289  83c404               add esp, 4
// 009c528c  3bc1                 cmp eax, ecx
// 009c528e  7463                 je 0x9c52f3
// 009c5290  380dd171b800         cmp byte ptr [0xb871d1], cl
// 009c5296  ba08000000           mov edx, 8
// 009c529b  884804               mov byte ptr [eax + 4], cl
// 009c529e  895008               mov dword ptr [eax + 8], edx
// 009c52a1  89480c               mov dword ptr [eax + 0xc], ecx
// 009c52a4  894810               mov dword ptr [eax + 0x10], ecx
// 009c52a7  894824               mov dword ptr [eax + 0x24], ecx
// 009c52aa  894828               mov dword ptr [eax + 0x28], ecx
// 009c52ad  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c52b0  894830               mov dword ptr [eax + 0x30], ecx
// 009c52b3  894834               mov dword ptr [eax + 0x34], ecx
// 009c52b6  895038               mov dword ptr [eax + 0x38], edx
// 009c52b9  89503c               mov dword ptr [eax + 0x3c], edx
// 009c52bc  8a15d43bc000         mov dl, byte ptr [0xc03bd4]
// 009c52c2  0f94c1               sete cl
// 009c52c5  c70002000000         mov dword ptr [eax], 2
// 009c52cb  c7401443800000       mov dword ptr [eax + 0x14], 0x8043
// 009c52d2  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 009c52d9  c7401c04000000       mov dword ptr [eax + 0x1c], 4
// 009c52e0  c7402004000000       mov dword ptr [eax + 0x20], 4
// 009c52e7  884840               mov byte ptr [eax + 0x40], cl
// 009c52ea  885041               mov byte ptr [eax + 0x41], dl
// 009c52ed  a3083cc000           mov dword ptr [0xc03c08], eax
// 009c52f2  c3                   ret 
// 009c52f3  890d083cc000         mov dword ptr [0xc03c08], ecx
// 009c52f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA4@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
