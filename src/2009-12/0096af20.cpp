// roc 2009-12 0096af20  unit: seg_00960000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096af20
//
// 0096af20  6a44                 push 0x44
// 0096af22  e83989e8ff           call 0x7f3860
// 0096af27  33c9                 xor ecx, ecx
// 0096af29  83c404               add esp, 4
// 0096af2c  3bc1                 cmp eax, ecx
// 0096af2e  7461                 je 0x96af91
// 0096af30  894810               mov dword ptr [eax + 0x10], ecx
// 0096af33  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096af36  894820               mov dword ptr [eax + 0x20], ecx
// 0096af39  894824               mov dword ptr [eax + 0x24], ecx
// 0096af3c  894828               mov dword ptr [eax + 0x28], ecx
// 0096af3f  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096af42  894830               mov dword ptr [eax + 0x30], ecx
// 0096af45  894834               mov dword ptr [eax + 0x34], ecx
// 0096af48  ba01000000           mov edx, 1
// 0096af4d  b940000000           mov ecx, 0x40
// 0096af52  885004               mov byte ptr [eax + 4], dl
// 0096af55  89500c               mov dword ptr [eax + 0xc], edx
// 0096af58  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096af5e  894838               mov dword ptr [eax + 0x38], ecx
// 0096af61  89483c               mov dword ptr [eax + 0x3c], ecx
// 0096af64  8a0d4924b100         mov cl, byte ptr [0xb12449]
// 0096af6a  c70003000000         mov dword ptr [eax], 3
// 0096af70  c7400825000000       mov dword ptr [eax + 8], 0x25
// 0096af77  c74014f0830000       mov dword ptr [eax + 0x14], 0x83f0
// 0096af7e  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 0096af85  884840               mov byte ptr [eax + 0x40], cl
// 0096af88  885041               mov byte ptr [eax + 0x41], dl
// 0096af8b  a368dbb700           mov dword ptr [0xb7db68], eax
// 0096af90  c3                   ret 
// 0096af91  890d68dbb700         mov dword ptr [0xb7db68], ecx
// 0096af97  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB_DXT1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
