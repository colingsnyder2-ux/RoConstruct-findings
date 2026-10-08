// roc 2009-12 0096a3b0  unit: seg_00960000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096a3b0
//
// 0096a3b0  6a44                 push 0x44
// 0096a3b2  e8a994e8ff           call 0x7f3860
// 0096a3b7  33c9                 xor ecx, ecx
// 0096a3b9  83c404               add esp, 4
// 0096a3bc  3bc1                 cmp eax, ecx
// 0096a3be  7458                 je 0x96a418
// 0096a3c0  ba08000000           mov edx, 8
// 0096a3c5  884804               mov byte ptr [eax + 4], cl
// 0096a3c8  894808               mov dword ptr [eax + 8], ecx
// 0096a3cb  89480c               mov dword ptr [eax + 0xc], ecx
// 0096a3ce  894810               mov dword ptr [eax + 0x10], ecx
// 0096a3d1  89501c               mov dword ptr [eax + 0x1c], edx
// 0096a3d4  894820               mov dword ptr [eax + 0x20], ecx
// 0096a3d7  894824               mov dword ptr [eax + 0x24], ecx
// 0096a3da  894828               mov dword ptr [eax + 0x28], ecx
// 0096a3dd  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096a3e0  894830               mov dword ptr [eax + 0x30], ecx
// 0096a3e3  894834               mov dword ptr [eax + 0x34], ecx
// 0096a3e6  8a0d4924b100         mov cl, byte ptr [0xb12449]
// 0096a3ec  895038               mov dword ptr [eax + 0x38], edx
// 0096a3ef  89503c               mov dword ptr [eax + 0x3c], edx
// 0096a3f2  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096a3f8  c70001000000         mov dword ptr [eax], 1
// 0096a3fe  c7401440800000       mov dword ptr [eax + 0x14], 0x8040
// 0096a405  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 0096a40c  884840               mov byte ptr [eax + 0x40], cl
// 0096a40f  885041               mov byte ptr [eax + 0x41], dl
// 0096a412  a394dbb700           mov dword ptr [0xb7db94], eax
// 0096a417  c3                   ret 
// 0096a418  890d94dbb700         mov dword ptr [0xb7db94], ecx
// 0096a41e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
