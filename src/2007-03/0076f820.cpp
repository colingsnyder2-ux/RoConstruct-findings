// roc 2007-03 0076f820  unit: seg_00760000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f820
//
// 0076f820  6a44                 push 0x44
// 0076f822  e8e1e8eaff           call 0x61e108
// 0076f827  33c9                 xor ecx, ecx
// 0076f829  83c404               add esp, 4
// 0076f82c  3bc1                 cmp eax, ecx
// 0076f82e  7464                 je 0x76f894
// 0076f830  380dd5b18800         cmp byte ptr [0x88b1d5], cl
// 0076f836  ba01000000           mov edx, 1
// 0076f83b  885004               mov byte ptr [eax + 4], dl
// 0076f83e  89500c               mov dword ptr [eax + 0xc], edx
// 0076f841  ba80000000           mov edx, 0x80
// 0076f846  894810               mov dword ptr [eax + 0x10], ecx
// 0076f849  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076f84c  894820               mov dword ptr [eax + 0x20], ecx
// 0076f84f  894824               mov dword ptr [eax + 0x24], ecx
// 0076f852  894828               mov dword ptr [eax + 0x28], ecx
// 0076f855  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076f858  894830               mov dword ptr [eax + 0x30], ecx
// 0076f85b  894834               mov dword ptr [eax + 0x34], ecx
// 0076f85e  895038               mov dword ptr [eax + 0x38], edx
// 0076f861  89503c               mov dword ptr [eax + 0x3c], edx
// 0076f864  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076f86a  0f94c1               sete cl
// 0076f86d  c70004000000         mov dword ptr [eax], 4
// 0076f873  c7400828000000       mov dword ptr [eax + 8], 0x28
// 0076f87a  c74014f3830000       mov dword ptr [eax + 0x14], 0x83f3
// 0076f881  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0076f888  884840               mov byte ptr [eax + 0x40], cl
// 0076f88b  885041               mov byte ptr [eax + 0x41], dl
// 0076f88e  a360828b00           mov dword ptr [0x8b8260], eax
// 0076f893  c3                   ret 
// 0076f894  890d60828b00         mov dword ptr [0x8b8260], ecx
// 0076f89a  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA_DXT5@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
