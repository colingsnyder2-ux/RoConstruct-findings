// roc 2007-08 0076d8e0  unit: seg_00760000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d8e0
//
// 0076d8e0  6a44                 push 0x44
// 0076d8e2  e80f26ecff           call 0x62fef6
// 0076d8e7  33c9                 xor ecx, ecx
// 0076d8e9  83c404               add esp, 4
// 0076d8ec  3bc1                 cmp eax, ecx
// 0076d8ee  745c                 je 0x76d94c
// 0076d8f0  ba10000000           mov edx, 0x10
// 0076d8f5  884804               mov byte ptr [eax + 4], cl
// 0076d8f8  89480c               mov dword ptr [eax + 0xc], ecx
// 0076d8fb  894810               mov dword ptr [eax + 0x10], ecx
// 0076d8fe  89501c               mov dword ptr [eax + 0x1c], edx
// 0076d901  894820               mov dword ptr [eax + 0x20], ecx
// 0076d904  894824               mov dword ptr [eax + 0x24], ecx
// 0076d907  894828               mov dword ptr [eax + 0x28], ecx
// 0076d90a  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076d90d  894830               mov dword ptr [eax + 0x30], ecx
// 0076d910  894834               mov dword ptr [eax + 0x34], ecx
// 0076d913  8a0da5c18800         mov cl, byte ptr [0x88c1a5]
// 0076d919  895038               mov dword ptr [eax + 0x38], edx
// 0076d91c  89503c               mov dword ptr [eax + 0x3c], edx
// 0076d91f  8a1520db8b00         mov dl, byte ptr [0x8bdb20]
// 0076d925  c70001000000         mov dword ptr [eax], 1
// 0076d92b  c7400801000000       mov dword ptr [eax + 8], 1
// 0076d932  c7401442800000       mov dword ptr [eax + 0x14], 0x8042
// 0076d939  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 0076d940  884840               mov byte ptr [eax + 0x40], cl
// 0076d943  885041               mov byte ptr [eax + 0x41], dl
// 0076d946  a3acdb8b00           mov dword ptr [0x8bdbac], eax
// 0076d94b  c3                   ret 
// 0076d94c  890dacdb8b00         mov dword ptr [0x8bdbac], ecx
// 0076d952  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
