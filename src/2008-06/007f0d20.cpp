// roc 2008-06 007f0d20  unit: seg_007f0000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0d20
//
// 007f0d20  6a44                 push 0x44
// 007f0d22  e8f9fbeaff           call 0x6a0920
// 007f0d27  33c9                 xor ecx, ecx
// 007f0d29  83c404               add esp, 4
// 007f0d2c  3bc1                 cmp eax, ecx
// 007f0d2e  745b                 je 0x7f0d8b
// 007f0d30  380d154c9300         cmp byte ptr [0x934c15], cl
// 007f0d36  ba01000000           mov edx, 1
// 007f0d3b  8910                 mov dword ptr [eax], edx
// 007f0d3d  884804               mov byte ptr [eax + 4], cl
// 007f0d40  89480c               mov dword ptr [eax + 0xc], ecx
// 007f0d43  894810               mov dword ptr [eax + 0x10], ecx
// 007f0d46  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f0d49  894820               mov dword ptr [eax + 0x20], ecx
// 007f0d4c  894824               mov dword ptr [eax + 0x24], ecx
// 007f0d4f  894828               mov dword ptr [eax + 0x28], ecx
// 007f0d52  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f0d55  895030               mov dword ptr [eax + 0x30], edx
// 007f0d58  894834               mov dword ptr [eax + 0x34], ecx
// 007f0d5b  895038               mov dword ptr [eax + 0x38], edx
// 007f0d5e  89503c               mov dword ptr [eax + 0x3c], edx
// 007f0d61  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007f0d67  0f94c1               sete cl
// 007f0d6a  c740082c000000       mov dword ptr [eax + 8], 0x2c
// 007f0d71  c74014468d0000       mov dword ptr [eax + 0x14], 0x8d46
// 007f0d78  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 007f0d7f  884840               mov byte ptr [eax + 0x40], cl
// 007f0d82  885041               mov byte ptr [eax + 0x41], dl
// 007f0d85  a3a0fa9600           mov dword ptr [0x96faa0], eax
// 007f0d8a  c3                   ret 
// 007f0d8b  890da0fa9600         mov dword ptr [0x96faa0], ecx
// 007f0d91  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
