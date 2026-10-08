// from server: 100% by auto
// roc 2010-06 005584c0  unit: seg_00550000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005584c0
//
// 005584c0  8bc1                 mov eax, ecx
// 005584c2  33c9                 xor ecx, ecx
// 005584c4  8908                 mov dword ptr [eax], ecx
// 005584c6  894804               mov dword ptr [eax + 4], ecx
// 005584c9  894808               mov dword ptr [eax + 8], ecx
// 005584cc  89480c               mov dword ptr [eax + 0xc], ecx
// 005584cf  894810               mov dword ptr [eax + 0x10], ecx
// 005584d2  894814               mov dword ptr [eax + 0x14], ecx
// 005584d5  894818               mov dword ptr [eax + 0x18], ecx
// 005584d8  89481c               mov dword ptr [eax + 0x1c], ecx
// 005584db  894820               mov dword ptr [eax + 0x20], ecx
// 005584de  894824               mov dword ptr [eax + 0x24], ecx
// 005584e1  894828               mov dword ptr [eax + 0x28], ecx
// 005584e4  89482c               mov dword ptr [eax + 0x2c], ecx
// 005584e7  894830               mov dword ptr [eax + 0x30], ecx
// 005584ea  894834               mov dword ptr [eax + 0x34], ecx
// 005584ed  894838               mov dword ptr [eax + 0x38], ecx
// 005584f0  89483c               mov dword ptr [eax + 0x3c], ecx
// 005584f3  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ??0Matrix4@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
