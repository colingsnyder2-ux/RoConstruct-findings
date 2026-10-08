// from server: 100% by auto
// roc 2007-08 0076d960  unit: seg_00760000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d960
//
// 0076d960  6a44                 push 0x44
// 0076d962  e88f25ecff           call 0x62fef6
// 0076d967  33c9                 xor ecx, ecx
// 0076d969  83c404               add esp, 4
// 0076d96c  3bc1                 cmp eax, ecx
// 0076d96e  745c                 je 0x76d9cc
// 0076d970  ba10000000           mov edx, 0x10
// 0076d975  884804               mov byte ptr [eax + 4], cl
// 0076d978  89480c               mov dword ptr [eax + 0xc], ecx
// 0076d97b  894810               mov dword ptr [eax + 0x10], ecx
// 0076d97e  89501c               mov dword ptr [eax + 0x1c], edx
// 0076d981  894820               mov dword ptr [eax + 0x20], ecx
// 0076d984  894824               mov dword ptr [eax + 0x24], ecx
// 0076d987  894828               mov dword ptr [eax + 0x28], ecx
// 0076d98a  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076d98d  894830               mov dword ptr [eax + 0x30], ecx
// 0076d990  894834               mov dword ptr [eax + 0x34], ecx
// 0076d993  8a0da5c18800         mov cl, byte ptr [0x88c1a5]
// 0076d999  895038               mov dword ptr [eax + 0x38], edx
// 0076d99c  89503c               mov dword ptr [eax + 0x3c], edx
// 0076d99f  8a15a4c18800         mov dl, byte ptr [0x88c1a4]
// 0076d9a5  c70001000000         mov dword ptr [eax], 1
// 0076d9ab  c7400802000000       mov dword ptr [eax + 8], 2
// 0076d9b2  c740141e880000       mov dword ptr [eax + 0x14], 0x881e
// 0076d9b9  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 0076d9c0  884840               mov byte ptr [eax + 0x40], cl
// 0076d9c3  885041               mov byte ptr [eax + 0x41], dl
// 0076d9c6  a3a0db8b00           mov dword ptr [0x8bdba0], eax
// 0076d9cb  c3                   ret 
// 0076d9cc  890da0db8b00         mov dword ptr [0x8bdba0], ecx
// 0076d9d2  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
