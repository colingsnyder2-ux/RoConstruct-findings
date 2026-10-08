// roc 2009-12 0096b420  unit: seg_00960000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096b420
//
// 0096b420  6a44                 push 0x44
// 0096b422  e83984e8ff           call 0x7f3860
// 0096b427  33c9                 xor ecx, ecx
// 0096b429  83c404               add esp, 4
// 0096b42c  3bc1                 cmp eax, ecx
// 0096b42e  745f                 je 0x96b48f
// 0096b430  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096b436  ba10000000           mov edx, 0x10
// 0096b43b  884804               mov byte ptr [eax + 4], cl
// 0096b43e  89480c               mov dword ptr [eax + 0xc], ecx
// 0096b441  894810               mov dword ptr [eax + 0x10], ecx
// 0096b444  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096b447  894820               mov dword ptr [eax + 0x20], ecx
// 0096b44a  894824               mov dword ptr [eax + 0x24], ecx
// 0096b44d  894828               mov dword ptr [eax + 0x28], ecx
// 0096b450  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096b453  895030               mov dword ptr [eax + 0x30], edx
// 0096b456  894834               mov dword ptr [eax + 0x34], ecx
// 0096b459  895038               mov dword ptr [eax + 0x38], edx
// 0096b45c  89503c               mov dword ptr [eax + 0x3c], edx
// 0096b45f  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096b465  0f94c1               sete cl
// 0096b468  c70001000000         mov dword ptr [eax], 1
// 0096b46e  c740082f000000       mov dword ptr [eax + 8], 0x2f
// 0096b475  c74014498d0000       mov dword ptr [eax + 0x14], 0x8d49
// 0096b47c  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 0096b483  884840               mov byte ptr [eax + 0x40], cl
// 0096b486  885041               mov byte ptr [eax + 0x41], dl
// 0096b489  a384dbb700           mov dword ptr [0xb7db84], eax
// 0096b48e  c3                   ret 
// 0096b48f  890d84dbb700         mov dword ptr [0xb7db84], ecx
// 0096b495  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
