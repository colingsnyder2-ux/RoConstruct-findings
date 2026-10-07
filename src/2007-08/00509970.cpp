// roc 2007-08 00509970  unit: G3D::GCamera  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00509970
//
// 00509970  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00509974  d9442408             fld dword ptr [esp + 8]
// 00509978  56                   push esi
// 00509979  8b742408             mov esi, dword ptr [esp + 8]
// 0050997d  50                   push eax
// 0050997e  83ec08               sub esp, 8
// 00509981  dd1c24               fstp qword ptr [esp]
// 00509984  56                   push esi
// 00509985  e896ffffff           call 0x509920
// 0050998a  83c410               add esp, 0x10
// 0050998d  8bc6                 mov eax, esi
// 0050998f  5e                   pop esi
// 00509990  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??DG3D@@YA?AVMatrix3@0@MABV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
