// from server: 100% by auto
// roc 2007-08 005099a0  unit: G3D::GCamera  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005099a0
//
// 005099a0  8b442404             mov eax, dword ptr [esp + 4]
// 005099a4  56                   push esi
// 005099a5  83c118               add ecx, 0x18
// 005099a8  8d5008               lea edx, [eax + 8]
// 005099ab  be03000000           mov esi, 3
// 005099b0  d941e8               fld dword ptr [ecx - 0x18]
// 005099b3  83c104               add ecx, 4
// 005099b6  d95af8               fstp dword ptr [edx - 8]
// 005099b9  83c20c               add edx, 0xc
// 005099bc  83ee01               sub esi, 1
// 005099bf  d941f0               fld dword ptr [ecx - 0x10]
// 005099c2  d95af0               fstp dword ptr [edx - 0x10]
// 005099c5  d941fc               fld dword ptr [ecx - 4]
// 005099c8  d95af4               fstp dword ptr [edx - 0xc]
// 005099cb  75e3                 jne 0x5099b0
// 005099cd  5e                   pop esi
// 005099ce  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?transpose@Matrix3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
