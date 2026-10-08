// roc 2007-03 0076ed20  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076ed20
//
// 0076ed20  6a44                 push 0x44
// 0076ed22  e8e1f3eaff           call 0x61e108
// 0076ed27  33c9                 xor ecx, ecx
// 0076ed29  83c404               add esp, 4
// 0076ed2c  3bc1                 cmp eax, ecx
// 0076ed2e  745f                 je 0x76ed8f
// 0076ed30  380dd5b18800         cmp byte ptr [0x88b1d5], cl
// 0076ed36  ba08000000           mov edx, 8
// 0076ed3b  884804               mov byte ptr [eax + 4], cl
// 0076ed3e  89480c               mov dword ptr [eax + 0xc], ecx
// 0076ed41  894810               mov dword ptr [eax + 0x10], ecx
// 0076ed44  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076ed47  895020               mov dword ptr [eax + 0x20], edx
// 0076ed4a  894824               mov dword ptr [eax + 0x24], ecx
// 0076ed4d  894828               mov dword ptr [eax + 0x28], ecx
// 0076ed50  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076ed53  894830               mov dword ptr [eax + 0x30], ecx
// 0076ed56  894834               mov dword ptr [eax + 0x34], ecx
// 0076ed59  895038               mov dword ptr [eax + 0x38], edx
// 0076ed5c  89503c               mov dword ptr [eax + 0x3c], edx
// 0076ed5f  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076ed65  0f94c1               sete cl
// 0076ed68  c70001000000         mov dword ptr [eax], 1
// 0076ed6e  c7400804000000       mov dword ptr [eax + 8], 4
// 0076ed75  c740143c800000       mov dword ptr [eax + 0x14], 0x803c
// 0076ed7c  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 0076ed83  884840               mov byte ptr [eax + 0x40], cl
// 0076ed86  885041               mov byte ptr [eax + 0x41], dl
// 0076ed89  a35c828b00           mov dword ptr [0x8b825c], eax
// 0076ed8e  c3                   ret 
// 0076ed8f  890d5c828b00         mov dword ptr [0x8b825c], ecx
// 0076ed95  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?A8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
