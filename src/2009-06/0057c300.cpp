// roc 2009-06 0057c300  unit: G3D::TextInput::WrongSymbol  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057c300
//
// 0057c300  83ec0c               sub esp, 0xc
// 0057c303  6a02                 push 2
// 0057c305  8d442404             lea eax, [esp + 4]
// 0057c309  50                   push eax
// 0057c30a  e8a1b8ffff           call 0x577bb0
// 0057c30f  d900                 fld dword ptr [eax]
// 0057c311  d90540c08c00         fld dword ptr [0x8cc040]
// 0057c317  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057c31b  dcc9                 fmul st(1), st(0)
// 0057c31d  d9c9                 fxch st(1)
// 0057c31f  d919                 fstp dword ptr [ecx]
// 0057c321  d94004               fld dword ptr [eax + 4]
// 0057c324  d8c9                 fmul st(1)
// 0057c326  d95904               fstp dword ptr [ecx + 4]
// 0057c329  d84808               fmul dword ptr [eax + 8]
// 0057c32c  8bc1                 mov eax, ecx
// 0057c32e  d95908               fstp dword ptr [ecx + 8]
// 0057c331  83c40c               add esp, 0xc
// 0057c334  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\CoordinateFrame.cpp (function ?lookVector@CoordinateFrame@G3D@@QBE?AVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/CoordinateFrame.cpp
