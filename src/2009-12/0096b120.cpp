// roc 2009-12 0096b120  unit: seg_00960000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096b120
//
// 0096b120  6a44                 push 0x44
// 0096b122  e83987e8ff           call 0x7f3860
// 0096b127  33c9                 xor ecx, ecx
// 0096b129  83c404               add esp, 4
// 0096b12c  3bc1                 cmp eax, ecx
// 0096b12e  745f                 je 0x96b18f
// 0096b130  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096b136  ba10000000           mov edx, 0x10
// 0096b13b  884804               mov byte ptr [eax + 4], cl
// 0096b13e  89480c               mov dword ptr [eax + 0xc], ecx
// 0096b141  894810               mov dword ptr [eax + 0x10], ecx
// 0096b144  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096b147  894820               mov dword ptr [eax + 0x20], ecx
// 0096b14a  894824               mov dword ptr [eax + 0x24], ecx
// 0096b14d  894828               mov dword ptr [eax + 0x28], ecx
// 0096b150  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096b153  895030               mov dword ptr [eax + 0x30], edx
// 0096b156  894834               mov dword ptr [eax + 0x34], ecx
// 0096b159  895038               mov dword ptr [eax + 0x38], edx
// 0096b15c  89503c               mov dword ptr [eax + 0x3c], edx
// 0096b15f  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096b165  0f94c1               sete cl
// 0096b168  c70001000000         mov dword ptr [eax], 1
// 0096b16e  c7400829000000       mov dword ptr [eax + 8], 0x29
// 0096b175  c74014a5810000       mov dword ptr [eax + 0x14], 0x81a5
// 0096b17c  c7401802190000       mov dword ptr [eax + 0x18], 0x1902
// 0096b183  884840               mov byte ptr [eax + 0x40], cl
// 0096b186  885041               mov byte ptr [eax + 0x41], dl
// 0096b189  a390dbb700           mov dword ptr [0xb7db90], eax
// 0096b18e  c3                   ret 
// 0096b18f  890d90dbb700         mov dword ptr [0xb7db90], ecx
// 0096b195  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?DEPTH16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
