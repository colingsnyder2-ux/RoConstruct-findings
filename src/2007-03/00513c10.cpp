// roc 2007-03 00513c10  unit: seg_00510000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00513c10
//
// 00513c10  83ec0c               sub esp, 0xc
// 00513c13  6a02                 push 2
// 00513c15  8d442404             lea eax, [esp + 4]
// 00513c19  50                   push eax
// 00513c1a  e8d1adfeff           call 0x4fe9f0
// 00513c1f  d900                 fld dword ptr [eax]
// 00513c21  dd05a0597900         fld qword ptr [0x7959a0]
// 00513c27  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00513c2b  dcc9                 fmul st(1), st(0)
// 00513c2d  d9c9                 fxch st(1)
// 00513c2f  d919                 fstp dword ptr [ecx]
// 00513c31  d94004               fld dword ptr [eax + 4]
// 00513c34  d8c9                 fmul st(1)
// 00513c36  d95904               fstp dword ptr [ecx + 4]
// 00513c39  d84808               fmul dword ptr [eax + 8]
// 00513c3c  8bc1                 mov eax, ecx
// 00513c3e  d95908               fstp dword ptr [ecx + 8]
// 00513c41  83c40c               add esp, 0xc
// 00513c44  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\CoordinateFrame.cpp (function ?lookVector@CoordinateFrame@G3D@@QBE?AVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/CoordinateFrame.cpp
