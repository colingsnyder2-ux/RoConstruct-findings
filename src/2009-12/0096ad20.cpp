// roc 2009-12 0096ad20  unit: seg_00960000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096ad20
//
// 0096ad20  6a44                 push 0x44
// 0096ad22  e8398be8ff           call 0x7f3860
// 0096ad27  33c9                 xor ecx, ecx
// 0096ad29  83c404               add esp, 4
// 0096ad2c  3bc1                 cmp eax, ecx
// 0096ad2e  745f                 je 0x96ad8f
// 0096ad30  ba08000000           mov edx, 8
// 0096ad35  884804               mov byte ptr [eax + 4], cl
// 0096ad38  894810               mov dword ptr [eax + 0x10], ecx
// 0096ad3b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096ad3e  895020               mov dword ptr [eax + 0x20], edx
// 0096ad41  895024               mov dword ptr [eax + 0x24], edx
// 0096ad44  895028               mov dword ptr [eax + 0x28], edx
// 0096ad47  89502c               mov dword ptr [eax + 0x2c], edx
// 0096ad4a  894830               mov dword ptr [eax + 0x30], ecx
// 0096ad4d  894834               mov dword ptr [eax + 0x34], ecx
// 0096ad50  884840               mov byte ptr [eax + 0x40], cl
// 0096ad53  8a0d44dbb700         mov cl, byte ptr [0xb7db44]
// 0096ad59  ba20000000           mov edx, 0x20
// 0096ad5e  c70004000000         mov dword ptr [eax], 4
// 0096ad64  c7400815000000       mov dword ptr [eax + 8], 0x15
// 0096ad6b  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0096ad72  c7401458800000       mov dword ptr [eax + 0x14], 0x8058
// 0096ad79  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0096ad80  895038               mov dword ptr [eax + 0x38], edx
// 0096ad83  89503c               mov dword ptr [eax + 0x3c], edx
// 0096ad86  884841               mov byte ptr [eax + 0x41], cl
// 0096ad89  a3b8dbb700           mov dword ptr [0xb7dbb8], eax
// 0096ad8e  c3                   ret 
// 0096ad8f  890db8dbb700         mov dword ptr [0xb7dbb8], ecx
// 0096ad95  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
