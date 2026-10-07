// roc 2008-06 00501c70  unit: boost::bad_lexical_cast  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00501c70
//
// 00501c70  8b542408             mov edx, dword ptr [esp + 8]
// 00501c74  d902                 fld dword ptr [edx]
// 00501c76  8b442404             mov eax, dword ptr [esp + 4]
// 00501c7a  d801                 fadd dword ptr [ecx]
// 00501c7c  d918                 fstp dword ptr [eax]
// 00501c7e  d94204               fld dword ptr [edx + 4]
// 00501c81  d84104               fadd dword ptr [ecx + 4]
// 00501c84  d95804               fstp dword ptr [eax + 4]
// 00501c87  d94208               fld dword ptr [edx + 8]
// 00501c8a  d84108               fadd dword ptr [ecx + 8]
// 00501c8d  d95808               fstp dword ptr [eax + 8]
// 00501c90  c20800               ret 8
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??HVector3@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
