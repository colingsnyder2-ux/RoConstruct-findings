// roc 2009-06 0049dc20  unit: G3D::VARArea  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049dc20
//
// 0049dc20  8b442404             mov eax, dword ptr [esp + 4]
// 0049dc24  d9ee                 fldz 
// 0049dc26  8b542408             mov edx, dword ptr [esp + 8]
// 0049dc2a  d910                 fst dword ptr [eax]
// 0049dc2c  d95004               fst dword ptr [eax + 4]
// 0049dc2f  d95808               fstp dword ptr [eax + 8]
// 0049dc32  d94108               fld dword ptr [ecx + 8]
// 0049dc35  d84a08               fmul dword ptr [edx + 8]
// 0049dc38  d94104               fld dword ptr [ecx + 4]
// 0049dc3b  d84a04               fmul dword ptr [edx + 4]
// 0049dc3e  dec1                 faddp st(1)
// 0049dc40  d902                 fld dword ptr [edx]
// 0049dc42  d809                 fmul dword ptr [ecx]
// 0049dc44  dec1                 faddp st(1)
// 0049dc46  d918                 fstp dword ptr [eax]
// 0049dc48  d94114               fld dword ptr [ecx + 0x14]
// 0049dc4b  d84a08               fmul dword ptr [edx + 8]
// 0049dc4e  d9410c               fld dword ptr [ecx + 0xc]
// 0049dc51  d80a                 fmul dword ptr [edx]
// 0049dc53  dec1                 faddp st(1)
// 0049dc55  d94110               fld dword ptr [ecx + 0x10]
// 0049dc58  d84a04               fmul dword ptr [edx + 4]
// 0049dc5b  dec1                 faddp st(1)
// 0049dc5d  d95804               fstp dword ptr [eax + 4]
// 0049dc60  d94120               fld dword ptr [ecx + 0x20]
// 0049dc63  d84a08               fmul dword ptr [edx + 8]
// 0049dc66  d94118               fld dword ptr [ecx + 0x18]
// 0049dc69  d80a                 fmul dword ptr [edx]
// 0049dc6b  dec1                 faddp st(1)
// 0049dc6d  d9411c               fld dword ptr [ecx + 0x1c]
// 0049dc70  d84a04               fmul dword ptr [edx + 4]
// 0049dc73  dec1                 faddp st(1)
// 0049dc75  d95808               fstp dword ptr [eax + 8]
// 0049dc78  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\Capsule.cpp (function ??DMatrix3@G3D@@QBE?AVVector3@1@ABV21@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Capsule.cpp
