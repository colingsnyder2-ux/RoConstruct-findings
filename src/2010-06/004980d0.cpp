// roc 2010-06 004980d0  unit: G3D::GWindow  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004980d0
//
// 004980d0  a1e039c000           mov eax, dword ptr [0xc039e0]
// 004980d5  56                   push esi
// 004980d6  8bf1                 mov esi, ecx
// 004980d8  85c0                 test eax, eax
// 004980da  740c                 je 0x4980e8
// 004980dc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004980df  51                   push ecx
// 004980e0  ffd0                 call eax
// 004980e2  c6462c00             mov byte ptr [esi + 0x2c], 0
// 004980e6  5e                   pop esi
// 004980e7  c3                   ret 
// 004980e8  ff15f8ab9e00         call dword ptr [0x9eabf8]
// 004980ee  c6462c00             mov byte ptr [esi + 0x2c], 0
// 004980f2  5e                   pop esi
// 004980f3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ?wait@Milestone@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
