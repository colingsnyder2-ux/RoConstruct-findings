// roc 2007-03 0076f0a0  unit: seg_00760000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f0a0
//
// 0076f0a0  6a44                 push 0x44
// 0076f0a2  e861f0eaff           call 0x61e108
// 0076f0a7  33c9                 xor ecx, ecx
// 0076f0a9  83c404               add esp, 4
// 0076f0ac  3bc1                 cmp eax, ecx
// 0076f0ae  7464                 je 0x76f114
// 0076f0b0  380dd5b18800         cmp byte ptr [0x88b1d5], cl
// 0076f0b6  ba10000000           mov edx, 0x10
// 0076f0bb  89501c               mov dword ptr [eax + 0x1c], edx
// 0076f0be  895020               mov dword ptr [eax + 0x20], edx
// 0076f0c1  ba20000000           mov edx, 0x20
// 0076f0c6  884804               mov byte ptr [eax + 4], cl
// 0076f0c9  89480c               mov dword ptr [eax + 0xc], ecx
// 0076f0cc  894810               mov dword ptr [eax + 0x10], ecx
// 0076f0cf  894824               mov dword ptr [eax + 0x24], ecx
// 0076f0d2  894828               mov dword ptr [eax + 0x28], ecx
// 0076f0d5  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076f0d8  894830               mov dword ptr [eax + 0x30], ecx
// 0076f0db  894834               mov dword ptr [eax + 0x34], ecx
// 0076f0de  895038               mov dword ptr [eax + 0x38], edx
// 0076f0e1  89503c               mov dword ptr [eax + 0x3c], edx
// 0076f0e4  8a15d4b18800         mov dl, byte ptr [0x88b1d4]
// 0076f0ea  0f94c1               sete cl
// 0076f0ed  c70002000000         mov dword ptr [eax], 2
// 0076f0f3  c740080b000000       mov dword ptr [eax + 8], 0xb
// 0076f0fa  c740141f880000       mov dword ptr [eax + 0x14], 0x881f
// 0076f101  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 0076f108  884840               mov byte ptr [eax + 0x40], cl
// 0076f10b  885041               mov byte ptr [eax + 0x41], dl
// 0076f10e  a314828b00           mov dword ptr [0x8b8214], eax
// 0076f113  c3                   ret 
// 0076f114  890d14828b00         mov dword ptr [0x8b8214], ecx
// 0076f11a  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
