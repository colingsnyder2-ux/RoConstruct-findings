// roc 2009-12 0096a5a0  unit: seg_00960000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096a5a0
//
// 0096a5a0  6a44                 push 0x44
// 0096a5a2  e8b992e8ff           call 0x7f3860
// 0096a5a7  33c9                 xor ecx, ecx
// 0096a5a9  83c404               add esp, 4
// 0096a5ac  3bc1                 cmp eax, ecx
// 0096a5ae  745f                 je 0x96a60f
// 0096a5b0  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096a5b6  ba08000000           mov edx, 8
// 0096a5bb  884804               mov byte ptr [eax + 4], cl
// 0096a5be  89480c               mov dword ptr [eax + 0xc], ecx
// 0096a5c1  894810               mov dword ptr [eax + 0x10], ecx
// 0096a5c4  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096a5c7  895020               mov dword ptr [eax + 0x20], edx
// 0096a5ca  894824               mov dword ptr [eax + 0x24], ecx
// 0096a5cd  894828               mov dword ptr [eax + 0x28], ecx
// 0096a5d0  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096a5d3  894830               mov dword ptr [eax + 0x30], ecx
// 0096a5d6  894834               mov dword ptr [eax + 0x34], ecx
// 0096a5d9  895038               mov dword ptr [eax + 0x38], edx
// 0096a5dc  89503c               mov dword ptr [eax + 0x3c], edx
// 0096a5df  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096a5e5  0f94c1               sete cl
// 0096a5e8  c70001000000         mov dword ptr [eax], 1
// 0096a5ee  c7400804000000       mov dword ptr [eax + 8], 4
// 0096a5f5  c740143c800000       mov dword ptr [eax + 0x14], 0x803c
// 0096a5fc  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 0096a603  884840               mov byte ptr [eax + 0x40], cl
// 0096a606  885041               mov byte ptr [eax + 0x41], dl
// 0096a609  a3c8dbb700           mov dword ptr [0xb7dbc8], eax
// 0096a60e  c3                   ret 
// 0096a60f  890dc8dbb700         mov dword ptr [0xb7dbc8], ecx
// 0096a615  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
