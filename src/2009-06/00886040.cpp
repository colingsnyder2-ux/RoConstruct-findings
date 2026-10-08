// from server: 100% by auto
// roc 2009-06 00886040  unit: seg_00880000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886040
//
// 00886040  6a44                 push 0x44
// 00886042  e8f129e9ff           call 0x718a38
// 00886047  33c9                 xor ecx, ecx
// 00886049  83c404               add esp, 4
// 0088604c  3bc1                 cmp eax, ecx
// 0088604e  745f                 je 0x8860af
// 00886050  380d59c29e00         cmp byte ptr [0x9ec259], cl
// 00886056  ba10000000           mov edx, 0x10
// 0088605b  884804               mov byte ptr [eax + 4], cl
// 0088605e  89480c               mov dword ptr [eax + 0xc], ecx
// 00886061  894810               mov dword ptr [eax + 0x10], ecx
// 00886064  89481c               mov dword ptr [eax + 0x1c], ecx
// 00886067  895020               mov dword ptr [eax + 0x20], edx
// 0088606a  894824               mov dword ptr [eax + 0x24], ecx
// 0088606d  894828               mov dword ptr [eax + 0x28], ecx
// 00886070  89482c               mov dword ptr [eax + 0x2c], ecx
// 00886073  894830               mov dword ptr [eax + 0x30], ecx
// 00886076  894834               mov dword ptr [eax + 0x34], ecx
// 00886079  895038               mov dword ptr [eax + 0x38], edx
// 0088607c  89503c               mov dword ptr [eax + 0x3c], edx
// 0088607f  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 00886085  0f94c1               sete cl
// 00886088  c70001000000         mov dword ptr [eax], 1
// 0088608e  c7400805000000       mov dword ptr [eax + 8], 5
// 00886095  c740143e800000       mov dword ptr [eax + 0x14], 0x803e
// 0088609c  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 008860a3  884840               mov byte ptr [eax + 0x40], cl
// 008860a6  885041               mov byte ptr [eax + 0x41], dl
// 008860a9  a3acd3a300           mov dword ptr [0xa3d3ac], eax
// 008860ae  c3                   ret 
// 008860af  890dacd3a300         mov dword ptr [0xa3d3ac], ecx
// 008860b5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
