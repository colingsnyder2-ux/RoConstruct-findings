// from server: 100% by auto
// roc 2007-08 0076e260  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e260
//
// 0076e260  6a44                 push 0x44
// 0076e262  e88f1cecff           call 0x62fef6
// 0076e267  33c9                 xor ecx, ecx
// 0076e269  83c404               add esp, 4
// 0076e26c  3bc1                 cmp eax, ecx
// 0076e26e  745f                 je 0x76e2cf
// 0076e270  ba10000000           mov edx, 0x10
// 0076e275  884804               mov byte ptr [eax + 4], cl
// 0076e278  894810               mov dword ptr [eax + 0x10], ecx
// 0076e27b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076e27e  895020               mov dword ptr [eax + 0x20], edx
// 0076e281  895024               mov dword ptr [eax + 0x24], edx
// 0076e284  895028               mov dword ptr [eax + 0x28], edx
// 0076e287  89502c               mov dword ptr [eax + 0x2c], edx
// 0076e28a  894830               mov dword ptr [eax + 0x30], ecx
// 0076e28d  894834               mov dword ptr [eax + 0x34], ecx
// 0076e290  884840               mov byte ptr [eax + 0x40], cl
// 0076e293  8a0d20db8b00         mov cl, byte ptr [0x8bdb20]
// 0076e299  ba40000000           mov edx, 0x40
// 0076e29e  c70004000000         mov dword ptr [eax], 4
// 0076e2a4  c7400816000000       mov dword ptr [eax + 8], 0x16
// 0076e2ab  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0076e2b2  c740145b800000       mov dword ptr [eax + 0x14], 0x805b
// 0076e2b9  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0076e2c0  895038               mov dword ptr [eax + 0x38], edx
// 0076e2c3  89503c               mov dword ptr [eax + 0x3c], edx
// 0076e2c6  884841               mov byte ptr [eax + 0x41], cl
// 0076e2c9  a390db8b00           mov dword ptr [0x8bdb90], eax
// 0076e2ce  c3                   ret 
// 0076e2cf  890d90db8b00         mov dword ptr [0x8bdb90], ecx
// 0076e2d5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
