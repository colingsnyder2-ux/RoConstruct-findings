// from server: 100% by auto
// roc 2009-06 00886cc0  unit: seg_00880000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886cc0
//
// 00886cc0  6a44                 push 0x44
// 00886cc2  e8711de9ff           call 0x718a38
// 00886cc7  33c9                 xor ecx, ecx
// 00886cc9  83c404               add esp, 4
// 00886ccc  3bc1                 cmp eax, ecx
// 00886cce  745b                 je 0x886d2b
// 00886cd0  380d59c29e00         cmp byte ptr [0x9ec259], cl
// 00886cd6  ba01000000           mov edx, 1
// 00886cdb  8910                 mov dword ptr [eax], edx
// 00886cdd  884804               mov byte ptr [eax + 4], cl
// 00886ce0  89480c               mov dword ptr [eax + 0xc], ecx
// 00886ce3  894810               mov dword ptr [eax + 0x10], ecx
// 00886ce6  89481c               mov dword ptr [eax + 0x1c], ecx
// 00886ce9  894820               mov dword ptr [eax + 0x20], ecx
// 00886cec  894824               mov dword ptr [eax + 0x24], ecx
// 00886cef  894828               mov dword ptr [eax + 0x28], ecx
// 00886cf2  89482c               mov dword ptr [eax + 0x2c], ecx
// 00886cf5  895030               mov dword ptr [eax + 0x30], edx
// 00886cf8  894834               mov dword ptr [eax + 0x34], ecx
// 00886cfb  895038               mov dword ptr [eax + 0x38], edx
// 00886cfe  89503c               mov dword ptr [eax + 0x3c], edx
// 00886d01  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 00886d07  0f94c1               sete cl
// 00886d0a  c740082c000000       mov dword ptr [eax + 8], 0x2c
// 00886d11  c74014468d0000       mov dword ptr [eax + 0x14], 0x8d46
// 00886d18  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 00886d1f  884840               mov byte ptr [eax + 0x40], cl
// 00886d22  885041               mov byte ptr [eax + 0x41], dl
// 00886d25  a300d4a300           mov dword ptr [0xa3d400], eax
// 00886d2a  c3                   ret 
// 00886d2b  890d00d4a300         mov dword ptr [0xa3d400], ecx
// 00886d31  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
