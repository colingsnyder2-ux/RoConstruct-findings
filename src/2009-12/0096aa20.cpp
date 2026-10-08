// roc 2009-12 0096aa20  unit: seg_00960000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096aa20
//
// 0096aa20  6a44                 push 0x44
// 0096aa22  e8398ee8ff           call 0x7f3860
// 0096aa27  33c9                 xor ecx, ecx
// 0096aa29  83c404               add esp, 4
// 0096aa2c  3bc1                 cmp eax, ecx
// 0096aa2e  7465                 je 0x96aa95
// 0096aa30  884804               mov byte ptr [eax + 4], cl
// 0096aa33  894810               mov dword ptr [eax + 0x10], ecx
// 0096aa36  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096aa39  894820               mov dword ptr [eax + 0x20], ecx
// 0096aa3c  ba05000000           mov edx, 5
// 0096aa41  894830               mov dword ptr [eax + 0x30], ecx
// 0096aa44  894834               mov dword ptr [eax + 0x34], ecx
// 0096aa47  b910000000           mov ecx, 0x10
// 0096aa4c  895024               mov dword ptr [eax + 0x24], edx
// 0096aa4f  895028               mov dword ptr [eax + 0x28], edx
// 0096aa52  89502c               mov dword ptr [eax + 0x2c], edx
// 0096aa55  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096aa5b  894838               mov dword ptr [eax + 0x38], ecx
// 0096aa5e  89483c               mov dword ptr [eax + 0x3c], ecx
// 0096aa61  8a0d4924b100         mov cl, byte ptr [0xb12449]
// 0096aa67  c70003000000         mov dword ptr [eax], 3
// 0096aa6d  c740080d000000       mov dword ptr [eax + 8], 0xd
// 0096aa74  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0096aa7b  c7401450800000       mov dword ptr [eax + 0x14], 0x8050
// 0096aa82  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0096aa89  884840               mov byte ptr [eax + 0x40], cl
// 0096aa8c  885041               mov byte ptr [eax + 0x41], dl
// 0096aa8f  a39cdbb700           mov dword ptr [0xb7db9c], eax
// 0096aa94  c3                   ret 
// 0096aa95  890d9cdbb700         mov dword ptr [0xb7db9c], ecx
// 0096aa9b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB5@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
