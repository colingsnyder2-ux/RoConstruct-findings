// roc 2008-06 007f0420  unit: seg_007f0000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0420
//
// 007f0420  6a44                 push 0x44
// 007f0422  e8f904ebff           call 0x6a0920
// 007f0427  33c9                 xor ecx, ecx
// 007f0429  83c404               add esp, 4
// 007f042c  3bc1                 cmp eax, ecx
// 007f042e  7464                 je 0x7f0494
// 007f0430  380d154c9300         cmp byte ptr [0x934c15], cl
// 007f0436  ba20000000           mov edx, 0x20
// 007f043b  89501c               mov dword ptr [eax + 0x1c], edx
// 007f043e  895020               mov dword ptr [eax + 0x20], edx
// 007f0441  ba40000000           mov edx, 0x40
// 007f0446  884804               mov byte ptr [eax + 4], cl
// 007f0449  89480c               mov dword ptr [eax + 0xc], ecx
// 007f044c  894810               mov dword ptr [eax + 0x10], ecx
// 007f044f  894824               mov dword ptr [eax + 0x24], ecx
// 007f0452  894828               mov dword ptr [eax + 0x28], ecx
// 007f0455  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f0458  894830               mov dword ptr [eax + 0x30], ecx
// 007f045b  894834               mov dword ptr [eax + 0x34], ecx
// 007f045e  895038               mov dword ptr [eax + 0x38], edx
// 007f0461  89503c               mov dword ptr [eax + 0x3c], edx
// 007f0464  8a15144c9300         mov dl, byte ptr [0x934c14]
// 007f046a  0f94c1               sete cl
// 007f046d  c70002000000         mov dword ptr [eax], 2
// 007f0473  c740080c000000       mov dword ptr [eax + 8], 0xc
// 007f047a  c7401419880000       mov dword ptr [eax + 0x14], 0x8819
// 007f0481  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 007f0488  884840               mov byte ptr [eax + 0x40], cl
// 007f048b  885041               mov byte ptr [eax + 0x41], dl
// 007f048e  a354fa9600           mov dword ptr [0x96fa54], eax
// 007f0493  c3                   ret 
// 007f0494  890d54fa9600         mov dword ptr [0x96fa54], ecx
// 007f049a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
