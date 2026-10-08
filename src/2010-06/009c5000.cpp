// from server: 100% by auto
// roc 2010-06 009c5000  unit: seg_009c0000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5000
//
// 009c5000  6a44                 push 0x44
// 009c5002  e89929deff           call 0x7a79a0
// 009c5007  33c9                 xor ecx, ecx
// 009c5009  83c404               add esp, 4
// 009c500c  3bc1                 cmp eax, ecx
// 009c500e  745c                 je 0x9c506c
// 009c5010  ba20000000           mov edx, 0x20
// 009c5015  884804               mov byte ptr [eax + 4], cl
// 009c5018  89480c               mov dword ptr [eax + 0xc], ecx
// 009c501b  894810               mov dword ptr [eax + 0x10], ecx
// 009c501e  89501c               mov dword ptr [eax + 0x1c], edx
// 009c5021  894820               mov dword ptr [eax + 0x20], ecx
// 009c5024  894824               mov dword ptr [eax + 0x24], ecx
// 009c5027  894828               mov dword ptr [eax + 0x28], ecx
// 009c502a  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c502d  894830               mov dword ptr [eax + 0x30], ecx
// 009c5030  894834               mov dword ptr [eax + 0x34], ecx
// 009c5033  8a0dd171b800         mov cl, byte ptr [0xb871d1]
// 009c5039  895038               mov dword ptr [eax + 0x38], edx
// 009c503c  89503c               mov dword ptr [eax + 0x3c], edx
// 009c503f  8a15d071b800         mov dl, byte ptr [0xb871d0]
// 009c5045  c70001000000         mov dword ptr [eax], 1
// 009c504b  c7400803000000       mov dword ptr [eax + 8], 3
// 009c5052  c7401418880000       mov dword ptr [eax + 0x14], 0x8818
// 009c5059  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 009c5060  884840               mov byte ptr [eax + 0x40], cl
// 009c5063  885041               mov byte ptr [eax + 0x41], dl
// 009c5066  a33c3cc000           mov dword ptr [0xc03c3c], eax
// 009c506b  c3                   ret 
// 009c506c  890d3c3cc000         mov dword ptr [0xc03c3c], ecx
// 009c5072  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
