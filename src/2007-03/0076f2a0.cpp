// roc 2007-03 0076f2a0  unit: seg_00760000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f2a0
//
// 0076f2a0  6a44                 push 0x44
// 0076f2a2  e861eeeaff           call 0x61e108
// 0076f2a7  33c9                 xor ecx, ecx
// 0076f2a9  83c404               add esp, 4
// 0076f2ac  3bc1                 cmp eax, ecx
// 0076f2ae  7468                 je 0x76f318
// 0076f2b0  ba08000000           mov edx, 8
// 0076f2b5  884804               mov byte ptr [eax + 4], cl
// 0076f2b8  894810               mov dword ptr [eax + 0x10], ecx
// 0076f2bb  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076f2be  894820               mov dword ptr [eax + 0x20], ecx
// 0076f2c1  895024               mov dword ptr [eax + 0x24], edx
// 0076f2c4  895028               mov dword ptr [eax + 0x28], edx
// 0076f2c7  89502c               mov dword ptr [eax + 0x2c], edx
// 0076f2ca  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076f2d0  894830               mov dword ptr [eax + 0x30], ecx
// 0076f2d3  894834               mov dword ptr [eax + 0x34], ecx
// 0076f2d6  8a0dd5b18800         mov cl, byte ptr [0x88b1d5]
// 0076f2dc  c70003000000         mov dword ptr [eax], 3
// 0076f2e2  c740080f000000       mov dword ptr [eax + 8], 0xf
// 0076f2e9  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0076f2f0  c7401451800000       mov dword ptr [eax + 0x14], 0x8051
// 0076f2f7  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 0076f2fe  c7403820000000       mov dword ptr [eax + 0x38], 0x20
// 0076f305  c7403c18000000       mov dword ptr [eax + 0x3c], 0x18
// 0076f30c  884840               mov byte ptr [eax + 0x40], cl
// 0076f30f  885041               mov byte ptr [eax + 0x41], dl
// 0076f312  a354828b00           mov dword ptr [0x8b8254], eax
// 0076f317  c3                   ret 
// 0076f318  890d54828b00         mov dword ptr [0x8b8254], ecx
// 0076f31e  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
