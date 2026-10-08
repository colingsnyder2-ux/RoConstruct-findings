// from server: 100% by auto
// roc 2007-08 0076d870  unit: seg_00760000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d870
//
// 0076d870  6a44                 push 0x44
// 0076d872  e87f26ecff           call 0x62fef6
// 0076d877  33c9                 xor ecx, ecx
// 0076d879  83c404               add esp, 4
// 0076d87c  3bc1                 cmp eax, ecx
// 0076d87e  7458                 je 0x76d8d8
// 0076d880  ba08000000           mov edx, 8
// 0076d885  884804               mov byte ptr [eax + 4], cl
// 0076d888  894808               mov dword ptr [eax + 8], ecx
// 0076d88b  89480c               mov dword ptr [eax + 0xc], ecx
// 0076d88e  894810               mov dword ptr [eax + 0x10], ecx
// 0076d891  89501c               mov dword ptr [eax + 0x1c], edx
// 0076d894  894820               mov dword ptr [eax + 0x20], ecx
// 0076d897  894824               mov dword ptr [eax + 0x24], ecx
// 0076d89a  894828               mov dword ptr [eax + 0x28], ecx
// 0076d89d  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076d8a0  894830               mov dword ptr [eax + 0x30], ecx
// 0076d8a3  894834               mov dword ptr [eax + 0x34], ecx
// 0076d8a6  8a0da5c18800         mov cl, byte ptr [0x88c1a5]
// 0076d8ac  895038               mov dword ptr [eax + 0x38], edx
// 0076d8af  89503c               mov dword ptr [eax + 0x3c], edx
// 0076d8b2  8a1520db8b00         mov dl, byte ptr [0x8bdb20]
// 0076d8b8  c70001000000         mov dword ptr [eax], 1
// 0076d8be  c7401440800000       mov dword ptr [eax + 0x14], 0x8040
// 0076d8c5  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 0076d8cc  884840               mov byte ptr [eax + 0x40], cl
// 0076d8cf  885041               mov byte ptr [eax + 0x41], dl
// 0076d8d2  a370db8b00           mov dword ptr [0x8bdb70], eax
// 0076d8d7  c3                   ret 
// 0076d8d8  890d70db8b00         mov dword ptr [0x8bdb70], ecx
// 0076d8de  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
