// roc 2009-12 0096b320  unit: seg_00960000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096b320
//
// 0096b320  6a44                 push 0x44
// 0096b322  e83985e8ff           call 0x7f3860
// 0096b327  33c9                 xor ecx, ecx
// 0096b329  83c404               add esp, 4
// 0096b32c  3bc1                 cmp eax, ecx
// 0096b32e  745f                 je 0x96b38f
// 0096b330  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096b336  ba04000000           mov edx, 4
// 0096b33b  884804               mov byte ptr [eax + 4], cl
// 0096b33e  89480c               mov dword ptr [eax + 0xc], ecx
// 0096b341  894810               mov dword ptr [eax + 0x10], ecx
// 0096b344  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096b347  894820               mov dword ptr [eax + 0x20], ecx
// 0096b34a  894824               mov dword ptr [eax + 0x24], ecx
// 0096b34d  894828               mov dword ptr [eax + 0x28], ecx
// 0096b350  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096b353  895030               mov dword ptr [eax + 0x30], edx
// 0096b356  894834               mov dword ptr [eax + 0x34], ecx
// 0096b359  895038               mov dword ptr [eax + 0x38], edx
// 0096b35c  89503c               mov dword ptr [eax + 0x3c], edx
// 0096b35f  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096b365  0f94c1               sete cl
// 0096b368  c70001000000         mov dword ptr [eax], 1
// 0096b36e  c740082d000000       mov dword ptr [eax + 8], 0x2d
// 0096b375  c74014478d0000       mov dword ptr [eax + 0x14], 0x8d47
// 0096b37c  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 0096b383  884840               mov byte ptr [eax + 0x40], cl
// 0096b386  885041               mov byte ptr [eax + 0x41], dl
// 0096b389  a3a4dbb700           mov dword ptr [0xb7dba4], eax
// 0096b38e  c3                   ret 
// 0096b38f  890da4dbb700         mov dword ptr [0xb7dba4], ecx
// 0096b395  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL4@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
