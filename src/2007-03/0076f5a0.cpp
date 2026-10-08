// roc 2007-03 0076f5a0  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f5a0
//
// 0076f5a0  6a44                 push 0x44
// 0076f5a2  e861ebeaff           call 0x61e108
// 0076f5a7  33c9                 xor ecx, ecx
// 0076f5a9  83c404               add esp, 4
// 0076f5ac  3bc1                 cmp eax, ecx
// 0076f5ae  745f                 je 0x76f60f
// 0076f5b0  ba10000000           mov edx, 0x10
// 0076f5b5  884804               mov byte ptr [eax + 4], cl
// 0076f5b8  894810               mov dword ptr [eax + 0x10], ecx
// 0076f5bb  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076f5be  895020               mov dword ptr [eax + 0x20], edx
// 0076f5c1  895024               mov dword ptr [eax + 0x24], edx
// 0076f5c4  895028               mov dword ptr [eax + 0x28], edx
// 0076f5c7  89502c               mov dword ptr [eax + 0x2c], edx
// 0076f5ca  894830               mov dword ptr [eax + 0x30], ecx
// 0076f5cd  894834               mov dword ptr [eax + 0x34], ecx
// 0076f5d0  884840               mov byte ptr [eax + 0x40], cl
// 0076f5d3  8a0dd4b18800         mov cl, byte ptr [0x88b1d4]
// 0076f5d9  ba40000000           mov edx, 0x40
// 0076f5de  c70004000000         mov dword ptr [eax], 4
// 0076f5e4  c7400811000000       mov dword ptr [eax + 8], 0x11
// 0076f5eb  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0076f5f2  c740141a880000       mov dword ptr [eax + 0x14], 0x881a
// 0076f5f9  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0076f600  895038               mov dword ptr [eax + 0x38], edx
// 0076f603  89503c               mov dword ptr [eax + 0x3c], edx
// 0076f606  884841               mov byte ptr [eax + 0x41], cl
// 0076f609  a3e4818b00           mov dword ptr [0x8b81e4], eax
// 0076f60e  c3                   ret 
// 0076f60f  890de4818b00         mov dword ptr [0x8b81e4], ecx
// 0076f615  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
