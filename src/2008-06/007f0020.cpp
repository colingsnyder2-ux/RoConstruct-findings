// from server: 100% by auto
// roc 2008-06 007f0020  unit: seg_007f0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0020
//
// 007f0020  6a44                 push 0x44
// 007f0022  e8f908ebff           call 0x6a0920
// 007f0027  33c9                 xor ecx, ecx
// 007f0029  83c404               add esp, 4
// 007f002c  3bc1                 cmp eax, ecx
// 007f002e  745f                 je 0x7f008f
// 007f0030  380d154c9300         cmp byte ptr [0x934c15], cl
// 007f0036  ba08000000           mov edx, 8
// 007f003b  884804               mov byte ptr [eax + 4], cl
// 007f003e  89480c               mov dword ptr [eax + 0xc], ecx
// 007f0041  894810               mov dword ptr [eax + 0x10], ecx
// 007f0044  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f0047  895020               mov dword ptr [eax + 0x20], edx
// 007f004a  894824               mov dword ptr [eax + 0x24], ecx
// 007f004d  894828               mov dword ptr [eax + 0x28], ecx
// 007f0050  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f0053  894830               mov dword ptr [eax + 0x30], ecx
// 007f0056  894834               mov dword ptr [eax + 0x34], ecx
// 007f0059  895038               mov dword ptr [eax + 0x38], edx
// 007f005c  89503c               mov dword ptr [eax + 0x3c], edx
// 007f005f  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007f0065  0f94c1               sete cl
// 007f0068  c70001000000         mov dword ptr [eax], 1
// 007f006e  c7400804000000       mov dword ptr [eax + 8], 4
// 007f0075  c740143c800000       mov dword ptr [eax + 0x14], 0x803c
// 007f007c  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 007f0083  884840               mov byte ptr [eax + 0x40], cl
// 007f0086  885041               mov byte ptr [eax + 0x41], dl
// 007f0089  a3b8fa9600           mov dword ptr [0x96fab8], eax
// 007f008e  c3                   ret 
// 007f008f  890db8fa9600         mov dword ptr [0x96fab8], ecx
// 007f0095  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
