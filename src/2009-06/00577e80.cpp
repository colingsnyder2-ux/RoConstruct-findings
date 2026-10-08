// from server: 100% by auto
// roc 2009-06 00577e80  unit: G3D::LineSegment  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577e80
//
// 00577e80  8b442404             mov eax, dword ptr [esp + 4]
// 00577e84  56                   push esi
// 00577e85  83c118               add ecx, 0x18
// 00577e88  8d5008               lea edx, [eax + 8]
// 00577e8b  be03000000           mov esi, 3
// 00577e90  d941e8               fld dword ptr [ecx - 0x18]
// 00577e93  83c104               add ecx, 4
// 00577e96  d95af8               fstp dword ptr [edx - 8]
// 00577e99  83c20c               add edx, 0xc
// 00577e9c  83ee01               sub esi, 1
// 00577e9f  d941f0               fld dword ptr [ecx - 0x10]
// 00577ea2  d95af0               fstp dword ptr [edx - 0x10]
// 00577ea5  d941fc               fld dword ptr [ecx - 4]
// 00577ea8  d95af4               fstp dword ptr [edx - 0xc]
// 00577eab  75e3                 jne 0x577e90
// 00577ead  5e                   pop esi
// 00577eae  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?transpose@Matrix3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
