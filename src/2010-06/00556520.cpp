// roc 2010-06 00556520  unit: seg_00550000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00556520
//
// 00556520  8b442404             mov eax, dword ptr [esp + 4]
// 00556524  56                   push esi
// 00556525  83c118               add ecx, 0x18
// 00556528  8d5008               lea edx, [eax + 8]
// 0055652b  be03000000           mov esi, 3
// 00556530  d941e8               fld dword ptr [ecx - 0x18]
// 00556533  83c104               add ecx, 4
// 00556536  d95af8               fstp dword ptr [edx - 8]
// 00556539  83c20c               add edx, 0xc
// 0055653c  83ee01               sub esi, 1
// 0055653f  d941f0               fld dword ptr [ecx - 0x10]
// 00556542  d95af0               fstp dword ptr [edx - 0x10]
// 00556545  d941fc               fld dword ptr [ecx - 4]
// 00556548  d95af4               fstp dword ptr [edx - 0xc]
// 0055654b  75e3                 jne 0x556530
// 0055654d  5e                   pop esi
// 0055654e  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?transpose@Matrix3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
