// roc 2008-06 007f02a0  unit: seg_007f0000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f02a0
//
// 007f02a0  6a44                 push 0x44
// 007f02a2  e87906ebff           call 0x6a0920
// 007f02a7  33c9                 xor ecx, ecx
// 007f02a9  83c404               add esp, 4
// 007f02ac  3bc1                 cmp eax, ecx
// 007f02ae  7464                 je 0x7f0314
// 007f02b0  380d154c9300         cmp byte ptr [0x934c15], cl
// 007f02b6  ba08000000           mov edx, 8
// 007f02bb  89501c               mov dword ptr [eax + 0x1c], edx
// 007f02be  895020               mov dword ptr [eax + 0x20], edx
// 007f02c1  ba10000000           mov edx, 0x10
// 007f02c6  884804               mov byte ptr [eax + 4], cl
// 007f02c9  89480c               mov dword ptr [eax + 0xc], ecx
// 007f02cc  894810               mov dword ptr [eax + 0x10], ecx
// 007f02cf  894824               mov dword ptr [eax + 0x24], ecx
// 007f02d2  894828               mov dword ptr [eax + 0x28], ecx
// 007f02d5  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f02d8  894830               mov dword ptr [eax + 0x30], ecx
// 007f02db  894834               mov dword ptr [eax + 0x34], ecx
// 007f02de  895038               mov dword ptr [eax + 0x38], edx
// 007f02e1  89503c               mov dword ptr [eax + 0x3c], edx
// 007f02e4  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007f02ea  0f94c1               sete cl
// 007f02ed  c70002000000         mov dword ptr [eax], 2
// 007f02f3  c7400809000000       mov dword ptr [eax + 8], 9
// 007f02fa  c7401445800000       mov dword ptr [eax + 0x14], 0x8045
// 007f0301  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 007f0308  884840               mov byte ptr [eax + 0x40], cl
// 007f030b  885041               mov byte ptr [eax + 0x41], dl
// 007f030e  a390fa9600           mov dword ptr [0x96fa90], eax
// 007f0313  c3                   ret 
// 007f0314  890d90fa9600         mov dword ptr [0x96fa90], ecx
// 007f031a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
