// roc 2008-06 00513510  unit: G3D::GCamera  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00513510
//
// 00513510  8b442404             mov eax, dword ptr [esp + 4]
// 00513514  56                   push esi
// 00513515  83c118               add ecx, 0x18
// 00513518  8d5008               lea edx, [eax + 8]
// 0051351b  be03000000           mov esi, 3
// 00513520  d941e8               fld dword ptr [ecx - 0x18]
// 00513523  83c104               add ecx, 4
// 00513526  d95af8               fstp dword ptr [edx - 8]
// 00513529  83c20c               add edx, 0xc
// 0051352c  83ee01               sub esi, 1
// 0051352f  d941f0               fld dword ptr [ecx - 0x10]
// 00513532  d95af0               fstp dword ptr [edx - 0x10]
// 00513535  d941fc               fld dword ptr [ecx - 4]
// 00513538  d95af4               fstp dword ptr [edx - 0xc]
// 0051353b  75e3                 jne 0x513520
// 0051353d  5e                   pop esi
// 0051353e  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?transpose@Matrix3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
