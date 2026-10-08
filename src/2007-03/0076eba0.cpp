// roc 2007-03 0076eba0  unit: seg_00760000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076eba0
//
// 0076eba0  6a44                 push 0x44
// 0076eba2  e861f5eaff           call 0x61e108
// 0076eba7  33c9                 xor ecx, ecx
// 0076eba9  83c404               add esp, 4
// 0076ebac  3bc1                 cmp eax, ecx
// 0076ebae  745c                 je 0x76ec0c
// 0076ebb0  ba10000000           mov edx, 0x10
// 0076ebb5  884804               mov byte ptr [eax + 4], cl
// 0076ebb8  89480c               mov dword ptr [eax + 0xc], ecx
// 0076ebbb  894810               mov dword ptr [eax + 0x10], ecx
// 0076ebbe  89501c               mov dword ptr [eax + 0x1c], edx
// 0076ebc1  894820               mov dword ptr [eax + 0x20], ecx
// 0076ebc4  894824               mov dword ptr [eax + 0x24], ecx
// 0076ebc7  894828               mov dword ptr [eax + 0x28], ecx
// 0076ebca  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076ebcd  894830               mov dword ptr [eax + 0x30], ecx
// 0076ebd0  894834               mov dword ptr [eax + 0x34], ecx
// 0076ebd3  8a0dd5b18800         mov cl, byte ptr [0x88b1d5]
// 0076ebd9  895038               mov dword ptr [eax + 0x38], edx
// 0076ebdc  89503c               mov dword ptr [eax + 0x3c], edx
// 0076ebdf  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076ebe5  c70001000000         mov dword ptr [eax], 1
// 0076ebeb  c7400801000000       mov dword ptr [eax + 8], 1
// 0076ebf2  c7401442800000       mov dword ptr [eax + 0x14], 0x8042
// 0076ebf9  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 0076ec00  884840               mov byte ptr [eax + 0x40], cl
// 0076ec03  885041               mov byte ptr [eax + 0x41], dl
// 0076ec06  a364828b00           mov dword ptr [0x8b8264], eax
// 0076ec0b  c3                   ret 
// 0076ec0c  890d64828b00         mov dword ptr [0x8b8264], ecx
// 0076ec12  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?L16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
