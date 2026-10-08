// from server: 100% by auto
// roc 2008-06 007f0520  unit: seg_007f0000  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0520
//
// 007f0520  6a44                 push 0x44
// 007f0522  e8f903ebff           call 0x6a0920
// 007f0527  33c9                 xor ecx, ecx
// 007f0529  83c404               add esp, 4
// 007f052c  3bc1                 cmp eax, ecx
// 007f052e  7466                 je 0x7f0596
// 007f0530  ba01000000           mov edx, 1
// 007f0535  884804               mov byte ptr [eax + 4], cl
// 007f0538  89500c               mov dword ptr [eax + 0xc], edx
// 007f053b  894810               mov dword ptr [eax + 0x10], ecx
// 007f053e  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f0541  895020               mov dword ptr [eax + 0x20], edx
// 007f0544  ba05000000           mov edx, 5
// 007f0549  894830               mov dword ptr [eax + 0x30], ecx
// 007f054c  894834               mov dword ptr [eax + 0x34], ecx
// 007f054f  b910000000           mov ecx, 0x10
// 007f0554  895024               mov dword ptr [eax + 0x24], edx
// 007f0557  895028               mov dword ptr [eax + 0x28], edx
// 007f055a  89502c               mov dword ptr [eax + 0x2c], edx
// 007f055d  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007f0563  894838               mov dword ptr [eax + 0x38], ecx
// 007f0566  89483c               mov dword ptr [eax + 0x3c], ecx
// 007f0569  8a0d154c9300         mov cl, byte ptr [0x934c15]
// 007f056f  c70004000000         mov dword ptr [eax], 4
// 007f0575  c740080e000000       mov dword ptr [eax + 8], 0xe
// 007f057c  c7401457800000       mov dword ptr [eax + 0x14], 0x8057
// 007f0583  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 007f058a  884840               mov byte ptr [eax + 0x40], cl
// 007f058d  885041               mov byte ptr [eax + 0x41], dl
// 007f0590  a3acfa9600           mov dword ptr [0x96faac], eax
// 007f0595  c3                   ret 
// 007f0596  890dacfa9600         mov dword ptr [0x96faac], ecx
// 007f059c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB5A1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
