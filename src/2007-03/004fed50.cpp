// roc 2007-03 004fed50  unit: seg_004f0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fed50
//
// 004fed50  8b442404             mov eax, dword ptr [esp + 4]
// 004fed54  56                   push esi
// 004fed55  83c118               add ecx, 0x18
// 004fed58  8d5008               lea edx, [eax + 8]
// 004fed5b  be03000000           mov esi, 3
// 004fed60  d941e8               fld dword ptr [ecx - 0x18]
// 004fed63  83c104               add ecx, 4
// 004fed66  d95af8               fstp dword ptr [edx - 8]
// 004fed69  83c20c               add edx, 0xc
// 004fed6c  83ee01               sub esi, 1
// 004fed6f  d941f0               fld dword ptr [ecx - 0x10]
// 004fed72  d95af0               fstp dword ptr [edx - 0x10]
// 004fed75  d941fc               fld dword ptr [ecx - 4]
// 004fed78  d95af4               fstp dword ptr [edx - 0xc]
// 004fed7b  75e3                 jne 0x4fed60
// 004fed7d  5e                   pop esi
// 004fed7e  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ?transpose@Matrix3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
