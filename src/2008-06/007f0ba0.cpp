// from server: 100% by auto
// roc 2008-06 007f0ba0  unit: seg_007f0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0ba0
//
// 007f0ba0  6a44                 push 0x44
// 007f0ba2  e879fdeaff           call 0x6a0920
// 007f0ba7  33c9                 xor ecx, ecx
// 007f0ba9  83c404               add esp, 4
// 007f0bac  3bc1                 cmp eax, ecx
// 007f0bae  745f                 je 0x7f0c0f
// 007f0bb0  380d154c9300         cmp byte ptr [0x934c15], cl
// 007f0bb6  ba10000000           mov edx, 0x10
// 007f0bbb  884804               mov byte ptr [eax + 4], cl
// 007f0bbe  89480c               mov dword ptr [eax + 0xc], ecx
// 007f0bc1  894810               mov dword ptr [eax + 0x10], ecx
// 007f0bc4  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f0bc7  894820               mov dword ptr [eax + 0x20], ecx
// 007f0bca  894824               mov dword ptr [eax + 0x24], ecx
// 007f0bcd  894828               mov dword ptr [eax + 0x28], ecx
// 007f0bd0  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f0bd3  895030               mov dword ptr [eax + 0x30], edx
// 007f0bd6  894834               mov dword ptr [eax + 0x34], ecx
// 007f0bd9  895038               mov dword ptr [eax + 0x38], edx
// 007f0bdc  89503c               mov dword ptr [eax + 0x3c], edx
// 007f0bdf  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007f0be5  0f94c1               sete cl
// 007f0be8  c70001000000         mov dword ptr [eax], 1
// 007f0bee  c7400829000000       mov dword ptr [eax + 8], 0x29
// 007f0bf5  c74014a5810000       mov dword ptr [eax + 0x14], 0x81a5
// 007f0bfc  c7401802190000       mov dword ptr [eax + 0x18], 0x1902
// 007f0c03  884840               mov byte ptr [eax + 0x40], cl
// 007f0c06  885041               mov byte ptr [eax + 0x41], dl
// 007f0c09  a380fa9600           mov dword ptr [0x96fa80], eax
// 007f0c0e  c3                   ret 
// 007f0c0f  890d80fa9600         mov dword ptr [0x96fa80], ecx
// 007f0c15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?DEPTH16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
