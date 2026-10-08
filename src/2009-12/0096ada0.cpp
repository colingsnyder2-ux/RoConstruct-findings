// roc 2009-12 0096ada0  unit: seg_00960000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096ada0
//
// 0096ada0  6a44                 push 0x44
// 0096ada2  e8b98ae8ff           call 0x7f3860
// 0096ada7  33c9                 xor ecx, ecx
// 0096ada9  83c404               add esp, 4
// 0096adac  3bc1                 cmp eax, ecx
// 0096adae  745f                 je 0x96ae0f
// 0096adb0  ba10000000           mov edx, 0x10
// 0096adb5  884804               mov byte ptr [eax + 4], cl
// 0096adb8  894810               mov dword ptr [eax + 0x10], ecx
// 0096adbb  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096adbe  895020               mov dword ptr [eax + 0x20], edx
// 0096adc1  895024               mov dword ptr [eax + 0x24], edx
// 0096adc4  895028               mov dword ptr [eax + 0x28], edx
// 0096adc7  89502c               mov dword ptr [eax + 0x2c], edx
// 0096adca  894830               mov dword ptr [eax + 0x30], ecx
// 0096adcd  894834               mov dword ptr [eax + 0x34], ecx
// 0096add0  884840               mov byte ptr [eax + 0x40], cl
// 0096add3  8a0d44dbb700         mov cl, byte ptr [0xb7db44]
// 0096add9  ba40000000           mov edx, 0x40
// 0096adde  c70004000000         mov dword ptr [eax], 4
// 0096ade4  c7400816000000       mov dword ptr [eax + 8], 0x16
// 0096adeb  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0096adf2  c740145b800000       mov dword ptr [eax + 0x14], 0x805b
// 0096adf9  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0096ae00  895038               mov dword ptr [eax + 0x38], edx
// 0096ae03  89503c               mov dword ptr [eax + 0x3c], edx
// 0096ae06  884841               mov byte ptr [eax + 0x41], cl
// 0096ae09  a3b4dbb700           mov dword ptr [0xb7dbb4], eax
// 0096ae0e  c3                   ret 
// 0096ae0f  890db4dbb700         mov dword ptr [0xb7dbb4], ecx
// 0096ae15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
