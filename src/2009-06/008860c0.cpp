// roc 2009-06 008860c0  unit: seg_00880000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008860c0
//
// 008860c0  6a44                 push 0x44
// 008860c2  e87129e9ff           call 0x718a38
// 008860c7  33c9                 xor ecx, ecx
// 008860c9  83c404               add esp, 4
// 008860cc  3bc1                 cmp eax, ecx
// 008860ce  745f                 je 0x88612f
// 008860d0  380d59c29e00         cmp byte ptr [0x9ec259], cl
// 008860d6  ba10000000           mov edx, 0x10
// 008860db  884804               mov byte ptr [eax + 4], cl
// 008860de  89480c               mov dword ptr [eax + 0xc], ecx
// 008860e1  894810               mov dword ptr [eax + 0x10], ecx
// 008860e4  89481c               mov dword ptr [eax + 0x1c], ecx
// 008860e7  895020               mov dword ptr [eax + 0x20], edx
// 008860ea  894824               mov dword ptr [eax + 0x24], ecx
// 008860ed  894828               mov dword ptr [eax + 0x28], ecx
// 008860f0  89482c               mov dword ptr [eax + 0x2c], ecx
// 008860f3  894830               mov dword ptr [eax + 0x30], ecx
// 008860f6  894834               mov dword ptr [eax + 0x34], ecx
// 008860f9  895038               mov dword ptr [eax + 0x38], edx
// 008860fc  89503c               mov dword ptr [eax + 0x3c], edx
// 008860ff  8a1558c29e00         mov dl, byte ptr [0x9ec258]
// 00886105  0f94c1               sete cl
// 00886108  c70001000000         mov dword ptr [eax], 1
// 0088610e  c7400806000000       mov dword ptr [eax + 8], 6
// 00886115  c740141c880000       mov dword ptr [eax + 0x14], 0x881c
// 0088611c  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 00886123  884840               mov byte ptr [eax + 0x40], cl
// 00886126  885041               mov byte ptr [eax + 0x41], dl
// 00886129  a3a8d3a300           mov dword ptr [0xa3d3a8], eax
// 0088612e  c3                   ret 
// 0088612f  890da8d3a300         mov dword ptr [0xa3d3a8], ecx
// 00886135  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
