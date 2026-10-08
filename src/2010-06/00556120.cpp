// from server: 100% by auto
// roc 2010-06 00556120  unit: seg_00550000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00556120
//
// 00556120  8b442408             mov eax, dword ptr [esp + 8]
// 00556124  d900                 fld dword ptr [eax]
// 00556126  8b542404             mov edx, dword ptr [esp + 4]
// 0055612a  d91c91               fstp dword ptr [ecx + edx*4]
// 0055612d  d94004               fld dword ptr [eax + 4]
// 00556130  d95c910c             fstp dword ptr [ecx + edx*4 + 0xc]
// 00556134  d94008               fld dword ptr [eax + 8]
// 00556137  d95c9118             fstp dword ptr [ecx + edx*4 + 0x18]
// 0055613b  c20800               ret 8
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?setColumn@Matrix3@G3D@@QAEXHABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
