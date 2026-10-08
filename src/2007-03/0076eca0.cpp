// roc 2007-03 0076eca0  unit: seg_00760000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076eca0
//
// 0076eca0  6a44                 push 0x44
// 0076eca2  e861f4eaff           call 0x61e108
// 0076eca7  33c9                 xor ecx, ecx
// 0076eca9  83c404               add esp, 4
// 0076ecac  3bc1                 cmp eax, ecx
// 0076ecae  745c                 je 0x76ed0c
// 0076ecb0  ba20000000           mov edx, 0x20
// 0076ecb5  884804               mov byte ptr [eax + 4], cl
// 0076ecb8  89480c               mov dword ptr [eax + 0xc], ecx
// 0076ecbb  894810               mov dword ptr [eax + 0x10], ecx
// 0076ecbe  89501c               mov dword ptr [eax + 0x1c], edx
// 0076ecc1  894820               mov dword ptr [eax + 0x20], ecx
// 0076ecc4  894824               mov dword ptr [eax + 0x24], ecx
// 0076ecc7  894828               mov dword ptr [eax + 0x28], ecx
// 0076ecca  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076eccd  894830               mov dword ptr [eax + 0x30], ecx
// 0076ecd0  894834               mov dword ptr [eax + 0x34], ecx
// 0076ecd3  8a0dd5b18800         mov cl, byte ptr [0x88b1d5]
// 0076ecd9  895038               mov dword ptr [eax + 0x38], edx
// 0076ecdc  89503c               mov dword ptr [eax + 0x3c], edx
// 0076ecdf  8a15d4b18800         mov dl, byte ptr [0x88b1d4]
// 0076ece5  c70001000000         mov dword ptr [eax], 1
// 0076eceb  c7400803000000       mov dword ptr [eax + 8], 3
// 0076ecf2  c7401418880000       mov dword ptr [eax + 0x14], 0x8818
// 0076ecf9  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 0076ed00  884840               mov byte ptr [eax + 0x40], cl
// 0076ed03  885041               mov byte ptr [eax + 0x41], dl
// 0076ed06  a340828b00           mov dword ptr [0x8b8240], eax
// 0076ed0b  c3                   ret 
// 0076ed0c  890d40828b00         mov dword ptr [0x8b8240], ecx
// 0076ed12  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?L32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
