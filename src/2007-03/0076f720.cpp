// roc 2007-03 0076f720  unit: seg_00760000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f720
//
// 0076f720  6a44                 push 0x44
// 0076f722  e8e1e9eaff           call 0x61e108
// 0076f727  33c9                 xor ecx, ecx
// 0076f729  83c404               add esp, 4
// 0076f72c  3bc1                 cmp eax, ecx
// 0076f72e  7464                 je 0x76f794
// 0076f730  380dd5b18800         cmp byte ptr [0x88b1d5], cl
// 0076f736  ba01000000           mov edx, 1
// 0076f73b  885004               mov byte ptr [eax + 4], dl
// 0076f73e  89500c               mov dword ptr [eax + 0xc], edx
// 0076f741  ba40000000           mov edx, 0x40
// 0076f746  894810               mov dword ptr [eax + 0x10], ecx
// 0076f749  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076f74c  894820               mov dword ptr [eax + 0x20], ecx
// 0076f74f  894824               mov dword ptr [eax + 0x24], ecx
// 0076f752  894828               mov dword ptr [eax + 0x28], ecx
// 0076f755  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076f758  894830               mov dword ptr [eax + 0x30], ecx
// 0076f75b  894834               mov dword ptr [eax + 0x34], ecx
// 0076f75e  895038               mov dword ptr [eax + 0x38], edx
// 0076f761  89503c               mov dword ptr [eax + 0x3c], edx
// 0076f764  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076f76a  0f94c1               sete cl
// 0076f76d  c70004000000         mov dword ptr [eax], 4
// 0076f773  c7400826000000       mov dword ptr [eax + 8], 0x26
// 0076f77a  c74014f1830000       mov dword ptr [eax + 0x14], 0x83f1
// 0076f781  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0076f788  884840               mov byte ptr [eax + 0x40], cl
// 0076f78b  885041               mov byte ptr [eax + 0x41], dl
// 0076f78e  a31c828b00           mov dword ptr [0x8b821c], eax
// 0076f793  c3                   ret 
// 0076f794  890d1c828b00         mov dword ptr [0x8b821c], ecx
// 0076f79a  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA_DXT1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
