// roc 2009-12 0096afa0  unit: seg_00960000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096afa0
//
// 0096afa0  6a44                 push 0x44
// 0096afa2  e8b988e8ff           call 0x7f3860
// 0096afa7  33c9                 xor ecx, ecx
// 0096afa9  83c404               add esp, 4
// 0096afac  3bc1                 cmp eax, ecx
// 0096afae  7464                 je 0x96b014
// 0096afb0  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096afb6  ba01000000           mov edx, 1
// 0096afbb  885004               mov byte ptr [eax + 4], dl
// 0096afbe  89500c               mov dword ptr [eax + 0xc], edx
// 0096afc1  ba40000000           mov edx, 0x40
// 0096afc6  894810               mov dword ptr [eax + 0x10], ecx
// 0096afc9  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096afcc  894820               mov dword ptr [eax + 0x20], ecx
// 0096afcf  894824               mov dword ptr [eax + 0x24], ecx
// 0096afd2  894828               mov dword ptr [eax + 0x28], ecx
// 0096afd5  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096afd8  894830               mov dword ptr [eax + 0x30], ecx
// 0096afdb  894834               mov dword ptr [eax + 0x34], ecx
// 0096afde  895038               mov dword ptr [eax + 0x38], edx
// 0096afe1  89503c               mov dword ptr [eax + 0x3c], edx
// 0096afe4  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096afea  0f94c1               sete cl
// 0096afed  c70004000000         mov dword ptr [eax], 4
// 0096aff3  c7400826000000       mov dword ptr [eax + 8], 0x26
// 0096affa  c74014f1830000       mov dword ptr [eax + 0x14], 0x83f1
// 0096b001  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0096b008  884840               mov byte ptr [eax + 0x40], cl
// 0096b00b  885041               mov byte ptr [eax + 0x41], dl
// 0096b00e  a388dbb700           mov dword ptr [0xb7db88], eax
// 0096b013  c3                   ret 
// 0096b014  890d88dbb700         mov dword ptr [0xb7db88], ecx
// 0096b01a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA_DXT1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
