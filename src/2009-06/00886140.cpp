// roc 2009-06 00886140  unit: seg_00880000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886140
//
// 00886140  6a44                 push 0x44
// 00886142  e8f128e9ff           call 0x718a38
// 00886147  33c9                 xor ecx, ecx
// 00886149  83c404               add esp, 4
// 0088614c  3bc1                 cmp eax, ecx
// 0088614e  745f                 je 0x8861af
// 00886150  380d59c29e00         cmp byte ptr [0x9ec259], cl
// 00886156  ba20000000           mov edx, 0x20
// 0088615b  884804               mov byte ptr [eax + 4], cl
// 0088615e  89480c               mov dword ptr [eax + 0xc], ecx
// 00886161  894810               mov dword ptr [eax + 0x10], ecx
// 00886164  89481c               mov dword ptr [eax + 0x1c], ecx
// 00886167  895020               mov dword ptr [eax + 0x20], edx
// 0088616a  894824               mov dword ptr [eax + 0x24], ecx
// 0088616d  894828               mov dword ptr [eax + 0x28], ecx
// 00886170  89482c               mov dword ptr [eax + 0x2c], ecx
// 00886173  894830               mov dword ptr [eax + 0x30], ecx
// 00886176  894834               mov dword ptr [eax + 0x34], ecx
// 00886179  895038               mov dword ptr [eax + 0x38], edx
// 0088617c  89503c               mov dword ptr [eax + 0x3c], edx
// 0088617f  8a1558c29e00         mov dl, byte ptr [0x9ec258]
// 00886185  0f94c1               sete cl
// 00886188  c70001000000         mov dword ptr [eax], 1
// 0088618e  c7400807000000       mov dword ptr [eax + 8], 7
// 00886195  c7401416880000       mov dword ptr [eax + 0x14], 0x8816
// 0088619c  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 008861a3  884840               mov byte ptr [eax + 0x40], cl
// 008861a6  885041               mov byte ptr [eax + 0x41], dl
// 008861a9  a3b0d3a300           mov dword ptr [0xa3d3b0], eax
// 008861ae  c3                   ret 
// 008861af  890db0d3a300         mov dword ptr [0xa3d3b0], ecx
// 008861b5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
