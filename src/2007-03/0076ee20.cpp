// roc 2007-03 0076ee20  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076ee20
//
// 0076ee20  6a44                 push 0x44
// 0076ee22  e8e1f2eaff           call 0x61e108
// 0076ee27  33c9                 xor ecx, ecx
// 0076ee29  83c404               add esp, 4
// 0076ee2c  3bc1                 cmp eax, ecx
// 0076ee2e  745f                 je 0x76ee8f
// 0076ee30  380dd5b18800         cmp byte ptr [0x88b1d5], cl
// 0076ee36  ba10000000           mov edx, 0x10
// 0076ee3b  884804               mov byte ptr [eax + 4], cl
// 0076ee3e  89480c               mov dword ptr [eax + 0xc], ecx
// 0076ee41  894810               mov dword ptr [eax + 0x10], ecx
// 0076ee44  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076ee47  895020               mov dword ptr [eax + 0x20], edx
// 0076ee4a  894824               mov dword ptr [eax + 0x24], ecx
// 0076ee4d  894828               mov dword ptr [eax + 0x28], ecx
// 0076ee50  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076ee53  894830               mov dword ptr [eax + 0x30], ecx
// 0076ee56  894834               mov dword ptr [eax + 0x34], ecx
// 0076ee59  895038               mov dword ptr [eax + 0x38], edx
// 0076ee5c  89503c               mov dword ptr [eax + 0x3c], edx
// 0076ee5f  8a15d4b18800         mov dl, byte ptr [0x88b1d4]
// 0076ee65  0f94c1               sete cl
// 0076ee68  c70001000000         mov dword ptr [eax], 1
// 0076ee6e  c7400806000000       mov dword ptr [eax + 8], 6
// 0076ee75  c740141c880000       mov dword ptr [eax + 0x14], 0x881c
// 0076ee7c  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 0076ee83  884840               mov byte ptr [eax + 0x40], cl
// 0076ee86  885041               mov byte ptr [eax + 0x41], dl
// 0076ee89  a3ec818b00           mov dword ptr [0x8b81ec], eax
// 0076ee8e  c3                   ret 
// 0076ee8f  890dec818b00         mov dword ptr [0x8b81ec], ecx
// 0076ee95  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?A16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
