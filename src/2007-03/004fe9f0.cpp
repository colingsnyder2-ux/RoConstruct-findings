// roc 2007-03 004fe9f0  unit: seg_004f0000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fe9f0
//
// 004fe9f0  8b542408             mov edx, dword ptr [esp + 8]
// 004fe9f4  8b442404             mov eax, dword ptr [esp + 4]
// 004fe9f8  d90491               fld dword ptr [ecx + edx*4]
// 004fe9fb  d918                 fstp dword ptr [eax]
// 004fe9fd  d944910c             fld dword ptr [ecx + edx*4 + 0xc]
// 004fea01  d95804               fstp dword ptr [eax + 4]
// 004fea04  d9449118             fld dword ptr [ecx + edx*4 + 0x18]
// 004fea08  d95808               fstp dword ptr [eax + 8]
// 004fea0b  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ?getColumn@Matrix3@G3D@@QBE?AVVector3@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
