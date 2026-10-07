// roc 2008-06 007f0220  unit: seg_007f0000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0220
//
// 007f0220  6a44                 push 0x44
// 007f0222  e8f906ebff           call 0x6a0920
// 007f0227  33c9                 xor ecx, ecx
// 007f0229  83c404               add esp, 4
// 007f022c  3bc1                 cmp eax, ecx
// 007f022e  7463                 je 0x7f0293
// 007f0230  380d154c9300         cmp byte ptr [0x934c15], cl
// 007f0236  ba08000000           mov edx, 8
// 007f023b  884804               mov byte ptr [eax + 4], cl
// 007f023e  895008               mov dword ptr [eax + 8], edx
// 007f0241  89480c               mov dword ptr [eax + 0xc], ecx
// 007f0244  894810               mov dword ptr [eax + 0x10], ecx
// 007f0247  894824               mov dword ptr [eax + 0x24], ecx
// 007f024a  894828               mov dword ptr [eax + 0x28], ecx
// 007f024d  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f0250  894830               mov dword ptr [eax + 0x30], ecx
// 007f0253  894834               mov dword ptr [eax + 0x34], ecx
// 007f0256  895038               mov dword ptr [eax + 0x38], edx
// 007f0259  89503c               mov dword ptr [eax + 0x3c], edx
// 007f025c  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007f0262  0f94c1               sete cl
// 007f0265  c70002000000         mov dword ptr [eax], 2
// 007f026b  c7401443800000       mov dword ptr [eax + 0x14], 0x8043
// 007f0272  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 007f0279  c7401c04000000       mov dword ptr [eax + 0x1c], 4
// 007f0280  c7402004000000       mov dword ptr [eax + 0x20], 4
// 007f0287  884840               mov byte ptr [eax + 0x40], cl
// 007f028a  885041               mov byte ptr [eax + 0x41], dl
// 007f028d  a368fa9600           mov dword ptr [0x96fa68], eax
// 007f0292  c3                   ret 
// 007f0293  890d68fa9600         mov dword ptr [0x96fa68], ecx
// 007f0299  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA4@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
