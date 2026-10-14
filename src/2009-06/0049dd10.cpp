// roc 2009-06 0049dd10  unit: G3D::VARArea  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049dd10
//
// 0049dd10  8b542408             mov edx, dword ptr [esp + 8]
// 0049dd14  d94104               fld dword ptr [ecx + 4]
// 0049dd17  d84a04               fmul dword ptr [edx + 4]
// 0049dd1a  8b442404             mov eax, dword ptr [esp + 4]
// 0049dd1e  d94108               fld dword ptr [ecx + 8]
// 0049dd21  d84a08               fmul dword ptr [edx + 8]
// 0049dd24  dec1                 faddp st(1)
// 0049dd26  d902                 fld dword ptr [edx]
// 0049dd28  d809                 fmul dword ptr [ecx]
// 0049dd2a  dec1                 faddp st(1)
// 0049dd2c  d84124               fadd dword ptr [ecx + 0x24]
// 0049dd2f  d918                 fstp dword ptr [eax]
// 0049dd31  d94110               fld dword ptr [ecx + 0x10]
// 0049dd34  d84a04               fmul dword ptr [edx + 4]
// 0049dd37  d9410c               fld dword ptr [ecx + 0xc]
// 0049dd3a  d80a                 fmul dword ptr [edx]
// 0049dd3c  dec1                 faddp st(1)
// 0049dd3e  d94114               fld dword ptr [ecx + 0x14]
// 0049dd41  d84a08               fmul dword ptr [edx + 8]
// 0049dd44  dec1                 faddp st(1)
// 0049dd46  d84128               fadd dword ptr [ecx + 0x28]
// 0049dd49  d95804               fstp dword ptr [eax + 4]
// 0049dd4c  d9411c               fld dword ptr [ecx + 0x1c]
// 0049dd4f  d84a04               fmul dword ptr [edx + 4]
// 0049dd52  d94118               fld dword ptr [ecx + 0x18]
// 0049dd55  d80a                 fmul dword ptr [edx]
// 0049dd57  dec1                 faddp st(1)
// 0049dd59  d94120               fld dword ptr [ecx + 0x20]
// 0049dd5c  d84a08               fmul dword ptr [edx + 8]
// 0049dd5f  dec1                 faddp st(1)
// 0049dd61  d8412c               fadd dword ptr [ecx + 0x2c]
// 0049dd64  d95808               fstp dword ptr [eax + 8]
// 0049dd67  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\Capsule.cpp (function ?pointToWorldSpace@CoordinateFrame@G3D@@QBE?AVVector3@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Capsule.cpp
