// roc 2011-06 00540500  unit: G3D::MemoryManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00540500
//
// 00540500  8b442404             mov eax, dword ptr [esp + 4]
// 00540504  56                   push esi
// 00540505  83c118               add ecx, 0x18
// 00540508  8d5008               lea edx, [eax + 8]
// 0054050b  be03000000           mov esi, 3
// 00540510  d941e8               fld dword ptr [ecx - 0x18]
// 00540513  83c104               add ecx, 4
// 00540516  d95af8               fstp dword ptr [edx - 8]
// 00540519  83c20c               add edx, 0xc
// 0054051c  83ee01               sub esi, 1
// 0054051f  d941f0               fld dword ptr [ecx - 0x10]
// 00540522  d95af0               fstp dword ptr [edx - 0x10]
// 00540525  d941fc               fld dword ptr [ecx - 4]
// 00540528  d95af4               fstp dword ptr [edx - 0xc]
// 0054052b  75e3                 jne 0x540510
// 0054052d  5e                   pop esi
// 0054052e  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?transpose@Matrix3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
