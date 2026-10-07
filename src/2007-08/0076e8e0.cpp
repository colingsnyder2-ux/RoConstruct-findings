// roc 2007-08 0076e8e0  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e8e0
//
// 0076e8e0  6a44                 push 0x44
// 0076e8e2  e80f16ecff           call 0x62fef6
// 0076e8e7  33c9                 xor ecx, ecx
// 0076e8e9  83c404               add esp, 4
// 0076e8ec  3bc1                 cmp eax, ecx
// 0076e8ee  745f                 je 0x76e94f
// 0076e8f0  380da5c18800         cmp byte ptr [0x88c1a5], cl
// 0076e8f6  ba10000000           mov edx, 0x10
// 0076e8fb  884804               mov byte ptr [eax + 4], cl
// 0076e8fe  89480c               mov dword ptr [eax + 0xc], ecx
// 0076e901  894810               mov dword ptr [eax + 0x10], ecx
// 0076e904  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076e907  894820               mov dword ptr [eax + 0x20], ecx
// 0076e90a  894824               mov dword ptr [eax + 0x24], ecx
// 0076e90d  894828               mov dword ptr [eax + 0x28], ecx
// 0076e910  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076e913  895030               mov dword ptr [eax + 0x30], edx
// 0076e916  894834               mov dword ptr [eax + 0x34], ecx
// 0076e919  895038               mov dword ptr [eax + 0x38], edx
// 0076e91c  89503c               mov dword ptr [eax + 0x3c], edx
// 0076e91f  8a1520db8b00         mov dl, byte ptr [0x8bdb20]
// 0076e925  0f94c1               sete cl
// 0076e928  c70001000000         mov dword ptr [eax], 1
// 0076e92e  c740082f000000       mov dword ptr [eax + 8], 0x2f
// 0076e935  c74014498d0000       mov dword ptr [eax + 0x14], 0x8d49
// 0076e93c  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 0076e943  884840               mov byte ptr [eax + 0x40], cl
// 0076e946  885041               mov byte ptr [eax + 0x41], dl
// 0076e949  a360db8b00           mov dword ptr [0x8bdb60], eax
// 0076e94e  c3                   ret 
// 0076e94f  890d60db8b00         mov dword ptr [0x8bdb60], ecx
// 0076e955  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
