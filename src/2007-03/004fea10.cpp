// roc 2007-03 004fea10  unit: seg_004f0000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fea10
//
// 004fea10  8b442408             mov eax, dword ptr [esp + 8]
// 004fea14  d900                 fld dword ptr [eax]
// 004fea16  8b542404             mov edx, dword ptr [esp + 4]
// 004fea1a  d91c91               fstp dword ptr [ecx + edx*4]
// 004fea1d  d94004               fld dword ptr [eax + 4]
// 004fea20  d95c910c             fstp dword ptr [ecx + edx*4 + 0xc]
// 004fea24  d94008               fld dword ptr [eax + 8]
// 004fea27  d95c9118             fstp dword ptr [ecx + edx*4 + 0x18]
// 004fea2b  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ?setColumn@Matrix3@G3D@@QAEXHABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
