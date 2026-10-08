// roc 2007-03 0076ec20  unit: seg_00760000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076ec20
//
// 0076ec20  6a44                 push 0x44
// 0076ec22  e8e1f4eaff           call 0x61e108
// 0076ec27  33c9                 xor ecx, ecx
// 0076ec29  83c404               add esp, 4
// 0076ec2c  3bc1                 cmp eax, ecx
// 0076ec2e  745c                 je 0x76ec8c
// 0076ec30  ba10000000           mov edx, 0x10
// 0076ec35  884804               mov byte ptr [eax + 4], cl
// 0076ec38  89480c               mov dword ptr [eax + 0xc], ecx
// 0076ec3b  894810               mov dword ptr [eax + 0x10], ecx
// 0076ec3e  89501c               mov dword ptr [eax + 0x1c], edx
// 0076ec41  894820               mov dword ptr [eax + 0x20], ecx
// 0076ec44  894824               mov dword ptr [eax + 0x24], ecx
// 0076ec47  894828               mov dword ptr [eax + 0x28], ecx
// 0076ec4a  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076ec4d  894830               mov dword ptr [eax + 0x30], ecx
// 0076ec50  894834               mov dword ptr [eax + 0x34], ecx
// 0076ec53  8a0dd5b18800         mov cl, byte ptr [0x88b1d5]
// 0076ec59  895038               mov dword ptr [eax + 0x38], edx
// 0076ec5c  89503c               mov dword ptr [eax + 0x3c], edx
// 0076ec5f  8a15d4b18800         mov dl, byte ptr [0x88b1d4]
// 0076ec65  c70001000000         mov dword ptr [eax], 1
// 0076ec6b  c7400802000000       mov dword ptr [eax + 8], 2
// 0076ec72  c740141e880000       mov dword ptr [eax + 0x14], 0x881e
// 0076ec79  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 0076ec80  884840               mov byte ptr [eax + 0x40], cl
// 0076ec83  885041               mov byte ptr [eax + 0x41], dl
// 0076ec86  a358828b00           mov dword ptr [0x8b8258], eax
// 0076ec8b  c3                   ret 
// 0076ec8c  890d58828b00         mov dword ptr [0x8b8258], ecx
// 0076ec92  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?L16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
