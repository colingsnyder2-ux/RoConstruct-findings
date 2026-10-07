// roc 2009-06 00482200  unit: Ogre::RbxCullableSceneNode  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00482200
//
// 00482200  8b542408             mov edx, dword ptr [esp + 8]
// 00482204  d902                 fld dword ptr [edx]
// 00482206  8b442404             mov eax, dword ptr [esp + 4]
// 0048220a  d801                 fadd dword ptr [ecx]
// 0048220c  d918                 fstp dword ptr [eax]
// 0048220e  d94204               fld dword ptr [edx + 4]
// 00482211  d84104               fadd dword ptr [ecx + 4]
// 00482214  d95804               fstp dword ptr [eax + 4]
// 00482217  d94208               fld dword ptr [edx + 8]
// 0048221a  d84108               fadd dword ptr [ecx + 8]
// 0048221d  d95808               fstp dword ptr [eax + 8]
// 00482220  c20800               ret 8
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??HVector3@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
