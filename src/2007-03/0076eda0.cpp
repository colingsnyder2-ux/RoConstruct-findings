// roc 2007-03 0076eda0  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076eda0
//
// 0076eda0  6a44                 push 0x44
// 0076eda2  e861f3eaff           call 0x61e108
// 0076eda7  33c9                 xor ecx, ecx
// 0076eda9  83c404               add esp, 4
// 0076edac  3bc1                 cmp eax, ecx
// 0076edae  745f                 je 0x76ee0f
// 0076edb0  380dd5b18800         cmp byte ptr [0x88b1d5], cl
// 0076edb6  ba10000000           mov edx, 0x10
// 0076edbb  884804               mov byte ptr [eax + 4], cl
// 0076edbe  89480c               mov dword ptr [eax + 0xc], ecx
// 0076edc1  894810               mov dword ptr [eax + 0x10], ecx
// 0076edc4  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076edc7  895020               mov dword ptr [eax + 0x20], edx
// 0076edca  894824               mov dword ptr [eax + 0x24], ecx
// 0076edcd  894828               mov dword ptr [eax + 0x28], ecx
// 0076edd0  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076edd3  894830               mov dword ptr [eax + 0x30], ecx
// 0076edd6  894834               mov dword ptr [eax + 0x34], ecx
// 0076edd9  895038               mov dword ptr [eax + 0x38], edx
// 0076eddc  89503c               mov dword ptr [eax + 0x3c], edx
// 0076eddf  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076ede5  0f94c1               sete cl
// 0076ede8  c70001000000         mov dword ptr [eax], 1
// 0076edee  c7400805000000       mov dword ptr [eax + 8], 5
// 0076edf5  c740143e800000       mov dword ptr [eax + 0x14], 0x803e
// 0076edfc  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 0076ee03  884840               mov byte ptr [eax + 0x40], cl
// 0076ee06  885041               mov byte ptr [eax + 0x41], dl
// 0076ee09  a3f0818b00           mov dword ptr [0x8b81f0], eax
// 0076ee0e  c3                   ret 
// 0076ee0f  890df0818b00         mov dword ptr [0x8b81f0], ecx
// 0076ee15  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?A16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
