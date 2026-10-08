// roc 2007-03 0076f7a0  unit: seg_00760000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f7a0
//
// 0076f7a0  6a44                 push 0x44
// 0076f7a2  e861e9eaff           call 0x61e108
// 0076f7a7  33c9                 xor ecx, ecx
// 0076f7a9  83c404               add esp, 4
// 0076f7ac  3bc1                 cmp eax, ecx
// 0076f7ae  7464                 je 0x76f814
// 0076f7b0  380dd5b18800         cmp byte ptr [0x88b1d5], cl
// 0076f7b6  ba01000000           mov edx, 1
// 0076f7bb  885004               mov byte ptr [eax + 4], dl
// 0076f7be  89500c               mov dword ptr [eax + 0xc], edx
// 0076f7c1  ba80000000           mov edx, 0x80
// 0076f7c6  894810               mov dword ptr [eax + 0x10], ecx
// 0076f7c9  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076f7cc  894820               mov dword ptr [eax + 0x20], ecx
// 0076f7cf  894824               mov dword ptr [eax + 0x24], ecx
// 0076f7d2  894828               mov dword ptr [eax + 0x28], ecx
// 0076f7d5  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076f7d8  894830               mov dword ptr [eax + 0x30], ecx
// 0076f7db  894834               mov dword ptr [eax + 0x34], ecx
// 0076f7de  895038               mov dword ptr [eax + 0x38], edx
// 0076f7e1  89503c               mov dword ptr [eax + 0x3c], edx
// 0076f7e4  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076f7ea  0f94c1               sete cl
// 0076f7ed  c70004000000         mov dword ptr [eax], 4
// 0076f7f3  c7400827000000       mov dword ptr [eax + 8], 0x27
// 0076f7fa  c74014f2830000       mov dword ptr [eax + 0x14], 0x83f2
// 0076f801  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0076f808  884840               mov byte ptr [eax + 0x40], cl
// 0076f80b  885041               mov byte ptr [eax + 0x41], dl
// 0076f80e  a304828b00           mov dword ptr [0x8b8204], eax
// 0076f813  c3                   ret 
// 0076f814  890d04828b00         mov dword ptr [0x8b8204], ecx
// 0076f81a  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA_DXT3@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
