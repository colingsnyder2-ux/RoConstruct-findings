// roc 2009-12 0096ac20  unit: seg_00960000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096ac20
//
// 0096ac20  6a44                 push 0x44
// 0096ac22  e8398ce8ff           call 0x7f3860
// 0096ac27  33c9                 xor ecx, ecx
// 0096ac29  83c404               add esp, 4
// 0096ac2c  3bc1                 cmp eax, ecx
// 0096ac2e  7465                 je 0x96ac95
// 0096ac30  884804               mov byte ptr [eax + 4], cl
// 0096ac33  894810               mov dword ptr [eax + 0x10], ecx
// 0096ac36  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096ac39  894820               mov dword ptr [eax + 0x20], ecx
// 0096ac3c  ba10000000           mov edx, 0x10
// 0096ac41  894830               mov dword ptr [eax + 0x30], ecx
// 0096ac44  894834               mov dword ptr [eax + 0x34], ecx
// 0096ac47  b930000000           mov ecx, 0x30
// 0096ac4c  895024               mov dword ptr [eax + 0x24], edx
// 0096ac4f  895028               mov dword ptr [eax + 0x28], edx
// 0096ac52  89502c               mov dword ptr [eax + 0x2c], edx
// 0096ac55  8a154824b100         mov dl, byte ptr [0xb12448]
// 0096ac5b  894838               mov dword ptr [eax + 0x38], ecx
// 0096ac5e  89483c               mov dword ptr [eax + 0x3c], ecx
// 0096ac61  8a0d4924b100         mov cl, byte ptr [0xb12449]
// 0096ac67  c70003000000         mov dword ptr [eax], 3
// 0096ac6d  c7400811000000       mov dword ptr [eax + 8], 0x11
// 0096ac74  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0096ac7b  c740141b880000       mov dword ptr [eax + 0x14], 0x881b
// 0096ac82  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 0096ac89  884840               mov byte ptr [eax + 0x40], cl
// 0096ac8c  885041               mov byte ptr [eax + 0x41], dl
// 0096ac8f  a374dbb700           mov dword ptr [0xb7db74], eax
// 0096ac94  c3                   ret 
// 0096ac95  890d74dbb700         mov dword ptr [0xb7db74], ecx
// 0096ac9b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
