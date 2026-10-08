// roc 2009-12 0096b3a0  unit: seg_00960000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096b3a0
//
// 0096b3a0  6a44                 push 0x44
// 0096b3a2  e8b984e8ff           call 0x7f3860
// 0096b3a7  33c9                 xor ecx, ecx
// 0096b3a9  83c404               add esp, 4
// 0096b3ac  3bc1                 cmp eax, ecx
// 0096b3ae  745f                 je 0x96b40f
// 0096b3b0  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096b3b6  ba08000000           mov edx, 8
// 0096b3bb  884804               mov byte ptr [eax + 4], cl
// 0096b3be  89480c               mov dword ptr [eax + 0xc], ecx
// 0096b3c1  894810               mov dword ptr [eax + 0x10], ecx
// 0096b3c4  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096b3c7  894820               mov dword ptr [eax + 0x20], ecx
// 0096b3ca  894824               mov dword ptr [eax + 0x24], ecx
// 0096b3cd  894828               mov dword ptr [eax + 0x28], ecx
// 0096b3d0  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096b3d3  895030               mov dword ptr [eax + 0x30], edx
// 0096b3d6  894834               mov dword ptr [eax + 0x34], ecx
// 0096b3d9  895038               mov dword ptr [eax + 0x38], edx
// 0096b3dc  89503c               mov dword ptr [eax + 0x3c], edx
// 0096b3df  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096b3e5  0f94c1               sete cl
// 0096b3e8  c70001000000         mov dword ptr [eax], 1
// 0096b3ee  c740082e000000       mov dword ptr [eax + 8], 0x2e
// 0096b3f5  c74014488d0000       mov dword ptr [eax + 0x14], 0x8d48
// 0096b3fc  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 0096b403  884840               mov byte ptr [eax + 0x40], cl
// 0096b406  885041               mov byte ptr [eax + 0x41], dl
// 0096b409  a398dbb700           mov dword ptr [0xb7db98], eax
// 0096b40e  c3                   ret 
// 0096b40f  890d98dbb700         mov dword ptr [0xb7db98], ecx
// 0096b415  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
