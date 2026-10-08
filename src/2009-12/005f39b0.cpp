// roc 2009-12 005f39b0  unit: seg_005f0000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f39b0
//
// 005f39b0  8b442408             mov eax, dword ptr [esp + 8]
// 005f39b4  d900                 fld dword ptr [eax]
// 005f39b6  8b542404             mov edx, dword ptr [esp + 4]
// 005f39ba  d91c91               fstp dword ptr [ecx + edx*4]
// 005f39bd  d94004               fld dword ptr [eax + 4]
// 005f39c0  d95c910c             fstp dword ptr [ecx + edx*4 + 0xc]
// 005f39c4  d94008               fld dword ptr [eax + 8]
// 005f39c7  d95c9118             fstp dword ptr [ecx + edx*4 + 0x18]
// 005f39cb  c20800               ret 8
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?setColumn@Matrix3@G3D@@QAEXHABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
