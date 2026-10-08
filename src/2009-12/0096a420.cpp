// roc 2009-12 0096a420  unit: seg_00960000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096a420
//
// 0096a420  6a44                 push 0x44
// 0096a422  e83994e8ff           call 0x7f3860
// 0096a427  33c9                 xor ecx, ecx
// 0096a429  83c404               add esp, 4
// 0096a42c  3bc1                 cmp eax, ecx
// 0096a42e  745c                 je 0x96a48c
// 0096a430  ba10000000           mov edx, 0x10
// 0096a435  884804               mov byte ptr [eax + 4], cl
// 0096a438  89480c               mov dword ptr [eax + 0xc], ecx
// 0096a43b  894810               mov dword ptr [eax + 0x10], ecx
// 0096a43e  89501c               mov dword ptr [eax + 0x1c], edx
// 0096a441  894820               mov dword ptr [eax + 0x20], ecx
// 0096a444  894824               mov dword ptr [eax + 0x24], ecx
// 0096a447  894828               mov dword ptr [eax + 0x28], ecx
// 0096a44a  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096a44d  894830               mov dword ptr [eax + 0x30], ecx
// 0096a450  894834               mov dword ptr [eax + 0x34], ecx
// 0096a453  8a0d4924b100         mov cl, byte ptr [0xb12449]
// 0096a459  895038               mov dword ptr [eax + 0x38], edx
// 0096a45c  89503c               mov dword ptr [eax + 0x3c], edx
// 0096a45f  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096a465  c70001000000         mov dword ptr [eax], 1
// 0096a46b  c7400801000000       mov dword ptr [eax + 8], 1
// 0096a472  c7401442800000       mov dword ptr [eax + 0x14], 0x8042
// 0096a479  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 0096a480  884840               mov byte ptr [eax + 0x40], cl
// 0096a483  885041               mov byte ptr [eax + 0x41], dl
// 0096a486  a3d0dbb700           mov dword ptr [0xb7dbd0], eax
// 0096a48b  c3                   ret 
// 0096a48c  890dd0dbb700         mov dword ptr [0xb7dbd0], ecx
// 0096a492  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
