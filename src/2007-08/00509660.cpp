// roc 2007-08 00509660  unit: G3D::GCamera  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00509660
//
// 00509660  8b442408             mov eax, dword ptr [esp + 8]
// 00509664  d900                 fld dword ptr [eax]
// 00509666  8b542404             mov edx, dword ptr [esp + 4]
// 0050966a  d91c91               fstp dword ptr [ecx + edx*4]
// 0050966d  d94004               fld dword ptr [eax + 4]
// 00509670  d95c910c             fstp dword ptr [ecx + edx*4 + 0xc]
// 00509674  d94008               fld dword ptr [eax + 8]
// 00509677  d95c9118             fstp dword ptr [ecx + edx*4 + 0x18]
// 0050967b  c20800               ret 8
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?setColumn@Matrix3@G3D@@QAEXHABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
