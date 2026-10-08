// roc 2009-12 005f3db0  unit: seg_005f0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f3db0
//
// 005f3db0  8b442404             mov eax, dword ptr [esp + 4]
// 005f3db4  56                   push esi
// 005f3db5  83c118               add ecx, 0x18
// 005f3db8  8d5008               lea edx, [eax + 8]
// 005f3dbb  be03000000           mov esi, 3
// 005f3dc0  d941e8               fld dword ptr [ecx - 0x18]
// 005f3dc3  83c104               add ecx, 4
// 005f3dc6  d95af8               fstp dword ptr [edx - 8]
// 005f3dc9  83c20c               add edx, 0xc
// 005f3dcc  83ee01               sub esi, 1
// 005f3dcf  d941f0               fld dword ptr [ecx - 0x10]
// 005f3dd2  d95af0               fstp dword ptr [edx - 0x10]
// 005f3dd5  d941fc               fld dword ptr [ecx - 4]
// 005f3dd8  d95af4               fstp dword ptr [edx - 0xc]
// 005f3ddb  75e3                 jne 0x5f3dc0
// 005f3ddd  5e                   pop esi
// 005f3dde  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?transpose@Matrix3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
