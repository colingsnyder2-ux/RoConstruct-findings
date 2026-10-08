// from server: 100% by auto
// roc 2007-08 0076de60  unit: seg_00760000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076de60
//
// 0076de60  6a44                 push 0x44
// 0076de62  e88f20ecff           call 0x62fef6
// 0076de67  33c9                 xor ecx, ecx
// 0076de69  83c404               add esp, 4
// 0076de6c  3bc1                 cmp eax, ecx
// 0076de6e  7464                 je 0x76ded4
// 0076de70  380da5c18800         cmp byte ptr [0x88c1a5], cl
// 0076de76  ba20000000           mov edx, 0x20
// 0076de7b  89501c               mov dword ptr [eax + 0x1c], edx
// 0076de7e  895020               mov dword ptr [eax + 0x20], edx
// 0076de81  ba40000000           mov edx, 0x40
// 0076de86  884804               mov byte ptr [eax + 4], cl
// 0076de89  89480c               mov dword ptr [eax + 0xc], ecx
// 0076de8c  894810               mov dword ptr [eax + 0x10], ecx
// 0076de8f  894824               mov dword ptr [eax + 0x24], ecx
// 0076de92  894828               mov dword ptr [eax + 0x28], ecx
// 0076de95  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076de98  894830               mov dword ptr [eax + 0x30], ecx
// 0076de9b  894834               mov dword ptr [eax + 0x34], ecx
// 0076de9e  895038               mov dword ptr [eax + 0x38], edx
// 0076dea1  89503c               mov dword ptr [eax + 0x3c], edx
// 0076dea4  8a15a4c18800         mov dl, byte ptr [0x88c1a4]
// 0076deaa  0f94c1               sete cl
// 0076dead  c70002000000         mov dword ptr [eax], 2
// 0076deb3  c740080c000000       mov dword ptr [eax + 8], 0xc
// 0076deba  c7401419880000       mov dword ptr [eax + 0x14], 0x8819
// 0076dec1  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 0076dec8  884840               mov byte ptr [eax + 0x40], cl
// 0076decb  885041               mov byte ptr [eax + 0x41], dl
// 0076dece  a340db8b00           mov dword ptr [0x8bdb40], eax
// 0076ded3  c3                   ret 
// 0076ded4  890d40db8b00         mov dword ptr [0x8bdb40], ecx
// 0076deda  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
