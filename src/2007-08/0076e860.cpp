// roc 2007-08 0076e860  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e860
//
// 0076e860  6a44                 push 0x44
// 0076e862  e88f16ecff           call 0x62fef6
// 0076e867  33c9                 xor ecx, ecx
// 0076e869  83c404               add esp, 4
// 0076e86c  3bc1                 cmp eax, ecx
// 0076e86e  745f                 je 0x76e8cf
// 0076e870  380da5c18800         cmp byte ptr [0x88c1a5], cl
// 0076e876  ba08000000           mov edx, 8
// 0076e87b  884804               mov byte ptr [eax + 4], cl
// 0076e87e  89480c               mov dword ptr [eax + 0xc], ecx
// 0076e881  894810               mov dword ptr [eax + 0x10], ecx
// 0076e884  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076e887  894820               mov dword ptr [eax + 0x20], ecx
// 0076e88a  894824               mov dword ptr [eax + 0x24], ecx
// 0076e88d  894828               mov dword ptr [eax + 0x28], ecx
// 0076e890  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076e893  895030               mov dword ptr [eax + 0x30], edx
// 0076e896  894834               mov dword ptr [eax + 0x34], ecx
// 0076e899  895038               mov dword ptr [eax + 0x38], edx
// 0076e89c  89503c               mov dword ptr [eax + 0x3c], edx
// 0076e89f  8a1520db8b00         mov dl, byte ptr [0x8bdb20]
// 0076e8a5  0f94c1               sete cl
// 0076e8a8  c70001000000         mov dword ptr [eax], 1
// 0076e8ae  c740082e000000       mov dword ptr [eax + 8], 0x2e
// 0076e8b5  c74014488d0000       mov dword ptr [eax + 0x14], 0x8d48
// 0076e8bc  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 0076e8c3  884840               mov byte ptr [eax + 0x40], cl
// 0076e8c6  885041               mov byte ptr [eax + 0x41], dl
// 0076e8c9  a374db8b00           mov dword ptr [0x8bdb74], eax
// 0076e8ce  c3                   ret 
// 0076e8cf  890d74db8b00         mov dword ptr [0x8bdb74], ecx
// 0076e8d5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
