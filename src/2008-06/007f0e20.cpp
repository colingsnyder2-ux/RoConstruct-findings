// from server: 100% by auto
// roc 2008-06 007f0e20  unit: seg_007f0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0e20
//
// 007f0e20  6a44                 push 0x44
// 007f0e22  e8f9faeaff           call 0x6a0920
// 007f0e27  33c9                 xor ecx, ecx
// 007f0e29  83c404               add esp, 4
// 007f0e2c  3bc1                 cmp eax, ecx
// 007f0e2e  745f                 je 0x7f0e8f
// 007f0e30  380d154c9300         cmp byte ptr [0x934c15], cl
// 007f0e36  ba08000000           mov edx, 8
// 007f0e3b  884804               mov byte ptr [eax + 4], cl
// 007f0e3e  89480c               mov dword ptr [eax + 0xc], ecx
// 007f0e41  894810               mov dword ptr [eax + 0x10], ecx
// 007f0e44  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f0e47  894820               mov dword ptr [eax + 0x20], ecx
// 007f0e4a  894824               mov dword ptr [eax + 0x24], ecx
// 007f0e4d  894828               mov dword ptr [eax + 0x28], ecx
// 007f0e50  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f0e53  895030               mov dword ptr [eax + 0x30], edx
// 007f0e56  894834               mov dword ptr [eax + 0x34], ecx
// 007f0e59  895038               mov dword ptr [eax + 0x38], edx
// 007f0e5c  89503c               mov dword ptr [eax + 0x3c], edx
// 007f0e5f  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007f0e65  0f94c1               sete cl
// 007f0e68  c70001000000         mov dword ptr [eax], 1
// 007f0e6e  c740082e000000       mov dword ptr [eax + 8], 0x2e
// 007f0e75  c74014488d0000       mov dword ptr [eax + 0x14], 0x8d48
// 007f0e7c  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 007f0e83  884840               mov byte ptr [eax + 0x40], cl
// 007f0e86  885041               mov byte ptr [eax + 0x41], dl
// 007f0e89  a388fa9600           mov dword ptr [0x96fa88], eax
// 007f0e8e  c3                   ret 
// 007f0e8f  890d88fa9600         mov dword ptr [0x96fa88], ecx
// 007f0e95  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
