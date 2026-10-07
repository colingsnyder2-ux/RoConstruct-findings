// roc 2007-08 0076e760  unit: seg_00760000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e760
//
// 0076e760  6a44                 push 0x44
// 0076e762  e88f17ecff           call 0x62fef6
// 0076e767  33c9                 xor ecx, ecx
// 0076e769  83c404               add esp, 4
// 0076e76c  3bc1                 cmp eax, ecx
// 0076e76e  745b                 je 0x76e7cb
// 0076e770  380da5c18800         cmp byte ptr [0x88c1a5], cl
// 0076e776  ba01000000           mov edx, 1
// 0076e77b  8910                 mov dword ptr [eax], edx
// 0076e77d  884804               mov byte ptr [eax + 4], cl
// 0076e780  89480c               mov dword ptr [eax + 0xc], ecx
// 0076e783  894810               mov dword ptr [eax + 0x10], ecx
// 0076e786  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076e789  894820               mov dword ptr [eax + 0x20], ecx
// 0076e78c  894824               mov dword ptr [eax + 0x24], ecx
// 0076e78f  894828               mov dword ptr [eax + 0x28], ecx
// 0076e792  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076e795  895030               mov dword ptr [eax + 0x30], edx
// 0076e798  894834               mov dword ptr [eax + 0x34], ecx
// 0076e79b  895038               mov dword ptr [eax + 0x38], edx
// 0076e79e  89503c               mov dword ptr [eax + 0x3c], edx
// 0076e7a1  8a1520db8b00         mov dl, byte ptr [0x8bdb20]
// 0076e7a7  0f94c1               sete cl
// 0076e7aa  c740082c000000       mov dword ptr [eax + 8], 0x2c
// 0076e7b1  c74014468d0000       mov dword ptr [eax + 0x14], 0x8d46
// 0076e7b8  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 0076e7bf  884840               mov byte ptr [eax + 0x40], cl
// 0076e7c2  885041               mov byte ptr [eax + 0x41], dl
// 0076e7c5  a38cdb8b00           mov dword ptr [0x8bdb8c], eax
// 0076e7ca  c3                   ret 
// 0076e7cb  890d8cdb8b00         mov dword ptr [0x8bdb8c], ecx
// 0076e7d1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
