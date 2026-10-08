// from server: 100% by auto
// roc 2012-06 0062c300  unit: G3D::Sphere  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062c300
//
// 0062c300  8b442408             mov eax, dword ptr [esp + 8]
// 0062c304  d900                 fld dword ptr [eax]
// 0062c306  8b542404             mov edx, dword ptr [esp + 4]
// 0062c30a  d91c91               fstp dword ptr [ecx + edx*4]
// 0062c30d  d94004               fld dword ptr [eax + 4]
// 0062c310  d95c910c             fstp dword ptr [ecx + edx*4 + 0xc]
// 0062c314  d94008               fld dword ptr [eax + 8]
// 0062c317  d95c9118             fstp dword ptr [ecx + edx*4 + 0x18]
// 0062c31b  c20800               ret 8
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?setColumn@Matrix3@G3D@@QAEXHABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
