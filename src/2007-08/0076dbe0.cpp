// roc 2007-08 0076dbe0  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076dbe0
//
// 0076dbe0  6a44                 push 0x44
// 0076dbe2  e80f23ecff           call 0x62fef6
// 0076dbe7  33c9                 xor ecx, ecx
// 0076dbe9  83c404               add esp, 4
// 0076dbec  3bc1                 cmp eax, ecx
// 0076dbee  745f                 je 0x76dc4f
// 0076dbf0  380da5c18800         cmp byte ptr [0x88c1a5], cl
// 0076dbf6  ba20000000           mov edx, 0x20
// 0076dbfb  884804               mov byte ptr [eax + 4], cl
// 0076dbfe  89480c               mov dword ptr [eax + 0xc], ecx
// 0076dc01  894810               mov dword ptr [eax + 0x10], ecx
// 0076dc04  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076dc07  895020               mov dword ptr [eax + 0x20], edx
// 0076dc0a  894824               mov dword ptr [eax + 0x24], ecx
// 0076dc0d  894828               mov dword ptr [eax + 0x28], ecx
// 0076dc10  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076dc13  894830               mov dword ptr [eax + 0x30], ecx
// 0076dc16  894834               mov dword ptr [eax + 0x34], ecx
// 0076dc19  895038               mov dword ptr [eax + 0x38], edx
// 0076dc1c  89503c               mov dword ptr [eax + 0x3c], edx
// 0076dc1f  8a15a4c18800         mov dl, byte ptr [0x88c1a4]
// 0076dc25  0f94c1               sete cl
// 0076dc28  c70001000000         mov dword ptr [eax], 1
// 0076dc2e  c7400807000000       mov dword ptr [eax + 8], 7
// 0076dc35  c7401416880000       mov dword ptr [eax + 0x14], 0x8816
// 0076dc3c  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 0076dc43  884840               mov byte ptr [eax + 0x40], cl
// 0076dc46  885041               mov byte ptr [eax + 0x41], dl
// 0076dc49  a33cdb8b00           mov dword ptr [0x8bdb3c], eax
// 0076dc4e  c3                   ret 
// 0076dc4f  890d3cdb8b00         mov dword ptr [0x8bdb3c], ecx
// 0076dc55  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
