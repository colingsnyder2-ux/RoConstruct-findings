// roc 2009-12 0096b1a0  unit: seg_00960000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096b1a0
//
// 0096b1a0  6a44                 push 0x44
// 0096b1a2  e8b986e8ff           call 0x7f3860
// 0096b1a7  33c9                 xor ecx, ecx
// 0096b1a9  83c404               add esp, 4
// 0096b1ac  3bc1                 cmp eax, ecx
// 0096b1ae  7463                 je 0x96b213
// 0096b1b0  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096b1b6  ba18000000           mov edx, 0x18
// 0096b1bb  884804               mov byte ptr [eax + 4], cl
// 0096b1be  89480c               mov dword ptr [eax + 0xc], ecx
// 0096b1c1  894810               mov dword ptr [eax + 0x10], ecx
// 0096b1c4  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096b1c7  894820               mov dword ptr [eax + 0x20], ecx
// 0096b1ca  894824               mov dword ptr [eax + 0x24], ecx
// 0096b1cd  894828               mov dword ptr [eax + 0x28], ecx
// 0096b1d0  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096b1d3  895030               mov dword ptr [eax + 0x30], edx
// 0096b1d6  894834               mov dword ptr [eax + 0x34], ecx
// 0096b1d9  895038               mov dword ptr [eax + 0x38], edx
// 0096b1dc  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096b1e2  0f94c1               sete cl
// 0096b1e5  c70001000000         mov dword ptr [eax], 1
// 0096b1eb  c740082a000000       mov dword ptr [eax + 8], 0x2a
// 0096b1f2  c74014a6810000       mov dword ptr [eax + 0x14], 0x81a6
// 0096b1f9  c7401802190000       mov dword ptr [eax + 0x18], 0x1902
// 0096b200  c7403c20000000       mov dword ptr [eax + 0x3c], 0x20
// 0096b207  884840               mov byte ptr [eax + 0x40], cl
// 0096b20a  885041               mov byte ptr [eax + 0x41], dl
// 0096b20d  a37cdbb700           mov dword ptr [0xb7db7c], eax
// 0096b212  c3                   ret 
// 0096b213  890d7cdbb700         mov dword ptr [0xb7db7c], ecx
// 0096b219  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?DEPTH24@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
