// roc 2007-03 0076f1a0  unit: seg_00760000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f1a0
//
// 0076f1a0  6a44                 push 0x44
// 0076f1a2  e861efeaff           call 0x61e108
// 0076f1a7  33c9                 xor ecx, ecx
// 0076f1a9  83c404               add esp, 4
// 0076f1ac  3bc1                 cmp eax, ecx
// 0076f1ae  7465                 je 0x76f215
// 0076f1b0  884804               mov byte ptr [eax + 4], cl
// 0076f1b3  894810               mov dword ptr [eax + 0x10], ecx
// 0076f1b6  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076f1b9  894820               mov dword ptr [eax + 0x20], ecx
// 0076f1bc  ba05000000           mov edx, 5
// 0076f1c1  894830               mov dword ptr [eax + 0x30], ecx
// 0076f1c4  894834               mov dword ptr [eax + 0x34], ecx
// 0076f1c7  b910000000           mov ecx, 0x10
// 0076f1cc  895024               mov dword ptr [eax + 0x24], edx
// 0076f1cf  895028               mov dword ptr [eax + 0x28], edx
// 0076f1d2  89502c               mov dword ptr [eax + 0x2c], edx
// 0076f1d5  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076f1db  894838               mov dword ptr [eax + 0x38], ecx
// 0076f1de  89483c               mov dword ptr [eax + 0x3c], ecx
// 0076f1e1  8a0dd5b18800         mov cl, byte ptr [0x88b1d5]
// 0076f1e7  c70003000000         mov dword ptr [eax], 3
// 0076f1ed  c740080d000000       mov dword ptr [eax + 8], 0xd
// 0076f1f4  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0076f1fb  c7401450800000       mov dword ptr [eax + 0x14], 0x8050
// 0076f202  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0076f209  884840               mov byte ptr [eax + 0x40], cl
// 0076f20c  885041               mov byte ptr [eax + 0x41], dl
// 0076f20f  a330828b00           mov dword ptr [0x8b8230], eax
// 0076f214  c3                   ret 
// 0076f215  890d30828b00         mov dword ptr [0x8b8230], ecx
// 0076f21b  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB5@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
