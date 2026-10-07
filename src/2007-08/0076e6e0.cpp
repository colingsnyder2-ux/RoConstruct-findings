// roc 2007-08 0076e6e0  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e6e0
//
// 0076e6e0  6a44                 push 0x44
// 0076e6e2  e80f18ecff           call 0x62fef6
// 0076e6e7  33c9                 xor ecx, ecx
// 0076e6e9  83c404               add esp, 4
// 0076e6ec  3bc1                 cmp eax, ecx
// 0076e6ee  745f                 je 0x76e74f
// 0076e6f0  380da5c18800         cmp byte ptr [0x88c1a5], cl
// 0076e6f6  ba20000000           mov edx, 0x20
// 0076e6fb  884804               mov byte ptr [eax + 4], cl
// 0076e6fe  89480c               mov dword ptr [eax + 0xc], ecx
// 0076e701  894810               mov dword ptr [eax + 0x10], ecx
// 0076e704  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076e707  894820               mov dword ptr [eax + 0x20], ecx
// 0076e70a  894824               mov dword ptr [eax + 0x24], ecx
// 0076e70d  894828               mov dword ptr [eax + 0x28], ecx
// 0076e710  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076e713  895030               mov dword ptr [eax + 0x30], edx
// 0076e716  894834               mov dword ptr [eax + 0x34], ecx
// 0076e719  895038               mov dword ptr [eax + 0x38], edx
// 0076e71c  89503c               mov dword ptr [eax + 0x3c], edx
// 0076e71f  8a1520db8b00         mov dl, byte ptr [0x8bdb20]
// 0076e725  0f94c1               sete cl
// 0076e728  c70001000000         mov dword ptr [eax], 1
// 0076e72e  c740082b000000       mov dword ptr [eax + 8], 0x2b
// 0076e735  c74014a7810000       mov dword ptr [eax + 0x14], 0x81a7
// 0076e73c  c7401802190000       mov dword ptr [eax + 0x18], 0x1902
// 0076e743  884840               mov byte ptr [eax + 0x40], cl
// 0076e746  885041               mov byte ptr [eax + 0x41], dl
// 0076e749  a3b0db8b00           mov dword ptr [0x8bdbb0], eax
// 0076e74e  c3                   ret 
// 0076e74f  890db0db8b00         mov dword ptr [0x8bdbb0], ecx
// 0076e755  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?DEPTH32@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
