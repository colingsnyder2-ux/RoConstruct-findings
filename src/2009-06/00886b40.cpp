// from server: 100% by auto
// roc 2009-06 00886b40  unit: seg_00880000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886b40
//
// 00886b40  6a44                 push 0x44
// 00886b42  e8f11ee9ff           call 0x718a38
// 00886b47  33c9                 xor ecx, ecx
// 00886b49  83c404               add esp, 4
// 00886b4c  3bc1                 cmp eax, ecx
// 00886b4e  745f                 je 0x886baf
// 00886b50  380d59c29e00         cmp byte ptr [0x9ec259], cl
// 00886b56  ba10000000           mov edx, 0x10
// 00886b5b  884804               mov byte ptr [eax + 4], cl
// 00886b5e  89480c               mov dword ptr [eax + 0xc], ecx
// 00886b61  894810               mov dword ptr [eax + 0x10], ecx
// 00886b64  89481c               mov dword ptr [eax + 0x1c], ecx
// 00886b67  894820               mov dword ptr [eax + 0x20], ecx
// 00886b6a  894824               mov dword ptr [eax + 0x24], ecx
// 00886b6d  894828               mov dword ptr [eax + 0x28], ecx
// 00886b70  89482c               mov dword ptr [eax + 0x2c], ecx
// 00886b73  895030               mov dword ptr [eax + 0x30], edx
// 00886b76  894834               mov dword ptr [eax + 0x34], ecx
// 00886b79  895038               mov dword ptr [eax + 0x38], edx
// 00886b7c  89503c               mov dword ptr [eax + 0x3c], edx
// 00886b7f  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 00886b85  0f94c1               sete cl
// 00886b88  c70001000000         mov dword ptr [eax], 1
// 00886b8e  c7400829000000       mov dword ptr [eax + 8], 0x29
// 00886b95  c74014a5810000       mov dword ptr [eax + 0x14], 0x81a5
// 00886b9c  c7401802190000       mov dword ptr [eax + 0x18], 0x1902
// 00886ba3  884840               mov byte ptr [eax + 0x40], cl
// 00886ba6  885041               mov byte ptr [eax + 0x41], dl
// 00886ba9  a3e0d3a300           mov dword ptr [0xa3d3e0], eax
// 00886bae  c3                   ret 
// 00886baf  890de0d3a300         mov dword ptr [0xa3d3e0], ecx
// 00886bb5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?DEPTH16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
