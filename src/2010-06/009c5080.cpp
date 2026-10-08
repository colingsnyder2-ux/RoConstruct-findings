// from server: 100% by auto
// roc 2010-06 009c5080  unit: seg_009c0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5080
//
// 009c5080  6a44                 push 0x44
// 009c5082  e81929deff           call 0x7a79a0
// 009c5087  33c9                 xor ecx, ecx
// 009c5089  83c404               add esp, 4
// 009c508c  3bc1                 cmp eax, ecx
// 009c508e  745f                 je 0x9c50ef
// 009c5090  380dd171b800         cmp byte ptr [0xb871d1], cl
// 009c5096  ba08000000           mov edx, 8
// 009c509b  884804               mov byte ptr [eax + 4], cl
// 009c509e  89480c               mov dword ptr [eax + 0xc], ecx
// 009c50a1  894810               mov dword ptr [eax + 0x10], ecx
// 009c50a4  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c50a7  895020               mov dword ptr [eax + 0x20], edx
// 009c50aa  894824               mov dword ptr [eax + 0x24], ecx
// 009c50ad  894828               mov dword ptr [eax + 0x28], ecx
// 009c50b0  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c50b3  894830               mov dword ptr [eax + 0x30], ecx
// 009c50b6  894834               mov dword ptr [eax + 0x34], ecx
// 009c50b9  895038               mov dword ptr [eax + 0x38], edx
// 009c50bc  89503c               mov dword ptr [eax + 0x3c], edx
// 009c50bf  8a15d43bc000         mov dl, byte ptr [0xc03bd4]
// 009c50c5  0f94c1               sete cl
// 009c50c8  c70001000000         mov dword ptr [eax], 1
// 009c50ce  c7400804000000       mov dword ptr [eax + 8], 4
// 009c50d5  c740143c800000       mov dword ptr [eax + 0x14], 0x803c
// 009c50dc  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 009c50e3  884840               mov byte ptr [eax + 0x40], cl
// 009c50e6  885041               mov byte ptr [eax + 0x41], dl
// 009c50e9  a3583cc000           mov dword ptr [0xc03c58], eax
// 009c50ee  c3                   ret 
// 009c50ef  890d583cc000         mov dword ptr [0xc03c58], ecx
// 009c50f5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
