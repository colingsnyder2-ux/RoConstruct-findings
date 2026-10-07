// roc 2007-08 0076dfe0  unit: seg_00760000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076dfe0
//
// 0076dfe0  6a44                 push 0x44
// 0076dfe2  e80f1fecff           call 0x62fef6
// 0076dfe7  33c9                 xor ecx, ecx
// 0076dfe9  83c404               add esp, 4
// 0076dfec  3bc1                 cmp eax, ecx
// 0076dfee  7468                 je 0x76e058
// 0076dff0  ba08000000           mov edx, 8
// 0076dff5  884804               mov byte ptr [eax + 4], cl
// 0076dff8  894810               mov dword ptr [eax + 0x10], ecx
// 0076dffb  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076dffe  894820               mov dword ptr [eax + 0x20], ecx
// 0076e001  895024               mov dword ptr [eax + 0x24], edx
// 0076e004  895028               mov dword ptr [eax + 0x28], edx
// 0076e007  89502c               mov dword ptr [eax + 0x2c], edx
// 0076e00a  8a1520db8b00         mov dl, byte ptr [0x8bdb20]
// 0076e010  894830               mov dword ptr [eax + 0x30], ecx
// 0076e013  894834               mov dword ptr [eax + 0x34], ecx
// 0076e016  8a0da5c18800         mov cl, byte ptr [0x88c1a5]
// 0076e01c  c70003000000         mov dword ptr [eax], 3
// 0076e022  c740080f000000       mov dword ptr [eax + 8], 0xf
// 0076e029  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0076e030  c7401451800000       mov dword ptr [eax + 0x14], 0x8051
// 0076e037  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 0076e03e  c7403820000000       mov dword ptr [eax + 0x38], 0x20
// 0076e045  c7403c18000000       mov dword ptr [eax + 0x3c], 0x18
// 0076e04c  884840               mov byte ptr [eax + 0x40], cl
// 0076e04f  885041               mov byte ptr [eax + 0x41], dl
// 0076e052  a39cdb8b00           mov dword ptr [0x8bdb9c], eax
// 0076e057  c3                   ret 
// 0076e058  890d9cdb8b00         mov dword ptr [0x8bdb9c], ecx
// 0076e05e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
