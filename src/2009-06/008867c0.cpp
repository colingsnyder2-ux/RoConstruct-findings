// roc 2009-06 008867c0  unit: seg_00880000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008867c0
//
// 008867c0  6a44                 push 0x44
// 008867c2  e87122e9ff           call 0x718a38
// 008867c7  33c9                 xor ecx, ecx
// 008867c9  83c404               add esp, 4
// 008867cc  3bc1                 cmp eax, ecx
// 008867ce  745f                 je 0x88682f
// 008867d0  ba10000000           mov edx, 0x10
// 008867d5  884804               mov byte ptr [eax + 4], cl
// 008867d8  894810               mov dword ptr [eax + 0x10], ecx
// 008867db  89481c               mov dword ptr [eax + 0x1c], ecx
// 008867de  895020               mov dword ptr [eax + 0x20], edx
// 008867e1  895024               mov dword ptr [eax + 0x24], edx
// 008867e4  895028               mov dword ptr [eax + 0x28], edx
// 008867e7  89502c               mov dword ptr [eax + 0x2c], edx
// 008867ea  894830               mov dword ptr [eax + 0x30], ecx
// 008867ed  894834               mov dword ptr [eax + 0x34], ecx
// 008867f0  884840               mov byte ptr [eax + 0x40], cl
// 008867f3  8a0d94d3a300         mov cl, byte ptr [0xa3d394]
// 008867f9  ba40000000           mov edx, 0x40
// 008867fe  c70004000000         mov dword ptr [eax], 4
// 00886804  c7400816000000       mov dword ptr [eax + 8], 0x16
// 0088680b  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 00886812  c740145b800000       mov dword ptr [eax + 0x14], 0x805b
// 00886819  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 00886820  895038               mov dword ptr [eax + 0x38], edx
// 00886823  89503c               mov dword ptr [eax + 0x3c], edx
// 00886826  884841               mov byte ptr [eax + 0x41], cl
// 00886829  a304d4a300           mov dword ptr [0xa3d404], eax
// 0088682e  c3                   ret 
// 0088682f  890d04d4a300         mov dword ptr [0xa3d404], ecx
// 00886835  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
