// from server: 100% by auto
// roc 2012-06 0062c700  unit: G3D::Sphere  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062c700
//
// 0062c700  8b442404             mov eax, dword ptr [esp + 4]
// 0062c704  56                   push esi
// 0062c705  83c118               add ecx, 0x18
// 0062c708  8d5008               lea edx, [eax + 8]
// 0062c70b  be03000000           mov esi, 3
// 0062c710  d941e8               fld dword ptr [ecx - 0x18]
// 0062c713  83c104               add ecx, 4
// 0062c716  d95af8               fstp dword ptr [edx - 8]
// 0062c719  83c20c               add edx, 0xc
// 0062c71c  83ee01               sub esi, 1
// 0062c71f  d941f0               fld dword ptr [ecx - 0x10]
// 0062c722  d95af0               fstp dword ptr [edx - 0x10]
// 0062c725  d941fc               fld dword ptr [ecx - 4]
// 0062c728  d95af4               fstp dword ptr [edx - 0xc]
// 0062c72b  75e3                 jne 0x62c710
// 0062c72d  5e                   pop esi
// 0062c72e  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?transpose@Matrix3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
