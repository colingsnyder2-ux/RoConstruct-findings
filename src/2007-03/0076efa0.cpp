// roc 2007-03 0076efa0  unit: seg_00760000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076efa0
//
// 0076efa0  6a44                 push 0x44
// 0076efa2  e861f1eaff           call 0x61e108
// 0076efa7  33c9                 xor ecx, ecx
// 0076efa9  83c404               add esp, 4
// 0076efac  3bc1                 cmp eax, ecx
// 0076efae  7464                 je 0x76f014
// 0076efb0  380dd5b18800         cmp byte ptr [0x88b1d5], cl
// 0076efb6  ba08000000           mov edx, 8
// 0076efbb  89501c               mov dword ptr [eax + 0x1c], edx
// 0076efbe  895020               mov dword ptr [eax + 0x20], edx
// 0076efc1  ba10000000           mov edx, 0x10
// 0076efc6  884804               mov byte ptr [eax + 4], cl
// 0076efc9  89480c               mov dword ptr [eax + 0xc], ecx
// 0076efcc  894810               mov dword ptr [eax + 0x10], ecx
// 0076efcf  894824               mov dword ptr [eax + 0x24], ecx
// 0076efd2  894828               mov dword ptr [eax + 0x28], ecx
// 0076efd5  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076efd8  894830               mov dword ptr [eax + 0x30], ecx
// 0076efdb  894834               mov dword ptr [eax + 0x34], ecx
// 0076efde  895038               mov dword ptr [eax + 0x38], edx
// 0076efe1  89503c               mov dword ptr [eax + 0x3c], edx
// 0076efe4  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076efea  0f94c1               sete cl
// 0076efed  c70002000000         mov dword ptr [eax], 2
// 0076eff3  c7400809000000       mov dword ptr [eax + 8], 9
// 0076effa  c7401445800000       mov dword ptr [eax + 0x14], 0x8045
// 0076f001  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 0076f008  884840               mov byte ptr [eax + 0x40], cl
// 0076f00b  885041               mov byte ptr [eax + 0x41], dl
// 0076f00e  a334828b00           mov dword ptr [0x8b8234], eax
// 0076f013  c3                   ret 
// 0076f014  890d34828b00         mov dword ptr [0x8b8234], ecx
// 0076f01a  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
