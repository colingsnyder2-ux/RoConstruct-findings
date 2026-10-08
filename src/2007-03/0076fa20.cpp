// roc 2007-03 0076fa20  unit: seg_00760000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076fa20
//
// 0076fa20  6a44                 push 0x44
// 0076fa22  e8e1e6eaff           call 0x61e108
// 0076fa27  33c9                 xor ecx, ecx
// 0076fa29  83c404               add esp, 4
// 0076fa2c  3bc1                 cmp eax, ecx
// 0076fa2e  745b                 je 0x76fa8b
// 0076fa30  380dd5b18800         cmp byte ptr [0x88b1d5], cl
// 0076fa36  ba01000000           mov edx, 1
// 0076fa3b  8910                 mov dword ptr [eax], edx
// 0076fa3d  884804               mov byte ptr [eax + 4], cl
// 0076fa40  89480c               mov dword ptr [eax + 0xc], ecx
// 0076fa43  894810               mov dword ptr [eax + 0x10], ecx
// 0076fa46  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076fa49  894820               mov dword ptr [eax + 0x20], ecx
// 0076fa4c  894824               mov dword ptr [eax + 0x24], ecx
// 0076fa4f  894828               mov dword ptr [eax + 0x28], ecx
// 0076fa52  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076fa55  895030               mov dword ptr [eax + 0x30], edx
// 0076fa58  894834               mov dword ptr [eax + 0x34], ecx
// 0076fa5b  895038               mov dword ptr [eax + 0x38], edx
// 0076fa5e  89503c               mov dword ptr [eax + 0x3c], edx
// 0076fa61  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076fa67  0f94c1               sete cl
// 0076fa6a  c740082c000000       mov dword ptr [eax + 8], 0x2c
// 0076fa71  c74014468d0000       mov dword ptr [eax + 0x14], 0x8d46
// 0076fa78  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 0076fa7f  884840               mov byte ptr [eax + 0x40], cl
// 0076fa82  885041               mov byte ptr [eax + 0x41], dl
// 0076fa85  a344828b00           mov dword ptr [0x8b8244], eax
// 0076fa8a  c3                   ret 
// 0076fa8b  890d44828b00         mov dword ptr [0x8b8244], ecx
// 0076fa91  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
