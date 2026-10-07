// roc 2009-06 008869c0  unit: seg_00880000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008869c0
//
// 008869c0  6a44                 push 0x44
// 008869c2  e87120e9ff           call 0x718a38
// 008869c7  33c9                 xor ecx, ecx
// 008869c9  83c404               add esp, 4
// 008869cc  3bc1                 cmp eax, ecx
// 008869ce  7464                 je 0x886a34
// 008869d0  380d59c29e00         cmp byte ptr [0x9ec259], cl
// 008869d6  ba01000000           mov edx, 1
// 008869db  885004               mov byte ptr [eax + 4], dl
// 008869de  89500c               mov dword ptr [eax + 0xc], edx
// 008869e1  ba40000000           mov edx, 0x40
// 008869e6  894810               mov dword ptr [eax + 0x10], ecx
// 008869e9  89481c               mov dword ptr [eax + 0x1c], ecx
// 008869ec  894820               mov dword ptr [eax + 0x20], ecx
// 008869ef  894824               mov dword ptr [eax + 0x24], ecx
// 008869f2  894828               mov dword ptr [eax + 0x28], ecx
// 008869f5  89482c               mov dword ptr [eax + 0x2c], ecx
// 008869f8  894830               mov dword ptr [eax + 0x30], ecx
// 008869fb  894834               mov dword ptr [eax + 0x34], ecx
// 008869fe  895038               mov dword ptr [eax + 0x38], edx
// 00886a01  89503c               mov dword ptr [eax + 0x3c], edx
// 00886a04  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 00886a0a  0f94c1               sete cl
// 00886a0d  c70004000000         mov dword ptr [eax], 4
// 00886a13  c7400826000000       mov dword ptr [eax + 8], 0x26
// 00886a1a  c74014f1830000       mov dword ptr [eax + 0x14], 0x83f1
// 00886a21  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 00886a28  884840               mov byte ptr [eax + 0x40], cl
// 00886a2b  885041               mov byte ptr [eax + 0x41], dl
// 00886a2e  a3d8d3a300           mov dword ptr [0xa3d3d8], eax
// 00886a33  c3                   ret 
// 00886a34  890dd8d3a300         mov dword ptr [0xa3d3d8], ecx
// 00886a3a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA_DXT1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
