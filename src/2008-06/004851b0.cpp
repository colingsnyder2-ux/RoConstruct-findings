// from server: 100% by auto
// roc 2008-06 004851b0  unit: G3D::Win32Window  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004851b0
//
// 004851b0  a140f89600           mov eax, dword ptr [0x96f840]
// 004851b5  56                   push esi
// 004851b6  8bf1                 mov esi, ecx
// 004851b8  85c0                 test eax, eax
// 004851ba  740c                 je 0x4851c8
// 004851bc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004851bf  51                   push ecx
// 004851c0  ffd0                 call eax
// 004851c2  c6462c00             mov byte ptr [esi + 0x2c], 0
// 004851c6  5e                   pop esi
// 004851c7  c3                   ret 
// 004851c8  ff15202a8000         call dword ptr [0x802a20]
// 004851ce  c6462c00             mov byte ptr [esi + 0x2c], 0
// 004851d2  5e                   pop esi
// 004851d3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ?wait@Milestone@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
