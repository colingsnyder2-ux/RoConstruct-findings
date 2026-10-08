// roc 2009-12 0096a9a0  unit: seg_00960000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096a9a0
//
// 0096a9a0  6a44                 push 0x44
// 0096a9a2  e8b98ee8ff           call 0x7f3860
// 0096a9a7  33c9                 xor ecx, ecx
// 0096a9a9  83c404               add esp, 4
// 0096a9ac  3bc1                 cmp eax, ecx
// 0096a9ae  7464                 je 0x96aa14
// 0096a9b0  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096a9b6  ba20000000           mov edx, 0x20
// 0096a9bb  89501c               mov dword ptr [eax + 0x1c], edx
// 0096a9be  895020               mov dword ptr [eax + 0x20], edx
// 0096a9c1  ba40000000           mov edx, 0x40
// 0096a9c6  884804               mov byte ptr [eax + 4], cl
// 0096a9c9  89480c               mov dword ptr [eax + 0xc], ecx
// 0096a9cc  894810               mov dword ptr [eax + 0x10], ecx
// 0096a9cf  894824               mov dword ptr [eax + 0x24], ecx
// 0096a9d2  894828               mov dword ptr [eax + 0x28], ecx
// 0096a9d5  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096a9d8  894830               mov dword ptr [eax + 0x30], ecx
// 0096a9db  894834               mov dword ptr [eax + 0x34], ecx
// 0096a9de  895038               mov dword ptr [eax + 0x38], edx
// 0096a9e1  89503c               mov dword ptr [eax + 0x3c], edx
// 0096a9e4  8a154824b100         mov dl, byte ptr [0xb12448]
// 0096a9ea  0f94c1               sete cl
// 0096a9ed  c70002000000         mov dword ptr [eax], 2
// 0096a9f3  c740080c000000       mov dword ptr [eax + 8], 0xc
// 0096a9fa  c7401419880000       mov dword ptr [eax + 0x14], 0x8819
// 0096aa01  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 0096aa08  884840               mov byte ptr [eax + 0x40], cl
// 0096aa0b  885041               mov byte ptr [eax + 0x41], dl
// 0096aa0e  a364dbb700           mov dword ptr [0xb7db64], eax
// 0096aa13  c3                   ret 
// 0096aa14  890d64dbb700         mov dword ptr [0xb7db64], ecx
// 0096aa1a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
