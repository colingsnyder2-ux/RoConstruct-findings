// roc 2009-12 0096b0a0  unit: seg_00960000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096b0a0
//
// 0096b0a0  6a44                 push 0x44
// 0096b0a2  e8b987e8ff           call 0x7f3860
// 0096b0a7  33c9                 xor ecx, ecx
// 0096b0a9  83c404               add esp, 4
// 0096b0ac  3bc1                 cmp eax, ecx
// 0096b0ae  7464                 je 0x96b114
// 0096b0b0  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096b0b6  ba01000000           mov edx, 1
// 0096b0bb  885004               mov byte ptr [eax + 4], dl
// 0096b0be  89500c               mov dword ptr [eax + 0xc], edx
// 0096b0c1  ba80000000           mov edx, 0x80
// 0096b0c6  894810               mov dword ptr [eax + 0x10], ecx
// 0096b0c9  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096b0cc  894820               mov dword ptr [eax + 0x20], ecx
// 0096b0cf  894824               mov dword ptr [eax + 0x24], ecx
// 0096b0d2  894828               mov dword ptr [eax + 0x28], ecx
// 0096b0d5  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096b0d8  894830               mov dword ptr [eax + 0x30], ecx
// 0096b0db  894834               mov dword ptr [eax + 0x34], ecx
// 0096b0de  895038               mov dword ptr [eax + 0x38], edx
// 0096b0e1  89503c               mov dword ptr [eax + 0x3c], edx
// 0096b0e4  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096b0ea  0f94c1               sete cl
// 0096b0ed  c70004000000         mov dword ptr [eax], 4
// 0096b0f3  c7400828000000       mov dword ptr [eax + 8], 0x28
// 0096b0fa  c74014f3830000       mov dword ptr [eax + 0x14], 0x83f3
// 0096b101  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0096b108  884840               mov byte ptr [eax + 0x40], cl
// 0096b10b  885041               mov byte ptr [eax + 0x41], dl
// 0096b10e  a3ccdbb700           mov dword ptr [0xb7dbcc], eax
// 0096b113  c3                   ret 
// 0096b114  890dccdbb700         mov dword ptr [0xb7dbcc], ecx
// 0096b11a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA_DXT5@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
