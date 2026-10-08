// roc 2009-12 0096aea0  unit: seg_00960000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096aea0
//
// 0096aea0  6a44                 push 0x44
// 0096aea2  e8b989e8ff           call 0x7f3860
// 0096aea7  33c9                 xor ecx, ecx
// 0096aea9  83c404               add esp, 4
// 0096aeac  3bc1                 cmp eax, ecx
// 0096aeae  745f                 je 0x96af0f
// 0096aeb0  ba20000000           mov edx, 0x20
// 0096aeb5  884804               mov byte ptr [eax + 4], cl
// 0096aeb8  894810               mov dword ptr [eax + 0x10], ecx
// 0096aebb  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096aebe  895020               mov dword ptr [eax + 0x20], edx
// 0096aec1  895024               mov dword ptr [eax + 0x24], edx
// 0096aec4  895028               mov dword ptr [eax + 0x28], edx
// 0096aec7  89502c               mov dword ptr [eax + 0x2c], edx
// 0096aeca  894830               mov dword ptr [eax + 0x30], ecx
// 0096aecd  894834               mov dword ptr [eax + 0x34], ecx
// 0096aed0  884840               mov byte ptr [eax + 0x40], cl
// 0096aed3  8a0d4824b100         mov cl, byte ptr [0xb12448]
// 0096aed9  ba80000000           mov edx, 0x80
// 0096aede  c70004000000         mov dword ptr [eax], 4
// 0096aee4  c7400818000000       mov dword ptr [eax + 8], 0x18
// 0096aeeb  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0096aef2  c7401414880000       mov dword ptr [eax + 0x14], 0x8814
// 0096aef9  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0096af00  895038               mov dword ptr [eax + 0x38], edx
// 0096af03  89503c               mov dword ptr [eax + 0x3c], edx
// 0096af06  884841               mov byte ptr [eax + 0x41], cl
// 0096af09  a36cdbb700           mov dword ptr [0xb7db6c], eax
// 0096af0e  c3                   ret 
// 0096af0f  890d6cdbb700         mov dword ptr [0xb7db6c], ecx
// 0096af15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
