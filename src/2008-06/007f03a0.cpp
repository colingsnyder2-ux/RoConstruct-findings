// from server: 100% by auto
// roc 2008-06 007f03a0  unit: seg_007f0000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f03a0
//
// 007f03a0  6a44                 push 0x44
// 007f03a2  e87905ebff           call 0x6a0920
// 007f03a7  33c9                 xor ecx, ecx
// 007f03a9  83c404               add esp, 4
// 007f03ac  3bc1                 cmp eax, ecx
// 007f03ae  7464                 je 0x7f0414
// 007f03b0  380d154c9300         cmp byte ptr [0x934c15], cl
// 007f03b6  ba10000000           mov edx, 0x10
// 007f03bb  89501c               mov dword ptr [eax + 0x1c], edx
// 007f03be  895020               mov dword ptr [eax + 0x20], edx
// 007f03c1  ba20000000           mov edx, 0x20
// 007f03c6  884804               mov byte ptr [eax + 4], cl
// 007f03c9  89480c               mov dword ptr [eax + 0xc], ecx
// 007f03cc  894810               mov dword ptr [eax + 0x10], ecx
// 007f03cf  894824               mov dword ptr [eax + 0x24], ecx
// 007f03d2  894828               mov dword ptr [eax + 0x28], ecx
// 007f03d5  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f03d8  894830               mov dword ptr [eax + 0x30], ecx
// 007f03db  894834               mov dword ptr [eax + 0x34], ecx
// 007f03de  895038               mov dword ptr [eax + 0x38], edx
// 007f03e1  89503c               mov dword ptr [eax + 0x3c], edx
// 007f03e4  8a15144c9300         mov dl, byte ptr [0x934c14]
// 007f03ea  0f94c1               sete cl
// 007f03ed  c70002000000         mov dword ptr [eax], 2
// 007f03f3  c740080b000000       mov dword ptr [eax + 8], 0xb
// 007f03fa  c740141f880000       mov dword ptr [eax + 0x14], 0x881f
// 007f0401  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 007f0408  884840               mov byte ptr [eax + 0x40], cl
// 007f040b  885041               mov byte ptr [eax + 0x41], dl
// 007f040e  a370fa9600           mov dword ptr [0x96fa70], eax
// 007f0413  c3                   ret 
// 007f0414  890d70fa9600         mov dword ptr [0x96fa70], ecx
// 007f041a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
