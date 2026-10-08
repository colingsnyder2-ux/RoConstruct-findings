// roc 2009-12 0096a820  unit: seg_00960000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096a820
//
// 0096a820  6a44                 push 0x44
// 0096a822  e83990e8ff           call 0x7f3860
// 0096a827  33c9                 xor ecx, ecx
// 0096a829  83c404               add esp, 4
// 0096a82c  3bc1                 cmp eax, ecx
// 0096a82e  7464                 je 0x96a894
// 0096a830  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096a836  ba08000000           mov edx, 8
// 0096a83b  89501c               mov dword ptr [eax + 0x1c], edx
// 0096a83e  895020               mov dword ptr [eax + 0x20], edx
// 0096a841  ba10000000           mov edx, 0x10
// 0096a846  884804               mov byte ptr [eax + 4], cl
// 0096a849  89480c               mov dword ptr [eax + 0xc], ecx
// 0096a84c  894810               mov dword ptr [eax + 0x10], ecx
// 0096a84f  894824               mov dword ptr [eax + 0x24], ecx
// 0096a852  894828               mov dword ptr [eax + 0x28], ecx
// 0096a855  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096a858  894830               mov dword ptr [eax + 0x30], ecx
// 0096a85b  894834               mov dword ptr [eax + 0x34], ecx
// 0096a85e  895038               mov dword ptr [eax + 0x38], edx
// 0096a861  89503c               mov dword ptr [eax + 0x3c], edx
// 0096a864  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096a86a  0f94c1               sete cl
// 0096a86d  c70002000000         mov dword ptr [eax], 2
// 0096a873  c7400809000000       mov dword ptr [eax + 8], 9
// 0096a87a  c7401445800000       mov dword ptr [eax + 0x14], 0x8045
// 0096a881  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 0096a888  884840               mov byte ptr [eax + 0x40], cl
// 0096a88b  885041               mov byte ptr [eax + 0x41], dl
// 0096a88e  a3a0dbb700           mov dword ptr [0xb7dba0], eax
// 0096a893  c3                   ret 
// 0096a894  890da0dbb700         mov dword ptr [0xb7dba0], ecx
// 0096a89a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
