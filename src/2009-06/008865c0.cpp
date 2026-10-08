// from server: 100% by auto
// roc 2009-06 008865c0  unit: seg_00880000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008865c0
//
// 008865c0  6a44                 push 0x44
// 008865c2  e87124e9ff           call 0x718a38
// 008865c7  33c9                 xor ecx, ecx
// 008865c9  83c404               add esp, 4
// 008865cc  3bc1                 cmp eax, ecx
// 008865ce  7461                 je 0x886631
// 008865d0  ba10000000           mov edx, 0x10
// 008865d5  884804               mov byte ptr [eax + 4], cl
// 008865d8  894810               mov dword ptr [eax + 0x10], ecx
// 008865db  89481c               mov dword ptr [eax + 0x1c], ecx
// 008865de  894820               mov dword ptr [eax + 0x20], ecx
// 008865e1  894830               mov dword ptr [eax + 0x30], ecx
// 008865e4  894834               mov dword ptr [eax + 0x34], ecx
// 008865e7  b930000000           mov ecx, 0x30
// 008865ec  895008               mov dword ptr [eax + 8], edx
// 008865ef  895024               mov dword ptr [eax + 0x24], edx
// 008865f2  895028               mov dword ptr [eax + 0x28], edx
// 008865f5  89502c               mov dword ptr [eax + 0x2c], edx
// 008865f8  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 008865fe  894838               mov dword ptr [eax + 0x38], ecx
// 00886601  89483c               mov dword ptr [eax + 0x3c], ecx
// 00886604  8a0d59c29e00         mov cl, byte ptr [0x9ec259]
// 0088660a  c70003000000         mov dword ptr [eax], 3
// 00886610  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 00886617  c7401454800000       mov dword ptr [eax + 0x14], 0x8054
// 0088661e  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 00886625  884840               mov byte ptr [eax + 0x40], cl
// 00886628  885041               mov byte ptr [eax + 0x41], dl
// 0088662b  a39cd3a300           mov dword ptr [0xa3d39c], eax
// 00886630  c3                   ret 
// 00886631  890d9cd3a300         mov dword ptr [0xa3d39c], ecx
// 00886637  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
