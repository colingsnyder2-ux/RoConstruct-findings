// roc 2009-06 008862c0  unit: seg_00880000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008862c0
//
// 008862c0  6a44                 push 0x44
// 008862c2  e87127e9ff           call 0x718a38
// 008862c7  33c9                 xor ecx, ecx
// 008862c9  83c404               add esp, 4
// 008862cc  3bc1                 cmp eax, ecx
// 008862ce  7464                 je 0x886334
// 008862d0  380d59c29e00         cmp byte ptr [0x9ec259], cl
// 008862d6  ba10000000           mov edx, 0x10
// 008862db  89501c               mov dword ptr [eax + 0x1c], edx
// 008862de  895020               mov dword ptr [eax + 0x20], edx
// 008862e1  ba20000000           mov edx, 0x20
// 008862e6  884804               mov byte ptr [eax + 4], cl
// 008862e9  89480c               mov dword ptr [eax + 0xc], ecx
// 008862ec  894810               mov dword ptr [eax + 0x10], ecx
// 008862ef  894824               mov dword ptr [eax + 0x24], ecx
// 008862f2  894828               mov dword ptr [eax + 0x28], ecx
// 008862f5  89482c               mov dword ptr [eax + 0x2c], ecx
// 008862f8  894830               mov dword ptr [eax + 0x30], ecx
// 008862fb  894834               mov dword ptr [eax + 0x34], ecx
// 008862fe  895038               mov dword ptr [eax + 0x38], edx
// 00886301  89503c               mov dword ptr [eax + 0x3c], edx
// 00886304  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 0088630a  0f94c1               sete cl
// 0088630d  c70002000000         mov dword ptr [eax], 2
// 00886313  c740080a000000       mov dword ptr [eax + 8], 0xa
// 0088631a  c7401448800000       mov dword ptr [eax + 0x14], 0x8048
// 00886321  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 00886328  884840               mov byte ptr [eax + 0x40], cl
// 0088632b  885041               mov byte ptr [eax + 0x41], dl
// 0088632e  a3dcd3a300           mov dword ptr [0xa3d3dc], eax
// 00886333  c3                   ret 
// 00886334  890ddcd3a300         mov dword ptr [0xa3d3dc], ecx
// 0088633a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
