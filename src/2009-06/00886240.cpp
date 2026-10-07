// roc 2009-06 00886240  unit: seg_00880000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886240
//
// 00886240  6a44                 push 0x44
// 00886242  e8f127e9ff           call 0x718a38
// 00886247  33c9                 xor ecx, ecx
// 00886249  83c404               add esp, 4
// 0088624c  3bc1                 cmp eax, ecx
// 0088624e  7464                 je 0x8862b4
// 00886250  380d59c29e00         cmp byte ptr [0x9ec259], cl
// 00886256  ba08000000           mov edx, 8
// 0088625b  89501c               mov dword ptr [eax + 0x1c], edx
// 0088625e  895020               mov dword ptr [eax + 0x20], edx
// 00886261  ba10000000           mov edx, 0x10
// 00886266  884804               mov byte ptr [eax + 4], cl
// 00886269  89480c               mov dword ptr [eax + 0xc], ecx
// 0088626c  894810               mov dword ptr [eax + 0x10], ecx
// 0088626f  894824               mov dword ptr [eax + 0x24], ecx
// 00886272  894828               mov dword ptr [eax + 0x28], ecx
// 00886275  89482c               mov dword ptr [eax + 0x2c], ecx
// 00886278  894830               mov dword ptr [eax + 0x30], ecx
// 0088627b  894834               mov dword ptr [eax + 0x34], ecx
// 0088627e  895038               mov dword ptr [eax + 0x38], edx
// 00886281  89503c               mov dword ptr [eax + 0x3c], edx
// 00886284  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 0088628a  0f94c1               sete cl
// 0088628d  c70002000000         mov dword ptr [eax], 2
// 00886293  c7400809000000       mov dword ptr [eax + 8], 9
// 0088629a  c7401445800000       mov dword ptr [eax + 0x14], 0x8045
// 008862a1  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 008862a8  884840               mov byte ptr [eax + 0x40], cl
// 008862ab  885041               mov byte ptr [eax + 0x41], dl
// 008862ae  a3f0d3a300           mov dword ptr [0xa3d3f0], eax
// 008862b3  c3                   ret 
// 008862b4  890df0d3a300         mov dword ptr [0xa3d3f0], ecx
// 008862ba  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
