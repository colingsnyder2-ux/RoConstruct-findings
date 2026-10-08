// from server: 100% by auto
// roc 2007-08 004731a0  unit: G3D::VARArea  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004731a0
//
// 004731a0  8b542408             mov edx, dword ptr [esp + 8]
// 004731a4  d94104               fld dword ptr [ecx + 4]
// 004731a7  d84a04               fmul dword ptr [edx + 4]
// 004731aa  8b442404             mov eax, dword ptr [esp + 4]
// 004731ae  d902                 fld dword ptr [edx]
// 004731b0  d809                 fmul dword ptr [ecx]
// 004731b2  dec1                 faddp st(1)
// 004731b4  d94108               fld dword ptr [ecx + 8]
// 004731b7  d84a08               fmul dword ptr [edx + 8]
// 004731ba  dec1                 faddp st(1)
// 004731bc  d84124               fadd dword ptr [ecx + 0x24]
// 004731bf  d918                 fstp dword ptr [eax]
// 004731c1  d9410c               fld dword ptr [ecx + 0xc]
// 004731c4  d80a                 fmul dword ptr [edx]
// 004731c6  d94110               fld dword ptr [ecx + 0x10]
// 004731c9  d84a04               fmul dword ptr [edx + 4]
// 004731cc  dec1                 faddp st(1)
// 004731ce  d94114               fld dword ptr [ecx + 0x14]
// 004731d1  d84a08               fmul dword ptr [edx + 8]
// 004731d4  dec1                 faddp st(1)
// 004731d6  d84128               fadd dword ptr [ecx + 0x28]
// 004731d9  d95804               fstp dword ptr [eax + 4]
// 004731dc  d94118               fld dword ptr [ecx + 0x18]
// 004731df  d80a                 fmul dword ptr [edx]
// 004731e1  d9411c               fld dword ptr [ecx + 0x1c]
// 004731e4  d84a04               fmul dword ptr [edx + 4]
// 004731e7  dec1                 faddp st(1)
// 004731e9  d94120               fld dword ptr [ecx + 0x20]
// 004731ec  d84a08               fmul dword ptr [edx + 8]
// 004731ef  dec1                 faddp st(1)
// 004731f1  d8412c               fadd dword ptr [ecx + 0x2c]
// 004731f4  d95808               fstp dword ptr [eax + 8]
// 004731f7  c20800               ret 8
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ?pointToWorldSpace@CoordinateFrame@G3D@@QBE?AVVector3@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
