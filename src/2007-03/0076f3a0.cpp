// roc 2007-03 0076f3a0  unit: seg_00760000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f3a0
//
// 0076f3a0  6a44                 push 0x44
// 0076f3a2  e861edeaff           call 0x61e108
// 0076f3a7  33c9                 xor ecx, ecx
// 0076f3a9  83c404               add esp, 4
// 0076f3ac  3bc1                 cmp eax, ecx
// 0076f3ae  7465                 je 0x76f415
// 0076f3b0  884804               mov byte ptr [eax + 4], cl
// 0076f3b3  894810               mov dword ptr [eax + 0x10], ecx
// 0076f3b6  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076f3b9  894820               mov dword ptr [eax + 0x20], ecx
// 0076f3bc  ba10000000           mov edx, 0x10
// 0076f3c1  894830               mov dword ptr [eax + 0x30], ecx
// 0076f3c4  894834               mov dword ptr [eax + 0x34], ecx
// 0076f3c7  b930000000           mov ecx, 0x30
// 0076f3cc  895024               mov dword ptr [eax + 0x24], edx
// 0076f3cf  895028               mov dword ptr [eax + 0x28], edx
// 0076f3d2  89502c               mov dword ptr [eax + 0x2c], edx
// 0076f3d5  8a15d4b18800         mov dl, byte ptr [0x88b1d4]
// 0076f3db  894838               mov dword ptr [eax + 0x38], ecx
// 0076f3de  89483c               mov dword ptr [eax + 0x3c], ecx
// 0076f3e1  8a0dd5b18800         mov cl, byte ptr [0x88b1d5]
// 0076f3e7  c70003000000         mov dword ptr [eax], 3
// 0076f3ed  c7400811000000       mov dword ptr [eax + 8], 0x11
// 0076f3f4  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0076f3fb  c740141b880000       mov dword ptr [eax + 0x14], 0x881b
// 0076f402  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 0076f409  884840               mov byte ptr [eax + 0x40], cl
// 0076f40c  885041               mov byte ptr [eax + 0x41], dl
// 0076f40f  a308828b00           mov dword ptr [0x8b8208], eax
// 0076f414  c3                   ret 
// 0076f415  890d08828b00         mov dword ptr [0x8b8208], ecx
// 0076f41b  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
