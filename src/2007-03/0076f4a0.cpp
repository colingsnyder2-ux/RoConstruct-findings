// roc 2007-03 0076f4a0  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f4a0
//
// 0076f4a0  6a44                 push 0x44
// 0076f4a2  e861eceaff           call 0x61e108
// 0076f4a7  33c9                 xor ecx, ecx
// 0076f4a9  83c404               add esp, 4
// 0076f4ac  3bc1                 cmp eax, ecx
// 0076f4ae  745f                 je 0x76f50f
// 0076f4b0  ba08000000           mov edx, 8
// 0076f4b5  884804               mov byte ptr [eax + 4], cl
// 0076f4b8  894810               mov dword ptr [eax + 0x10], ecx
// 0076f4bb  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076f4be  895020               mov dword ptr [eax + 0x20], edx
// 0076f4c1  895024               mov dword ptr [eax + 0x24], edx
// 0076f4c4  895028               mov dword ptr [eax + 0x28], edx
// 0076f4c7  89502c               mov dword ptr [eax + 0x2c], edx
// 0076f4ca  894830               mov dword ptr [eax + 0x30], ecx
// 0076f4cd  894834               mov dword ptr [eax + 0x34], ecx
// 0076f4d0  884840               mov byte ptr [eax + 0x40], cl
// 0076f4d3  8a0dd8818b00         mov cl, byte ptr [0x8b81d8]
// 0076f4d9  ba20000000           mov edx, 0x20
// 0076f4de  c70004000000         mov dword ptr [eax], 4
// 0076f4e4  c7400815000000       mov dword ptr [eax + 8], 0x15
// 0076f4eb  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0076f4f2  c7401458800000       mov dword ptr [eax + 0x14], 0x8058
// 0076f4f9  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0076f500  895038               mov dword ptr [eax + 0x38], edx
// 0076f503  89503c               mov dword ptr [eax + 0x3c], edx
// 0076f506  884841               mov byte ptr [eax + 0x41], cl
// 0076f509  a34c828b00           mov dword ptr [0x8b824c], eax
// 0076f50e  c3                   ret 
// 0076f50f  890d4c828b00         mov dword ptr [0x8b824c], ecx
// 0076f515  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
