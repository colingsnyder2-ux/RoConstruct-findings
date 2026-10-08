// from server: 100% by auto
// roc 2010-06 009c5c80  unit: seg_009c0000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5c80
//
// 009c5c80  6a44                 push 0x44
// 009c5c82  e8191ddeff           call 0x7a79a0
// 009c5c87  33c9                 xor ecx, ecx
// 009c5c89  83c404               add esp, 4
// 009c5c8c  3bc1                 cmp eax, ecx
// 009c5c8e  7463                 je 0x9c5cf3
// 009c5c90  380dd171b800         cmp byte ptr [0xb871d1], cl
// 009c5c96  ba18000000           mov edx, 0x18
// 009c5c9b  884804               mov byte ptr [eax + 4], cl
// 009c5c9e  89480c               mov dword ptr [eax + 0xc], ecx
// 009c5ca1  894810               mov dword ptr [eax + 0x10], ecx
// 009c5ca4  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c5ca7  894820               mov dword ptr [eax + 0x20], ecx
// 009c5caa  894824               mov dword ptr [eax + 0x24], ecx
// 009c5cad  894828               mov dword ptr [eax + 0x28], ecx
// 009c5cb0  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c5cb3  895030               mov dword ptr [eax + 0x30], edx
// 009c5cb6  894834               mov dword ptr [eax + 0x34], ecx
// 009c5cb9  895038               mov dword ptr [eax + 0x38], edx
// 009c5cbc  8a15d43bc000         mov dl, byte ptr [0xc03bd4]
// 009c5cc2  0f94c1               sete cl
// 009c5cc5  c70001000000         mov dword ptr [eax], 1
// 009c5ccb  c740082a000000       mov dword ptr [eax + 8], 0x2a
// 009c5cd2  c74014a6810000       mov dword ptr [eax + 0x14], 0x81a6
// 009c5cd9  c7401802190000       mov dword ptr [eax + 0x18], 0x1902
// 009c5ce0  c7403c20000000       mov dword ptr [eax + 0x3c], 0x20
// 009c5ce7  884840               mov byte ptr [eax + 0x40], cl
// 009c5cea  885041               mov byte ptr [eax + 0x41], dl
// 009c5ced  a30c3cc000           mov dword ptr [0xc03c0c], eax
// 009c5cf2  c3                   ret 
// 009c5cf3  890d0c3cc000         mov dword ptr [0xc03c0c], ecx
// 009c5cf9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?DEPTH24@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
