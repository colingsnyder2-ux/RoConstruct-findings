// roc 2009-06 004af0d0  unit: G3D::Win32Window  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004af0d0
//
// 004af0d0  a1a0d1a300           mov eax, dword ptr [0xa3d1a0]
// 004af0d5  56                   push esi
// 004af0d6  8bf1                 mov esi, ecx
// 004af0d8  85c0                 test eax, eax
// 004af0da  740c                 je 0x4af0e8
// 004af0dc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004af0df  51                   push ecx
// 004af0e0  ffd0                 call eax
// 004af0e2  c6462c00             mov byte ptr [esi + 0x2c], 0
// 004af0e6  5e                   pop esi
// 004af0e7  c3                   ret 
// 004af0e8  ff157cea8900         call dword ptr [0x89ea7c]
// 004af0ee  c6462c00             mov byte ptr [esi + 0x2c], 0
// 004af0f2  5e                   pop esi
// 004af0f3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ?wait@Milestone@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
