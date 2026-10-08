// roc 2009-12 0096a6a0  unit: seg_00960000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096a6a0
//
// 0096a6a0  6a44                 push 0x44
// 0096a6a2  e8b991e8ff           call 0x7f3860
// 0096a6a7  33c9                 xor ecx, ecx
// 0096a6a9  83c404               add esp, 4
// 0096a6ac  3bc1                 cmp eax, ecx
// 0096a6ae  745f                 je 0x96a70f
// 0096a6b0  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096a6b6  ba10000000           mov edx, 0x10
// 0096a6bb  884804               mov byte ptr [eax + 4], cl
// 0096a6be  89480c               mov dword ptr [eax + 0xc], ecx
// 0096a6c1  894810               mov dword ptr [eax + 0x10], ecx
// 0096a6c4  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096a6c7  895020               mov dword ptr [eax + 0x20], edx
// 0096a6ca  894824               mov dword ptr [eax + 0x24], ecx
// 0096a6cd  894828               mov dword ptr [eax + 0x28], ecx
// 0096a6d0  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096a6d3  894830               mov dword ptr [eax + 0x30], ecx
// 0096a6d6  894834               mov dword ptr [eax + 0x34], ecx
// 0096a6d9  895038               mov dword ptr [eax + 0x38], edx
// 0096a6dc  89503c               mov dword ptr [eax + 0x3c], edx
// 0096a6df  8a154824b100         mov dl, byte ptr [0xb12448]
// 0096a6e5  0f94c1               sete cl
// 0096a6e8  c70001000000         mov dword ptr [eax], 1
// 0096a6ee  c7400806000000       mov dword ptr [eax + 8], 6
// 0096a6f5  c740141c880000       mov dword ptr [eax + 0x14], 0x881c
// 0096a6fc  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 0096a703  884840               mov byte ptr [eax + 0x40], cl
// 0096a706  885041               mov byte ptr [eax + 0x41], dl
// 0096a709  a358dbb700           mov dword ptr [0xb7db58], eax
// 0096a70e  c3                   ret 
// 0096a70f  890d58dbb700         mov dword ptr [0xb7db58], ecx
// 0096a715  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
