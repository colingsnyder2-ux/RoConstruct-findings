// from server: 100% by auto
// roc 2011-06 005522d0  unit: G3D::Sphere  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005522d0
//
// 005522d0  8bc1                 mov eax, ecx
// 005522d2  33c9                 xor ecx, ecx
// 005522d4  8908                 mov dword ptr [eax], ecx
// 005522d6  894804               mov dword ptr [eax + 4], ecx
// 005522d9  894808               mov dword ptr [eax + 8], ecx
// 005522dc  89480c               mov dword ptr [eax + 0xc], ecx
// 005522df  894810               mov dword ptr [eax + 0x10], ecx
// 005522e2  894814               mov dword ptr [eax + 0x14], ecx
// 005522e5  894818               mov dword ptr [eax + 0x18], ecx
// 005522e8  89481c               mov dword ptr [eax + 0x1c], ecx
// 005522eb  894820               mov dword ptr [eax + 0x20], ecx
// 005522ee  894824               mov dword ptr [eax + 0x24], ecx
// 005522f1  894828               mov dword ptr [eax + 0x28], ecx
// 005522f4  89482c               mov dword ptr [eax + 0x2c], ecx
// 005522f7  894830               mov dword ptr [eax + 0x30], ecx
// 005522fa  894834               mov dword ptr [eax + 0x34], ecx
// 005522fd  894838               mov dword ptr [eax + 0x38], ecx
// 00552300  89483c               mov dword ptr [eax + 0x3c], ecx
// 00552303  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ??0Matrix4@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
