// from server: 100% by auto
// roc 2007-08 0076d9e0  unit: seg_00760000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d9e0
//
// 0076d9e0  6a44                 push 0x44
// 0076d9e2  e80f25ecff           call 0x62fef6
// 0076d9e7  33c9                 xor ecx, ecx
// 0076d9e9  83c404               add esp, 4
// 0076d9ec  3bc1                 cmp eax, ecx
// 0076d9ee  745c                 je 0x76da4c
// 0076d9f0  ba20000000           mov edx, 0x20
// 0076d9f5  884804               mov byte ptr [eax + 4], cl
// 0076d9f8  89480c               mov dword ptr [eax + 0xc], ecx
// 0076d9fb  894810               mov dword ptr [eax + 0x10], ecx
// 0076d9fe  89501c               mov dword ptr [eax + 0x1c], edx
// 0076da01  894820               mov dword ptr [eax + 0x20], ecx
// 0076da04  894824               mov dword ptr [eax + 0x24], ecx
// 0076da07  894828               mov dword ptr [eax + 0x28], ecx
// 0076da0a  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076da0d  894830               mov dword ptr [eax + 0x30], ecx
// 0076da10  894834               mov dword ptr [eax + 0x34], ecx
// 0076da13  8a0da5c18800         mov cl, byte ptr [0x88c1a5]
// 0076da19  895038               mov dword ptr [eax + 0x38], edx
// 0076da1c  89503c               mov dword ptr [eax + 0x3c], edx
// 0076da1f  8a15a4c18800         mov dl, byte ptr [0x88c1a4]
// 0076da25  c70001000000         mov dword ptr [eax], 1
// 0076da2b  c7400803000000       mov dword ptr [eax + 8], 3
// 0076da32  c7401418880000       mov dword ptr [eax + 0x14], 0x8818
// 0076da39  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 0076da40  884840               mov byte ptr [eax + 0x40], cl
// 0076da43  885041               mov byte ptr [eax + 0x41], dl
// 0076da46  a388db8b00           mov dword ptr [0x8bdb88], eax
// 0076da4b  c3                   ret 
// 0076da4c  890d88db8b00         mov dword ptr [0x8bdb88], ecx
// 0076da52  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
