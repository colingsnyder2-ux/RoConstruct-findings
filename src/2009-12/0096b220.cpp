// roc 2009-12 0096b220  unit: seg_00960000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096b220
//
// 0096b220  6a44                 push 0x44
// 0096b222  e83986e8ff           call 0x7f3860
// 0096b227  33c9                 xor ecx, ecx
// 0096b229  83c404               add esp, 4
// 0096b22c  3bc1                 cmp eax, ecx
// 0096b22e  745f                 je 0x96b28f
// 0096b230  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096b236  ba20000000           mov edx, 0x20
// 0096b23b  884804               mov byte ptr [eax + 4], cl
// 0096b23e  89480c               mov dword ptr [eax + 0xc], ecx
// 0096b241  894810               mov dword ptr [eax + 0x10], ecx
// 0096b244  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096b247  894820               mov dword ptr [eax + 0x20], ecx
// 0096b24a  894824               mov dword ptr [eax + 0x24], ecx
// 0096b24d  894828               mov dword ptr [eax + 0x28], ecx
// 0096b250  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096b253  895030               mov dword ptr [eax + 0x30], edx
// 0096b256  894834               mov dword ptr [eax + 0x34], ecx
// 0096b259  895038               mov dword ptr [eax + 0x38], edx
// 0096b25c  89503c               mov dword ptr [eax + 0x3c], edx
// 0096b25f  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096b265  0f94c1               sete cl
// 0096b268  c70001000000         mov dword ptr [eax], 1
// 0096b26e  c740082b000000       mov dword ptr [eax + 8], 0x2b
// 0096b275  c74014a7810000       mov dword ptr [eax + 0x14], 0x81a7
// 0096b27c  c7401802190000       mov dword ptr [eax + 0x18], 0x1902
// 0096b283  884840               mov byte ptr [eax + 0x40], cl
// 0096b286  885041               mov byte ptr [eax + 0x41], dl
// 0096b289  a3d4dbb700           mov dword ptr [0xb7dbd4], eax
// 0096b28e  c3                   ret 
// 0096b28f  890dd4dbb700         mov dword ptr [0xb7dbd4], ecx
// 0096b295  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?DEPTH32@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
