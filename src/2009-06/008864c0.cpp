// roc 2009-06 008864c0  unit: seg_00880000  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008864c0
//
// 008864c0  6a44                 push 0x44
// 008864c2  e87125e9ff           call 0x718a38
// 008864c7  33c9                 xor ecx, ecx
// 008864c9  83c404               add esp, 4
// 008864cc  3bc1                 cmp eax, ecx
// 008864ce  7466                 je 0x886536
// 008864d0  ba01000000           mov edx, 1
// 008864d5  884804               mov byte ptr [eax + 4], cl
// 008864d8  89500c               mov dword ptr [eax + 0xc], edx
// 008864db  894810               mov dword ptr [eax + 0x10], ecx
// 008864de  89481c               mov dword ptr [eax + 0x1c], ecx
// 008864e1  895020               mov dword ptr [eax + 0x20], edx
// 008864e4  ba05000000           mov edx, 5
// 008864e9  894830               mov dword ptr [eax + 0x30], ecx
// 008864ec  894834               mov dword ptr [eax + 0x34], ecx
// 008864ef  b910000000           mov ecx, 0x10
// 008864f4  895024               mov dword ptr [eax + 0x24], edx
// 008864f7  895028               mov dword ptr [eax + 0x28], edx
// 008864fa  89502c               mov dword ptr [eax + 0x2c], edx
// 008864fd  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 00886503  894838               mov dword ptr [eax + 0x38], ecx
// 00886506  89483c               mov dword ptr [eax + 0x3c], ecx
// 00886509  8a0d59c29e00         mov cl, byte ptr [0x9ec259]
// 0088650f  c70004000000         mov dword ptr [eax], 4
// 00886515  c740080e000000       mov dword ptr [eax + 8], 0xe
// 0088651c  c7401457800000       mov dword ptr [eax + 0x14], 0x8057
// 00886523  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0088652a  884840               mov byte ptr [eax + 0x40], cl
// 0088652d  885041               mov byte ptr [eax + 0x41], dl
// 00886530  a30cd4a300           mov dword ptr [0xa3d40c], eax
// 00886535  c3                   ret 
// 00886536  890d0cd4a300         mov dword ptr [0xa3d40c], ecx
// 0088653c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB5A1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
