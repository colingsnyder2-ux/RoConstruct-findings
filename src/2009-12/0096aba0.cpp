// roc 2009-12 0096aba0  unit: seg_00960000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096aba0
//
// 0096aba0  6a44                 push 0x44
// 0096aba2  e8b98ce8ff           call 0x7f3860
// 0096aba7  33c9                 xor ecx, ecx
// 0096aba9  83c404               add esp, 4
// 0096abac  3bc1                 cmp eax, ecx
// 0096abae  7461                 je 0x96ac11
// 0096abb0  ba10000000           mov edx, 0x10
// 0096abb5  884804               mov byte ptr [eax + 4], cl
// 0096abb8  894810               mov dword ptr [eax + 0x10], ecx
// 0096abbb  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096abbe  894820               mov dword ptr [eax + 0x20], ecx
// 0096abc1  894830               mov dword ptr [eax + 0x30], ecx
// 0096abc4  894834               mov dword ptr [eax + 0x34], ecx
// 0096abc7  b930000000           mov ecx, 0x30
// 0096abcc  895008               mov dword ptr [eax + 8], edx
// 0096abcf  895024               mov dword ptr [eax + 0x24], edx
// 0096abd2  895028               mov dword ptr [eax + 0x28], edx
// 0096abd5  89502c               mov dword ptr [eax + 0x2c], edx
// 0096abd8  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096abde  894838               mov dword ptr [eax + 0x38], ecx
// 0096abe1  89483c               mov dword ptr [eax + 0x3c], ecx
// 0096abe4  8a0d4924b100         mov cl, byte ptr [0xb12449]
// 0096abea  c70003000000         mov dword ptr [eax], 3
// 0096abf0  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0096abf7  c7401454800000       mov dword ptr [eax + 0x14], 0x8054
// 0096abfe  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 0096ac05  884840               mov byte ptr [eax + 0x40], cl
// 0096ac08  885041               mov byte ptr [eax + 0x41], dl
// 0096ac0b  a34cdbb700           mov dword ptr [0xb7db4c], eax
// 0096ac10  c3                   ret 
// 0096ac11  890d4cdbb700         mov dword ptr [0xb7db4c], ecx
// 0096ac17  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
