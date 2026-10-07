// roc 2007-08 0076dd60  unit: seg_00760000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076dd60
//
// 0076dd60  6a44                 push 0x44
// 0076dd62  e88f21ecff           call 0x62fef6
// 0076dd67  33c9                 xor ecx, ecx
// 0076dd69  83c404               add esp, 4
// 0076dd6c  3bc1                 cmp eax, ecx
// 0076dd6e  7464                 je 0x76ddd4
// 0076dd70  380da5c18800         cmp byte ptr [0x88c1a5], cl
// 0076dd76  ba10000000           mov edx, 0x10
// 0076dd7b  89501c               mov dword ptr [eax + 0x1c], edx
// 0076dd7e  895020               mov dword ptr [eax + 0x20], edx
// 0076dd81  ba20000000           mov edx, 0x20
// 0076dd86  884804               mov byte ptr [eax + 4], cl
// 0076dd89  89480c               mov dword ptr [eax + 0xc], ecx
// 0076dd8c  894810               mov dword ptr [eax + 0x10], ecx
// 0076dd8f  894824               mov dword ptr [eax + 0x24], ecx
// 0076dd92  894828               mov dword ptr [eax + 0x28], ecx
// 0076dd95  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076dd98  894830               mov dword ptr [eax + 0x30], ecx
// 0076dd9b  894834               mov dword ptr [eax + 0x34], ecx
// 0076dd9e  895038               mov dword ptr [eax + 0x38], edx
// 0076dda1  89503c               mov dword ptr [eax + 0x3c], edx
// 0076dda4  8a1520db8b00         mov dl, byte ptr [0x8bdb20]
// 0076ddaa  0f94c1               sete cl
// 0076ddad  c70002000000         mov dword ptr [eax], 2
// 0076ddb3  c740080a000000       mov dword ptr [eax + 8], 0xa
// 0076ddba  c7401448800000       mov dword ptr [eax + 0x14], 0x8048
// 0076ddc1  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 0076ddc8  884840               mov byte ptr [eax + 0x40], cl
// 0076ddcb  885041               mov byte ptr [eax + 0x41], dl
// 0076ddce  a368db8b00           mov dword ptr [0x8bdb68], eax
// 0076ddd3  c3                   ret 
// 0076ddd4  890d68db8b00         mov dword ptr [0x8bdb68], ecx
// 0076ddda  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
