// from server: 100% by auto
// roc 2010-06 009c5200  unit: seg_009c0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5200
//
// 009c5200  6a44                 push 0x44
// 009c5202  e89927deff           call 0x7a79a0
// 009c5207  33c9                 xor ecx, ecx
// 009c5209  83c404               add esp, 4
// 009c520c  3bc1                 cmp eax, ecx
// 009c520e  745f                 je 0x9c526f
// 009c5210  380dd171b800         cmp byte ptr [0xb871d1], cl
// 009c5216  ba20000000           mov edx, 0x20
// 009c521b  884804               mov byte ptr [eax + 4], cl
// 009c521e  89480c               mov dword ptr [eax + 0xc], ecx
// 009c5221  894810               mov dword ptr [eax + 0x10], ecx
// 009c5224  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c5227  895020               mov dword ptr [eax + 0x20], edx
// 009c522a  894824               mov dword ptr [eax + 0x24], ecx
// 009c522d  894828               mov dword ptr [eax + 0x28], ecx
// 009c5230  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c5233  894830               mov dword ptr [eax + 0x30], ecx
// 009c5236  894834               mov dword ptr [eax + 0x34], ecx
// 009c5239  895038               mov dword ptr [eax + 0x38], edx
// 009c523c  89503c               mov dword ptr [eax + 0x3c], edx
// 009c523f  8a15d071b800         mov dl, byte ptr [0xb871d0]
// 009c5245  0f94c1               sete cl
// 009c5248  c70001000000         mov dword ptr [eax], 1
// 009c524e  c7400807000000       mov dword ptr [eax + 8], 7
// 009c5255  c7401416880000       mov dword ptr [eax + 0x14], 0x8816
// 009c525c  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 009c5263  884840               mov byte ptr [eax + 0x40], cl
// 009c5266  885041               mov byte ptr [eax + 0x41], dl
// 009c5269  a3f03bc000           mov dword ptr [0xc03bf0], eax
// 009c526e  c3                   ret 
// 009c526f  890df03bc000         mov dword ptr [0xc03bf0], ecx
// 009c5275  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
