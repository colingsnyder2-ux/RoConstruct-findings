// from server: 100% by auto
// roc 2009-06 00886dc0  unit: seg_00880000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886dc0
//
// 00886dc0  6a44                 push 0x44
// 00886dc2  e8711ce9ff           call 0x718a38
// 00886dc7  33c9                 xor ecx, ecx
// 00886dc9  83c404               add esp, 4
// 00886dcc  3bc1                 cmp eax, ecx
// 00886dce  745f                 je 0x886e2f
// 00886dd0  380d59c29e00         cmp byte ptr [0x9ec259], cl
// 00886dd6  ba08000000           mov edx, 8
// 00886ddb  884804               mov byte ptr [eax + 4], cl
// 00886dde  89480c               mov dword ptr [eax + 0xc], ecx
// 00886de1  894810               mov dword ptr [eax + 0x10], ecx
// 00886de4  89481c               mov dword ptr [eax + 0x1c], ecx
// 00886de7  894820               mov dword ptr [eax + 0x20], ecx
// 00886dea  894824               mov dword ptr [eax + 0x24], ecx
// 00886ded  894828               mov dword ptr [eax + 0x28], ecx
// 00886df0  89482c               mov dword ptr [eax + 0x2c], ecx
// 00886df3  895030               mov dword ptr [eax + 0x30], edx
// 00886df6  894834               mov dword ptr [eax + 0x34], ecx
// 00886df9  895038               mov dword ptr [eax + 0x38], edx
// 00886dfc  89503c               mov dword ptr [eax + 0x3c], edx
// 00886dff  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 00886e05  0f94c1               sete cl
// 00886e08  c70001000000         mov dword ptr [eax], 1
// 00886e0e  c740082e000000       mov dword ptr [eax + 8], 0x2e
// 00886e15  c74014488d0000       mov dword ptr [eax + 0x14], 0x8d48
// 00886e1c  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 00886e23  884840               mov byte ptr [eax + 0x40], cl
// 00886e26  885041               mov byte ptr [eax + 0x41], dl
// 00886e29  a3e8d3a300           mov dword ptr [0xa3d3e8], eax
// 00886e2e  c3                   ret 
// 00886e2f  890de8d3a300         mov dword ptr [0xa3d3e8], ecx
// 00886e35  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
