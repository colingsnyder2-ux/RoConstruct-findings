// roc 2007-08 0076dae0  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076dae0
//
// 0076dae0  6a44                 push 0x44
// 0076dae2  e80f24ecff           call 0x62fef6
// 0076dae7  33c9                 xor ecx, ecx
// 0076dae9  83c404               add esp, 4
// 0076daec  3bc1                 cmp eax, ecx
// 0076daee  745f                 je 0x76db4f
// 0076daf0  380da5c18800         cmp byte ptr [0x88c1a5], cl
// 0076daf6  ba10000000           mov edx, 0x10
// 0076dafb  884804               mov byte ptr [eax + 4], cl
// 0076dafe  89480c               mov dword ptr [eax + 0xc], ecx
// 0076db01  894810               mov dword ptr [eax + 0x10], ecx
// 0076db04  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076db07  895020               mov dword ptr [eax + 0x20], edx
// 0076db0a  894824               mov dword ptr [eax + 0x24], ecx
// 0076db0d  894828               mov dword ptr [eax + 0x28], ecx
// 0076db10  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076db13  894830               mov dword ptr [eax + 0x30], ecx
// 0076db16  894834               mov dword ptr [eax + 0x34], ecx
// 0076db19  895038               mov dword ptr [eax + 0x38], edx
// 0076db1c  89503c               mov dword ptr [eax + 0x3c], edx
// 0076db1f  8a1520db8b00         mov dl, byte ptr [0x8bdb20]
// 0076db25  0f94c1               sete cl
// 0076db28  c70001000000         mov dword ptr [eax], 1
// 0076db2e  c7400805000000       mov dword ptr [eax + 8], 5
// 0076db35  c740143e800000       mov dword ptr [eax + 0x14], 0x803e
// 0076db3c  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 0076db43  884840               mov byte ptr [eax + 0x40], cl
// 0076db46  885041               mov byte ptr [eax + 0x41], dl
// 0076db49  a338db8b00           mov dword ptr [0x8bdb38], eax
// 0076db4e  c3                   ret 
// 0076db4f  890d38db8b00         mov dword ptr [0x8bdb38], ecx
// 0076db55  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
