// roc 2008-06 007effa0  unit: seg_007e0000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007effa0
//
// 007effa0  6a44                 push 0x44
// 007effa2  e87909ebff           call 0x6a0920
// 007effa7  33c9                 xor ecx, ecx
// 007effa9  83c404               add esp, 4
// 007effac  3bc1                 cmp eax, ecx
// 007effae  745c                 je 0x7f000c
// 007effb0  ba20000000           mov edx, 0x20
// 007effb5  884804               mov byte ptr [eax + 4], cl
// 007effb8  89480c               mov dword ptr [eax + 0xc], ecx
// 007effbb  894810               mov dword ptr [eax + 0x10], ecx
// 007effbe  89501c               mov dword ptr [eax + 0x1c], edx
// 007effc1  894820               mov dword ptr [eax + 0x20], ecx
// 007effc4  894824               mov dword ptr [eax + 0x24], ecx
// 007effc7  894828               mov dword ptr [eax + 0x28], ecx
// 007effca  89482c               mov dword ptr [eax + 0x2c], ecx
// 007effcd  894830               mov dword ptr [eax + 0x30], ecx
// 007effd0  894834               mov dword ptr [eax + 0x34], ecx
// 007effd3  8a0d154c9300         mov cl, byte ptr [0x934c15]
// 007effd9  895038               mov dword ptr [eax + 0x38], edx
// 007effdc  89503c               mov dword ptr [eax + 0x3c], edx
// 007effdf  8a15144c9300         mov dl, byte ptr [0x934c14]
// 007effe5  c70001000000         mov dword ptr [eax], 1
// 007effeb  c7400803000000       mov dword ptr [eax + 8], 3
// 007efff2  c7401418880000       mov dword ptr [eax + 0x14], 0x8818
// 007efff9  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 007f0000  884840               mov byte ptr [eax + 0x40], cl
// 007f0003  885041               mov byte ptr [eax + 0x41], dl
// 007f0006  a39cfa9600           mov dword ptr [0x96fa9c], eax
// 007f000b  c3                   ret 
// 007f000c  890d9cfa9600         mov dword ptr [0x96fa9c], ecx
// 007f0012  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
