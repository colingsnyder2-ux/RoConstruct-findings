// roc 2007-08 0076e560  unit: seg_00760000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e560
//
// 0076e560  6a44                 push 0x44
// 0076e562  e88f19ecff           call 0x62fef6
// 0076e567  33c9                 xor ecx, ecx
// 0076e569  83c404               add esp, 4
// 0076e56c  3bc1                 cmp eax, ecx
// 0076e56e  7464                 je 0x76e5d4
// 0076e570  380da5c18800         cmp byte ptr [0x88c1a5], cl
// 0076e576  ba01000000           mov edx, 1
// 0076e57b  885004               mov byte ptr [eax + 4], dl
// 0076e57e  89500c               mov dword ptr [eax + 0xc], edx
// 0076e581  ba80000000           mov edx, 0x80
// 0076e586  894810               mov dword ptr [eax + 0x10], ecx
// 0076e589  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076e58c  894820               mov dword ptr [eax + 0x20], ecx
// 0076e58f  894824               mov dword ptr [eax + 0x24], ecx
// 0076e592  894828               mov dword ptr [eax + 0x28], ecx
// 0076e595  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076e598  894830               mov dword ptr [eax + 0x30], ecx
// 0076e59b  894834               mov dword ptr [eax + 0x34], ecx
// 0076e59e  895038               mov dword ptr [eax + 0x38], edx
// 0076e5a1  89503c               mov dword ptr [eax + 0x3c], edx
// 0076e5a4  8a1520db8b00         mov dl, byte ptr [0x8bdb20]
// 0076e5aa  0f94c1               sete cl
// 0076e5ad  c70004000000         mov dword ptr [eax], 4
// 0076e5b3  c7400828000000       mov dword ptr [eax + 8], 0x28
// 0076e5ba  c74014f3830000       mov dword ptr [eax + 0x14], 0x83f3
// 0076e5c1  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0076e5c8  884840               mov byte ptr [eax + 0x40], cl
// 0076e5cb  885041               mov byte ptr [eax + 0x41], dl
// 0076e5ce  a3a8db8b00           mov dword ptr [0x8bdba8], eax
// 0076e5d3  c3                   ret 
// 0076e5d4  890da8db8b00         mov dword ptr [0x8bdba8], ecx
// 0076e5da  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA_DXT5@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
