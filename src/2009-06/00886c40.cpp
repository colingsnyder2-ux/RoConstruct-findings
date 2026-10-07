// roc 2009-06 00886c40  unit: seg_00880000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886c40
//
// 00886c40  6a44                 push 0x44
// 00886c42  e8f11de9ff           call 0x718a38
// 00886c47  33c9                 xor ecx, ecx
// 00886c49  83c404               add esp, 4
// 00886c4c  3bc1                 cmp eax, ecx
// 00886c4e  745f                 je 0x886caf
// 00886c50  380d59c29e00         cmp byte ptr [0x9ec259], cl
// 00886c56  ba20000000           mov edx, 0x20
// 00886c5b  884804               mov byte ptr [eax + 4], cl
// 00886c5e  89480c               mov dword ptr [eax + 0xc], ecx
// 00886c61  894810               mov dword ptr [eax + 0x10], ecx
// 00886c64  89481c               mov dword ptr [eax + 0x1c], ecx
// 00886c67  894820               mov dword ptr [eax + 0x20], ecx
// 00886c6a  894824               mov dword ptr [eax + 0x24], ecx
// 00886c6d  894828               mov dword ptr [eax + 0x28], ecx
// 00886c70  89482c               mov dword ptr [eax + 0x2c], ecx
// 00886c73  895030               mov dword ptr [eax + 0x30], edx
// 00886c76  894834               mov dword ptr [eax + 0x34], ecx
// 00886c79  895038               mov dword ptr [eax + 0x38], edx
// 00886c7c  89503c               mov dword ptr [eax + 0x3c], edx
// 00886c7f  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 00886c85  0f94c1               sete cl
// 00886c88  c70001000000         mov dword ptr [eax], 1
// 00886c8e  c740082b000000       mov dword ptr [eax + 8], 0x2b
// 00886c95  c74014a7810000       mov dword ptr [eax + 0x14], 0x81a7
// 00886c9c  c7401802190000       mov dword ptr [eax + 0x18], 0x1902
// 00886ca3  884840               mov byte ptr [eax + 0x40], cl
// 00886ca6  885041               mov byte ptr [eax + 0x41], dl
// 00886ca9  a324d4a300           mov dword ptr [0xa3d424], eax
// 00886cae  c3                   ret 
// 00886caf  890d24d4a300         mov dword ptr [0xa3d424], ecx
// 00886cb5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?DEPTH32@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
