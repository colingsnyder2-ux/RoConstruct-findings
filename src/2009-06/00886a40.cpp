// roc 2009-06 00886a40  unit: seg_00880000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886a40
//
// 00886a40  6a44                 push 0x44
// 00886a42  e8f11fe9ff           call 0x718a38
// 00886a47  33c9                 xor ecx, ecx
// 00886a49  83c404               add esp, 4
// 00886a4c  3bc1                 cmp eax, ecx
// 00886a4e  7464                 je 0x886ab4
// 00886a50  380d59c29e00         cmp byte ptr [0x9ec259], cl
// 00886a56  ba01000000           mov edx, 1
// 00886a5b  885004               mov byte ptr [eax + 4], dl
// 00886a5e  89500c               mov dword ptr [eax + 0xc], edx
// 00886a61  ba80000000           mov edx, 0x80
// 00886a66  894810               mov dword ptr [eax + 0x10], ecx
// 00886a69  89481c               mov dword ptr [eax + 0x1c], ecx
// 00886a6c  894820               mov dword ptr [eax + 0x20], ecx
// 00886a6f  894824               mov dword ptr [eax + 0x24], ecx
// 00886a72  894828               mov dword ptr [eax + 0x28], ecx
// 00886a75  89482c               mov dword ptr [eax + 0x2c], ecx
// 00886a78  894830               mov dword ptr [eax + 0x30], ecx
// 00886a7b  894834               mov dword ptr [eax + 0x34], ecx
// 00886a7e  895038               mov dword ptr [eax + 0x38], edx
// 00886a81  89503c               mov dword ptr [eax + 0x3c], edx
// 00886a84  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 00886a8a  0f94c1               sete cl
// 00886a8d  c70004000000         mov dword ptr [eax], 4
// 00886a93  c7400827000000       mov dword ptr [eax + 8], 0x27
// 00886a9a  c74014f2830000       mov dword ptr [eax + 0x14], 0x83f2
// 00886aa1  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 00886aa8  884840               mov byte ptr [eax + 0x40], cl
// 00886aab  885041               mov byte ptr [eax + 0x41], dl
// 00886aae  a3c0d3a300           mov dword ptr [0xa3d3c0], eax
// 00886ab3  c3                   ret 
// 00886ab4  890dc0d3a300         mov dword ptr [0xa3d3c0], ecx
// 00886aba  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA_DXT3@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
