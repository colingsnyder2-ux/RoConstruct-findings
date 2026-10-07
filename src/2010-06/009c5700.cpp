// roc 2010-06 009c5700  unit: seg_009c0000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5700
//
// 009c5700  6a44                 push 0x44
// 009c5702  e89922deff           call 0x7a79a0
// 009c5707  33c9                 xor ecx, ecx
// 009c5709  83c404               add esp, 4
// 009c570c  3bc1                 cmp eax, ecx
// 009c570e  7465                 je 0x9c5775
// 009c5710  884804               mov byte ptr [eax + 4], cl
// 009c5713  894810               mov dword ptr [eax + 0x10], ecx
// 009c5716  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c5719  894820               mov dword ptr [eax + 0x20], ecx
// 009c571c  ba10000000           mov edx, 0x10
// 009c5721  894830               mov dword ptr [eax + 0x30], ecx
// 009c5724  894834               mov dword ptr [eax + 0x34], ecx
// 009c5727  b930000000           mov ecx, 0x30
// 009c572c  895024               mov dword ptr [eax + 0x24], edx
// 009c572f  895028               mov dword ptr [eax + 0x28], edx
// 009c5732  89502c               mov dword ptr [eax + 0x2c], edx
// 009c5735  8a15d071b800         mov dl, byte ptr [0xb871d0]
// 009c573b  894838               mov dword ptr [eax + 0x38], ecx
// 009c573e  89483c               mov dword ptr [eax + 0x3c], ecx
// 009c5741  8a0dd171b800         mov cl, byte ptr [0xb871d1]
// 009c5747  c70003000000         mov dword ptr [eax], 3
// 009c574d  c7400811000000       mov dword ptr [eax + 8], 0x11
// 009c5754  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 009c575b  c740141b880000       mov dword ptr [eax + 0x14], 0x881b
// 009c5762  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 009c5769  884840               mov byte ptr [eax + 0x40], cl
// 009c576c  885041               mov byte ptr [eax + 0x41], dl
// 009c576f  a3043cc000           mov dword ptr [0xc03c04], eax
// 009c5774  c3                   ret 
// 009c5775  890d043cc000         mov dword ptr [0xc03c04], ecx
// 009c577b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
