// roc 2010-06 009c5500  unit: seg_009c0000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5500
//
// 009c5500  6a44                 push 0x44
// 009c5502  e89924deff           call 0x7a79a0
// 009c5507  33c9                 xor ecx, ecx
// 009c5509  83c404               add esp, 4
// 009c550c  3bc1                 cmp eax, ecx
// 009c550e  7465                 je 0x9c5575
// 009c5510  884804               mov byte ptr [eax + 4], cl
// 009c5513  894810               mov dword ptr [eax + 0x10], ecx
// 009c5516  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c5519  894820               mov dword ptr [eax + 0x20], ecx
// 009c551c  ba05000000           mov edx, 5
// 009c5521  894830               mov dword ptr [eax + 0x30], ecx
// 009c5524  894834               mov dword ptr [eax + 0x34], ecx
// 009c5527  b910000000           mov ecx, 0x10
// 009c552c  895024               mov dword ptr [eax + 0x24], edx
// 009c552f  895028               mov dword ptr [eax + 0x28], edx
// 009c5532  89502c               mov dword ptr [eax + 0x2c], edx
// 009c5535  8a15d43bc000         mov dl, byte ptr [0xc03bd4]
// 009c553b  894838               mov dword ptr [eax + 0x38], ecx
// 009c553e  89483c               mov dword ptr [eax + 0x3c], ecx
// 009c5541  8a0dd171b800         mov cl, byte ptr [0xb871d1]
// 009c5547  c70003000000         mov dword ptr [eax], 3
// 009c554d  c740080d000000       mov dword ptr [eax + 8], 0xd
// 009c5554  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 009c555b  c7401450800000       mov dword ptr [eax + 0x14], 0x8050
// 009c5562  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 009c5569  884840               mov byte ptr [eax + 0x40], cl
// 009c556c  885041               mov byte ptr [eax + 0x41], dl
// 009c556f  a32c3cc000           mov dword ptr [0xc03c2c], eax
// 009c5574  c3                   ret 
// 009c5575  890d2c3cc000         mov dword ptr [0xc03c2c], ecx
// 009c557b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB5@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
