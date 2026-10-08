// from server: 100% by auto
// roc 2009-06 008861c0  unit: seg_00880000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008861c0
//
// 008861c0  6a44                 push 0x44
// 008861c2  e87128e9ff           call 0x718a38
// 008861c7  33c9                 xor ecx, ecx
// 008861c9  83c404               add esp, 4
// 008861cc  3bc1                 cmp eax, ecx
// 008861ce  7463                 je 0x886233
// 008861d0  380d59c29e00         cmp byte ptr [0x9ec259], cl
// 008861d6  ba08000000           mov edx, 8
// 008861db  884804               mov byte ptr [eax + 4], cl
// 008861de  895008               mov dword ptr [eax + 8], edx
// 008861e1  89480c               mov dword ptr [eax + 0xc], ecx
// 008861e4  894810               mov dword ptr [eax + 0x10], ecx
// 008861e7  894824               mov dword ptr [eax + 0x24], ecx
// 008861ea  894828               mov dword ptr [eax + 0x28], ecx
// 008861ed  89482c               mov dword ptr [eax + 0x2c], ecx
// 008861f0  894830               mov dword ptr [eax + 0x30], ecx
// 008861f3  894834               mov dword ptr [eax + 0x34], ecx
// 008861f6  895038               mov dword ptr [eax + 0x38], edx
// 008861f9  89503c               mov dword ptr [eax + 0x3c], edx
// 008861fc  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 00886202  0f94c1               sete cl
// 00886205  c70002000000         mov dword ptr [eax], 2
// 0088620b  c7401443800000       mov dword ptr [eax + 0x14], 0x8043
// 00886212  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 00886219  c7401c04000000       mov dword ptr [eax + 0x1c], 4
// 00886220  c7402004000000       mov dword ptr [eax + 0x20], 4
// 00886227  884840               mov byte ptr [eax + 0x40], cl
// 0088622a  885041               mov byte ptr [eax + 0x41], dl
// 0088622d  a3c8d3a300           mov dword ptr [0xa3d3c8], eax
// 00886232  c3                   ret 
// 00886233  890dc8d3a300         mov dword ptr [0xa3d3c8], ecx
// 00886239  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA4@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
