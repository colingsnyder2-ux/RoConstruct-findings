// roc 2011-06 005400e0  unit: G3D::MemoryManager  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005400e0
//
// 005400e0  8b542408             mov edx, dword ptr [esp + 8]
// 005400e4  8b442404             mov eax, dword ptr [esp + 4]
// 005400e8  d90491               fld dword ptr [ecx + edx*4]
// 005400eb  d918                 fstp dword ptr [eax]
// 005400ed  d944910c             fld dword ptr [ecx + edx*4 + 0xc]
// 005400f1  d95804               fstp dword ptr [eax + 4]
// 005400f4  d9449118             fld dword ptr [ecx + edx*4 + 0x18]
// 005400f8  d95808               fstp dword ptr [eax + 8]
// 005400fb  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ?getColumn@Matrix3@G3D@@QBE?AVVector3@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
