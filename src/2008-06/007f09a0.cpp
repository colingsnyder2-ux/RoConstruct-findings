// roc 2008-06 007f09a0  unit: seg_007f0000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f09a0
//
// 007f09a0  6a44                 push 0x44
// 007f09a2  e879ffeaff           call 0x6a0920
// 007f09a7  33c9                 xor ecx, ecx
// 007f09a9  83c404               add esp, 4
// 007f09ac  3bc1                 cmp eax, ecx
// 007f09ae  7461                 je 0x7f0a11
// 007f09b0  894810               mov dword ptr [eax + 0x10], ecx
// 007f09b3  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f09b6  894820               mov dword ptr [eax + 0x20], ecx
// 007f09b9  894824               mov dword ptr [eax + 0x24], ecx
// 007f09bc  894828               mov dword ptr [eax + 0x28], ecx
// 007f09bf  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f09c2  894830               mov dword ptr [eax + 0x30], ecx
// 007f09c5  894834               mov dword ptr [eax + 0x34], ecx
// 007f09c8  ba01000000           mov edx, 1
// 007f09cd  b940000000           mov ecx, 0x40
// 007f09d2  885004               mov byte ptr [eax + 4], dl
// 007f09d5  89500c               mov dword ptr [eax + 0xc], edx
// 007f09d8  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007f09de  894838               mov dword ptr [eax + 0x38], ecx
// 007f09e1  89483c               mov dword ptr [eax + 0x3c], ecx
// 007f09e4  8a0d154c9300         mov cl, byte ptr [0x934c15]
// 007f09ea  c70003000000         mov dword ptr [eax], 3
// 007f09f0  c7400825000000       mov dword ptr [eax + 8], 0x25
// 007f09f7  c74014f0830000       mov dword ptr [eax + 0x14], 0x83f0
// 007f09fe  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 007f0a05  884840               mov byte ptr [eax + 0x40], cl
// 007f0a08  885041               mov byte ptr [eax + 0x41], dl
// 007f0a0b  a358fa9600           mov dword ptr [0x96fa58], eax
// 007f0a10  c3                   ret 
// 007f0a11  890d58fa9600         mov dword ptr [0x96fa58], ecx
// 007f0a17  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB_DXT1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
