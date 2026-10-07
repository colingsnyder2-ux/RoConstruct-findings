// roc 2008-06 007efea0  unit: seg_007e0000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007efea0
//
// 007efea0  6a44                 push 0x44
// 007efea2  e8790aebff           call 0x6a0920
// 007efea7  33c9                 xor ecx, ecx
// 007efea9  83c404               add esp, 4
// 007efeac  3bc1                 cmp eax, ecx
// 007efeae  745c                 je 0x7eff0c
// 007efeb0  ba10000000           mov edx, 0x10
// 007efeb5  884804               mov byte ptr [eax + 4], cl
// 007efeb8  89480c               mov dword ptr [eax + 0xc], ecx
// 007efebb  894810               mov dword ptr [eax + 0x10], ecx
// 007efebe  89501c               mov dword ptr [eax + 0x1c], edx
// 007efec1  894820               mov dword ptr [eax + 0x20], ecx
// 007efec4  894824               mov dword ptr [eax + 0x24], ecx
// 007efec7  894828               mov dword ptr [eax + 0x28], ecx
// 007efeca  89482c               mov dword ptr [eax + 0x2c], ecx
// 007efecd  894830               mov dword ptr [eax + 0x30], ecx
// 007efed0  894834               mov dword ptr [eax + 0x34], ecx
// 007efed3  8a0d154c9300         mov cl, byte ptr [0x934c15]
// 007efed9  895038               mov dword ptr [eax + 0x38], edx
// 007efedc  89503c               mov dword ptr [eax + 0x3c], edx
// 007efedf  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007efee5  c70001000000         mov dword ptr [eax], 1
// 007efeeb  c7400801000000       mov dword ptr [eax + 8], 1
// 007efef2  c7401442800000       mov dword ptr [eax + 0x14], 0x8042
// 007efef9  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 007eff00  884840               mov byte ptr [eax + 0x40], cl
// 007eff03  885041               mov byte ptr [eax + 0x41], dl
// 007eff06  a3c0fa9600           mov dword ptr [0x96fac0], eax
// 007eff0b  c3                   ret 
// 007eff0c  890dc0fa9600         mov dword ptr [0x96fac0], ecx
// 007eff12  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
