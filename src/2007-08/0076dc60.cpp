// from server: 100% by auto
// roc 2007-08 0076dc60  unit: seg_00760000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076dc60
//
// 0076dc60  6a44                 push 0x44
// 0076dc62  e88f22ecff           call 0x62fef6
// 0076dc67  33c9                 xor ecx, ecx
// 0076dc69  83c404               add esp, 4
// 0076dc6c  3bc1                 cmp eax, ecx
// 0076dc6e  7463                 je 0x76dcd3
// 0076dc70  380da5c18800         cmp byte ptr [0x88c1a5], cl
// 0076dc76  ba08000000           mov edx, 8
// 0076dc7b  884804               mov byte ptr [eax + 4], cl
// 0076dc7e  895008               mov dword ptr [eax + 8], edx
// 0076dc81  89480c               mov dword ptr [eax + 0xc], ecx
// 0076dc84  894810               mov dword ptr [eax + 0x10], ecx
// 0076dc87  894824               mov dword ptr [eax + 0x24], ecx
// 0076dc8a  894828               mov dword ptr [eax + 0x28], ecx
// 0076dc8d  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076dc90  894830               mov dword ptr [eax + 0x30], ecx
// 0076dc93  894834               mov dword ptr [eax + 0x34], ecx
// 0076dc96  895038               mov dword ptr [eax + 0x38], edx
// 0076dc99  89503c               mov dword ptr [eax + 0x3c], edx
// 0076dc9c  8a1520db8b00         mov dl, byte ptr [0x8bdb20]
// 0076dca2  0f94c1               sete cl
// 0076dca5  c70002000000         mov dword ptr [eax], 2
// 0076dcab  c7401443800000       mov dword ptr [eax + 0x14], 0x8043
// 0076dcb2  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 0076dcb9  c7401c04000000       mov dword ptr [eax + 0x1c], 4
// 0076dcc0  c7402004000000       mov dword ptr [eax + 0x20], 4
// 0076dcc7  884840               mov byte ptr [eax + 0x40], cl
// 0076dcca  885041               mov byte ptr [eax + 0x41], dl
// 0076dccd  a354db8b00           mov dword ptr [0x8bdb54], eax
// 0076dcd2  c3                   ret 
// 0076dcd3  890d54db8b00         mov dword ptr [0x8bdb54], ecx
// 0076dcd9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA4@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
