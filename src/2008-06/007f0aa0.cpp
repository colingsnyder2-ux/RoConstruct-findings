// from server: 100% by auto
// roc 2008-06 007f0aa0  unit: seg_007f0000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0aa0
//
// 007f0aa0  6a44                 push 0x44
// 007f0aa2  e879feeaff           call 0x6a0920
// 007f0aa7  33c9                 xor ecx, ecx
// 007f0aa9  83c404               add esp, 4
// 007f0aac  3bc1                 cmp eax, ecx
// 007f0aae  7464                 je 0x7f0b14
// 007f0ab0  380d154c9300         cmp byte ptr [0x934c15], cl
// 007f0ab6  ba01000000           mov edx, 1
// 007f0abb  885004               mov byte ptr [eax + 4], dl
// 007f0abe  89500c               mov dword ptr [eax + 0xc], edx
// 007f0ac1  ba80000000           mov edx, 0x80
// 007f0ac6  894810               mov dword ptr [eax + 0x10], ecx
// 007f0ac9  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f0acc  894820               mov dword ptr [eax + 0x20], ecx
// 007f0acf  894824               mov dword ptr [eax + 0x24], ecx
// 007f0ad2  894828               mov dword ptr [eax + 0x28], ecx
// 007f0ad5  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f0ad8  894830               mov dword ptr [eax + 0x30], ecx
// 007f0adb  894834               mov dword ptr [eax + 0x34], ecx
// 007f0ade  895038               mov dword ptr [eax + 0x38], edx
// 007f0ae1  89503c               mov dword ptr [eax + 0x3c], edx
// 007f0ae4  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007f0aea  0f94c1               sete cl
// 007f0aed  c70004000000         mov dword ptr [eax], 4
// 007f0af3  c7400827000000       mov dword ptr [eax + 8], 0x27
// 007f0afa  c74014f2830000       mov dword ptr [eax + 0x14], 0x83f2
// 007f0b01  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 007f0b08  884840               mov byte ptr [eax + 0x40], cl
// 007f0b0b  885041               mov byte ptr [eax + 0x41], dl
// 007f0b0e  a360fa9600           mov dword ptr [0x96fa60], eax
// 007f0b13  c3                   ret 
// 007f0b14  890d60fa9600         mov dword ptr [0x96fa60], ecx
// 007f0b1a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA_DXT3@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
