// roc 2008-06 005134e0  unit: G3D::GCamera  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005134e0
//
// 005134e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005134e4  d9442408             fld dword ptr [esp + 8]
// 005134e8  56                   push esi
// 005134e9  8b742408             mov esi, dword ptr [esp + 8]
// 005134ed  50                   push eax
// 005134ee  83ec08               sub esp, 8
// 005134f1  dd1c24               fstp qword ptr [esp]
// 005134f4  56                   push esi
// 005134f5  e896ffffff           call 0x513490
// 005134fa  83c410               add esp, 0x10
// 005134fd  8bc6                 mov eax, esi
// 005134ff  5e                   pop esi
// 00513500  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??DG3D@@YA?AVMatrix3@0@MABV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
