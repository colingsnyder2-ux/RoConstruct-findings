// roc 2008-06 00513240  unit: G3D::GCamera  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00513240
//
// 00513240  8b542408             mov edx, dword ptr [esp + 8]
// 00513244  8b442404             mov eax, dword ptr [esp + 4]
// 00513248  d90491               fld dword ptr [ecx + edx*4]
// 0051324b  d918                 fstp dword ptr [eax]
// 0051324d  d944910c             fld dword ptr [ecx + edx*4 + 0xc]
// 00513251  d95804               fstp dword ptr [eax + 4]
// 00513254  d9449118             fld dword ptr [ecx + edx*4 + 0x18]
// 00513258  d95808               fstp dword ptr [eax + 8]
// 0051325b  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ?getColumn@Matrix3@G3D@@QBE?AVVector3@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
