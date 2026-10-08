// roc 2007-03 0076f520  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f520
//
// 0076f520  6a44                 push 0x44
// 0076f522  e8e1ebeaff           call 0x61e108
// 0076f527  33c9                 xor ecx, ecx
// 0076f529  83c404               add esp, 4
// 0076f52c  3bc1                 cmp eax, ecx
// 0076f52e  745f                 je 0x76f58f
// 0076f530  ba10000000           mov edx, 0x10
// 0076f535  884804               mov byte ptr [eax + 4], cl
// 0076f538  894810               mov dword ptr [eax + 0x10], ecx
// 0076f53b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076f53e  895020               mov dword ptr [eax + 0x20], edx
// 0076f541  895024               mov dword ptr [eax + 0x24], edx
// 0076f544  895028               mov dword ptr [eax + 0x28], edx
// 0076f547  89502c               mov dword ptr [eax + 0x2c], edx
// 0076f54a  894830               mov dword ptr [eax + 0x30], ecx
// 0076f54d  894834               mov dword ptr [eax + 0x34], ecx
// 0076f550  884840               mov byte ptr [eax + 0x40], cl
// 0076f553  8a0dd8818b00         mov cl, byte ptr [0x8b81d8]
// 0076f559  ba40000000           mov edx, 0x40
// 0076f55e  c70004000000         mov dword ptr [eax], 4
// 0076f564  c7400816000000       mov dword ptr [eax + 8], 0x16
// 0076f56b  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0076f572  c740145b800000       mov dword ptr [eax + 0x14], 0x805b
// 0076f579  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0076f580  895038               mov dword ptr [eax + 0x38], edx
// 0076f583  89503c               mov dword ptr [eax + 0x3c], edx
// 0076f586  884841               mov byte ptr [eax + 0x41], cl
// 0076f589  a348828b00           mov dword ptr [0x8b8248], eax
// 0076f58e  c3                   ret 
// 0076f58f  890d48828b00         mov dword ptr [0x8b8248], ecx
// 0076f595  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
