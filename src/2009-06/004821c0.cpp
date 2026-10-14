// roc 2009-06 004821c0  unit: Ogre::RbxCullableSceneNode  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004821c0
//
// 004821c0  8b542404             mov edx, dword ptr [esp + 4]
// 004821c4  d902                 fld dword ptr [edx]
// 004821c6  d819                 fcomp dword ptr [ecx]
// 004821c8  dfe0                 fnstsw ax
// 004821ca  f6c444               test ah, 0x44
// 004821cd  7a1f                 jp 0x4821ee
// 004821cf  d94204               fld dword ptr [edx + 4]
// 004821d2  d85904               fcomp dword ptr [ecx + 4]
// 004821d5  dfe0                 fnstsw ax
// 004821d7  f6c444               test ah, 0x44
// 004821da  7a12                 jp 0x4821ee
// 004821dc  d94208               fld dword ptr [edx + 8]
// 004821df  d85908               fcomp dword ptr [ecx + 8]
// 004821e2  dfe0                 fnstsw ax
// 004821e4  f6c444               test ah, 0x44
// 004821e7  7a05                 jp 0x4821ee
// 004821e9  33c0                 xor eax, eax
// 004821eb  c20400               ret 4
// 004821ee  b801000000           mov eax, 1
// 004821f3  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\roc_export_0b17ffbc375b74f4.cpp (function ??9Vector3@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/roc_export_0b17ffbc375b74f4.cpp
