// roc 2007-03 0076f8a0  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f8a0
//
// 0076f8a0  6a44                 push 0x44
// 0076f8a2  e861e8eaff           call 0x61e108
// 0076f8a7  33c9                 xor ecx, ecx
// 0076f8a9  83c404               add esp, 4
// 0076f8ac  3bc1                 cmp eax, ecx
// 0076f8ae  745f                 je 0x76f90f
// 0076f8b0  380dd5b18800         cmp byte ptr [0x88b1d5], cl
// 0076f8b6  ba10000000           mov edx, 0x10
// 0076f8bb  884804               mov byte ptr [eax + 4], cl
// 0076f8be  89480c               mov dword ptr [eax + 0xc], ecx
// 0076f8c1  894810               mov dword ptr [eax + 0x10], ecx
// 0076f8c4  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076f8c7  894820               mov dword ptr [eax + 0x20], ecx
// 0076f8ca  894824               mov dword ptr [eax + 0x24], ecx
// 0076f8cd  894828               mov dword ptr [eax + 0x28], ecx
// 0076f8d0  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076f8d3  895030               mov dword ptr [eax + 0x30], edx
// 0076f8d6  894834               mov dword ptr [eax + 0x34], ecx
// 0076f8d9  895038               mov dword ptr [eax + 0x38], edx
// 0076f8dc  89503c               mov dword ptr [eax + 0x3c], edx
// 0076f8df  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076f8e5  0f94c1               sete cl
// 0076f8e8  c70001000000         mov dword ptr [eax], 1
// 0076f8ee  c7400829000000       mov dword ptr [eax + 8], 0x29
// 0076f8f5  c74014a5810000       mov dword ptr [eax + 0x14], 0x81a5
// 0076f8fc  c7401802190000       mov dword ptr [eax + 0x18], 0x1902
// 0076f903  884840               mov byte ptr [eax + 0x40], cl
// 0076f906  885041               mov byte ptr [eax + 0x41], dl
// 0076f909  a324828b00           mov dword ptr [0x8b8224], eax
// 0076f90e  c3                   ret 
// 0076f90f  890d24828b00         mov dword ptr [0x8b8224], ecx
// 0076f915  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?DEPTH16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
