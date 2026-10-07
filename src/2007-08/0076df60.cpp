// roc 2007-08 0076df60  unit: seg_00760000  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076df60
//
// 0076df60  6a44                 push 0x44
// 0076df62  e88f1fecff           call 0x62fef6
// 0076df67  33c9                 xor ecx, ecx
// 0076df69  83c404               add esp, 4
// 0076df6c  3bc1                 cmp eax, ecx
// 0076df6e  7466                 je 0x76dfd6
// 0076df70  ba01000000           mov edx, 1
// 0076df75  884804               mov byte ptr [eax + 4], cl
// 0076df78  89500c               mov dword ptr [eax + 0xc], edx
// 0076df7b  894810               mov dword ptr [eax + 0x10], ecx
// 0076df7e  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076df81  895020               mov dword ptr [eax + 0x20], edx
// 0076df84  ba05000000           mov edx, 5
// 0076df89  894830               mov dword ptr [eax + 0x30], ecx
// 0076df8c  894834               mov dword ptr [eax + 0x34], ecx
// 0076df8f  b910000000           mov ecx, 0x10
// 0076df94  895024               mov dword ptr [eax + 0x24], edx
// 0076df97  895028               mov dword ptr [eax + 0x28], edx
// 0076df9a  89502c               mov dword ptr [eax + 0x2c], edx
// 0076df9d  8a1520db8b00         mov dl, byte ptr [0x8bdb20]
// 0076dfa3  894838               mov dword ptr [eax + 0x38], ecx
// 0076dfa6  89483c               mov dword ptr [eax + 0x3c], ecx
// 0076dfa9  8a0da5c18800         mov cl, byte ptr [0x88c1a5]
// 0076dfaf  c70004000000         mov dword ptr [eax], 4
// 0076dfb5  c740080e000000       mov dword ptr [eax + 8], 0xe
// 0076dfbc  c7401457800000       mov dword ptr [eax + 0x14], 0x8057
// 0076dfc3  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0076dfca  884840               mov byte ptr [eax + 0x40], cl
// 0076dfcd  885041               mov byte ptr [eax + 0x41], dl
// 0076dfd0  a398db8b00           mov dword ptr [0x8bdb98], eax
// 0076dfd5  c3                   ret 
// 0076dfd6  890d98db8b00         mov dword ptr [0x8bdb98], ecx
// 0076dfdc  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB5A1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
