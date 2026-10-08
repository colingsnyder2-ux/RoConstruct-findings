// roc 2007-03 0076fba0  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076fba0
//
// 0076fba0  6a44                 push 0x44
// 0076fba2  e861e5eaff           call 0x61e108
// 0076fba7  33c9                 xor ecx, ecx
// 0076fba9  83c404               add esp, 4
// 0076fbac  3bc1                 cmp eax, ecx
// 0076fbae  745f                 je 0x76fc0f
// 0076fbb0  380dd5b18800         cmp byte ptr [0x88b1d5], cl
// 0076fbb6  ba10000000           mov edx, 0x10
// 0076fbbb  884804               mov byte ptr [eax + 4], cl
// 0076fbbe  89480c               mov dword ptr [eax + 0xc], ecx
// 0076fbc1  894810               mov dword ptr [eax + 0x10], ecx
// 0076fbc4  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076fbc7  894820               mov dword ptr [eax + 0x20], ecx
// 0076fbca  894824               mov dword ptr [eax + 0x24], ecx
// 0076fbcd  894828               mov dword ptr [eax + 0x28], ecx
// 0076fbd0  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076fbd3  895030               mov dword ptr [eax + 0x30], edx
// 0076fbd6  894834               mov dword ptr [eax + 0x34], ecx
// 0076fbd9  895038               mov dword ptr [eax + 0x38], edx
// 0076fbdc  89503c               mov dword ptr [eax + 0x3c], edx
// 0076fbdf  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076fbe5  0f94c1               sete cl
// 0076fbe8  c70001000000         mov dword ptr [eax], 1
// 0076fbee  c740082f000000       mov dword ptr [eax + 8], 0x2f
// 0076fbf5  c74014498d0000       mov dword ptr [eax + 0x14], 0x8d49
// 0076fbfc  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 0076fc03  884840               mov byte ptr [eax + 0x40], cl
// 0076fc06  885041               mov byte ptr [eax + 0x41], dl
// 0076fc09  a318828b00           mov dword ptr [0x8b8218], eax
// 0076fc0e  c3                   ret 
// 0076fc0f  890d18828b00         mov dword ptr [0x8b8218], ecx
// 0076fc15  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
