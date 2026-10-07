// roc 2008-06 007f0720  unit: seg_007f0000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0720
//
// 007f0720  6a44                 push 0x44
// 007f0722  e8f901ebff           call 0x6a0920
// 007f0727  33c9                 xor ecx, ecx
// 007f0729  83c404               add esp, 4
// 007f072c  3bc1                 cmp eax, ecx
// 007f072e  7465                 je 0x7f0795
// 007f0730  884804               mov byte ptr [eax + 4], cl
// 007f0733  894810               mov dword ptr [eax + 0x10], ecx
// 007f0736  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f0739  894820               mov dword ptr [eax + 0x20], ecx
// 007f073c  ba20000000           mov edx, 0x20
// 007f0741  894830               mov dword ptr [eax + 0x30], ecx
// 007f0744  894834               mov dword ptr [eax + 0x34], ecx
// 007f0747  b960000000           mov ecx, 0x60
// 007f074c  895024               mov dword ptr [eax + 0x24], edx
// 007f074f  895028               mov dword ptr [eax + 0x28], edx
// 007f0752  89502c               mov dword ptr [eax + 0x2c], edx
// 007f0755  8a15144c9300         mov dl, byte ptr [0x934c14]
// 007f075b  894838               mov dword ptr [eax + 0x38], ecx
// 007f075e  89483c               mov dword ptr [eax + 0x3c], ecx
// 007f0761  8a0d154c9300         mov cl, byte ptr [0x934c15]
// 007f0767  c70003000000         mov dword ptr [eax], 3
// 007f076d  c7400812000000       mov dword ptr [eax + 8], 0x12
// 007f0774  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 007f077b  c7401415880000       mov dword ptr [eax + 0x14], 0x8815
// 007f0782  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 007f0789  884840               mov byte ptr [eax + 0x40], cl
// 007f078c  885041               mov byte ptr [eax + 0x41], dl
// 007f078f  a344fa9600           mov dword ptr [0x96fa44], eax
// 007f0794  c3                   ret 
// 007f0795  890d44fa9600         mov dword ptr [0x96fa44], ecx
// 007f079b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
