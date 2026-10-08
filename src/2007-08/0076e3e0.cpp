// from server: 100% by auto
// roc 2007-08 0076e3e0  unit: seg_00760000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e3e0
//
// 0076e3e0  6a44                 push 0x44
// 0076e3e2  e80f1becff           call 0x62fef6
// 0076e3e7  33c9                 xor ecx, ecx
// 0076e3e9  83c404               add esp, 4
// 0076e3ec  3bc1                 cmp eax, ecx
// 0076e3ee  7461                 je 0x76e451
// 0076e3f0  894810               mov dword ptr [eax + 0x10], ecx
// 0076e3f3  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076e3f6  894820               mov dword ptr [eax + 0x20], ecx
// 0076e3f9  894824               mov dword ptr [eax + 0x24], ecx
// 0076e3fc  894828               mov dword ptr [eax + 0x28], ecx
// 0076e3ff  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076e402  894830               mov dword ptr [eax + 0x30], ecx
// 0076e405  894834               mov dword ptr [eax + 0x34], ecx
// 0076e408  ba01000000           mov edx, 1
// 0076e40d  b940000000           mov ecx, 0x40
// 0076e412  885004               mov byte ptr [eax + 4], dl
// 0076e415  89500c               mov dword ptr [eax + 0xc], edx
// 0076e418  8a1520db8b00         mov dl, byte ptr [0x8bdb20]
// 0076e41e  894838               mov dword ptr [eax + 0x38], ecx
// 0076e421  89483c               mov dword ptr [eax + 0x3c], ecx
// 0076e424  8a0da5c18800         mov cl, byte ptr [0x88c1a5]
// 0076e42a  c70003000000         mov dword ptr [eax], 3
// 0076e430  c7400825000000       mov dword ptr [eax + 8], 0x25
// 0076e437  c74014f0830000       mov dword ptr [eax + 0x14], 0x83f0
// 0076e43e  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 0076e445  884840               mov byte ptr [eax + 0x40], cl
// 0076e448  885041               mov byte ptr [eax + 0x41], dl
// 0076e44b  a344db8b00           mov dword ptr [0x8bdb44], eax
// 0076e450  c3                   ret 
// 0076e451  890d44db8b00         mov dword ptr [0x8bdb44], ecx
// 0076e457  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB_DXT1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
