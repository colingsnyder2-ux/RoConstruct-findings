// roc 2007-08 0076e160  unit: seg_00760000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e160
//
// 0076e160  6a44                 push 0x44
// 0076e162  e88f1decff           call 0x62fef6
// 0076e167  33c9                 xor ecx, ecx
// 0076e169  83c404               add esp, 4
// 0076e16c  3bc1                 cmp eax, ecx
// 0076e16e  7465                 je 0x76e1d5
// 0076e170  884804               mov byte ptr [eax + 4], cl
// 0076e173  894810               mov dword ptr [eax + 0x10], ecx
// 0076e176  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076e179  894820               mov dword ptr [eax + 0x20], ecx
// 0076e17c  ba20000000           mov edx, 0x20
// 0076e181  894830               mov dword ptr [eax + 0x30], ecx
// 0076e184  894834               mov dword ptr [eax + 0x34], ecx
// 0076e187  b960000000           mov ecx, 0x60
// 0076e18c  895024               mov dword ptr [eax + 0x24], edx
// 0076e18f  895028               mov dword ptr [eax + 0x28], edx
// 0076e192  89502c               mov dword ptr [eax + 0x2c], edx
// 0076e195  8a15a4c18800         mov dl, byte ptr [0x88c1a4]
// 0076e19b  894838               mov dword ptr [eax + 0x38], ecx
// 0076e19e  89483c               mov dword ptr [eax + 0x3c], ecx
// 0076e1a1  8a0da5c18800         mov cl, byte ptr [0x88c1a5]
// 0076e1a7  c70003000000         mov dword ptr [eax], 3
// 0076e1ad  c7400812000000       mov dword ptr [eax + 8], 0x12
// 0076e1b4  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0076e1bb  c7401415880000       mov dword ptr [eax + 0x14], 0x8815
// 0076e1c2  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 0076e1c9  884840               mov byte ptr [eax + 0x40], cl
// 0076e1cc  885041               mov byte ptr [eax + 0x41], dl
// 0076e1cf  a330db8b00           mov dword ptr [0x8bdb30], eax
// 0076e1d4  c3                   ret 
// 0076e1d5  890d30db8b00         mov dword ptr [0x8bdb30], ecx
// 0076e1db  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
