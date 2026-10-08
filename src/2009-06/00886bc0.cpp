// from server: 100% by auto
// roc 2009-06 00886bc0  unit: seg_00880000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886bc0
//
// 00886bc0  6a44                 push 0x44
// 00886bc2  e8711ee9ff           call 0x718a38
// 00886bc7  33c9                 xor ecx, ecx
// 00886bc9  83c404               add esp, 4
// 00886bcc  3bc1                 cmp eax, ecx
// 00886bce  7463                 je 0x886c33
// 00886bd0  380d59c29e00         cmp byte ptr [0x9ec259], cl
// 00886bd6  ba18000000           mov edx, 0x18
// 00886bdb  884804               mov byte ptr [eax + 4], cl
// 00886bde  89480c               mov dword ptr [eax + 0xc], ecx
// 00886be1  894810               mov dword ptr [eax + 0x10], ecx
// 00886be4  89481c               mov dword ptr [eax + 0x1c], ecx
// 00886be7  894820               mov dword ptr [eax + 0x20], ecx
// 00886bea  894824               mov dword ptr [eax + 0x24], ecx
// 00886bed  894828               mov dword ptr [eax + 0x28], ecx
// 00886bf0  89482c               mov dword ptr [eax + 0x2c], ecx
// 00886bf3  895030               mov dword ptr [eax + 0x30], edx
// 00886bf6  894834               mov dword ptr [eax + 0x34], ecx
// 00886bf9  895038               mov dword ptr [eax + 0x38], edx
// 00886bfc  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 00886c02  0f94c1               sete cl
// 00886c05  c70001000000         mov dword ptr [eax], 1
// 00886c0b  c740082a000000       mov dword ptr [eax + 8], 0x2a
// 00886c12  c74014a6810000       mov dword ptr [eax + 0x14], 0x81a6
// 00886c19  c7401802190000       mov dword ptr [eax + 0x18], 0x1902
// 00886c20  c7403c20000000       mov dword ptr [eax + 0x3c], 0x20
// 00886c27  884840               mov byte ptr [eax + 0x40], cl
// 00886c2a  885041               mov byte ptr [eax + 0x41], dl
// 00886c2d  a3ccd3a300           mov dword ptr [0xa3d3cc], eax
// 00886c32  c3                   ret 
// 00886c33  890dccd3a300         mov dword ptr [0xa3d3cc], ecx
// 00886c39  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?DEPTH24@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
