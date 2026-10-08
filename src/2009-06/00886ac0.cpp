// from server: 100% by auto
// roc 2009-06 00886ac0  unit: seg_00880000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886ac0
//
// 00886ac0  6a44                 push 0x44
// 00886ac2  e8711fe9ff           call 0x718a38
// 00886ac7  33c9                 xor ecx, ecx
// 00886ac9  83c404               add esp, 4
// 00886acc  3bc1                 cmp eax, ecx
// 00886ace  7464                 je 0x886b34
// 00886ad0  380d59c29e00         cmp byte ptr [0x9ec259], cl
// 00886ad6  ba01000000           mov edx, 1
// 00886adb  885004               mov byte ptr [eax + 4], dl
// 00886ade  89500c               mov dword ptr [eax + 0xc], edx
// 00886ae1  ba80000000           mov edx, 0x80
// 00886ae6  894810               mov dword ptr [eax + 0x10], ecx
// 00886ae9  89481c               mov dword ptr [eax + 0x1c], ecx
// 00886aec  894820               mov dword ptr [eax + 0x20], ecx
// 00886aef  894824               mov dword ptr [eax + 0x24], ecx
// 00886af2  894828               mov dword ptr [eax + 0x28], ecx
// 00886af5  89482c               mov dword ptr [eax + 0x2c], ecx
// 00886af8  894830               mov dword ptr [eax + 0x30], ecx
// 00886afb  894834               mov dword ptr [eax + 0x34], ecx
// 00886afe  895038               mov dword ptr [eax + 0x38], edx
// 00886b01  89503c               mov dword ptr [eax + 0x3c], edx
// 00886b04  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 00886b0a  0f94c1               sete cl
// 00886b0d  c70004000000         mov dword ptr [eax], 4
// 00886b13  c7400828000000       mov dword ptr [eax + 8], 0x28
// 00886b1a  c74014f3830000       mov dword ptr [eax + 0x14], 0x83f3
// 00886b21  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 00886b28  884840               mov byte ptr [eax + 0x40], cl
// 00886b2b  885041               mov byte ptr [eax + 0x41], dl
// 00886b2e  a31cd4a300           mov dword ptr [0xa3d41c], eax
// 00886b33  c3                   ret 
// 00886b34  890d1cd4a300         mov dword ptr [0xa3d41c], ecx
// 00886b3a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA_DXT5@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
