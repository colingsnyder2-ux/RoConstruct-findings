// from server: 100% by auto
// roc 2009-06 00886540  unit: seg_00880000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886540
//
// 00886540  6a44                 push 0x44
// 00886542  e8f124e9ff           call 0x718a38
// 00886547  33c9                 xor ecx, ecx
// 00886549  83c404               add esp, 4
// 0088654c  3bc1                 cmp eax, ecx
// 0088654e  7468                 je 0x8865b8
// 00886550  ba08000000           mov edx, 8
// 00886555  884804               mov byte ptr [eax + 4], cl
// 00886558  894810               mov dword ptr [eax + 0x10], ecx
// 0088655b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0088655e  894820               mov dword ptr [eax + 0x20], ecx
// 00886561  895024               mov dword ptr [eax + 0x24], edx
// 00886564  895028               mov dword ptr [eax + 0x28], edx
// 00886567  89502c               mov dword ptr [eax + 0x2c], edx
// 0088656a  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 00886570  894830               mov dword ptr [eax + 0x30], ecx
// 00886573  894834               mov dword ptr [eax + 0x34], ecx
// 00886576  8a0d59c29e00         mov cl, byte ptr [0x9ec259]
// 0088657c  c70003000000         mov dword ptr [eax], 3
// 00886582  c740080f000000       mov dword ptr [eax + 8], 0xf
// 00886589  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 00886590  c7401451800000       mov dword ptr [eax + 0x14], 0x8051
// 00886597  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 0088659e  c7403820000000       mov dword ptr [eax + 0x38], 0x20
// 008865a5  c7403c18000000       mov dword ptr [eax + 0x3c], 0x18
// 008865ac  884840               mov byte ptr [eax + 0x40], cl
// 008865af  885041               mov byte ptr [eax + 0x41], dl
// 008865b2  a310d4a300           mov dword ptr [0xa3d410], eax
// 008865b7  c3                   ret 
// 008865b8  890d10d4a300         mov dword ptr [0xa3d410], ecx
// 008865be  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
