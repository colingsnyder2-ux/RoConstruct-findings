// from server: 100% by auto
// roc 2009-06 00886740  unit: seg_00880000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886740
//
// 00886740  6a44                 push 0x44
// 00886742  e8f122e9ff           call 0x718a38
// 00886747  33c9                 xor ecx, ecx
// 00886749  83c404               add esp, 4
// 0088674c  3bc1                 cmp eax, ecx
// 0088674e  745f                 je 0x8867af
// 00886750  ba08000000           mov edx, 8
// 00886755  884804               mov byte ptr [eax + 4], cl
// 00886758  894810               mov dword ptr [eax + 0x10], ecx
// 0088675b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0088675e  895020               mov dword ptr [eax + 0x20], edx
// 00886761  895024               mov dword ptr [eax + 0x24], edx
// 00886764  895028               mov dword ptr [eax + 0x28], edx
// 00886767  89502c               mov dword ptr [eax + 0x2c], edx
// 0088676a  894830               mov dword ptr [eax + 0x30], ecx
// 0088676d  894834               mov dword ptr [eax + 0x34], ecx
// 00886770  884840               mov byte ptr [eax + 0x40], cl
// 00886773  8a0d94d3a300         mov cl, byte ptr [0xa3d394]
// 00886779  ba20000000           mov edx, 0x20
// 0088677e  c70004000000         mov dword ptr [eax], 4
// 00886784  c7400815000000       mov dword ptr [eax + 8], 0x15
// 0088678b  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 00886792  c7401458800000       mov dword ptr [eax + 0x14], 0x8058
// 00886799  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 008867a0  895038               mov dword ptr [eax + 0x38], edx
// 008867a3  89503c               mov dword ptr [eax + 0x3c], edx
// 008867a6  884841               mov byte ptr [eax + 0x41], cl
// 008867a9  a308d4a300           mov dword ptr [0xa3d408], eax
// 008867ae  c3                   ret 
// 008867af  890d08d4a300         mov dword ptr [0xa3d408], ecx
// 008867b5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
