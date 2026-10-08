// roc 2012-06 0062c2e0  unit: G3D::Sphere  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062c2e0
//
// 0062c2e0  8b542408             mov edx, dword ptr [esp + 8]
// 0062c2e4  8b442404             mov eax, dword ptr [esp + 4]
// 0062c2e8  d90491               fld dword ptr [ecx + edx*4]
// 0062c2eb  d918                 fstp dword ptr [eax]
// 0062c2ed  d944910c             fld dword ptr [ecx + edx*4 + 0xc]
// 0062c2f1  d95804               fstp dword ptr [eax + 4]
// 0062c2f4  d9449118             fld dword ptr [ecx + edx*4 + 0x18]
// 0062c2f8  d95808               fstp dword ptr [eax + 8]
// 0062c2fb  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ?getColumn@Matrix3@G3D@@QBE?AVVector3@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
