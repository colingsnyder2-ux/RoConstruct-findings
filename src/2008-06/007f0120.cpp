// from server: 100% by auto
// roc 2008-06 007f0120  unit: seg_007f0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0120
//
// 007f0120  6a44                 push 0x44
// 007f0122  e8f907ebff           call 0x6a0920
// 007f0127  33c9                 xor ecx, ecx
// 007f0129  83c404               add esp, 4
// 007f012c  3bc1                 cmp eax, ecx
// 007f012e  745f                 je 0x7f018f
// 007f0130  380d154c9300         cmp byte ptr [0x934c15], cl
// 007f0136  ba10000000           mov edx, 0x10
// 007f013b  884804               mov byte ptr [eax + 4], cl
// 007f013e  89480c               mov dword ptr [eax + 0xc], ecx
// 007f0141  894810               mov dword ptr [eax + 0x10], ecx
// 007f0144  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f0147  895020               mov dword ptr [eax + 0x20], edx
// 007f014a  894824               mov dword ptr [eax + 0x24], ecx
// 007f014d  894828               mov dword ptr [eax + 0x28], ecx
// 007f0150  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f0153  894830               mov dword ptr [eax + 0x30], ecx
// 007f0156  894834               mov dword ptr [eax + 0x34], ecx
// 007f0159  895038               mov dword ptr [eax + 0x38], edx
// 007f015c  89503c               mov dword ptr [eax + 0x3c], edx
// 007f015f  8a15144c9300         mov dl, byte ptr [0x934c14]
// 007f0165  0f94c1               sete cl
// 007f0168  c70001000000         mov dword ptr [eax], 1
// 007f016e  c7400806000000       mov dword ptr [eax + 8], 6
// 007f0175  c740141c880000       mov dword ptr [eax + 0x14], 0x881c
// 007f017c  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 007f0183  884840               mov byte ptr [eax + 0x40], cl
// 007f0186  885041               mov byte ptr [eax + 0x41], dl
// 007f0189  a348fa9600           mov dword ptr [0x96fa48], eax
// 007f018e  c3                   ret 
// 007f018f  890d48fa9600         mov dword ptr [0x96fa48], ecx
// 007f0195  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
