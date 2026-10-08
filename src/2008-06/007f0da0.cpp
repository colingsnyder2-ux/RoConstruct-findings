// from server: 100% by auto
// roc 2008-06 007f0da0  unit: seg_007f0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0da0
//
// 007f0da0  6a44                 push 0x44
// 007f0da2  e879fbeaff           call 0x6a0920
// 007f0da7  33c9                 xor ecx, ecx
// 007f0da9  83c404               add esp, 4
// 007f0dac  3bc1                 cmp eax, ecx
// 007f0dae  745f                 je 0x7f0e0f
// 007f0db0  380d154c9300         cmp byte ptr [0x934c15], cl
// 007f0db6  ba04000000           mov edx, 4
// 007f0dbb  884804               mov byte ptr [eax + 4], cl
// 007f0dbe  89480c               mov dword ptr [eax + 0xc], ecx
// 007f0dc1  894810               mov dword ptr [eax + 0x10], ecx
// 007f0dc4  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f0dc7  894820               mov dword ptr [eax + 0x20], ecx
// 007f0dca  894824               mov dword ptr [eax + 0x24], ecx
// 007f0dcd  894828               mov dword ptr [eax + 0x28], ecx
// 007f0dd0  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f0dd3  895030               mov dword ptr [eax + 0x30], edx
// 007f0dd6  894834               mov dword ptr [eax + 0x34], ecx
// 007f0dd9  895038               mov dword ptr [eax + 0x38], edx
// 007f0ddc  89503c               mov dword ptr [eax + 0x3c], edx
// 007f0ddf  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007f0de5  0f94c1               sete cl
// 007f0de8  c70001000000         mov dword ptr [eax], 1
// 007f0dee  c740082d000000       mov dword ptr [eax + 8], 0x2d
// 007f0df5  c74014478d0000       mov dword ptr [eax + 0x14], 0x8d47
// 007f0dfc  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 007f0e03  884840               mov byte ptr [eax + 0x40], cl
// 007f0e06  885041               mov byte ptr [eax + 0x41], dl
// 007f0e09  a394fa9600           mov dword ptr [0x96fa94], eax
// 007f0e0e  c3                   ret 
// 007f0e0f  890d94fa9600         mov dword ptr [0x96fa94], ecx
// 007f0e15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL4@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
