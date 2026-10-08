// roc 2009-12 0096a620  unit: seg_00960000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096a620
//
// 0096a620  6a44                 push 0x44
// 0096a622  e83992e8ff           call 0x7f3860
// 0096a627  33c9                 xor ecx, ecx
// 0096a629  83c404               add esp, 4
// 0096a62c  3bc1                 cmp eax, ecx
// 0096a62e  745f                 je 0x96a68f
// 0096a630  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096a636  ba10000000           mov edx, 0x10
// 0096a63b  884804               mov byte ptr [eax + 4], cl
// 0096a63e  89480c               mov dword ptr [eax + 0xc], ecx
// 0096a641  894810               mov dword ptr [eax + 0x10], ecx
// 0096a644  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096a647  895020               mov dword ptr [eax + 0x20], edx
// 0096a64a  894824               mov dword ptr [eax + 0x24], ecx
// 0096a64d  894828               mov dword ptr [eax + 0x28], ecx
// 0096a650  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096a653  894830               mov dword ptr [eax + 0x30], ecx
// 0096a656  894834               mov dword ptr [eax + 0x34], ecx
// 0096a659  895038               mov dword ptr [eax + 0x38], edx
// 0096a65c  89503c               mov dword ptr [eax + 0x3c], edx
// 0096a65f  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096a665  0f94c1               sete cl
// 0096a668  c70001000000         mov dword ptr [eax], 1
// 0096a66e  c7400805000000       mov dword ptr [eax + 8], 5
// 0096a675  c740143e800000       mov dword ptr [eax + 0x14], 0x803e
// 0096a67c  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 0096a683  884840               mov byte ptr [eax + 0x40], cl
// 0096a686  885041               mov byte ptr [eax + 0x41], dl
// 0096a689  a35cdbb700           mov dword ptr [0xb7db5c], eax
// 0096a68e  c3                   ret 
// 0096a68f  890d5cdbb700         mov dword ptr [0xb7db5c], ecx
// 0096a695  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
