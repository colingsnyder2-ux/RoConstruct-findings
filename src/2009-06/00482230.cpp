// roc 2009-06 00482230  unit: Ogre::RbxCullableSceneNode  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00482230
//
// 00482230  d901                 fld dword ptr [ecx]
// 00482232  8b442404             mov eax, dword ptr [esp + 4]
// 00482236  d9442408             fld dword ptr [esp + 8]
// 0048223a  dcc9                 fmul st(1), st(0)
// 0048223c  d9c9                 fxch st(1)
// 0048223e  d918                 fstp dword ptr [eax]
// 00482240  d94104               fld dword ptr [ecx + 4]
// 00482243  d8c9                 fmul st(1)
// 00482245  d95804               fstp dword ptr [eax + 4]
// 00482248  d84908               fmul dword ptr [ecx + 8]
// 0048224b  d95808               fstp dword ptr [eax + 8]
// 0048224e  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\Capsule.cpp (function ??DVector3@G3D@@QBE?AV01@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Capsule.cpp
