// roc 2008-06 007f0ea0  unit: seg_007f0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0ea0
//
// 007f0ea0  6a44                 push 0x44
// 007f0ea2  e879faeaff           call 0x6a0920
// 007f0ea7  33c9                 xor ecx, ecx
// 007f0ea9  83c404               add esp, 4
// 007f0eac  3bc1                 cmp eax, ecx
// 007f0eae  745f                 je 0x7f0f0f
// 007f0eb0  380d154c9300         cmp byte ptr [0x934c15], cl
// 007f0eb6  ba10000000           mov edx, 0x10
// 007f0ebb  884804               mov byte ptr [eax + 4], cl
// 007f0ebe  89480c               mov dword ptr [eax + 0xc], ecx
// 007f0ec1  894810               mov dword ptr [eax + 0x10], ecx
// 007f0ec4  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f0ec7  894820               mov dword ptr [eax + 0x20], ecx
// 007f0eca  894824               mov dword ptr [eax + 0x24], ecx
// 007f0ecd  894828               mov dword ptr [eax + 0x28], ecx
// 007f0ed0  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f0ed3  895030               mov dword ptr [eax + 0x30], edx
// 007f0ed6  894834               mov dword ptr [eax + 0x34], ecx
// 007f0ed9  895038               mov dword ptr [eax + 0x38], edx
// 007f0edc  89503c               mov dword ptr [eax + 0x3c], edx
// 007f0edf  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007f0ee5  0f94c1               sete cl
// 007f0ee8  c70001000000         mov dword ptr [eax], 1
// 007f0eee  c740082f000000       mov dword ptr [eax + 8], 0x2f
// 007f0ef5  c74014498d0000       mov dword ptr [eax + 0x14], 0x8d49
// 007f0efc  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 007f0f03  884840               mov byte ptr [eax + 0x40], cl
// 007f0f06  885041               mov byte ptr [eax + 0x41], dl
// 007f0f09  a374fa9600           mov dword ptr [0x96fa74], eax
// 007f0f0e  c3                   ret 
// 007f0f0f  890d74fa9600         mov dword ptr [0x96fa74], ecx
// 007f0f15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
