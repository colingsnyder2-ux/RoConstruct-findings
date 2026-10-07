// roc 2009-06 00577bd0  unit: G3D::LineSegment  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577bd0
//
// 00577bd0  8b442408             mov eax, dword ptr [esp + 8]
// 00577bd4  d900                 fld dword ptr [eax]
// 00577bd6  8b542404             mov edx, dword ptr [esp + 4]
// 00577bda  d91c91               fstp dword ptr [ecx + edx*4]
// 00577bdd  d94004               fld dword ptr [eax + 4]
// 00577be0  d95c910c             fstp dword ptr [ecx + edx*4 + 0xc]
// 00577be4  d94008               fld dword ptr [eax + 8]
// 00577be7  d95c9118             fstp dword ptr [ecx + edx*4 + 0x18]
// 00577beb  c20800               ret 8
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?setColumn@Matrix3@G3D@@QAEXHABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
