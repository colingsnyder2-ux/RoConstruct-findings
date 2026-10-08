// from server: 100% by auto
// roc 2007-08 00504660  unit: G3D::Log  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00504660
//
// 00504660  56                   push esi
// 00504661  8bf1                 mov esi, ecx
// 00504663  8b4604               mov eax, dword ptr [esi + 4]
// 00504666  50                   push eax
// 00504667  c7460800000000       mov dword ptr [esi + 8], 0
// 0050466e  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00504675  e876b1ffff           call 0x4ff7f0
// 0050467a  83c404               add esp, 4
// 0050467d  c7460400000000       mov dword ptr [esi + 4], 0
// 00504684  5e                   pop esi
// 00504685  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?clear@GImage@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
