// roc 2009-06 00885e40  unit: seg_00880000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885e40
//
// 00885e40  6a44                 push 0x44
// 00885e42  e8f12be9ff           call 0x718a38
// 00885e47  33c9                 xor ecx, ecx
// 00885e49  83c404               add esp, 4
// 00885e4c  3bc1                 cmp eax, ecx
// 00885e4e  745c                 je 0x885eac
// 00885e50  ba10000000           mov edx, 0x10
// 00885e55  884804               mov byte ptr [eax + 4], cl
// 00885e58  89480c               mov dword ptr [eax + 0xc], ecx
// 00885e5b  894810               mov dword ptr [eax + 0x10], ecx
// 00885e5e  89501c               mov dword ptr [eax + 0x1c], edx
// 00885e61  894820               mov dword ptr [eax + 0x20], ecx
// 00885e64  894824               mov dword ptr [eax + 0x24], ecx
// 00885e67  894828               mov dword ptr [eax + 0x28], ecx
// 00885e6a  89482c               mov dword ptr [eax + 0x2c], ecx
// 00885e6d  894830               mov dword ptr [eax + 0x30], ecx
// 00885e70  894834               mov dword ptr [eax + 0x34], ecx
// 00885e73  8a0d59c29e00         mov cl, byte ptr [0x9ec259]
// 00885e79  895038               mov dword ptr [eax + 0x38], edx
// 00885e7c  89503c               mov dword ptr [eax + 0x3c], edx
// 00885e7f  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 00885e85  c70001000000         mov dword ptr [eax], 1
// 00885e8b  c7400801000000       mov dword ptr [eax + 8], 1
// 00885e92  c7401442800000       mov dword ptr [eax + 0x14], 0x8042
// 00885e99  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 00885ea0  884840               mov byte ptr [eax + 0x40], cl
// 00885ea3  885041               mov byte ptr [eax + 0x41], dl
// 00885ea6  a320d4a300           mov dword ptr [0xa3d420], eax
// 00885eab  c3                   ret 
// 00885eac  890d20d4a300         mov dword ptr [0xa3d420], ecx
// 00885eb2  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
