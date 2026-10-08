// roc 2007-03 0076f120  unit: seg_00760000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f120
//
// 0076f120  6a44                 push 0x44
// 0076f122  e8e1efeaff           call 0x61e108
// 0076f127  33c9                 xor ecx, ecx
// 0076f129  83c404               add esp, 4
// 0076f12c  3bc1                 cmp eax, ecx
// 0076f12e  7464                 je 0x76f194
// 0076f130  380dd5b18800         cmp byte ptr [0x88b1d5], cl
// 0076f136  ba20000000           mov edx, 0x20
// 0076f13b  89501c               mov dword ptr [eax + 0x1c], edx
// 0076f13e  895020               mov dword ptr [eax + 0x20], edx
// 0076f141  ba40000000           mov edx, 0x40
// 0076f146  884804               mov byte ptr [eax + 4], cl
// 0076f149  89480c               mov dword ptr [eax + 0xc], ecx
// 0076f14c  894810               mov dword ptr [eax + 0x10], ecx
// 0076f14f  894824               mov dword ptr [eax + 0x24], ecx
// 0076f152  894828               mov dword ptr [eax + 0x28], ecx
// 0076f155  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076f158  894830               mov dword ptr [eax + 0x30], ecx
// 0076f15b  894834               mov dword ptr [eax + 0x34], ecx
// 0076f15e  895038               mov dword ptr [eax + 0x38], edx
// 0076f161  89503c               mov dword ptr [eax + 0x3c], edx
// 0076f164  8a15d4b18800         mov dl, byte ptr [0x88b1d4]
// 0076f16a  0f94c1               sete cl
// 0076f16d  c70002000000         mov dword ptr [eax], 2
// 0076f173  c740080c000000       mov dword ptr [eax + 8], 0xc
// 0076f17a  c7401419880000       mov dword ptr [eax + 0x14], 0x8819
// 0076f181  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 0076f188  884840               mov byte ptr [eax + 0x40], cl
// 0076f18b  885041               mov byte ptr [eax + 0x41], dl
// 0076f18e  a3f8818b00           mov dword ptr [0x8b81f8], eax
// 0076f193  c3                   ret 
// 0076f194  890df8818b00         mov dword ptr [0x8b81f8], ecx
// 0076f19a  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
