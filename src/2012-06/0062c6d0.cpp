// roc 2012-06 0062c6d0  unit: G3D::Sphere  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062c6d0
//
// 0062c6d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062c6d4  d9442408             fld dword ptr [esp + 8]
// 0062c6d8  56                   push esi
// 0062c6d9  8b742408             mov esi, dword ptr [esp + 8]
// 0062c6dd  50                   push eax
// 0062c6de  83ec08               sub esp, 8
// 0062c6e1  dd1c24               fstp qword ptr [esp]
// 0062c6e4  56                   push esi
// 0062c6e5  e896ffffff           call 0x62c680
// 0062c6ea  83c410               add esp, 0x10
// 0062c6ed  8bc6                 mov eax, esi
// 0062c6ef  5e                   pop esi
// 0062c6f0  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??DG3D@@YA?AVMatrix3@0@MABV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
