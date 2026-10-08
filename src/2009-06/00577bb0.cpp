// roc 2009-06 00577bb0  unit: G3D::LineSegment  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577bb0
//
// 00577bb0  8b542408             mov edx, dword ptr [esp + 8]
// 00577bb4  8b442404             mov eax, dword ptr [esp + 4]
// 00577bb8  d90491               fld dword ptr [ecx + edx*4]
// 00577bbb  d918                 fstp dword ptr [eax]
// 00577bbd  d944910c             fld dword ptr [ecx + edx*4 + 0xc]
// 00577bc1  d95804               fstp dword ptr [eax + 4]
// 00577bc4  d9449118             fld dword ptr [ecx + edx*4 + 0x18]
// 00577bc8  d95808               fstp dword ptr [eax + 8]
// 00577bcb  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ?getColumn@Matrix3@G3D@@QBE?AVVector3@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
