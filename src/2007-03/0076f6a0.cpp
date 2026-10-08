// roc 2007-03 0076f6a0  unit: seg_00760000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f6a0
//
// 0076f6a0  6a44                 push 0x44
// 0076f6a2  e861eaeaff           call 0x61e108
// 0076f6a7  33c9                 xor ecx, ecx
// 0076f6a9  83c404               add esp, 4
// 0076f6ac  3bc1                 cmp eax, ecx
// 0076f6ae  7461                 je 0x76f711
// 0076f6b0  894810               mov dword ptr [eax + 0x10], ecx
// 0076f6b3  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076f6b6  894820               mov dword ptr [eax + 0x20], ecx
// 0076f6b9  894824               mov dword ptr [eax + 0x24], ecx
// 0076f6bc  894828               mov dword ptr [eax + 0x28], ecx
// 0076f6bf  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076f6c2  894830               mov dword ptr [eax + 0x30], ecx
// 0076f6c5  894834               mov dword ptr [eax + 0x34], ecx
// 0076f6c8  ba01000000           mov edx, 1
// 0076f6cd  b940000000           mov ecx, 0x40
// 0076f6d2  885004               mov byte ptr [eax + 4], dl
// 0076f6d5  89500c               mov dword ptr [eax + 0xc], edx
// 0076f6d8  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076f6de  894838               mov dword ptr [eax + 0x38], ecx
// 0076f6e1  89483c               mov dword ptr [eax + 0x3c], ecx
// 0076f6e4  8a0dd5b18800         mov cl, byte ptr [0x88b1d5]
// 0076f6ea  c70003000000         mov dword ptr [eax], 3
// 0076f6f0  c7400825000000       mov dword ptr [eax + 8], 0x25
// 0076f6f7  c74014f0830000       mov dword ptr [eax + 0x14], 0x83f0
// 0076f6fe  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 0076f705  884840               mov byte ptr [eax + 0x40], cl
// 0076f708  885041               mov byte ptr [eax + 0x41], dl
// 0076f70b  a3fc818b00           mov dword ptr [0x8b81fc], eax
// 0076f710  c3                   ret 
// 0076f711  890dfc818b00         mov dword ptr [0x8b81fc], ecx
// 0076f717  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB_DXT1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
