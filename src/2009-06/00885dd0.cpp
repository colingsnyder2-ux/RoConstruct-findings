// roc 2009-06 00885dd0  unit: seg_00880000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885dd0
//
// 00885dd0  6a44                 push 0x44
// 00885dd2  e8612ce9ff           call 0x718a38
// 00885dd7  33c9                 xor ecx, ecx
// 00885dd9  83c404               add esp, 4
// 00885ddc  3bc1                 cmp eax, ecx
// 00885dde  7458                 je 0x885e38
// 00885de0  ba08000000           mov edx, 8
// 00885de5  884804               mov byte ptr [eax + 4], cl
// 00885de8  894808               mov dword ptr [eax + 8], ecx
// 00885deb  89480c               mov dword ptr [eax + 0xc], ecx
// 00885dee  894810               mov dword ptr [eax + 0x10], ecx
// 00885df1  89501c               mov dword ptr [eax + 0x1c], edx
// 00885df4  894820               mov dword ptr [eax + 0x20], ecx
// 00885df7  894824               mov dword ptr [eax + 0x24], ecx
// 00885dfa  894828               mov dword ptr [eax + 0x28], ecx
// 00885dfd  89482c               mov dword ptr [eax + 0x2c], ecx
// 00885e00  894830               mov dword ptr [eax + 0x30], ecx
// 00885e03  894834               mov dword ptr [eax + 0x34], ecx
// 00885e06  8a0d59c29e00         mov cl, byte ptr [0x9ec259]
// 00885e0c  895038               mov dword ptr [eax + 0x38], edx
// 00885e0f  89503c               mov dword ptr [eax + 0x3c], edx
// 00885e12  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 00885e18  c70001000000         mov dword ptr [eax], 1
// 00885e1e  c7401440800000       mov dword ptr [eax + 0x14], 0x8040
// 00885e25  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 00885e2c  884840               mov byte ptr [eax + 0x40], cl
// 00885e2f  885041               mov byte ptr [eax + 0x41], dl
// 00885e32  a3e4d3a300           mov dword ptr [0xa3d3e4], eax
// 00885e37  c3                   ret 
// 00885e38  890de4d3a300         mov dword ptr [0xa3d3e4], ecx
// 00885e3e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
