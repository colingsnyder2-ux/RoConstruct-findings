// from server: 100% by auto
// roc 2007-08 0076db60  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076db60
//
// 0076db60  6a44                 push 0x44
// 0076db62  e88f23ecff           call 0x62fef6
// 0076db67  33c9                 xor ecx, ecx
// 0076db69  83c404               add esp, 4
// 0076db6c  3bc1                 cmp eax, ecx
// 0076db6e  745f                 je 0x76dbcf
// 0076db70  380da5c18800         cmp byte ptr [0x88c1a5], cl
// 0076db76  ba10000000           mov edx, 0x10
// 0076db7b  884804               mov byte ptr [eax + 4], cl
// 0076db7e  89480c               mov dword ptr [eax + 0xc], ecx
// 0076db81  894810               mov dword ptr [eax + 0x10], ecx
// 0076db84  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076db87  895020               mov dword ptr [eax + 0x20], edx
// 0076db8a  894824               mov dword ptr [eax + 0x24], ecx
// 0076db8d  894828               mov dword ptr [eax + 0x28], ecx
// 0076db90  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076db93  894830               mov dword ptr [eax + 0x30], ecx
// 0076db96  894834               mov dword ptr [eax + 0x34], ecx
// 0076db99  895038               mov dword ptr [eax + 0x38], edx
// 0076db9c  89503c               mov dword ptr [eax + 0x3c], edx
// 0076db9f  8a15a4c18800         mov dl, byte ptr [0x88c1a4]
// 0076dba5  0f94c1               sete cl
// 0076dba8  c70001000000         mov dword ptr [eax], 1
// 0076dbae  c7400806000000       mov dword ptr [eax + 8], 6
// 0076dbb5  c740141c880000       mov dword ptr [eax + 0x14], 0x881c
// 0076dbbc  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 0076dbc3  884840               mov byte ptr [eax + 0x40], cl
// 0076dbc6  885041               mov byte ptr [eax + 0x41], dl
// 0076dbc9  a334db8b00           mov dword ptr [0x8bdb34], eax
// 0076dbce  c3                   ret 
// 0076dbcf  890d34db8b00         mov dword ptr [0x8bdb34], ecx
// 0076dbd5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
