// roc 2007-08 0076e5e0  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e5e0
//
// 0076e5e0  6a44                 push 0x44
// 0076e5e2  e80f19ecff           call 0x62fef6
// 0076e5e7  33c9                 xor ecx, ecx
// 0076e5e9  83c404               add esp, 4
// 0076e5ec  3bc1                 cmp eax, ecx
// 0076e5ee  745f                 je 0x76e64f
// 0076e5f0  380da5c18800         cmp byte ptr [0x88c1a5], cl
// 0076e5f6  ba10000000           mov edx, 0x10
// 0076e5fb  884804               mov byte ptr [eax + 4], cl
// 0076e5fe  89480c               mov dword ptr [eax + 0xc], ecx
// 0076e601  894810               mov dword ptr [eax + 0x10], ecx
// 0076e604  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076e607  894820               mov dword ptr [eax + 0x20], ecx
// 0076e60a  894824               mov dword ptr [eax + 0x24], ecx
// 0076e60d  894828               mov dword ptr [eax + 0x28], ecx
// 0076e610  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076e613  895030               mov dword ptr [eax + 0x30], edx
// 0076e616  894834               mov dword ptr [eax + 0x34], ecx
// 0076e619  895038               mov dword ptr [eax + 0x38], edx
// 0076e61c  89503c               mov dword ptr [eax + 0x3c], edx
// 0076e61f  8a1520db8b00         mov dl, byte ptr [0x8bdb20]
// 0076e625  0f94c1               sete cl
// 0076e628  c70001000000         mov dword ptr [eax], 1
// 0076e62e  c7400829000000       mov dword ptr [eax + 8], 0x29
// 0076e635  c74014a5810000       mov dword ptr [eax + 0x14], 0x81a5
// 0076e63c  c7401802190000       mov dword ptr [eax + 0x18], 0x1902
// 0076e643  884840               mov byte ptr [eax + 0x40], cl
// 0076e646  885041               mov byte ptr [eax + 0x41], dl
// 0076e649  a36cdb8b00           mov dword ptr [0x8bdb6c], eax
// 0076e64e  c3                   ret 
// 0076e64f  890d6cdb8b00         mov dword ptr [0x8bdb6c], ecx
// 0076e655  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?DEPTH16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
