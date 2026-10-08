// roc 2009-12 0096a4a0  unit: seg_00960000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096a4a0
//
// 0096a4a0  6a44                 push 0x44
// 0096a4a2  e8b993e8ff           call 0x7f3860
// 0096a4a7  33c9                 xor ecx, ecx
// 0096a4a9  83c404               add esp, 4
// 0096a4ac  3bc1                 cmp eax, ecx
// 0096a4ae  745c                 je 0x96a50c
// 0096a4b0  ba10000000           mov edx, 0x10
// 0096a4b5  884804               mov byte ptr [eax + 4], cl
// 0096a4b8  89480c               mov dword ptr [eax + 0xc], ecx
// 0096a4bb  894810               mov dword ptr [eax + 0x10], ecx
// 0096a4be  89501c               mov dword ptr [eax + 0x1c], edx
// 0096a4c1  894820               mov dword ptr [eax + 0x20], ecx
// 0096a4c4  894824               mov dword ptr [eax + 0x24], ecx
// 0096a4c7  894828               mov dword ptr [eax + 0x28], ecx
// 0096a4ca  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096a4cd  894830               mov dword ptr [eax + 0x30], ecx
// 0096a4d0  894834               mov dword ptr [eax + 0x34], ecx
// 0096a4d3  8a0d4924b100         mov cl, byte ptr [0xb12449]
// 0096a4d9  895038               mov dword ptr [eax + 0x38], edx
// 0096a4dc  89503c               mov dword ptr [eax + 0x3c], edx
// 0096a4df  8a154824b100         mov dl, byte ptr [0xb12448]
// 0096a4e5  c70001000000         mov dword ptr [eax], 1
// 0096a4eb  c7400802000000       mov dword ptr [eax + 8], 2
// 0096a4f2  c740141e880000       mov dword ptr [eax + 0x14], 0x881e
// 0096a4f9  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 0096a500  884840               mov byte ptr [eax + 0x40], cl
// 0096a503  885041               mov byte ptr [eax + 0x41], dl
// 0096a506  a3c4dbb700           mov dword ptr [0xb7dbc4], eax
// 0096a50b  c3                   ret 
// 0096a50c  890dc4dbb700         mov dword ptr [0xb7dbc4], ecx
// 0096a512  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
