// roc 2009-12 0096ab20  unit: seg_00960000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096ab20
//
// 0096ab20  6a44                 push 0x44
// 0096ab22  e8398de8ff           call 0x7f3860
// 0096ab27  33c9                 xor ecx, ecx
// 0096ab29  83c404               add esp, 4
// 0096ab2c  3bc1                 cmp eax, ecx
// 0096ab2e  7468                 je 0x96ab98
// 0096ab30  ba08000000           mov edx, 8
// 0096ab35  884804               mov byte ptr [eax + 4], cl
// 0096ab38  894810               mov dword ptr [eax + 0x10], ecx
// 0096ab3b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096ab3e  894820               mov dword ptr [eax + 0x20], ecx
// 0096ab41  895024               mov dword ptr [eax + 0x24], edx
// 0096ab44  895028               mov dword ptr [eax + 0x28], edx
// 0096ab47  89502c               mov dword ptr [eax + 0x2c], edx
// 0096ab4a  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096ab50  894830               mov dword ptr [eax + 0x30], ecx
// 0096ab53  894834               mov dword ptr [eax + 0x34], ecx
// 0096ab56  8a0d4924b100         mov cl, byte ptr [0xb12449]
// 0096ab5c  c70003000000         mov dword ptr [eax], 3
// 0096ab62  c740080f000000       mov dword ptr [eax + 8], 0xf
// 0096ab69  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0096ab70  c7401451800000       mov dword ptr [eax + 0x14], 0x8051
// 0096ab77  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 0096ab7e  c7403820000000       mov dword ptr [eax + 0x38], 0x20
// 0096ab85  c7403c18000000       mov dword ptr [eax + 0x3c], 0x18
// 0096ab8c  884840               mov byte ptr [eax + 0x40], cl
// 0096ab8f  885041               mov byte ptr [eax + 0x41], dl
// 0096ab92  a3c0dbb700           mov dword ptr [0xb7dbc0], eax
// 0096ab97  c3                   ret 
// 0096ab98  890dc0dbb700         mov dword ptr [0xb7dbc0], ecx
// 0096ab9e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
