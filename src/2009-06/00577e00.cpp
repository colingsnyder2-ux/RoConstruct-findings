// roc 2009-06 00577e00  unit: G3D::LineSegment  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577e00
//
// 00577e00  8b542410             mov edx, dword ptr [esp + 0x10]
// 00577e04  dd442408             fld qword ptr [esp + 8]
// 00577e08  8b442404             mov eax, dword ptr [esp + 4]
// 00577e0c  56                   push esi
// 00577e0d  8bf2                 mov esi, edx
// 00577e0f  57                   push edi
// 00577e10  8d4804               lea ecx, [eax + 4]
// 00577e13  2bf0                 sub esi, eax
// 00577e15  bf03000000           mov edi, 3
// 00577e1a  d902                 fld dword ptr [edx]
// 00577e1c  83c20c               add edx, 0xc
// 00577e1f  d8c9                 fmul st(1)
// 00577e21  83c10c               add ecx, 0xc
// 00577e24  83ef01               sub edi, 1
// 00577e27  d959f0               fstp dword ptr [ecx - 0x10]
// 00577e2a  d9440ef4             fld dword ptr [esi + ecx - 0xc]
// 00577e2e  d8c9                 fmul st(1)
// 00577e30  d959f4               fstp dword ptr [ecx - 0xc]
// 00577e33  d942fc               fld dword ptr [edx - 4]
// 00577e36  d8c9                 fmul st(1)
// 00577e38  d959f8               fstp dword ptr [ecx - 8]
// 00577e3b  75dd                 jne 0x577e1a
// 00577e3d  5f                   pop edi
// 00577e3e  ddd8                 fstp st(0)
// 00577e40  5e                   pop esi
// 00577e41  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??DG3D@@YA?AVMatrix3@0@NABV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
