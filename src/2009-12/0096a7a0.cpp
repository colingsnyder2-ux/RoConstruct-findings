// roc 2009-12 0096a7a0  unit: seg_00960000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096a7a0
//
// 0096a7a0  6a44                 push 0x44
// 0096a7a2  e8b990e8ff           call 0x7f3860
// 0096a7a7  33c9                 xor ecx, ecx
// 0096a7a9  83c404               add esp, 4
// 0096a7ac  3bc1                 cmp eax, ecx
// 0096a7ae  7463                 je 0x96a813
// 0096a7b0  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096a7b6  ba08000000           mov edx, 8
// 0096a7bb  884804               mov byte ptr [eax + 4], cl
// 0096a7be  895008               mov dword ptr [eax + 8], edx
// 0096a7c1  89480c               mov dword ptr [eax + 0xc], ecx
// 0096a7c4  894810               mov dword ptr [eax + 0x10], ecx
// 0096a7c7  894824               mov dword ptr [eax + 0x24], ecx
// 0096a7ca  894828               mov dword ptr [eax + 0x28], ecx
// 0096a7cd  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096a7d0  894830               mov dword ptr [eax + 0x30], ecx
// 0096a7d3  894834               mov dword ptr [eax + 0x34], ecx
// 0096a7d6  895038               mov dword ptr [eax + 0x38], edx
// 0096a7d9  89503c               mov dword ptr [eax + 0x3c], edx
// 0096a7dc  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096a7e2  0f94c1               sete cl
// 0096a7e5  c70002000000         mov dword ptr [eax], 2
// 0096a7eb  c7401443800000       mov dword ptr [eax + 0x14], 0x8043
// 0096a7f2  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 0096a7f9  c7401c04000000       mov dword ptr [eax + 0x1c], 4
// 0096a800  c7402004000000       mov dword ptr [eax + 0x20], 4
// 0096a807  884840               mov byte ptr [eax + 0x40], cl
// 0096a80a  885041               mov byte ptr [eax + 0x41], dl
// 0096a80d  a378dbb700           mov dword ptr [0xb7db78], eax
// 0096a812  c3                   ret 
// 0096a813  890d78dbb700         mov dword ptr [0xb7db78], ecx
// 0096a819  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA4@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
