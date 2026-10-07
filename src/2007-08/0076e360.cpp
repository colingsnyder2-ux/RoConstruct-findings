// roc 2007-08 0076e360  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e360
//
// 0076e360  6a44                 push 0x44
// 0076e362  e88f1becff           call 0x62fef6
// 0076e367  33c9                 xor ecx, ecx
// 0076e369  83c404               add esp, 4
// 0076e36c  3bc1                 cmp eax, ecx
// 0076e36e  745f                 je 0x76e3cf
// 0076e370  ba20000000           mov edx, 0x20
// 0076e375  884804               mov byte ptr [eax + 4], cl
// 0076e378  894810               mov dword ptr [eax + 0x10], ecx
// 0076e37b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076e37e  895020               mov dword ptr [eax + 0x20], edx
// 0076e381  895024               mov dword ptr [eax + 0x24], edx
// 0076e384  895028               mov dword ptr [eax + 0x28], edx
// 0076e387  89502c               mov dword ptr [eax + 0x2c], edx
// 0076e38a  894830               mov dword ptr [eax + 0x30], ecx
// 0076e38d  894834               mov dword ptr [eax + 0x34], ecx
// 0076e390  884840               mov byte ptr [eax + 0x40], cl
// 0076e393  8a0da4c18800         mov cl, byte ptr [0x88c1a4]
// 0076e399  ba80000000           mov edx, 0x80
// 0076e39e  c70004000000         mov dword ptr [eax], 4
// 0076e3a4  c7400818000000       mov dword ptr [eax + 8], 0x18
// 0076e3ab  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0076e3b2  c7401414880000       mov dword ptr [eax + 0x14], 0x8814
// 0076e3b9  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0076e3c0  895038               mov dword ptr [eax + 0x38], edx
// 0076e3c3  89503c               mov dword ptr [eax + 0x3c], edx
// 0076e3c6  884841               mov byte ptr [eax + 0x41], cl
// 0076e3c9  a348db8b00           mov dword ptr [0x8bdb48], eax
// 0076e3ce  c3                   ret 
// 0076e3cf  890d48db8b00         mov dword ptr [0x8bdb48], ecx
// 0076e3d5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
