// roc 2009-06 004af280  unit: G3D::Milestone  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004af280
//
// 004af280  83ec0c               sub esp, 0xc
// 004af283  8b542414             mov edx, dword ptr [esp + 0x14]
// 004af287  d9420c               fld dword ptr [edx + 0xc]
// 004af28a  8b442410             mov eax, dword ptr [esp + 0x10]
// 004af28e  d9c0                 fld st(0)
// 004af290  d84924               fmul dword ptr [ecx + 0x24]
// 004af293  d94128               fld dword ptr [ecx + 0x28]
// 004af296  d8ca                 fmul st(2)
// 004af298  d9412c               fld dword ptr [ecx + 0x2c]
// 004af29b  decb                 fmulp st(3)
// 004af29d  d902                 fld dword ptr [edx]
// 004af29f  d94204               fld dword ptr [edx + 4]
// 004af2a2  d94208               fld dword ptr [edx + 8]
// 004af2a5  d94108               fld dword ptr [ecx + 8]
// 004af2a8  d8c9                 fmul st(1)
// 004af2aa  d94104               fld dword ptr [ecx + 4]
// 004af2ad  d8cb                 fmul st(3)
// 004af2af  dec1                 faddp st(1)
// 004af2b1  d901                 fld dword ptr [ecx]
// 004af2b3  d8cc                 fmul st(4)
// 004af2b5  dec1                 faddp st(1)
// 004af2b7  d91c24               fstp dword ptr [esp]
// 004af2ba  d94114               fld dword ptr [ecx + 0x14]
// 004af2bd  d8c9                 fmul st(1)
// 004af2bf  d94110               fld dword ptr [ecx + 0x10]
// 004af2c2  d8cb                 fmul st(3)
// 004af2c4  dec1                 faddp st(1)
// 004af2c6  d9410c               fld dword ptr [ecx + 0xc]
// 004af2c9  d8cc                 fmul st(4)
// 004af2cb  dec1                 faddp st(1)
// 004af2cd  d94120               fld dword ptr [ecx + 0x20]
// 004af2d0  deca                 fmulp st(2)
// 004af2d2  d9411c               fld dword ptr [ecx + 0x1c]
// 004af2d5  decb                 fmulp st(3)
// 004af2d7  d9c9                 fxch st(1)
// 004af2d9  dec2                 faddp st(2)
// 004af2db  d94118               fld dword ptr [ecx + 0x18]
// 004af2de  decb                 fmulp st(3)
// 004af2e0  d9c9                 fxch st(1)
// 004af2e2  dec2                 faddp st(2)
// 004af2e4  d90424               fld dword ptr [esp]
// 004af2e7  dec4                 faddp st(4)
// 004af2e9  dec2                 faddp st(2)
// 004af2eb  dec3                 faddp st(3)
// 004af2ed  d9c9                 fxch st(1)
// 004af2ef  d918                 fstp dword ptr [eax]
// 004af2f1  d95804               fstp dword ptr [eax + 4]
// 004af2f4  d95808               fstp dword ptr [eax + 8]
// 004af2f7  d9420c               fld dword ptr [edx + 0xc]
// 004af2fa  d9580c               fstp dword ptr [eax + 0xc]
// 004af2fd  83c40c               add esp, 0xc
// 004af300  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\GCamera.cpp (function ?toWorldSpace@CoordinateFrame@G3D@@QBE?AVVector4@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GCamera.cpp
