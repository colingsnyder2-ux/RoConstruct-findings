// roc 2009-12 0096b2a0  unit: seg_00960000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096b2a0
//
// 0096b2a0  6a44                 push 0x44
// 0096b2a2  e8b985e8ff           call 0x7f3860
// 0096b2a7  33c9                 xor ecx, ecx
// 0096b2a9  83c404               add esp, 4
// 0096b2ac  3bc1                 cmp eax, ecx
// 0096b2ae  745b                 je 0x96b30b
// 0096b2b0  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096b2b6  ba01000000           mov edx, 1
// 0096b2bb  8910                 mov dword ptr [eax], edx
// 0096b2bd  884804               mov byte ptr [eax + 4], cl
// 0096b2c0  89480c               mov dword ptr [eax + 0xc], ecx
// 0096b2c3  894810               mov dword ptr [eax + 0x10], ecx
// 0096b2c6  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096b2c9  894820               mov dword ptr [eax + 0x20], ecx
// 0096b2cc  894824               mov dword ptr [eax + 0x24], ecx
// 0096b2cf  894828               mov dword ptr [eax + 0x28], ecx
// 0096b2d2  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096b2d5  895030               mov dword ptr [eax + 0x30], edx
// 0096b2d8  894834               mov dword ptr [eax + 0x34], ecx
// 0096b2db  895038               mov dword ptr [eax + 0x38], edx
// 0096b2de  89503c               mov dword ptr [eax + 0x3c], edx
// 0096b2e1  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096b2e7  0f94c1               sete cl
// 0096b2ea  c740082c000000       mov dword ptr [eax + 8], 0x2c
// 0096b2f1  c74014468d0000       mov dword ptr [eax + 0x14], 0x8d46
// 0096b2f8  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 0096b2ff  884840               mov byte ptr [eax + 0x40], cl
// 0096b302  885041               mov byte ptr [eax + 0x41], dl
// 0096b305  a3b0dbb700           mov dword ptr [0xb7dbb0], eax
// 0096b30a  c3                   ret 
// 0096b30b  890db0dbb700         mov dword ptr [0xb7dbb0], ecx
// 0096b311  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
