// roc 2008-06 007f0ca0  unit: seg_007f0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0ca0
//
// 007f0ca0  6a44                 push 0x44
// 007f0ca2  e879fceaff           call 0x6a0920
// 007f0ca7  33c9                 xor ecx, ecx
// 007f0ca9  83c404               add esp, 4
// 007f0cac  3bc1                 cmp eax, ecx
// 007f0cae  745f                 je 0x7f0d0f
// 007f0cb0  380d154c9300         cmp byte ptr [0x934c15], cl
// 007f0cb6  ba20000000           mov edx, 0x20
// 007f0cbb  884804               mov byte ptr [eax + 4], cl
// 007f0cbe  89480c               mov dword ptr [eax + 0xc], ecx
// 007f0cc1  894810               mov dword ptr [eax + 0x10], ecx
// 007f0cc4  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f0cc7  894820               mov dword ptr [eax + 0x20], ecx
// 007f0cca  894824               mov dword ptr [eax + 0x24], ecx
// 007f0ccd  894828               mov dword ptr [eax + 0x28], ecx
// 007f0cd0  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f0cd3  895030               mov dword ptr [eax + 0x30], edx
// 007f0cd6  894834               mov dword ptr [eax + 0x34], ecx
// 007f0cd9  895038               mov dword ptr [eax + 0x38], edx
// 007f0cdc  89503c               mov dword ptr [eax + 0x3c], edx
// 007f0cdf  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007f0ce5  0f94c1               sete cl
// 007f0ce8  c70001000000         mov dword ptr [eax], 1
// 007f0cee  c740082b000000       mov dword ptr [eax + 8], 0x2b
// 007f0cf5  c74014a7810000       mov dword ptr [eax + 0x14], 0x81a7
// 007f0cfc  c7401802190000       mov dword ptr [eax + 0x18], 0x1902
// 007f0d03  884840               mov byte ptr [eax + 0x40], cl
// 007f0d06  885041               mov byte ptr [eax + 0x41], dl
// 007f0d09  a3c4fa9600           mov dword ptr [0x96fac4], eax
// 007f0d0e  c3                   ret 
// 007f0d0f  890dc4fa9600         mov dword ptr [0x96fac4], ecx
// 007f0d15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?DEPTH32@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
