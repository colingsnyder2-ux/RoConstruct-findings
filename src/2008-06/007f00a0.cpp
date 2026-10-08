// from server: 100% by auto
// roc 2008-06 007f00a0  unit: seg_007f0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f00a0
//
// 007f00a0  6a44                 push 0x44
// 007f00a2  e87908ebff           call 0x6a0920
// 007f00a7  33c9                 xor ecx, ecx
// 007f00a9  83c404               add esp, 4
// 007f00ac  3bc1                 cmp eax, ecx
// 007f00ae  745f                 je 0x7f010f
// 007f00b0  380d154c9300         cmp byte ptr [0x934c15], cl
// 007f00b6  ba10000000           mov edx, 0x10
// 007f00bb  884804               mov byte ptr [eax + 4], cl
// 007f00be  89480c               mov dword ptr [eax + 0xc], ecx
// 007f00c1  894810               mov dword ptr [eax + 0x10], ecx
// 007f00c4  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f00c7  895020               mov dword ptr [eax + 0x20], edx
// 007f00ca  894824               mov dword ptr [eax + 0x24], ecx
// 007f00cd  894828               mov dword ptr [eax + 0x28], ecx
// 007f00d0  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f00d3  894830               mov dword ptr [eax + 0x30], ecx
// 007f00d6  894834               mov dword ptr [eax + 0x34], ecx
// 007f00d9  895038               mov dword ptr [eax + 0x38], edx
// 007f00dc  89503c               mov dword ptr [eax + 0x3c], edx
// 007f00df  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007f00e5  0f94c1               sete cl
// 007f00e8  c70001000000         mov dword ptr [eax], 1
// 007f00ee  c7400805000000       mov dword ptr [eax + 8], 5
// 007f00f5  c740143e800000       mov dword ptr [eax + 0x14], 0x803e
// 007f00fc  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 007f0103  884840               mov byte ptr [eax + 0x40], cl
// 007f0106  885041               mov byte ptr [eax + 0x41], dl
// 007f0109  a34cfa9600           mov dword ptr [0x96fa4c], eax
// 007f010e  c3                   ret 
// 007f010f  890d4cfa9600         mov dword ptr [0x96fa4c], ecx
// 007f0115  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
