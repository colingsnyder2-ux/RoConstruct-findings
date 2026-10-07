// roc 2007-08 0076e0e0  unit: seg_00760000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e0e0
//
// 0076e0e0  6a44                 push 0x44
// 0076e0e2  e80f1eecff           call 0x62fef6
// 0076e0e7  33c9                 xor ecx, ecx
// 0076e0e9  83c404               add esp, 4
// 0076e0ec  3bc1                 cmp eax, ecx
// 0076e0ee  7465                 je 0x76e155
// 0076e0f0  884804               mov byte ptr [eax + 4], cl
// 0076e0f3  894810               mov dword ptr [eax + 0x10], ecx
// 0076e0f6  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076e0f9  894820               mov dword ptr [eax + 0x20], ecx
// 0076e0fc  ba10000000           mov edx, 0x10
// 0076e101  894830               mov dword ptr [eax + 0x30], ecx
// 0076e104  894834               mov dword ptr [eax + 0x34], ecx
// 0076e107  b930000000           mov ecx, 0x30
// 0076e10c  895024               mov dword ptr [eax + 0x24], edx
// 0076e10f  895028               mov dword ptr [eax + 0x28], edx
// 0076e112  89502c               mov dword ptr [eax + 0x2c], edx
// 0076e115  8a15a4c18800         mov dl, byte ptr [0x88c1a4]
// 0076e11b  894838               mov dword ptr [eax + 0x38], ecx
// 0076e11e  89483c               mov dword ptr [eax + 0x3c], ecx
// 0076e121  8a0da5c18800         mov cl, byte ptr [0x88c1a5]
// 0076e127  c70003000000         mov dword ptr [eax], 3
// 0076e12d  c7400811000000       mov dword ptr [eax + 8], 0x11
// 0076e134  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0076e13b  c740141b880000       mov dword ptr [eax + 0x14], 0x881b
// 0076e142  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 0076e149  884840               mov byte ptr [eax + 0x40], cl
// 0076e14c  885041               mov byte ptr [eax + 0x41], dl
// 0076e14f  a350db8b00           mov dword ptr [0x8bdb50], eax
// 0076e154  c3                   ret 
// 0076e155  890d50db8b00         mov dword ptr [0x8bdb50], ecx
// 0076e15b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
