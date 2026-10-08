// from server: 100% by auto
// roc 2010-06 009c5800  unit: seg_009c0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5800
//
// 009c5800  6a44                 push 0x44
// 009c5802  e89921deff           call 0x7a79a0
// 009c5807  33c9                 xor ecx, ecx
// 009c5809  83c404               add esp, 4
// 009c580c  3bc1                 cmp eax, ecx
// 009c580e  745f                 je 0x9c586f
// 009c5810  ba08000000           mov edx, 8
// 009c5815  884804               mov byte ptr [eax + 4], cl
// 009c5818  894810               mov dword ptr [eax + 0x10], ecx
// 009c581b  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c581e  895020               mov dword ptr [eax + 0x20], edx
// 009c5821  895024               mov dword ptr [eax + 0x24], edx
// 009c5824  895028               mov dword ptr [eax + 0x28], edx
// 009c5827  89502c               mov dword ptr [eax + 0x2c], edx
// 009c582a  894830               mov dword ptr [eax + 0x30], ecx
// 009c582d  894834               mov dword ptr [eax + 0x34], ecx
// 009c5830  884840               mov byte ptr [eax + 0x40], cl
// 009c5833  8a0dd43bc000         mov cl, byte ptr [0xc03bd4]
// 009c5839  ba20000000           mov edx, 0x20
// 009c583e  c70004000000         mov dword ptr [eax], 4
// 009c5844  c7400815000000       mov dword ptr [eax + 8], 0x15
// 009c584b  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 009c5852  c7401458800000       mov dword ptr [eax + 0x14], 0x8058
// 009c5859  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 009c5860  895038               mov dword ptr [eax + 0x38], edx
// 009c5863  89503c               mov dword ptr [eax + 0x3c], edx
// 009c5866  884841               mov byte ptr [eax + 0x41], cl
// 009c5869  a3483cc000           mov dword ptr [0xc03c48], eax
// 009c586e  c3                   ret 
// 009c586f  890d483cc000         mov dword ptr [0xc03c48], ecx
// 009c5875  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
