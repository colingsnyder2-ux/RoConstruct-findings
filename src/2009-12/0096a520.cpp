// roc 2009-12 0096a520  unit: seg_00960000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096a520
//
// 0096a520  6a44                 push 0x44
// 0096a522  e83993e8ff           call 0x7f3860
// 0096a527  33c9                 xor ecx, ecx
// 0096a529  83c404               add esp, 4
// 0096a52c  3bc1                 cmp eax, ecx
// 0096a52e  745c                 je 0x96a58c
// 0096a530  ba20000000           mov edx, 0x20
// 0096a535  884804               mov byte ptr [eax + 4], cl
// 0096a538  89480c               mov dword ptr [eax + 0xc], ecx
// 0096a53b  894810               mov dword ptr [eax + 0x10], ecx
// 0096a53e  89501c               mov dword ptr [eax + 0x1c], edx
// 0096a541  894820               mov dword ptr [eax + 0x20], ecx
// 0096a544  894824               mov dword ptr [eax + 0x24], ecx
// 0096a547  894828               mov dword ptr [eax + 0x28], ecx
// 0096a54a  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096a54d  894830               mov dword ptr [eax + 0x30], ecx
// 0096a550  894834               mov dword ptr [eax + 0x34], ecx
// 0096a553  8a0d4924b100         mov cl, byte ptr [0xb12449]
// 0096a559  895038               mov dword ptr [eax + 0x38], edx
// 0096a55c  89503c               mov dword ptr [eax + 0x3c], edx
// 0096a55f  8a154824b100         mov dl, byte ptr [0xb12448]
// 0096a565  c70001000000         mov dword ptr [eax], 1
// 0096a56b  c7400803000000       mov dword ptr [eax + 8], 3
// 0096a572  c7401418880000       mov dword ptr [eax + 0x14], 0x8818
// 0096a579  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 0096a580  884840               mov byte ptr [eax + 0x40], cl
// 0096a583  885041               mov byte ptr [eax + 0x41], dl
// 0096a586  a3acdbb700           mov dword ptr [0xb7dbac], eax
// 0096a58b  c3                   ret 
// 0096a58c  890dacdbb700         mov dword ptr [0xb7dbac], ecx
// 0096a592  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
