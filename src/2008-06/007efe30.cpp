// from server: 100% by auto
// roc 2008-06 007efe30  unit: seg_007e0000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007efe30
//
// 007efe30  6a44                 push 0x44
// 007efe32  e8e90aebff           call 0x6a0920
// 007efe37  33c9                 xor ecx, ecx
// 007efe39  83c404               add esp, 4
// 007efe3c  3bc1                 cmp eax, ecx
// 007efe3e  7458                 je 0x7efe98
// 007efe40  ba08000000           mov edx, 8
// 007efe45  884804               mov byte ptr [eax + 4], cl
// 007efe48  894808               mov dword ptr [eax + 8], ecx
// 007efe4b  89480c               mov dword ptr [eax + 0xc], ecx
// 007efe4e  894810               mov dword ptr [eax + 0x10], ecx
// 007efe51  89501c               mov dword ptr [eax + 0x1c], edx
// 007efe54  894820               mov dword ptr [eax + 0x20], ecx
// 007efe57  894824               mov dword ptr [eax + 0x24], ecx
// 007efe5a  894828               mov dword ptr [eax + 0x28], ecx
// 007efe5d  89482c               mov dword ptr [eax + 0x2c], ecx
// 007efe60  894830               mov dword ptr [eax + 0x30], ecx
// 007efe63  894834               mov dword ptr [eax + 0x34], ecx
// 007efe66  8a0d154c9300         mov cl, byte ptr [0x934c15]
// 007efe6c  895038               mov dword ptr [eax + 0x38], edx
// 007efe6f  89503c               mov dword ptr [eax + 0x3c], edx
// 007efe72  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007efe78  c70001000000         mov dword ptr [eax], 1
// 007efe7e  c7401440800000       mov dword ptr [eax + 0x14], 0x8040
// 007efe85  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 007efe8c  884840               mov byte ptr [eax + 0x40], cl
// 007efe8f  885041               mov byte ptr [eax + 0x41], dl
// 007efe92  a384fa9600           mov dword ptr [0x96fa84], eax
// 007efe97  c3                   ret 
// 007efe98  890d84fa9600         mov dword ptr [0x96fa84], ecx
// 007efe9e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
