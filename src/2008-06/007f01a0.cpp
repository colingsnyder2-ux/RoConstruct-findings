// from server: 100% by auto
// roc 2008-06 007f01a0  unit: seg_007f0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f01a0
//
// 007f01a0  6a44                 push 0x44
// 007f01a2  e87907ebff           call 0x6a0920
// 007f01a7  33c9                 xor ecx, ecx
// 007f01a9  83c404               add esp, 4
// 007f01ac  3bc1                 cmp eax, ecx
// 007f01ae  745f                 je 0x7f020f
// 007f01b0  380d154c9300         cmp byte ptr [0x934c15], cl
// 007f01b6  ba20000000           mov edx, 0x20
// 007f01bb  884804               mov byte ptr [eax + 4], cl
// 007f01be  89480c               mov dword ptr [eax + 0xc], ecx
// 007f01c1  894810               mov dword ptr [eax + 0x10], ecx
// 007f01c4  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f01c7  895020               mov dword ptr [eax + 0x20], edx
// 007f01ca  894824               mov dword ptr [eax + 0x24], ecx
// 007f01cd  894828               mov dword ptr [eax + 0x28], ecx
// 007f01d0  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f01d3  894830               mov dword ptr [eax + 0x30], ecx
// 007f01d6  894834               mov dword ptr [eax + 0x34], ecx
// 007f01d9  895038               mov dword ptr [eax + 0x38], edx
// 007f01dc  89503c               mov dword ptr [eax + 0x3c], edx
// 007f01df  8a15144c9300         mov dl, byte ptr [0x934c14]
// 007f01e5  0f94c1               sete cl
// 007f01e8  c70001000000         mov dword ptr [eax], 1
// 007f01ee  c7400807000000       mov dword ptr [eax + 8], 7
// 007f01f5  c7401416880000       mov dword ptr [eax + 0x14], 0x8816
// 007f01fc  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 007f0203  884840               mov byte ptr [eax + 0x40], cl
// 007f0206  885041               mov byte ptr [eax + 0x41], dl
// 007f0209  a350fa9600           mov dword ptr [0x96fa50], eax
// 007f020e  c3                   ret 
// 007f020f  890d50fa9600         mov dword ptr [0x96fa50], ecx
// 007f0215  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
