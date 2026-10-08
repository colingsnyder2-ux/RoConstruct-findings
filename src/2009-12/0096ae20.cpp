// roc 2009-12 0096ae20  unit: seg_00960000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096ae20
//
// 0096ae20  6a44                 push 0x44
// 0096ae22  e8398ae8ff           call 0x7f3860
// 0096ae27  33c9                 xor ecx, ecx
// 0096ae29  83c404               add esp, 4
// 0096ae2c  3bc1                 cmp eax, ecx
// 0096ae2e  745f                 je 0x96ae8f
// 0096ae30  ba10000000           mov edx, 0x10
// 0096ae35  884804               mov byte ptr [eax + 4], cl
// 0096ae38  894810               mov dword ptr [eax + 0x10], ecx
// 0096ae3b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096ae3e  895020               mov dword ptr [eax + 0x20], edx
// 0096ae41  895024               mov dword ptr [eax + 0x24], edx
// 0096ae44  895028               mov dword ptr [eax + 0x28], edx
// 0096ae47  89502c               mov dword ptr [eax + 0x2c], edx
// 0096ae4a  894830               mov dword ptr [eax + 0x30], ecx
// 0096ae4d  894834               mov dword ptr [eax + 0x34], ecx
// 0096ae50  884840               mov byte ptr [eax + 0x40], cl
// 0096ae53  8a0d4824b100         mov cl, byte ptr [0xb12448]
// 0096ae59  ba40000000           mov edx, 0x40
// 0096ae5e  c70004000000         mov dword ptr [eax], 4
// 0096ae64  c7400811000000       mov dword ptr [eax + 8], 0x11
// 0096ae6b  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0096ae72  c740141a880000       mov dword ptr [eax + 0x14], 0x881a
// 0096ae79  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0096ae80  895038               mov dword ptr [eax + 0x38], edx
// 0096ae83  89503c               mov dword ptr [eax + 0x3c], edx
// 0096ae86  884841               mov byte ptr [eax + 0x41], cl
// 0096ae89  a350dbb700           mov dword ptr [0xb7db50], eax
// 0096ae8e  c3                   ret 
// 0096ae8f  890d50dbb700         mov dword ptr [0xb7db50], ecx
// 0096ae95  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
