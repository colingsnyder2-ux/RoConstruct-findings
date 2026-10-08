// roc 2009-12 0096b020  unit: seg_00960000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096b020
//
// 0096b020  6a44                 push 0x44
// 0096b022  e83988e8ff           call 0x7f3860
// 0096b027  33c9                 xor ecx, ecx
// 0096b029  83c404               add esp, 4
// 0096b02c  3bc1                 cmp eax, ecx
// 0096b02e  7464                 je 0x96b094
// 0096b030  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096b036  ba01000000           mov edx, 1
// 0096b03b  885004               mov byte ptr [eax + 4], dl
// 0096b03e  89500c               mov dword ptr [eax + 0xc], edx
// 0096b041  ba80000000           mov edx, 0x80
// 0096b046  894810               mov dword ptr [eax + 0x10], ecx
// 0096b049  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096b04c  894820               mov dword ptr [eax + 0x20], ecx
// 0096b04f  894824               mov dword ptr [eax + 0x24], ecx
// 0096b052  894828               mov dword ptr [eax + 0x28], ecx
// 0096b055  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096b058  894830               mov dword ptr [eax + 0x30], ecx
// 0096b05b  894834               mov dword ptr [eax + 0x34], ecx
// 0096b05e  895038               mov dword ptr [eax + 0x38], edx
// 0096b061  89503c               mov dword ptr [eax + 0x3c], edx
// 0096b064  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096b06a  0f94c1               sete cl
// 0096b06d  c70004000000         mov dword ptr [eax], 4
// 0096b073  c7400827000000       mov dword ptr [eax + 8], 0x27
// 0096b07a  c74014f2830000       mov dword ptr [eax + 0x14], 0x83f2
// 0096b081  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0096b088  884840               mov byte ptr [eax + 0x40], cl
// 0096b08b  885041               mov byte ptr [eax + 0x41], dl
// 0096b08e  a370dbb700           mov dword ptr [0xb7db70], eax
// 0096b093  c3                   ret 
// 0096b094  890d70dbb700         mov dword ptr [0xb7db70], ecx
// 0096b09a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA_DXT3@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
