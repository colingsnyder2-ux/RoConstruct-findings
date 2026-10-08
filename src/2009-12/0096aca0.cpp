// roc 2009-12 0096aca0  unit: seg_00960000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096aca0
//
// 0096aca0  6a44                 push 0x44
// 0096aca2  e8b98be8ff           call 0x7f3860
// 0096aca7  33c9                 xor ecx, ecx
// 0096aca9  83c404               add esp, 4
// 0096acac  3bc1                 cmp eax, ecx
// 0096acae  7465                 je 0x96ad15
// 0096acb0  884804               mov byte ptr [eax + 4], cl
// 0096acb3  894810               mov dword ptr [eax + 0x10], ecx
// 0096acb6  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096acb9  894820               mov dword ptr [eax + 0x20], ecx
// 0096acbc  ba20000000           mov edx, 0x20
// 0096acc1  894830               mov dword ptr [eax + 0x30], ecx
// 0096acc4  894834               mov dword ptr [eax + 0x34], ecx
// 0096acc7  b960000000           mov ecx, 0x60
// 0096accc  895024               mov dword ptr [eax + 0x24], edx
// 0096accf  895028               mov dword ptr [eax + 0x28], edx
// 0096acd2  89502c               mov dword ptr [eax + 0x2c], edx
// 0096acd5  8a154824b100         mov dl, byte ptr [0xb12448]
// 0096acdb  894838               mov dword ptr [eax + 0x38], ecx
// 0096acde  89483c               mov dword ptr [eax + 0x3c], ecx
// 0096ace1  8a0d4924b100         mov cl, byte ptr [0xb12449]
// 0096ace7  c70003000000         mov dword ptr [eax], 3
// 0096aced  c7400812000000       mov dword ptr [eax + 8], 0x12
// 0096acf4  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0096acfb  c7401415880000       mov dword ptr [eax + 0x14], 0x8815
// 0096ad02  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 0096ad09  884840               mov byte ptr [eax + 0x40], cl
// 0096ad0c  885041               mov byte ptr [eax + 0x41], dl
// 0096ad0f  a354dbb700           mov dword ptr [0xb7db54], eax
// 0096ad14  c3                   ret 
// 0096ad15  890d54dbb700         mov dword ptr [0xb7db54], ecx
// 0096ad1b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
