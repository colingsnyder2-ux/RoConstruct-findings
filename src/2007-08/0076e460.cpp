// from server: 100% by auto
// roc 2007-08 0076e460  unit: seg_00760000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e460
//
// 0076e460  6a44                 push 0x44
// 0076e462  e88f1aecff           call 0x62fef6
// 0076e467  33c9                 xor ecx, ecx
// 0076e469  83c404               add esp, 4
// 0076e46c  3bc1                 cmp eax, ecx
// 0076e46e  7464                 je 0x76e4d4
// 0076e470  380da5c18800         cmp byte ptr [0x88c1a5], cl
// 0076e476  ba01000000           mov edx, 1
// 0076e47b  885004               mov byte ptr [eax + 4], dl
// 0076e47e  89500c               mov dword ptr [eax + 0xc], edx
// 0076e481  ba40000000           mov edx, 0x40
// 0076e486  894810               mov dword ptr [eax + 0x10], ecx
// 0076e489  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076e48c  894820               mov dword ptr [eax + 0x20], ecx
// 0076e48f  894824               mov dword ptr [eax + 0x24], ecx
// 0076e492  894828               mov dword ptr [eax + 0x28], ecx
// 0076e495  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076e498  894830               mov dword ptr [eax + 0x30], ecx
// 0076e49b  894834               mov dword ptr [eax + 0x34], ecx
// 0076e49e  895038               mov dword ptr [eax + 0x38], edx
// 0076e4a1  89503c               mov dword ptr [eax + 0x3c], edx
// 0076e4a4  8a1520db8b00         mov dl, byte ptr [0x8bdb20]
// 0076e4aa  0f94c1               sete cl
// 0076e4ad  c70004000000         mov dword ptr [eax], 4
// 0076e4b3  c7400826000000       mov dword ptr [eax + 8], 0x26
// 0076e4ba  c74014f1830000       mov dword ptr [eax + 0x14], 0x83f1
// 0076e4c1  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0076e4c8  884840               mov byte ptr [eax + 0x40], cl
// 0076e4cb  885041               mov byte ptr [eax + 0x41], dl
// 0076e4ce  a364db8b00           mov dword ptr [0x8bdb64], eax
// 0076e4d3  c3                   ret 
// 0076e4d4  890d64db8b00         mov dword ptr [0x8bdb64], ecx
// 0076e4da  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA_DXT1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
