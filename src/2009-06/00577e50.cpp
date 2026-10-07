// roc 2009-06 00577e50  unit: G3D::LineSegment  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577e50
//
// 00577e50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00577e54  d9442408             fld dword ptr [esp + 8]
// 00577e58  56                   push esi
// 00577e59  8b742408             mov esi, dword ptr [esp + 8]
// 00577e5d  50                   push eax
// 00577e5e  83ec08               sub esp, 8
// 00577e61  dd1c24               fstp qword ptr [esp]
// 00577e64  56                   push esi
// 00577e65  e896ffffff           call 0x577e00
// 00577e6a  83c410               add esp, 0x10
// 00577e6d  8bc6                 mov eax, esi
// 00577e6f  5e                   pop esi
// 00577e70  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??DG3D@@YA?AVMatrix3@0@MABV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
