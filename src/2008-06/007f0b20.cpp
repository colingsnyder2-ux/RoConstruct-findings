// from server: 100% by auto
// roc 2008-06 007f0b20  unit: seg_007f0000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0b20
//
// 007f0b20  6a44                 push 0x44
// 007f0b22  e8f9fdeaff           call 0x6a0920
// 007f0b27  33c9                 xor ecx, ecx
// 007f0b29  83c404               add esp, 4
// 007f0b2c  3bc1                 cmp eax, ecx
// 007f0b2e  7464                 je 0x7f0b94
// 007f0b30  380d154c9300         cmp byte ptr [0x934c15], cl
// 007f0b36  ba01000000           mov edx, 1
// 007f0b3b  885004               mov byte ptr [eax + 4], dl
// 007f0b3e  89500c               mov dword ptr [eax + 0xc], edx
// 007f0b41  ba80000000           mov edx, 0x80
// 007f0b46  894810               mov dword ptr [eax + 0x10], ecx
// 007f0b49  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f0b4c  894820               mov dword ptr [eax + 0x20], ecx
// 007f0b4f  894824               mov dword ptr [eax + 0x24], ecx
// 007f0b52  894828               mov dword ptr [eax + 0x28], ecx
// 007f0b55  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f0b58  894830               mov dword ptr [eax + 0x30], ecx
// 007f0b5b  894834               mov dword ptr [eax + 0x34], ecx
// 007f0b5e  895038               mov dword ptr [eax + 0x38], edx
// 007f0b61  89503c               mov dword ptr [eax + 0x3c], edx
// 007f0b64  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007f0b6a  0f94c1               sete cl
// 007f0b6d  c70004000000         mov dword ptr [eax], 4
// 007f0b73  c7400828000000       mov dword ptr [eax + 8], 0x28
// 007f0b7a  c74014f3830000       mov dword ptr [eax + 0x14], 0x83f3
// 007f0b81  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 007f0b88  884840               mov byte ptr [eax + 0x40], cl
// 007f0b8b  885041               mov byte ptr [eax + 0x41], dl
// 007f0b8e  a3bcfa9600           mov dword ptr [0x96fabc], eax
// 007f0b93  c3                   ret 
// 007f0b94  890dbcfa9600         mov dword ptr [0x96fabc], ecx
// 007f0b9a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA_DXT5@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
