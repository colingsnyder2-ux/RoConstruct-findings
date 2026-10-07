// roc 2009-06 00886e40  unit: seg_00880000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886e40
//
// 00886e40  6a44                 push 0x44
// 00886e42  e8f11be9ff           call 0x718a38
// 00886e47  33c9                 xor ecx, ecx
// 00886e49  83c404               add esp, 4
// 00886e4c  3bc1                 cmp eax, ecx
// 00886e4e  745f                 je 0x886eaf
// 00886e50  380d59c29e00         cmp byte ptr [0x9ec259], cl
// 00886e56  ba10000000           mov edx, 0x10
// 00886e5b  884804               mov byte ptr [eax + 4], cl
// 00886e5e  89480c               mov dword ptr [eax + 0xc], ecx
// 00886e61  894810               mov dword ptr [eax + 0x10], ecx
// 00886e64  89481c               mov dword ptr [eax + 0x1c], ecx
// 00886e67  894820               mov dword ptr [eax + 0x20], ecx
// 00886e6a  894824               mov dword ptr [eax + 0x24], ecx
// 00886e6d  894828               mov dword ptr [eax + 0x28], ecx
// 00886e70  89482c               mov dword ptr [eax + 0x2c], ecx
// 00886e73  895030               mov dword ptr [eax + 0x30], edx
// 00886e76  894834               mov dword ptr [eax + 0x34], ecx
// 00886e79  895038               mov dword ptr [eax + 0x38], edx
// 00886e7c  89503c               mov dword ptr [eax + 0x3c], edx
// 00886e7f  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 00886e85  0f94c1               sete cl
// 00886e88  c70001000000         mov dword ptr [eax], 1
// 00886e8e  c740082f000000       mov dword ptr [eax + 8], 0x2f
// 00886e95  c74014498d0000       mov dword ptr [eax + 0x14], 0x8d49
// 00886e9c  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 00886ea3  884840               mov byte ptr [eax + 0x40], cl
// 00886ea6  885041               mov byte ptr [eax + 0x41], dl
// 00886ea9  a3d4d3a300           mov dword ptr [0xa3d3d4], eax
// 00886eae  c3                   ret 
// 00886eaf  890dd4d3a300         mov dword ptr [0xa3d3d4], ecx
// 00886eb5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
