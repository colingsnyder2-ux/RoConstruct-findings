// roc 2007-03 0076f9a0  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f9a0
//
// 0076f9a0  6a44                 push 0x44
// 0076f9a2  e861e7eaff           call 0x61e108
// 0076f9a7  33c9                 xor ecx, ecx
// 0076f9a9  83c404               add esp, 4
// 0076f9ac  3bc1                 cmp eax, ecx
// 0076f9ae  745f                 je 0x76fa0f
// 0076f9b0  380dd5b18800         cmp byte ptr [0x88b1d5], cl
// 0076f9b6  ba20000000           mov edx, 0x20
// 0076f9bb  884804               mov byte ptr [eax + 4], cl
// 0076f9be  89480c               mov dword ptr [eax + 0xc], ecx
// 0076f9c1  894810               mov dword ptr [eax + 0x10], ecx
// 0076f9c4  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076f9c7  894820               mov dword ptr [eax + 0x20], ecx
// 0076f9ca  894824               mov dword ptr [eax + 0x24], ecx
// 0076f9cd  894828               mov dword ptr [eax + 0x28], ecx
// 0076f9d0  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076f9d3  895030               mov dword ptr [eax + 0x30], edx
// 0076f9d6  894834               mov dword ptr [eax + 0x34], ecx
// 0076f9d9  895038               mov dword ptr [eax + 0x38], edx
// 0076f9dc  89503c               mov dword ptr [eax + 0x3c], edx
// 0076f9df  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076f9e5  0f94c1               sete cl
// 0076f9e8  c70001000000         mov dword ptr [eax], 1
// 0076f9ee  c740082b000000       mov dword ptr [eax + 8], 0x2b
// 0076f9f5  c74014a7810000       mov dword ptr [eax + 0x14], 0x81a7
// 0076f9fc  c7401802190000       mov dword ptr [eax + 0x18], 0x1902
// 0076fa03  884840               mov byte ptr [eax + 0x40], cl
// 0076fa06  885041               mov byte ptr [eax + 0x41], dl
// 0076fa09  a368828b00           mov dword ptr [0x8b8268], eax
// 0076fa0e  c3                   ret 
// 0076fa0f  890d68828b00         mov dword ptr [0x8b8268], ecx
// 0076fa15  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?DEPTH32@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
