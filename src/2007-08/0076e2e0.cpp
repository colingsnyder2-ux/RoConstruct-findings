// roc 2007-08 0076e2e0  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e2e0
//
// 0076e2e0  6a44                 push 0x44
// 0076e2e2  e80f1cecff           call 0x62fef6
// 0076e2e7  33c9                 xor ecx, ecx
// 0076e2e9  83c404               add esp, 4
// 0076e2ec  3bc1                 cmp eax, ecx
// 0076e2ee  745f                 je 0x76e34f
// 0076e2f0  ba10000000           mov edx, 0x10
// 0076e2f5  884804               mov byte ptr [eax + 4], cl
// 0076e2f8  894810               mov dword ptr [eax + 0x10], ecx
// 0076e2fb  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076e2fe  895020               mov dword ptr [eax + 0x20], edx
// 0076e301  895024               mov dword ptr [eax + 0x24], edx
// 0076e304  895028               mov dword ptr [eax + 0x28], edx
// 0076e307  89502c               mov dword ptr [eax + 0x2c], edx
// 0076e30a  894830               mov dword ptr [eax + 0x30], ecx
// 0076e30d  894834               mov dword ptr [eax + 0x34], ecx
// 0076e310  884840               mov byte ptr [eax + 0x40], cl
// 0076e313  8a0da4c18800         mov cl, byte ptr [0x88c1a4]
// 0076e319  ba40000000           mov edx, 0x40
// 0076e31e  c70004000000         mov dword ptr [eax], 4
// 0076e324  c7400811000000       mov dword ptr [eax + 8], 0x11
// 0076e32b  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0076e332  c740141a880000       mov dword ptr [eax + 0x14], 0x881a
// 0076e339  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0076e340  895038               mov dword ptr [eax + 0x38], edx
// 0076e343  89503c               mov dword ptr [eax + 0x3c], edx
// 0076e346  884841               mov byte ptr [eax + 0x41], cl
// 0076e349  a32cdb8b00           mov dword ptr [0x8bdb2c], eax
// 0076e34e  c3                   ret 
// 0076e34f  890d2cdb8b00         mov dword ptr [0x8bdb2c], ecx
// 0076e355  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
